#include "Bat.h"
using namespace sf;

Bat::Bat(float startX, float startY) {
    m_Position.x = startX;
    m_Position.y = startY;
    m_Shape.setSize(Vector2f(100.0,10.0));
    m_Shape.setPosition(m_Position);
}

FloatRect Bat::get_Position() 
{
    return m_Shape.getGlobalBounds();

}

RectangleShape Bat::get_Shape() {
    return m_Shape;
}

void Bat:: moveRight(){
    m_MovingRight = true;
}

void Bat::moveLeft(){
    m_MovingLeft = true;
}

void Bat::stopLeft() {
    m_MovingLeft = false;
}

void Bat::stopRight() {
    m_MovingRight = false;
}

void Bat::Update(Time dt) {
    if (m_MovingLeft) {
        m_Position.x-= m_Speed*dt.asSeconds();
        if(m_Position.x<0) {
            stopLeft();
        }
    }

    if (m_MovingRight) {
        m_Position.x+= m_Speed*dt.asSeconds();
        if(m_Position.y>1920){
            stopRight();
        }
    }

    m_Shape.setPosition(m_Position);
    
    
}