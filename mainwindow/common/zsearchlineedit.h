#ifndef ZSEARCHLINEEDIT_H
#define ZSEARCHLINEEDIT_H

#include <QLineEdit>
#include <QPushButton>
#include <QEvent>

class ZSearchLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    ZSearchLineEdit(QWidget *parent = 0);

protected:
    bool eventFilter(QObject *obj, QEvent *event);
private slots:
    void search();

private:
    QPushButton *m_pSearchBtn;

    bool m_SearchFlag;
};

#endif // ZSEARCHLINEEDIT_H
