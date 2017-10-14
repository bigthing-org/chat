#ifndef ROUNDBUTTON_H
#define ROUNDBUTTON_H

#include <QtWidgets>

class RoundButton : public QToolButton
{
    Q_OBJECT

public:
    RoundButton(QWidget *parent = 0);
    void setImage(const QString & str);
private:
    QString url;
protected:
    void paintEvent(QPaintEvent * event);

};

#endif
