#ifndef window_h
#define window_h
#include "area.h"
#include <QtWidgets>
#include <QTextCodec>
class Window : public QWidget
{Q_OBJECT
protected:
    QTextCodec *codec;
    Area * area; // область отображения рисунка
    QPushButton * btn;
public:
    Window(QWidget *parent = nullptr);
};
#endif
