#include "LRumbleFish.h"
#include "ui_LRumbleFish.h"

LRumbleFish::LRumbleFish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LRumbleFish)
{
    ui->setupUi(this);
    initWidgetInfo();
}

LRumbleFish::~LRumbleFish()
{
    delete ui;
}

void LRumbleFish::initWidgetInfo()
{
    setWindowTitle("RumbleFish");
    resize(350,500);
    ui->scrollArea->verticalScrollBar()->setStyleSheet("QScrollBar{background:transparent; width: 10px;}"
          "QScrollBar::handle{background:lightgray; border:2px solid transparent; border-radius:5px;}"
          "QScrollBar::handle:hover{background:green;}"
          "QScrollBar::sub-line{background:transparent;}"
          "QScrollBar::add-line{background:transparent;}");
    QAction*action = new QAction(ui->searchlineEdit);
     action->setIcon(QIcon(":/image/alarm.png"));
     ui->searchlineEdit->addAction(action,QLineEdit::LeadingPosition);
     //ui->toolButton_11->setStyleSheet("border:none;");
     //ui->rollwidget->setStyleSheet("border:none;background-color:white");
     ui->scrollArea_2->setStyleSheet("QToolButton{border:none;}"
                                     "QToolButton:hover{font-size:20px; color:red}"
                                     );
     ui->scrollArea_2->horizontalScrollBar()->setStyleSheet("QScrollBar{background:transparent; width: 10px;}"
                                                            "QScrollBar::vertical{background:lightgray; border:2px solid transparent; border-radius:5px;}"
                                                            "QScrollBar::handle:vertical{background:green;}"
                                                            "QScrollBar::sub-line{background:transparent;}"
                                                            "QScrollBar::add-line{background:transparent;}");
     ui->toolButton_9->setStyleSheet("QToolButton{border:none;}");
}
