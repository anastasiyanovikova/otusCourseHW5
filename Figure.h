#pragma once

#include <iostream>
/**
 * @brief The Figure class - Базовый класс графического примитива
 */
class Figure
{
public:
    /**
     * @brief Figure - Конструктор графического примитива
     * @param x - Координата x
     * @param y - Координата y
     */
    Figure(int x, int y);
    ~Figure();
    /**
     * @brief draw - Функция отрисовки фигуры
     * @return true
     */
    virtual bool draw();

    /**
     * @brief getX - Получить координату  x
     * @return Координата x
     */
    int getX();
    /**
     * @brief getY - Получить координату  y
     * @return Координата y
     */
    int getY();
    /**
     * @brief getBorderWidth - Получить толщину границы фигуры
     * @return толщина
     */
    int getBorderWidth();
    /**
     * @brief getColor - Получить цвет фигуры
     * @return наименование цвета
     */
    std::string getColor();
    /**
     * @brief getBorderColor - Получить цвет границы
     * @return наименование цвета
     */
    std::string getBorderColor();
    /**
     * @brief setX - Задать координату по оси абсцисс
     * @param x - новая координата
     */
    void setX(int x);
    /**
     * @brief setY - Задать координату по оси ординат
     * @param y - новая координата
     */
    void setY(int y);
    /**
     * @brief setColor - Задать цвет фигуры
     * @param color - Наименование цвета
     */
    void setColor(std::string color);
    /**
     * @brief setBorderColor - Задать цвет границы
     * @param color - Наименование цвета границы
     */
    void setBorderColor(std::string color);
    /**
     * @brief setBorderWidth - Задать толщину границы
     * @param width - Новая толщина
     */
    void setBorderWidth(int width);

private:
    /// Координата расположения фигуры по оси абсцисс
    int m_x;
    /// Координата расположения фигуры по оси ординат
    int m_y;
    /// Толщина границы фигуры
    int m_border_width = 1;
    /// цвет фигуры
    std::string m_color = "white";
    /// цвет границы
    std::string m_border_color = "black";

};

/**
 * @brief The Circule class - Класс графического примитива типа Круг
 */
class Circule : public Figure
{
public:
    /**
     * @brief Circule - Конструктор
     * @param x - Координаты центра окружности (x)
     * @param y - Координаты центра окружности (y)
     * @param r - Радиус
     */
    Circule(int x, int y, double r);

    /**
     * @brief draw - Отрисовка круга
     * @return true
     */
    bool draw() override;
    /**
     * @brief getRadius - Получить радиус
     * @return радиус
     */
    double getRadius();
    /**
     * @brief setRadiuse - Задать радиус
     * @param r - радиус
     */
    void setRadiuse(double r);
private:
    double m_r;
};

/**
 * @brief The Rectangle class - Класс графического примитива типа Прямоугольник
 */
class Rectangle: public Figure
{
public:
    /**
     * @brief Rectangle - Конструктор
     * @param x - Координата по оси абсцисс (верхний левый угол)
     * @param y - Координата по оси ординат (верхний левый угол)
     * @param a - Длина прямоугольника
     * @param b - Ширина прямоугольника
     */
    Rectangle(int x, int y, double a, double b);
    /**
     * @brief draw - Функция орисовки прямоугольника
     * @return
     */
    bool draw() override;
    /**
     * @brief getWidth - Получить длину прямоугольника
     * @return длина
     */
    double getWidth();
    /**
     * @brief getHeight - Получить ширину прямоугольника
     * @return - ширина
     */
    double getHeight();
    /**
     * @brief setWidth - Задать длину прямоугольника
     * @param a - длина
     */
    virtual void setWidth(double a);
    /**
     * @brief setHeight - Задать ширину прямоугольника
     * @param b - ширина
     */
    virtual void setHeight(double b);
protected:
    /// Длина прямоугольника
    double m_a;
    /// Ширина прямоугольника
    double m_b;
};

/**
 * @brief The Square class - Класс графического примитива типа Квадрат
 */
class Square: public Rectangle
{
public:
    /**
     * @brief Square - Конструктор
     * @param x - Координата по оси абсцисс (верхний левый угол)
     * @param y - Координата по оси ординат (верхний левый угол)
     * @param a - Длина квадрата
     */
    Square(int x, int y, double a);
    void setWidth(double a) override;
    void setHeight(double b) override;
};
