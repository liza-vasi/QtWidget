#ifndef win_h
#define win_h
#include <QtWidgets>
#include <QValidator>
#include <QTextCodec>
class Win:public QWidget // класс окна
{
    Q_OBJECT
protected:
    QTextCodec *codec;
    QFrame *frame; // рамка
    QLabel *inputLabel; // метка ввода
    QLineEdit *inputEdit; // строчный редактор ввода
    QLabel *outputLabel; // метка вывода
    QLineEdit *outputEdit; // строчный редактор вывода
    QPushButton *nextButton; // кнопка Следующее
    QPushButton *exitButton; // кнопка Выход
public:
    Win(QWidget *parent = nullptr); // конструктор
public slots:
    void begin(); // метод начальной настройки интерфейса
    void calc(); // метод реализации вычислений
};
class StrValidator : public QValidator
{
public:
    StrValidator(QObject *parent = nullptr) : QValidator(parent) {}


    virtual State validate(QString &str, int &pos) const override
    {
        return Acceptable;
    }
};
#endif
