#include <SFML/Graphics.hpp>
#include <iostream>
#include <algorithm>
#include <random>
#include "../include/betText.h"
#include "../include/display.h"
#include "../include/DealerHand.h"
#include "../include/PlayerHand.h"

int balance = 50;
bool betPlaced = false, betBarEnable = true, first = true, gameFinish = false;
int playerNrOfCards, dealerNrOfCards;
int playerCards, dealerCards;
int position = 260;


// array to store the players and dealers cards
card player[6];
card dealer[6];

// random number for card value
int randomGenerator()
{
    // Using a random_device to seed the random number engine
    std::random_device rd;
    // Using a Mersenne Twister engine for randomness
    std::mt19937 gen(rd());
    // Defining the distribution for card values (1 to 14)
    std::uniform_int_distribution<int> dist(1, 14);
    // Generating and return a random number
    return dist(gen);
}

// random number for card color (suit)
int randomSuit()
{
    // Using a random_device to seed the random number engine
    std::random_device rd;
    // Using a Mersenne Twister engine for randomness
    std::mt19937 gen(rd());
    // Defining the distribution for card suits (0 to 3)
    std::uniform_int_distribution<int> dist(0, 3);
    // Generating and return a random number
    return dist(gen) + 1; // Adding 1 to get numbers from 1 to 4
}

void gameOver()
{
    // sleep function to show outcome
    if (gameFinish)
    {
        sleep(seconds(8));
        betBarEnable = true;
        betPlaced = false;
        playerCards = 0;
        playerNrOfCards = 0;
        dealerCards = 0;
        dealerNrOfCards = 0;
        first = true;
        gameFinish = false;
    }
}

sf::RenderWindow window(sf::VideoMode(1300, 900), "Blackjack Simulator", sf::Style::Titlebar | sf::Style::Close);


int main()
{
    loadSprites();
    textBox bet;

    deck.setPosition(30, 30);
    window.draw(deck);

    while (window.isOpen())
    {
        window.setFramerateLimit(60);
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            // check for input
            if (event.type == sf::Event::TextEntered)
            {
                bet.input(event, betBarEnable);
            }

            // check for mouse button pressed
            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    float x = Mouse::getPosition(window).x;
                    float y = Mouse::getPosition(window).y;

                    // checking x and y coords for mouse input
                    // bet button coords
                    if (!betPlaced)
                    {
                        if (x >= 560 && y >= 525 && x <= 740 && y <= 585 && bet.betValue > 0 &&
                            bet.betValue <= balance) {
                            betBarEnable = false;
                            betPlaced = true;
                            balance -= bet.betValue;
                        }

                            // hit button coords
                        else if (x >= 605 && y >= 525 && x <= 705 && y <= 685 && !betBarEnable)
                        {
                            // drawing players cards
                            if (betPlaced && playerCards < 21 && playerNrOfCards < 5)
                            {
                                playerNrOfCards++;
                                int card = randomGenerator();
                                if (card > 9) {
                                    playerCards++;
                                } else {
                                    playerCards += card;
                                }
                                player[playerNrOfCards].value = card;
                                card = randomSuit();
                                player[playerNrOfCards].color = card;
                            }
                        }
                    }
                    else
                    {
                        if (x >= 605 && y >= 525 && x <= 705 && y <= 685 && !betBarEnable)
                        {
                            // drawing players cards
                            if (playerCards < 21 && playerNrOfCards < 5)
                            {
                                playerNrOfCards++;
                                int card = randomGenerator();
                                if (card > 9)
                                {
                                    playerCards++;
                                }
                                else
                                {
                                    playerCards += card;
                                }
                                player[playerNrOfCards].value = card;
                                card = randomSuit();
                                player[playerNrOfCards].color = card;
                            }
                        }
                    }

                    // stand button coords
                     if (x >= 725 && y >= 525 && x <= 905 && y <= 585 && !betBarEnable)
                     {
                         // draw cards for dealer until value is 17 or higher
                         while (dealerCards < 17)
                         {
                             dealerNrOfCards++;
                             int card = randomGenerator();

                             // face cards are worth 10
                             if (card > 9) {
                                 dealerCards += 10;
                             }
                             else
                             {
                                 dealerCards += card;
                             }

                             // assign the generated card to current dealer hand
                             dealer[dealerNrOfCards].value = card;
                             // generate random color (suit) for card
                             card = randomSuit();
                             // assign generated color to new card
                             dealer[dealerNrOfCards].color = card;
                         }
                         // implementing win, loss and tie logic
                         if (playerCards > 21 || dealerCards > playerCards && dealerCards <= 21)
                         {
                             cout << "Lose\n";
                             cout << "Player card=" << playerCards << " Dealer cards=" << dealerCards << "\n";
                             gameFinish = true;
                         }
                         else if (!(playerCards > dealerCards && playerCards <= 21) && dealerCards <= 21)
                         {
                             cout << "Tie\n";
                             cout << "Player card=" << playerCards << " Dealer cards=" << dealerCards << "\n";
                             balance += bet.betValue;
                             gameFinish = true;
                         }
                         else
                         {
                             cout << "Win\n";
                             cout << "Player card=" << playerCards << " Dealer cards=" << dealerCards << "\n";
                             balance += 2 * bet.betValue;
                             gameFinish = true;
                         }
                     }
                         // double button coords
                     else if (x>=355 && y>=525 && y<=585 && x<=585 && betPlaced)
                     {
                         playerNrOfCards++;
                         int card = randomGenerator();
                         if (card > 9)
                         {
                             playerCards++;
                         }
                         else
                         {
                             playerCards += card;
                         }
                         player[playerNrOfCards].value = card;
                         card = randomSuit();
                         player[playerNrOfCards].color = card;

                         // keep dealing while hand is < 17
                         while (dealerCards < 17)
                         {
                             dealerNrOfCards++;
                             int card = randomGenerator();
                             if (card > 9)
                             {
                                 dealerCards += 10;
                             }
                             else
                             {
                                 dealerCards += card;
                             }
                             dealer[dealerNrOfCards].value = card;
                             card = randomSuit();
                             dealer[dealerNrOfCards].color = card;
                         }
                         // double and deduct value from balance
                         bet.betValue *= 2;
                         balance -= bet.betValue;
                     }

                    // bet 1 coords
                    if (x >= 90 && y >= 600 && x <= 140 && y <= 650 && betBarEnable) {
                        bet.addButton(1);
                    }
                    // bet 10 coords
                    if (x >= 90 && y >= 660 && x <= 140 && y <= 710 && betBarEnable) {
                        bet.addButton(10);
                    }
                    // bet 100 coords
                    if (x >= 90 && y >= 720 && x <= 140 && y <= 770 && betBarEnable) {
                        bet.addButton(100);
                    }
                    // bet 1000 coords
                    if (x >= 90 && y >= 780 && x <= 140 && y <= 830 && betBarEnable) {
                        bet.addButton(1000);
                    }
                    // bet max coords
                    if (x >= 90 && y >= 840 && x <= 140 && y <= 890 && betBarEnable) {
                        bet.betValue = 0;
                        bet.addButton(balance);
                    }
                }
            }
            window.clear(Color::Green); // clear window
            if (!betPlaced) // if bet is not placed, we show background
            {
                window.draw(background1);
                placeButton.setPosition(560, 525);
                window.draw(placeButton);
            }
            else
            {
                window.draw(background2); // background for game screen
                doubleButton.setPosition(355, 525); // double button pos
                window.draw(doubleButton);
                hitButton.setPosition(605, 525); // hit button pos
                window.draw(hitButton);
                standButton.setPosition(725, 525); // stand button pos
                window.draw(standButton);
            }

            // setting button pos
            bet1.setPosition(90, 600);
            window.draw(bet1);
            bet10.setPosition(90, 660);
            window.draw(bet10);
            bet100.setPosition(90, 720);
            window.draw(bet100);
            bet1000.setPosition(90, 780);
            window.draw(bet1000);
            betmax.setPosition(90, 840);
            window.draw(betmax);
            window.draw(deck);

            // Draw balance text
            string b = "Balance: " + to_string(balance);
            sf::Text balanceText;
            sf::Font font;
            font.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/fonts/Arial.ttf");
            balanceText.setFont(font);
            balanceText.setOutlineColor(sf::Color::Black);
            balanceText.setOutlineThickness(2);
            balanceText.setString(b);
            balanceText.setPosition(30, 300);
            balanceText.setCharacterSize(45);
            window.draw(balanceText);

            // first round
            if (first && betPlaced)
            {
                playerNrOfCards++;
                int card = randomGenerator();
                if (card > 9)
                {
                    playerCards+=10;
                }
                else
                {
                    playerCards += card;
                }
                player[playerNrOfCards].value = card;
                card = randomSuit();
                player[playerNrOfCards].color = card;
                playerNrOfCards++;
                card = randomGenerator();
                if (card > 9)
                {
                    playerCards+=10;
                }
                else
                {
                    playerCards += card;
                }
                player[playerNrOfCards].value = card;
                card = randomSuit();
                player[playerNrOfCards].color = card;

                // dealing dealers hand
                dealerNrOfCards++;
                card = randomGenerator();
                if (card > 9)
                {
                    dealerCards += 10;
                }
                else
                {
                    dealerCards += card;
                }
                dealer[dealerNrOfCards].value = card;
                card = randomSuit();
                dealer[dealerNrOfCards].color = card;
                dealerNrOfCards++;
                card = randomGenerator();
                if (card > 9)
                {
                    dealerCards += 10;
                }
                else
                {
                    dealerCards += card;
                }
                dealer[dealerNrOfCards].value = card;
                card = randomSuit();
                dealer[dealerNrOfCards].color = card;
                first = false; // dealing done
            }

            deck.setPosition(30, 30);
            window.draw(deck);
            position = 260;

            PlayerHand::dealPlayerHand();
            position = 260;

            DealerHand::dealDealerHand();

            window.display();
        }
        gameOver();
    }
    return 0;
}