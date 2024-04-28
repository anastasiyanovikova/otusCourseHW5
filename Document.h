#pragma once

#include "Figure.h"
#include <iostream>
#include <memory>
#include <unordered_set>

/**
 * @brief The Document class - Класс редактора
 *
 * В классе предоставлены возможности создания и удаления графических примитивов, сохранения текущего документа в файл и импорт документа из файла.
 */
class Document
{
public:
    /**
     * @brief Document - Конструктор нового (пустого) документа
     */
    Document();

    /**
     * @brief importDocument - Функция загрузки документа. Внутри функции происходит выбор и открфтие файла.
     * @return true при успешном открытии выбранного файла, false - иначе
     */
    bool importDocument();
    /**
     * @brief exportDocument - Функция сохранения текущего документа в файл. В функции происходит задание
     * наименования файла, выбор расположения для сохранения и сохранение документа с созданными графическими примитивами.
     * @return true при успешном сохранении выбранного файла, false - иначе
     */
    bool exportDocument();

    /**
     * @brief addFigure - Добавление в документ нового графического примитива.
     * @param new_figure - Указатель на графический примитив.
     * @return true при успешном добавлении, false - иначе
     */
    bool addFigure(std::shared_ptr<Figure> new_figure);
    /**
     * @brief deleteFigure - Удаление графического примитива.
     * @param figure - Указатель на графический примитив.
     * @return true при успешном удалении, false - иначе
     */
    bool deleteFigure(std::shared_ptr<Figure> figure);
    /**
     * @brief createSquare - Создание графического примитива типа Квадрат
     * @param i - Координата расположения фигуры в документе по оси абсцисс
     * @param j - Координата расположения фигуры в документе по оси ординат
     * @param a - Размер стороны квадрата
     * @return true при успешном добавлении, false - иначе
     */
    bool createSquare(int i, int j, double a);
    /**
     * @brief createRectangle - Создание графического примитива типа Прямоугольник
     * @param i - Координата расположения фигуры в документе по оси абсцисс
     * @param j - Координата расположения фигуры в документе по оси ординат
     * @param a - Длина квадрата
     * @param b - Ширина квадрата
     * @return true при успешном добавлении, false - иначе
     */
    bool createRectangle(int i, int j, double a, double b);
    /**
     * @brief createCircle - Создание графического примитива типа Круг
     * @param i - Координата расположения фигуры в документе по оси абсцисс (центр окружности)
     * @param j - Координата расположения фигуры в документе по оси ординат (центр окружности)
     * @param r - Радиус окружности
     * @return true при успешном добавлении, false - иначе
     */
    bool createCircle(int i, int j, double r);
    /**
     * @brief setFigureColor - Установить цвет фигуры
     * @param figure - Указатель на фигуру
     * @param color - Наименование цвета
     * @return true при успешном изменении цвета, false - иначе
     */
    bool setFigureColor(std::shared_ptr<Figure> figure, std::string color);
    /**
     * @brief setBorderColor - Установить цвет границы фигуры
     * @param figure - Указатель на фигуру
     * @param color - Наименование цвета
     * @return true при успешном изменении цвета, false - иначе
     */
    bool setBorderColor(std::shared_ptr<Figure> figure, std::string color);
    /**
     * @brief setBorderWidth - Задать толщину границы
     * @param figure - Указатель на фигуру
     * @param width - толщина границы
     * @return true при успешном изменении толщины границы, false - иначе
     */
    bool setBorderWidth(std::shared_ptr<Figure> figure, int width);
private:
    /// Список добавленных в документ графических примитивов
    std::unordered_set<std::shared_ptr<Figure>> m_addedElements;
};