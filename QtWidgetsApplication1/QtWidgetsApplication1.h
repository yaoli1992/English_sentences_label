#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();
    std::vector<std::string> QtWidgetsApplication1::stringSplit(const std::string& str, char delim);

public:
    QString strHtml;
    QString strText;
    QString t1;
    QString t2;
    QString t3;
    QString jsonHtml;
    QString jsonText;

public Q_SLOTS:
    void  ButtonPressed();
    void  ButtonPressed1();
    void  ButtonPressed2();

private:
    Ui::QtWidgetsApplication1Class ui;
};
