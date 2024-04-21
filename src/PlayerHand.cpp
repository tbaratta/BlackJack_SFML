#include "../include/PlayerHand.h"
#include "../include/display.h"

void PlayerHand::dealPlayerHand()
{
    // looping through players cards
    // generating cards using numbers from random generator
    for (int i = 1; i <= playerNrOfCards; i++)
    {
        switch (player[i].value)
        {
            case 1:
            case 11:
                switch (player[i].color)
                {
                    case 1: cardd = ace_of_clubs; break;
                    case 2: cardd = ace_of_diamonds; break;
                    case 3: cardd = ace_of_hearts; break;
                    case 4: cardd = ace_of_spades; break;
                }
                break;
            case 2:
                switch (player[i].color)
                {
                    case 1: cardd = two_of_clubs; break;
                    case 2: cardd = two_of_diamonds; break;
                    case 3: cardd = two_of_hearts; break;
                    case 4: cardd = two_of_spades; break;
                }
                break;
            case 3:
                switch (player[i].color)
                {
                    case 1: cardd = three_of_clubs; break;
                    case 2: cardd = three_of_diamonds; break;
                    case 3: cardd = three_of_hearts; break;
                    case 4: cardd = three_of_spades; break;
                }
                break;
            case 4:
                switch (player[i].color)
                {
                    case 1: cardd = four_of_clubs; break;
                    case 2: cardd = four_of_diamonds; break;
                    case 3: cardd = four_of_hearts; break;
                    case 4: cardd = four_of_spades; break;
                }
                break;
            case 5:
                switch (player[i].color)
                {
                    case 1: cardd = five_of_clubs; break;
                    case 2: cardd = five_of_diamonds; break;
                    case 3: cardd = five_of_hearts; break;
                    case 4: cardd = five_of_spades; break;
                }
                break;
            case 6:
                switch (player[i].color)
                {
                    case 1: cardd = six_of_clubs; break;
                    case 2: cardd = six_of_diamonds; break;
                    case 3: cardd = six_of_hearts; break;
                    case 4: cardd = six_of_spades; break;
                }
                break;
            case 7:
                switch (player[i].color)
                {
                    case 1: cardd = seven_of_clubs; break;
                    case 2: cardd = seven_of_diamonds; break;
                    case 3: cardd = seven_of_hearts; break;
                    case 4: cardd = seven_of_spades; break;
                }
                break;
            case 8:
                switch (player[i].color)
                {
                    case 1: cardd = eight_of_clubs; break;
                    case 2: cardd = eight_of_diamonds; break;
                    case 3: cardd = eight_of_hearts; break;
                    case 4: cardd = eight_of_spades; break;
                }
                break;
            case 9:
                switch (player[i].color)
                {
                    case 1: cardd = nine_of_clubs; break;
                    case 2: cardd = nine_of_diamonds; break;
                    case 3: cardd = nine_of_hearts; break;
                    case 4: cardd = nine_of_spades; break;
                }
                break;
            case 10:
                switch (player[i].color)
                {
                    case 1: cardd = ten_of_clubs; break;
                    case 2: cardd = ten_of_diamonds; break;
                    case 3: cardd = ten_of_hearts; break;
                    case 4: cardd = ten_of_spades; break;
                }
                break;
            case 12:
                switch (player[i].color)
                {
                    case 1: cardd = jack_of_clubs; break;
                    case 2: cardd = jack_of_diamonds; break;
                    case 3: cardd = jack_of_hearts; break;
                    case 4: cardd = jack_of_spades; break;
                }
                break;
            case 13:
                switch (player[i].color)
                {
                    case 1: cardd = queen_of_clubs; break;
                    case 2: cardd = queen_of_diamonds; break;
                    case 3: cardd = queen_of_hearts; break;
                    case 4: cardd = queen_of_spades; break;
                }
                break;
            case 14:
                switch (player[i].color)
                {
                    case 1: cardd = king_of_clubs; break;
                    case 2: cardd = king_of_diamonds; break;
                    case 3: cardd = king_of_hearts; break;
                    case 4: cardd = king_of_spades; break;
                }
                break;
            default:
                break;
        }
        cardd.setPosition(position, 630);
        position += 260;
        window.draw(cardd);
    }
}
