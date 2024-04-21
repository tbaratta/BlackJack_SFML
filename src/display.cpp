#include "../include/display.h"
#include <SFML/Graphics.hpp>

// Define textures
sf::Texture t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12,
        t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23, t24, t25, t26,
        t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40,
        t41, t42, t43, t44, t45, t46, t47, t48, t49, t50, t51, t52, t53, t54,
        t55, t56, t57, t58, t59, t60, t61, t62, t63, t64, t65;

// Define sprites
sf::Sprite two_of_clubs, two_of_diamonds, two_of_hearts, two_of_spades,
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

void loadSprites()
{
    // Load textures
    t1.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/2_of_clubs.png");
    t2.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/2_of_diamonds.png");
    t3.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/2_of_hearts.png");
    t4.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/2_of_spades.png");

    t5.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/3_of_clubs.png");
    t6.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/3_of_diamonds.png");
    t7.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/3_of_hearts.png");
    t8.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/3_of_spades.png");

    t9.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/4_of_clubs.png");
    t10.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/4_of_diamonds.png");
    t11.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/4_of_hearts.png");
    t12.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/4_of_spades.png");

    t13.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/5_of_clubs.png");
    t14.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/5_of_diamonds.png");
    t15.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/5_of_hearts.png");
    t16.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/5_of_spades.png");

    t17.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/6_of_clubs.png");
    t18.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/6_of_diamonds.png");
    t19.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/6_of_hearts.png");
    t20.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/6_of_spades.png");

    t21.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/7_of_clubs.png");
    t22.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/7_of_diamonds.png");
    t23.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/7_of_hearts.png");
    t24.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/7_of_spades.png");

    t25.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/8_of_clubs.png");
    t26.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/8_of_diamonds.png");
    t27.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/8_of_hearts.png");
    t28.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/8_of_spades.png");

    t29.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/9_of_clubs.png");
    t30.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/9_of_diamonds.png");
    t31.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/9_of_hearts.png");
    t32.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/9_of_spades.png");

    t33.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/10_of_clubs.png");
    t34.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/10_of_diamonds.png");
    t35.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/10_of_hearts.png");
    t36.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/10_of_spades.png");

    t37.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/ace_of_clubs.png");
    t38.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/ace_of_diamonds.png");
    t39.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/ace_of_hearts.png");
    t40.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/ace_of_spades.png");

    t41.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/jack_of_clubs.png");
    t42.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/jack_of_diamonds.png");
    t43.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/jack_of_hearts.png");
    t44.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/jack_of_spades.png");

    t45.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/king_of_clubs.png");
    t46.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/king_of_diamonds.png");
    t47.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/king_of_hearts.png");
    t48.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/king_of_spades.png");

    t49.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/queen_of_clubs.png");
    t50.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/queen_of_diamonds.png");
    t51.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/queen_of_hearts.png");
    t52.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/queen_of_spades.png");

    t53.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/cardBack.png");
    t54.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/background1.png");
    t64.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/background2.png");

    t55.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/1.png");
    t56.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/10.png");
    t57.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/100.png");
    t58.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/1000.png");
    t59.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/max.png");

    t60.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/double.png");
    t61.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/hit.png");
    t62.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/stand.png");
    t63.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/place.png");
    t65.loadFromFile("/Users/tommybaratta/Desktop/BlackJackProject/images/deck.png");


    // Load other images similarly...

    // Set textures for sprites
    two_of_clubs.setTexture(t1);
    two_of_diamonds.setTexture(t2);
    two_of_hearts.setTexture(t3);
    two_of_spades.setTexture(t4);
    three_of_clubs.setTexture(t5);
    three_of_diamonds.setTexture(t6);
    three_of_hearts.setTexture(t7);
    three_of_spades.setTexture(t8);
    four_of_clubs.setTexture(t9);
    four_of_diamonds.setTexture(t10);
    four_of_hearts.setTexture(t11);
    four_of_spades.setTexture(t12);

    five_of_clubs.setTexture(t13);
    five_of_diamonds.setTexture(t14);
    five_of_hearts.setTexture(t15);
    five_of_spades.setTexture(t16);

    six_of_clubs.setTexture(t17);
    six_of_diamonds.setTexture(t18);
    six_of_hearts.setTexture(t19);
    six_of_spades.setTexture(t20);

    seven_of_clubs.setTexture(t21);
    seven_of_diamonds.setTexture(t22);
    seven_of_hearts.setTexture(t23);
    seven_of_spades.setTexture(t24);

    eight_of_clubs.setTexture(t25);
    eight_of_diamonds.setTexture(t26);
    eight_of_hearts.setTexture(t27);
    eight_of_spades.setTexture(t28);

    nine_of_clubs.setTexture(t29);
    nine_of_diamonds.setTexture(t30);
    nine_of_hearts.setTexture(t31);
    nine_of_spades.setTexture(t32);

    ten_of_clubs.setTexture(t33);
    ten_of_diamonds.setTexture(t34);
    ten_of_hearts.setTexture(t35);
    ten_of_spades.setTexture(t36);

    ace_of_clubs.setTexture(t37);
    ace_of_diamonds.setTexture(t38);
    ace_of_hearts.setTexture(t39);
    ace_of_spades.setTexture(t40);

    jack_of_clubs.setTexture(t41);
    jack_of_diamonds.setTexture(t42);
    jack_of_hearts.setTexture(t43);
    jack_of_spades.setTexture(t44);

    king_of_clubs.setTexture(t45);
    king_of_diamonds.setTexture(t46);
    king_of_hearts.setTexture(t47);
    king_of_spades.setTexture(t48);

    queen_of_clubs.setTexture(t49);
    queen_of_diamonds.setTexture(t50);
    queen_of_hearts.setTexture(t51);
    queen_of_spades.setTexture(t52);

    cardBack.setTexture(t53);
    background1.setTexture(t54);
    background2.setTexture(t64);

    bet1.setTexture(t55);
    bet10.setTexture(t56);
    bet100.setTexture(t57);
    bet1000.setTexture(t58);
    betmax.setTexture(t59);

    doubleButton.setTexture(t60);
    hitButton.setTexture(t61);
    standButton.setTexture(t62);
    placeButton.setTexture(t63);
    deck.setTexture(t65);

}
