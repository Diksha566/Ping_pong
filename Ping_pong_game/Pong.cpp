#include "Bat.h"
#include<SFML/Graphics.hpp>
#include<sstream>
using namespace sf;
int main() {
    //create video
    VideoMode vm(1920, 1000);

    //create window
    RenderWindow window(vm, "Pong!!", Style::Fullscreen);

    //create bat

    //create hud()
    Text hud;
    Font font;
    font.loadFromFile("fonts/KOMIKAP_.ttf");
    hud.setFont(font);
    hud.setCharacterSize(75);
    hud.setFillColor(Color::White);
    hud.setPosition(20, 20);
    hud.setString("Score: 0 Lives:3");

    int score = 0;
    int lives = 3;

    Clock clock;
    while (window.isOpen()) {
    }
}
