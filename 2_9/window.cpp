#include "window.h"

Window::Window(QWidget *parent) : QWidget(parent)  // Добавил вызов конструктора базового класса
{
    codec = QTextCodec::codecForName("UTF-8");
    // Если не работает с UTF-8, попробуйте:
    // codec = QTextCodec::codecForName("Windows-1251");

    this->setWindowTitle(codec->toUnicode("Обработка событий"));

    area = new Area(this);
    btn = new QPushButton(codec->toUnicode("Завершить"), this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(area);
    layout->addWidget(btn);

    // Современный синтаксис connect для Qt 5
    connect(btn, &QPushButton::clicked, this, &Window::close);
    // Или старый:
    // connect(btn, SIGNAL(clicked(bool)), this, SLOT(close()));
}
