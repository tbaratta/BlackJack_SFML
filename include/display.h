#ifndef BLACKJACKPROJECT_DISPLAY_H
#define BLACKJACKPROJECT_DISPLAY_H
#include <SFML/Graphics.hpp>
#include "display.h"

extern sf::RenderWindow window;
extern int balance;
extern bool betPlace, betBarEnable, first, gameFinish;
extern int playerNrOfCards, dealerNrOfCards;
extern int playerCards, dealerCards;
extern int position;

// main struct for cards
struct card
{
    int color, value;
};

// array to store the players and dealers cards
extern card player[6];
extern card dealer[6];


// Declare textures and sprites as extern variables
extern sf::Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12,
        t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23, t24, t25, t26,
        t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40,
        t41, t42, t43, t44, t45, t46, t47, t48, t49, t50, t51, t52, t53, t54,
        t55, t56, t57, t58, t59, t60, t61, t62, t63, t64, t65;

// Declare sprites
extern sf::Sprite two_of_clubs, two_of_diamonds, two_of_hearts, two_of_spades,
        three_of_clubs, three_of_diamonds, three_of_hearts, three_of_spades,
        four_of_clubs, four_of_diamonds, four_of_hearts, four_of_spades,
        five_of_clubs, five_of_diamonds, five_of_hearts, five_of_spades,
        six_of_clubs, six_of_diamonds, six_of_hearts, six_of_spades,
        seven_of_clubs, seven_of_diamonds, seven_of_hearts, seven_of_spades,
        eight_of_clubs, eight_of_diamonds, eight_of_hearts, eight_of_spades,
        nine_of_clubs, nine_of_diamonds, nine_of_hearts, nine_of_spades,
        ten_of_clubs, ten_of_diamonds, ten_of_hearts, ten_of_spades,
        ace_of_clubs, ace_of_diamonds, ace_of_hearts, ace_of_spades,
        jack_of_clubs, jack_of_diamonds, jack_of_hearts, jack_of_spades,
        king_of_clubs, king_of_diamonds, king_of_hearts, king_of_spades,
        queen_of_clubs, queen_of_diamonds, queen_of_hearts, queen_of_spades,
        bet1, bet10, bet100, bet1000, betmax,
        doubleButton, hitButton, standButton, placeButton,
        deck, cardBack, background1, background2,
        cardd;

// Function to load textures into sprites
void loadSprites();



#endif //BLACKJACKPROJECT_DISPLAY_H

