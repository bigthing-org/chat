#include "roundbutton.h"

RoundButton::RoundButton(QWidget *parent) :
    QToolButton(parent)
{

}

void RoundButton::setImage(const QString & str){
    this->url = str;
}

void RoundButton::paintEvent(QPaintEvent * event){
    if(NULL != url){
        QPainter painter(this);
        QPainterPath path;
        painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
        int round = qMin(width(), height());
        path.addEllipse(0, 0, round, round);
        painter.setClipPath(path);
        painter.drawPixmap(-1, -1, width() + 2, height() + 2, QPixmap(url));
    }
    else{
        QToolButton::paintEvent(event);
    }
}
