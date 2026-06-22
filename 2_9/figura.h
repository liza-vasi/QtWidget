#ifndef figura_h
#define figura_h
#include <QtWidgets>
#include <cmath>
class Figura
{
protected:
    int x,y,halflen,dx,dy,r;
    virtual void draw(QPainter *Painter)=0;
public:
    Figura(int X,int Y,int Halflen):
        x(X),y(Y),halflen(Halflen){}
    virtual ~Figura() {}
    void move(float Alpha,QPainter *Painter);
};

class MyLine:public Figura
{
protected:
    void draw(QPainter *Painter);
public:
    MyLine(int x,int y,int halflen):Figura(x,y,halflen){}
};

class MyRect:public Figura
{
protected:
    void draw(QPainter *Painter);
public:
    MyRect(int x,int y,int halflen):Figura(x,y,halflen){}
};
#endif
