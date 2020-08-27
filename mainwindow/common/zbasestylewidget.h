//解决直接继承QWidget的窗口不能使用qss样式表

#ifndef ZBASESTYLEWIDGET_H
#define ZBASESTYLEWIDGET_H

#include <QWidget>

class ZBaseStyleWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ZBaseStyleWidget(QWidget *parent = 0);

protected:
    virtual void paintEvent(QPaintEvent *);
};

#endif // ZBASESTYLEWIDGET_H
