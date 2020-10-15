#ifndef LRUMBLEFISH_H
#define LRUMBLEFISH_H

#include <QWidget>
#include<QScrollArea>
#include<QScrollBar>
#include<QAction>
namespace Ui {
class LRumbleFish;
}

class LRumbleFish : public QWidget
{
    Q_OBJECT

public:
    explicit LRumbleFish(QWidget *parent = 0);
    ~LRumbleFish();
    void initWidgetInfo();
private:
    Ui::LRumbleFish *ui;
};

#endif // LRUMBLEFISH_H
