#include "Document.h"

Document::Document()
{
    std::cout <<"Create document"<<std::endl;
}

bool Document::importDocument()
{
    return true;
}

bool Document::exportDocument()
{
    return true;
}

bool Document::addFigure(std::shared_ptr<Figure> new_figure)
{
    if(new_figure == nullptr)
        return false;
    m_addedElements.insert(new_figure);
    new_figure.get()->draw();
    return true;
}

bool Document::deleteFigure(std::shared_ptr<Figure> figure)
{
    if(figure == nullptr)
        return false;
    auto it = m_addedElements.find(figure);
    if(it != m_addedElements.end())
        m_addedElements.erase(it);
    return true;
}

bool Document::createSquare(int i, int j, double a)
{
    std::shared_ptr<Square> sq = std::make_shared<Square>(i, j, a);
    m_addedElements.insert(sq);
    sq.get()->draw();
    return true;
}

bool Document::createRectangle(int i, int j, double a, double b)
{
    std::shared_ptr<Rectangle> sq = std::make_shared<Rectangle>(i, j, a, b);
    m_addedElements.insert(sq);
    sq.get()->draw();
    return true;
}

bool Document::createCircle(int i, int j, double r)
{
    std::shared_ptr<Circule> sq = std::make_shared<Circule>(i, j, r);
    m_addedElements.insert(sq);
    sq.get()->draw();
    return true;
}

bool Document::setFigureColor(std::shared_ptr<Figure> figure, std::string color)
{
    figure.get()->setColor(color);
    return true;
}

bool Document::setBorderColor(std::shared_ptr<Figure> figure, std::string color)
{
    figure.get()->setBorderColor(color);
    return true;
}

bool Document::setBorderWidth(std::shared_ptr<Figure> figure, int width)
{
    figure.get()->setBorderWidth(width);
    return true;
}
