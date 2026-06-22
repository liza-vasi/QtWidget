#ifndef area_h
#define area_h
#include "figura.h"

class Area : public QWidget
{
    Q_OBJECT
private:
    int myTimer; // идентификатор таймера
    float alpha; // угол поворота
public:
    Area(QWidget *parent = nullptr);
    ~Area();
    MyLine *myline;
    MyRect *myrect;
protected:
    // обработчики событий
    void paintEvent(QPaintEvent *event)override;
    void timerEvent(QTimerEvent *event)override;
    void showEvent(QShowEvent *event)override;
    void hideEvent(QHideEvent *event)override;
};
#endif
