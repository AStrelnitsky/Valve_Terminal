/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QSpinBox *COM_Port;
    QPlainTextEdit *TextScreen;
    QPushButton *BtnConnect;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *TextScreen_2;
    QLabel *label_3;
    QLabel *label;
    QPlainTextEdit *TextScreen_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_2;
    QRadioButton *HybidradioButton;
    QRadioButton *radioButton;
    QSpinBox *SpeedBox5_2;
    QSpinBox *SpeedBox5_3;
    QSpinBox *SpeedBox5_4;
    QLabel *label_7;
    QSpinBox *CurrentLimit;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSpinBox *SpeedBox1;
    QSlider *SpeedSlider_1;
    QPushButton *STOP1;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QPlainTextEdit *VelocityWindow_1;
    QLabel *label_6;
    QPlainTextEdit *CurrentWindow_1;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_8;
    QSpinBox *spinBox_2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit;
    QLabel *label_9;
    QSpinBox *max_pwm;
    QLabel *label_10;
    QSpinBox *voltage;
    QLabel *label_11;
    QSpinBox *scheme;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *phase_resistance;
    QDoubleSpinBox *phase_induction;
    QDoubleSpinBox *CE;
    QDoubleSpinBox *CM;
    QSpinBox *pair_poles;
    QLabel *label_17;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QSpinBox *SpeedBox1_2;
    QSlider *SpeedSlider_2;
    QPushButton *STOP1_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_18;
    QPlainTextEdit *VelocityWindow_2;
    QLabel *label_19;
    QPlainTextEdit *CurrentWindow_2;
    QLabel *label_20;
    QSpinBox *spinBox_3;
    QLabel *label_21;
    QSpinBox *spinBox_4;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_22;
    QPlainTextEdit *VelocityWindow_3;
    QLabel *label_23;
    QPlainTextEdit *CurrentWindow_3;
    QLabel *label_24;
    QSpinBox *spinBox_5;
    QLabel *label_25;
    QSpinBox *spinBox_6;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_26;
    QPlainTextEdit *VelocityWindow_4;
    QLabel *label_27;
    QPlainTextEdit *CurrentWindow_4;
    QLabel *label_28;
    QSpinBox *spinBox_7;
    QLabel *label_29;
    QSpinBox *spinBox_8;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_10;
    QSpinBox *SpeedBox1_3;
    QSlider *SpeedSlider_3;
    QPushButton *STOP1_3;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_11;
    QSpinBox *SpeedBox1_4;
    QSlider *SpeedSlider_4;
    QPushButton *STOP1_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setWindowModality(Qt::NonModal);
        Widget->resize(1000, 800);
        Widget->setMinimumSize(QSize(500, 400));
        Widget->setMaximumSize(QSize(1000, 1000));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Widget->setPalette(palette);
        Widget->setMouseTracking(false);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 191, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5, 0, Qt::AlignHCenter);

        COM_Port = new QSpinBox(verticalLayoutWidget);
        COM_Port->setObjectName(QStringLiteral("COM_Port"));
        COM_Port->setMinimumSize(QSize(42, 22));
        COM_Port->setMaximumSize(QSize(62, 22));
        COM_Port->setMinimum(-32768);
        COM_Port->setMaximum(32767);
        COM_Port->setValue(0);

        verticalLayout->addWidget(COM_Port, 0, Qt::AlignHCenter);

        TextScreen = new QPlainTextEdit(verticalLayoutWidget);
        TextScreen->setObjectName(QStringLiteral("TextScreen"));
        TextScreen->setOverwriteMode(true);

        verticalLayout->addWidget(TextScreen);

        BtnConnect = new QPushButton(verticalLayoutWidget);
        BtnConnect->setObjectName(QStringLiteral("BtnConnect"));
        BtnConnect->setMinimumSize(QSize(64, 64));
        BtnConnect->setMaximumSize(QSize(64, 64));

        verticalLayout->addWidget(BtnConnect, 0, Qt::AlignHCenter);

        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(460, 0, 411, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TextScreen_2 = new QPlainTextEdit(gridLayoutWidget);
        TextScreen_2->setObjectName(QStringLiteral("TextScreen_2"));
        TextScreen_2->setOverwriteMode(true);

        gridLayout->addWidget(TextScreen_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1, Qt::AlignHCenter);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter);

        TextScreen_4 = new QPlainTextEdit(gridLayoutWidget);
        TextScreen_4->setObjectName(QStringLiteral("TextScreen_4"));
        TextScreen_4->setOverwriteMode(true);

        gridLayout->addWidget(TextScreen_4, 1, 1, 1, 1);

        verticalLayoutWidget_2 = new QWidget(Widget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(900, 20, 84, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_2 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        HybidradioButton = new QRadioButton(verticalLayoutWidget_2);
        HybidradioButton->setObjectName(QStringLiteral("HybidradioButton"));

        verticalLayout_2->addWidget(HybidradioButton);

        radioButton = new QRadioButton(verticalLayoutWidget_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        SpeedBox5_2 = new QSpinBox(verticalLayoutWidget_2);
        SpeedBox5_2->setObjectName(QStringLiteral("SpeedBox5_2"));
        SpeedBox5_2->setMinimumSize(QSize(42, 22));
        SpeedBox5_2->setMaximumSize(QSize(62, 22));
        SpeedBox5_2->setMinimum(0);
        SpeedBox5_2->setMaximum(65535);
        SpeedBox5_2->setValue(0);

        verticalLayout_2->addWidget(SpeedBox5_2);

        SpeedBox5_3 = new QSpinBox(verticalLayoutWidget_2);
        SpeedBox5_3->setObjectName(QStringLiteral("SpeedBox5_3"));
        SpeedBox5_3->setMinimumSize(QSize(42, 22));
        SpeedBox5_3->setMaximumSize(QSize(62, 22));
        SpeedBox5_3->setMinimum(0);
        SpeedBox5_3->setMaximum(65535);
        SpeedBox5_3->setValue(0);

        verticalLayout_2->addWidget(SpeedBox5_3);

        SpeedBox5_4 = new QSpinBox(verticalLayoutWidget_2);
        SpeedBox5_4->setObjectName(QStringLiteral("SpeedBox5_4"));
        SpeedBox5_4->setMinimumSize(QSize(42, 22));
        SpeedBox5_4->setMaximumSize(QSize(62, 22));
        SpeedBox5_4->setMinimum(0);
        SpeedBox5_4->setMaximum(255);
        SpeedBox5_4->setValue(0);

        verticalLayout_2->addWidget(SpeedBox5_4);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7, 0, Qt::AlignHCenter);

        CurrentLimit = new QSpinBox(verticalLayoutWidget_2);
        CurrentLimit->setObjectName(QStringLiteral("CurrentLimit"));
        CurrentLimit->setMaximum(255);
        CurrentLimit->setValue(76);

        verticalLayout_2->addWidget(CurrentLimit);

        verticalLayoutWidget_3 = new QWidget(Widget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 470, 66, 311));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        SpeedBox1 = new QSpinBox(verticalLayoutWidget_3);
        SpeedBox1->setObjectName(QStringLiteral("SpeedBox1"));
        SpeedBox1->setMinimumSize(QSize(42, 22));
        SpeedBox1->setMaximumSize(QSize(62, 22));
        SpeedBox1->setMinimum(-32768);
        SpeedBox1->setMaximum(32767);
        SpeedBox1->setValue(0);

        verticalLayout_3->addWidget(SpeedBox1);

        SpeedSlider_1 = new QSlider(verticalLayoutWidget_3);
        SpeedSlider_1->setObjectName(QStringLiteral("SpeedSlider_1"));
        SpeedSlider_1->setLayoutDirection(Qt::LeftToRight);
        SpeedSlider_1->setAutoFillBackground(true);
        SpeedSlider_1->setMinimum(0);
        SpeedSlider_1->setMaximum(1024);
        SpeedSlider_1->setSingleStep(1);
        SpeedSlider_1->setPageStep(10);
        SpeedSlider_1->setTracking(false);
        SpeedSlider_1->setOrientation(Qt::Vertical);
        SpeedSlider_1->setTickPosition(QSlider::TicksBothSides);
        SpeedSlider_1->setTickInterval(5);

        verticalLayout_3->addWidget(SpeedSlider_1);

        STOP1 = new QPushButton(verticalLayoutWidget_3);
        STOP1->setObjectName(QStringLiteral("STOP1"));
        STOP1->setEnabled(true);
        STOP1->setMinimumSize(QSize(64, 64));
        STOP1->setMaximumSize(QSize(64, 64));

        verticalLayout_3->addWidget(STOP1);

        verticalLayoutWidget_4 = new QWidget(Widget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(20, 270, 91, 191));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        VelocityWindow_1 = new QPlainTextEdit(verticalLayoutWidget_4);
        VelocityWindow_1->setObjectName(QStringLiteral("VelocityWindow_1"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        VelocityWindow_1->setFont(font1);
        VelocityWindow_1->setMouseTracking(false);
        VelocityWindow_1->setAutoFillBackground(false);
        VelocityWindow_1->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        VelocityWindow_1->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        VelocityWindow_1->setTabChangesFocus(false);
        VelocityWindow_1->setOverwriteMode(true);
        VelocityWindow_1->setCenterOnScroll(false);

        verticalLayout_4->addWidget(VelocityWindow_1);

        label_6 = new QLabel(verticalLayoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_4->addWidget(label_6);

        CurrentWindow_1 = new QPlainTextEdit(verticalLayoutWidget_4);
        CurrentWindow_1->setObjectName(QStringLiteral("CurrentWindow_1"));
        CurrentWindow_1->setFont(font1);
        CurrentWindow_1->setMouseTracking(false);
        CurrentWindow_1->setAutoFillBackground(false);
        CurrentWindow_1->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        CurrentWindow_1->setOverwriteMode(true);

        verticalLayout_4->addWidget(CurrentWindow_1);

        label_2 = new QLabel(verticalLayoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_4->addWidget(label_2);

        spinBox = new QSpinBox(verticalLayoutWidget_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout_4->addWidget(spinBox);

        label_8 = new QLabel(verticalLayoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(149, 0));
        label_8->setFont(font);

        verticalLayout_4->addWidget(label_8);

        spinBox_2 = new QSpinBox(verticalLayoutWidget_4);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        verticalLayout_4->addWidget(spinBox_2);

        verticalLayoutWidget_5 = new QWidget(Widget);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(430, 290, 551, 461));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(460, 230, 104, 21));
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(460, 210, 47, 13));
        max_pwm = new QSpinBox(Widget);
        max_pwm->setObjectName(QStringLiteral("max_pwm"));
        max_pwm->setGeometry(QRect(590, 190, 71, 22));
        max_pwm->setMaximum(65536);
        max_pwm->setValue(8192);
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(600, 170, 61, 16));
        voltage = new QSpinBox(Widget);
        voltage->setObjectName(QStringLiteral("voltage"));
        voltage->setGeometry(QRect(590, 230, 71, 22));
        voltage->setMaximum(600);
        voltage->setValue(30);
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(600, 210, 61, 16));
        scheme = new QSpinBox(Widget);
        scheme->setObjectName(QStringLiteral("scheme"));
        scheme->setGeometry(QRect(670, 190, 61, 22));
        scheme->setValue(1);
        label_12 = new QLabel(Widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(670, 170, 61, 16));
        label_13 = new QLabel(Widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(740, 170, 91, 16));
        label_14 = new QLabel(Widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(740, 210, 91, 16));
        label_15 = new QLabel(Widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(830, 170, 91, 16));
        label_16 = new QLabel(Widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(830, 210, 91, 16));
        phase_resistance = new QDoubleSpinBox(Widget);
        phase_resistance->setObjectName(QStringLiteral("phase_resistance"));
        phase_resistance->setGeometry(QRect(740, 190, 62, 22));
        phase_resistance->setSingleStep(0.01);
        phase_resistance->setValue(1.5);
        phase_induction = new QDoubleSpinBox(Widget);
        phase_induction->setObjectName(QStringLiteral("phase_induction"));
        phase_induction->setGeometry(QRect(740, 230, 62, 22));
        phase_induction->setSingleStep(0.01);
        phase_induction->setValue(0.01);
        CE = new QDoubleSpinBox(Widget);
        CE->setObjectName(QStringLiteral("CE"));
        CE->setGeometry(QRect(820, 190, 62, 22));
        CE->setSingleStep(0.01);
        CE->setValue(0.43);
        CM = new QDoubleSpinBox(Widget);
        CM->setObjectName(QStringLiteral("CM"));
        CM->setGeometry(QRect(820, 230, 62, 22));
        CM->setSingleStep(0.01);
        CM->setValue(0.47);
        pair_poles = new QSpinBox(Widget);
        pair_poles->setObjectName(QStringLiteral("pair_poles"));
        pair_poles->setGeometry(QRect(670, 230, 61, 22));
        pair_poles->setValue(8);
        label_17 = new QLabel(Widget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(670, 210, 61, 16));
        verticalLayoutWidget_7 = new QWidget(Widget);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(120, 470, 66, 311));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        SpeedBox1_2 = new QSpinBox(verticalLayoutWidget_7);
        SpeedBox1_2->setObjectName(QStringLiteral("SpeedBox1_2"));
        SpeedBox1_2->setMinimumSize(QSize(42, 22));
        SpeedBox1_2->setMaximumSize(QSize(62, 22));
        SpeedBox1_2->setMinimum(-32768);
        SpeedBox1_2->setMaximum(32767);
        SpeedBox1_2->setValue(0);

        verticalLayout_7->addWidget(SpeedBox1_2);

        SpeedSlider_2 = new QSlider(verticalLayoutWidget_7);
        SpeedSlider_2->setObjectName(QStringLiteral("SpeedSlider_2"));
        SpeedSlider_2->setLayoutDirection(Qt::LeftToRight);
        SpeedSlider_2->setAutoFillBackground(true);
        SpeedSlider_2->setMinimum(0);
        SpeedSlider_2->setMaximum(1024);
        SpeedSlider_2->setSingleStep(1);
        SpeedSlider_2->setPageStep(10);
        SpeedSlider_2->setTracking(false);
        SpeedSlider_2->setOrientation(Qt::Vertical);
        SpeedSlider_2->setTickPosition(QSlider::TicksBothSides);
        SpeedSlider_2->setTickInterval(5);

        verticalLayout_7->addWidget(SpeedSlider_2);

        STOP1_2 = new QPushButton(verticalLayoutWidget_7);
        STOP1_2->setObjectName(QStringLiteral("STOP1_2"));
        STOP1_2->setEnabled(true);
        STOP1_2->setMinimumSize(QSize(64, 64));
        STOP1_2->setMaximumSize(QSize(64, 64));

        verticalLayout_7->addWidget(STOP1_2);

        verticalLayoutWidget_6 = new QWidget(Widget);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(120, 270, 91, 191));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(verticalLayoutWidget_6);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font);

        verticalLayout_5->addWidget(label_18);

        VelocityWindow_2 = new QPlainTextEdit(verticalLayoutWidget_6);
        VelocityWindow_2->setObjectName(QStringLiteral("VelocityWindow_2"));
        VelocityWindow_2->setFont(font1);
        VelocityWindow_2->setMouseTracking(false);
        VelocityWindow_2->setAutoFillBackground(false);
        VelocityWindow_2->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        VelocityWindow_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        VelocityWindow_2->setTabChangesFocus(false);
        VelocityWindow_2->setOverwriteMode(true);
        VelocityWindow_2->setCenterOnScroll(false);

        verticalLayout_5->addWidget(VelocityWindow_2);

        label_19 = new QLabel(verticalLayoutWidget_6);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font);

        verticalLayout_5->addWidget(label_19);

        CurrentWindow_2 = new QPlainTextEdit(verticalLayoutWidget_6);
        CurrentWindow_2->setObjectName(QStringLiteral("CurrentWindow_2"));
        CurrentWindow_2->setFont(font1);
        CurrentWindow_2->setMouseTracking(false);
        CurrentWindow_2->setAutoFillBackground(false);
        CurrentWindow_2->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        CurrentWindow_2->setOverwriteMode(true);

        verticalLayout_5->addWidget(CurrentWindow_2);

        label_20 = new QLabel(verticalLayoutWidget_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);

        verticalLayout_5->addWidget(label_20);

        spinBox_3 = new QSpinBox(verticalLayoutWidget_6);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));

        verticalLayout_5->addWidget(spinBox_3);

        label_21 = new QLabel(verticalLayoutWidget_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(149, 0));
        label_21->setFont(font);

        verticalLayout_5->addWidget(label_21);

        spinBox_4 = new QSpinBox(verticalLayoutWidget_6);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));

        verticalLayout_5->addWidget(spinBox_4);

        verticalLayoutWidget_8 = new QWidget(Widget);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(320, 270, 91, 191));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(verticalLayoutWidget_8);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font);

        verticalLayout_8->addWidget(label_22);

        VelocityWindow_3 = new QPlainTextEdit(verticalLayoutWidget_8);
        VelocityWindow_3->setObjectName(QStringLiteral("VelocityWindow_3"));
        VelocityWindow_3->setFont(font1);
        VelocityWindow_3->setMouseTracking(false);
        VelocityWindow_3->setAutoFillBackground(false);
        VelocityWindow_3->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        VelocityWindow_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        VelocityWindow_3->setTabChangesFocus(false);
        VelocityWindow_3->setOverwriteMode(true);
        VelocityWindow_3->setCenterOnScroll(false);

        verticalLayout_8->addWidget(VelocityWindow_3);

        label_23 = new QLabel(verticalLayoutWidget_8);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font);

        verticalLayout_8->addWidget(label_23);

        CurrentWindow_3 = new QPlainTextEdit(verticalLayoutWidget_8);
        CurrentWindow_3->setObjectName(QStringLiteral("CurrentWindow_3"));
        CurrentWindow_3->setFont(font1);
        CurrentWindow_3->setMouseTracking(false);
        CurrentWindow_3->setAutoFillBackground(false);
        CurrentWindow_3->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        CurrentWindow_3->setOverwriteMode(true);

        verticalLayout_8->addWidget(CurrentWindow_3);

        label_24 = new QLabel(verticalLayoutWidget_8);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font);

        verticalLayout_8->addWidget(label_24);

        spinBox_5 = new QSpinBox(verticalLayoutWidget_8);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));

        verticalLayout_8->addWidget(spinBox_5);

        label_25 = new QLabel(verticalLayoutWidget_8);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(149, 0));
        label_25->setFont(font);

        verticalLayout_8->addWidget(label_25);

        spinBox_6 = new QSpinBox(verticalLayoutWidget_8);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));

        verticalLayout_8->addWidget(spinBox_6);

        verticalLayoutWidget_9 = new QWidget(Widget);
        verticalLayoutWidget_9->setObjectName(QStringLiteral("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(220, 270, 91, 191));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(verticalLayoutWidget_9);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font);

        verticalLayout_9->addWidget(label_26);

        VelocityWindow_4 = new QPlainTextEdit(verticalLayoutWidget_9);
        VelocityWindow_4->setObjectName(QStringLiteral("VelocityWindow_4"));
        VelocityWindow_4->setFont(font1);
        VelocityWindow_4->setMouseTracking(false);
        VelocityWindow_4->setAutoFillBackground(false);
        VelocityWindow_4->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        VelocityWindow_4->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        VelocityWindow_4->setTabChangesFocus(false);
        VelocityWindow_4->setOverwriteMode(true);
        VelocityWindow_4->setCenterOnScroll(false);

        verticalLayout_9->addWidget(VelocityWindow_4);

        label_27 = new QLabel(verticalLayoutWidget_9);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font);

        verticalLayout_9->addWidget(label_27);

        CurrentWindow_4 = new QPlainTextEdit(verticalLayoutWidget_9);
        CurrentWindow_4->setObjectName(QStringLiteral("CurrentWindow_4"));
        CurrentWindow_4->setFont(font1);
        CurrentWindow_4->setMouseTracking(false);
        CurrentWindow_4->setAutoFillBackground(false);
        CurrentWindow_4->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        CurrentWindow_4->setOverwriteMode(true);

        verticalLayout_9->addWidget(CurrentWindow_4);

        label_28 = new QLabel(verticalLayoutWidget_9);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font);

        verticalLayout_9->addWidget(label_28);

        spinBox_7 = new QSpinBox(verticalLayoutWidget_9);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));

        verticalLayout_9->addWidget(spinBox_7);

        label_29 = new QLabel(verticalLayoutWidget_9);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(149, 0));
        label_29->setFont(font);

        verticalLayout_9->addWidget(label_29);

        spinBox_8 = new QSpinBox(verticalLayoutWidget_9);
        spinBox_8->setObjectName(QStringLiteral("spinBox_8"));

        verticalLayout_9->addWidget(spinBox_8);

        verticalLayoutWidget_10 = new QWidget(Widget);
        verticalLayoutWidget_10->setObjectName(QStringLiteral("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(220, 470, 66, 311));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        SpeedBox1_3 = new QSpinBox(verticalLayoutWidget_10);
        SpeedBox1_3->setObjectName(QStringLiteral("SpeedBox1_3"));
        SpeedBox1_3->setMinimumSize(QSize(42, 22));
        SpeedBox1_3->setMaximumSize(QSize(62, 22));
        SpeedBox1_3->setMinimum(-32768);
        SpeedBox1_3->setMaximum(32767);
        SpeedBox1_3->setValue(0);

        verticalLayout_10->addWidget(SpeedBox1_3);

        SpeedSlider_3 = new QSlider(verticalLayoutWidget_10);
        SpeedSlider_3->setObjectName(QStringLiteral("SpeedSlider_3"));
        SpeedSlider_3->setLayoutDirection(Qt::LeftToRight);
        SpeedSlider_3->setAutoFillBackground(true);
        SpeedSlider_3->setMinimum(0);
        SpeedSlider_3->setMaximum(1024);
        SpeedSlider_3->setSingleStep(1);
        SpeedSlider_3->setPageStep(10);
        SpeedSlider_3->setTracking(false);
        SpeedSlider_3->setOrientation(Qt::Vertical);
        SpeedSlider_3->setTickPosition(QSlider::TicksBothSides);
        SpeedSlider_3->setTickInterval(5);

        verticalLayout_10->addWidget(SpeedSlider_3);

        STOP1_3 = new QPushButton(verticalLayoutWidget_10);
        STOP1_3->setObjectName(QStringLiteral("STOP1_3"));
        STOP1_3->setEnabled(true);
        STOP1_3->setMinimumSize(QSize(64, 64));
        STOP1_3->setMaximumSize(QSize(64, 64));

        verticalLayout_10->addWidget(STOP1_3);

        verticalLayoutWidget_11 = new QWidget(Widget);
        verticalLayoutWidget_11->setObjectName(QStringLiteral("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(320, 470, 66, 311));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        SpeedBox1_4 = new QSpinBox(verticalLayoutWidget_11);
        SpeedBox1_4->setObjectName(QStringLiteral("SpeedBox1_4"));
        SpeedBox1_4->setMinimumSize(QSize(42, 22));
        SpeedBox1_4->setMaximumSize(QSize(62, 22));
        SpeedBox1_4->setMinimum(-32768);
        SpeedBox1_4->setMaximum(32767);
        SpeedBox1_4->setValue(0);

        verticalLayout_11->addWidget(SpeedBox1_4);

        SpeedSlider_4 = new QSlider(verticalLayoutWidget_11);
        SpeedSlider_4->setObjectName(QStringLiteral("SpeedSlider_4"));
        SpeedSlider_4->setLayoutDirection(Qt::LeftToRight);
        SpeedSlider_4->setAutoFillBackground(true);
        SpeedSlider_4->setMinimum(0);
        SpeedSlider_4->setMaximum(1024);
        SpeedSlider_4->setSingleStep(1);
        SpeedSlider_4->setPageStep(10);
        SpeedSlider_4->setTracking(false);
        SpeedSlider_4->setOrientation(Qt::Vertical);
        SpeedSlider_4->setTickPosition(QSlider::TicksBothSides);
        SpeedSlider_4->setTickInterval(5);

        verticalLayout_11->addWidget(SpeedSlider_4);

        STOP1_4 = new QPushButton(verticalLayoutWidget_11);
        STOP1_4->setObjectName(QStringLiteral("STOP1_4"));
        STOP1_4->setEnabled(true);
        STOP1_4->setMinimumSize(QSize(64, 64));
        STOP1_4->setMaximumSize(QSize(64, 64));

        verticalLayout_11->addWidget(STOP1_4);


        retranslateUi(Widget);
        QObject::connect(SpeedSlider_1, SIGNAL(valueChanged(int)), SpeedBox1, SLOT(setValue(int)));
        QObject::connect(SpeedBox1, SIGNAL(valueChanged(int)), SpeedSlider_1, SLOT(setValue(int)));
        QObject::connect(SpeedSlider_2, SIGNAL(valueChanged(int)), SpeedBox1_2, SLOT(setValue(int)));
        QObject::connect(SpeedBox1_2, SIGNAL(valueChanged(int)), SpeedSlider_2, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label_5->setText(QApplication::translate("Widget", "COM number", 0));
        BtnConnect->setText(QApplication::translate("Widget", "CONNECT", 0));
        label_3->setText(QApplication::translate("Widget", "Incoming message", 0));
        label->setText(QApplication::translate("Widget", "Send message", 0));
        radioButton_2->setText(QApplication::translate("Widget", "Main control", 0));
        HybidradioButton->setText(QApplication::translate("Widget", "Direct servo", 0));
        radioButton->setText(QApplication::translate("Widget", "Listen", 0));
        label_7->setText(QApplication::translate("Widget", "Current limit", 0));
        STOP1->setText(QApplication::translate("Widget", "STOP", 0));
        label_4->setText(QApplication::translate("Widget", "Velocity,rpm", 0));
        label_6->setText(QApplication::translate("Widget", "Current, A", 0));
        label_2->setText(QApplication::translate("Widget", "Angle, deg", 0));
        label_8->setText(QApplication::translate("Widget", "ID", 0));
        label_9->setText(QApplication::translate("Widget", "TIME", 0));
        label_10->setText(QApplication::translate("Widget", "max_pwm", 0));
        label_11->setText(QApplication::translate("Widget", "voltage", 0));
        label_12->setText(QApplication::translate("Widget", "scheme", 0));
        label_13->setText(QApplication::translate("Widget", "phase_resistance", 0));
        label_14->setText(QApplication::translate("Widget", "phase_induction", 0));
        label_15->setText(QApplication::translate("Widget", "CE", 0));
        label_16->setText(QApplication::translate("Widget", "CM", 0));
        label_17->setText(QApplication::translate("Widget", "pair_poles", 0));
        STOP1_2->setText(QApplication::translate("Widget", "STOP", 0));
        label_18->setText(QApplication::translate("Widget", "Velocity,rpm", 0));
        label_19->setText(QApplication::translate("Widget", "Current, A", 0));
        label_20->setText(QApplication::translate("Widget", "Angle, deg", 0));
        label_21->setText(QApplication::translate("Widget", "ID", 0));
        label_22->setText(QApplication::translate("Widget", "Velocity,rpm", 0));
        label_23->setText(QApplication::translate("Widget", "Current, A", 0));
        label_24->setText(QApplication::translate("Widget", "Angle, deg", 0));
        label_25->setText(QApplication::translate("Widget", "ID", 0));
        label_26->setText(QApplication::translate("Widget", "Velocity,rpm", 0));
        label_27->setText(QApplication::translate("Widget", "Current, A", 0));
        label_28->setText(QApplication::translate("Widget", "Angle, deg", 0));
        label_29->setText(QApplication::translate("Widget", "ID", 0));
        STOP1_3->setText(QApplication::translate("Widget", "STOP", 0));
        STOP1_4->setText(QApplication::translate("Widget", "STOP", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
