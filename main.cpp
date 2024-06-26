#include "Document.h"

/**
 * @brief drawCircule - Добавить круг
 */
void drawCircule(std::shared_ptr<Document> doc, int x, int j, double r)
{
    doc->createCircle(x, j, r);
}

/**
 * @brief drawRectangle - Добавить прямоугольник
 */
void drawRectangle(std::shared_ptr<Document> doc, int x, int j, double a, double b)
{
    doc->createRectangle(x, j, a, b);
}

/**
 * @brief drawSquare - Добавить квадрат
 */
void drawSquare(std::shared_ptr<Document> doc, int x, int j, double a)
{
    doc->createSquare(x, j, a);
}


/**
 * @brief main - main функция
 * Пример вызова функций GUI
 * @return
 */
int main(int, char const **)
{
    std::shared_ptr<Document> doc = std::make_shared<Document>();
    drawCircule(doc,13, 14, 5);
    drawRectangle(doc, 5, 6,2 , 5);
    drawSquare(doc, 9,5, 2.4);
    return 0;
}
