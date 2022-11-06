#include "QtWidgetsApplication1.h"
#include <iostream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
   // QString str1 = ui;
    //QString str2 = ui->textEdit->toPlainText();
    this->setWindowTitle("|| dianyunPCL || PCL QT_demo");



    jsonHtml = ui.textEdit_2->document()->toHtml();
    jsonText = ui.textEdit_2->document()->toPlainText();
     connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(ButtonPressed()));
     connect(ui.pushButton_6, SIGNAL(clicked()), this, SLOT(ButtonPressed1()));
     connect(ui.pushButton_7, SIGNAL(clicked()), this, SLOT(ButtonPressed2()));



}

void QtWidgetsApplication1::ButtonPressed() {
    printf("Random button was pressed\n");
    printf("Random button was pressed\n");
    
    strHtml = ui.textEdit->document()->toHtml();
    strText = ui.textEdit->document()->toPlainText();

    string str = strText.toStdString();
    t1 = ui.lineEdit->text();
    string strt1 = t1.toStdString();

    int t1_pos = -1;
    if (strt1 != "null")
    {
        t1_pos = str.find(strt1);
    }
    else {
        ui.label_2->setText("-1");
        ui.label_3->setText("-1");
    }

    if (t1_pos != str.npos)
    {
        ui.label_2->setText(QString::number(t1_pos));
        int t1_length = t1_pos + strt1.length();
        ui.label_3->setText(QString::number(t1_length));
    }
    else
    {
        ui.label_2->setText("-1");
        ui.label_3->setText("-1");
    }


}


void QtWidgetsApplication1::ButtonPressed1() {
    printf("Random button was pressed\n");
    printf("Random button was pressed\n");

    //strHtml = ui.textEdit->document()->toHtml();
    //strText = ui.textEdit->document()->toPlainText();

    string str = strText.toStdString();
    t2 = ui.lineEdit_2->text();
    string strt2 = t2.toStdString();
   
    int t2_pos = -1;
    if (strt2 != "null")
    {
        t2_pos = str.find(strt2);
    }
    else {
        ui.label_4->setText("-1");
        ui.label_5->setText("-1");
    }

    if (t2_pos != str.npos)
    {
        ui.label_4->setText(QString::number(t2_pos));
        int t2_length = t2_pos + strt2.length();
        ui.label_5->setText(QString::number(t2_length));
    }
    else
    {
        ui.label_4->setText("-1");
        ui.label_5->setText("-1");
    }


}


void QtWidgetsApplication1::ButtonPressed2() {
    printf("Random button was pressed\n");
    printf("Random button was pressed\n");

    //strHtml = ui.textEdit->document()->toHtml();
    //strText = ui.textEdit->document()->toPlainText();

    string str = strText.toStdString();
    t3 = ui.lineEdit_3->text();
    string strt3 = t3.toStdString();
  
    int t3_pos = -1;
    if (strt3 != "null")
    {
        t3_pos = str.find(strt3);
    }
    else {
        ui.label_6->setText("-1");
        ui.label_7->setText("-1");
    }

    if (t3_pos != str.npos)
    {
        ui.label_6->setText(QString::number(t3_pos));
        int t1_length = t3_pos + strt3.length();
        ui.label_7->setText(QString::number(t1_length));
    }
    else
    {
        ui.label_6->setText("-1");
        ui.label_7->setText("-1");
    }

    
    string jsonstr = jsonText.toStdString();
    //cout << jsonstr << endl;
    
    ui.textEdit_2->document()->clear();

    std::vector<std::string> elem;
    elem = stringSplit(jsonstr, ':');
    cout << "elem[0] " << elem[0] << endl;
    cout << "elem[1] " << elem[1] << endl;
    cout << "elem[2] " << elem[2] << endl;
    cout << "elem[3] " << elem[3] << endl;
    cout << "elem[4] " << elem[4] << endl;
    cout << "elem[5] " << elem[5] << endl;
    cout << "elem[6] " << elem[6] << endl;
    cout << "elem[7] " << elem[7] << endl;

    char a = '\"';
    char b = '\"';
    if (t1.toStdString() != "null")
    {
       elem[0] += a + t1.toStdString() + b + ",";
    }
    else {
        elem[0] += t1.toStdString() + ",";
    }
    QString t1_start = ui.label_2->text();
    elem[1] += t1_start.toStdString() + ",";
    QString t1_end = ui.label_3->text();
    elem[2] += t1_end.toStdString() + ",";


    if (t2.toStdString() != "null")
    {
        elem[3] += a + t2.toStdString() + b + ",";
    }
    else {
        elem[3] += t2.toStdString() + ",";
    }


    QString t2_start = ui.label_4->text();
    elem[4] += t2_start.toStdString() + ",";

    QString t2_end = ui.label_5->text();
    elem[5] += t2_end.toStdString() + ",";

    if (t3.toStdString() != "null")
    {
        elem[6] += a + t3.toStdString() + b + ",";
    }
    else {
        elem[6] += t3.toStdString()+ ",";
    }



    QString t3_start = ui.label_6->text();
    elem[7] += t3_start.toStdString() + ",";

    QString t3_end = ui.label_7->text();
    elem[8] += t3_end.toStdString() + ",";
   
    QString opinion = ui.comboBox->currentText();
    elem[9] += a + opinion.toStdString() + b;

    string jsonlast;
    for (int i = 0; i < elem.size(); i++)
    {
        jsonlast += elem[i];
    }
    //cout << jsonlast[jsonlast.length()-1] << endl;
    ui.textEdit_2->setText(QString::fromStdString(jsonlast.substr(0,jsonlast.length()-2)));
}


std::vector<std::string> QtWidgetsApplication1::stringSplit(const std::string& str, char delim) {
    std::stringstream ss(str);
    std::string item;
    std::vector<std::string> elems;
    while (std::getline(ss, item, delim)) {
        if (!item.empty()) {
            elems.push_back(item+":");
        }
    }
    return elems;
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}
