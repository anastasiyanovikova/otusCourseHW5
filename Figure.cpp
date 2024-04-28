#include "Figure.h"

Figure::Figure(int x, int y): m_x(x), m_y(y)
{
    std::cout <<"Create figure"<<std::endl;
}

Figure::~Figure()
{
    std::cout <<"delete figure"<<std::endl;
}

bool Figure::draw()
{
    std::cout <<"draw figure"<<std::endl;
    return true;
}

int Figure::getX()
{
    return m_x;
}

int Figure::getY()
{
    return m_y;
}

int Figure::getBorderWidth()
{
    return m_border_width;
}

std::string Figure::getColor()
{
    return m_color;
}

std::string Figure::getBorderColor()
{
    return m_border_color;
}

void Figure::setX(int x)
{
    m_x = x;
}

void Figure::setY(int y)
{
    m_y = y;
}

void Figure::setColor(std::string color)
{
    m_color = color;
}

void Figure::setBorderColor(std::string color)
{
    m_border_color = color;
}

void Figure::setBorderWidth(int width)
{
    m_border_width = width;
}

Circule::Circule(int x, int y, double r): Figure(x, y), m_r(r)
{
    std::cout <<"Create circule"<<std::endl;
}

bool Circule::draw()
{
    std::cout <<"draw circule"<<std::endl;

    return true;
}

double Circule::getRadius()
{
    return m_r;
}

void Circule::setRadiuse(double r)
{
    m_r = r;
}

Rectangle::Rectangle(int x, int y, double a, double b): Figure(x, y), m_a(a), m_b(b)
{
    std::cout <<"Create rectangle"<<std::endl;
}

bool Rectangle::draw()
{
    std::cout <<"draw rectangle"<<std::endl;
    return true;
}

double Rectangle::getWidth()
{
    return m_a;
}

double Rectangle::getHeight()
{
    return m_b;
}

void Rectangle::setWidth(double a)
{
    m_a = a;
}

void Rectangle::setHeight(double b)
{
    m_b = b;
}

Square::Square(int x, int y, double a): Rectangle(x, y, a, a)
{
    std::cout <<"Create Square"<<std::endl;

}

void Square::setWidth(double a)
{
    m_a = a;
    m_b = a;
}

void Square::setHeight(double b)
{
    m_a = b;
    m_b = b;
}
