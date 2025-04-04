#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;
class Bat
{

    Vector2f m_Position;
    RectangleShape m_Shape;
    float m_Speed = 10000.0f;
    bool m_MovingRight = false;
    bool m_MovingLeft = false;

private:
    /* data */
public:
    Bat(float startX, float startY);
    FloatRect get_Position();
    RectangleShape get_Shape();
    void moveRight();
    void moveLeft();
    void stopRight();
    void stopLeft();
    void Update(Time dt);
    ~Bat();
};

