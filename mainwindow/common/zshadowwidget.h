#ifndef ZSHADOWWIDGET_H
#define ZSHADOWWIDGET_H

#include <QWidget>
#include <QDialog>

class ZShadowWidget : public QDialog
{
    Q_OBJECT
public:
    explicit ZShadowWidget(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    //供子类继承
    virtual void paintEvent(QPaintEvent *event);

private:
    QPoint m_movePoint; //移动的距离
    bool m_mousePress; //按下鼠标左键
};

#endif // ZSHADOWWIDGET_H
