/********************************************************************************
** Form generated from reading UI file 'unsplash_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNSPLASH_GUI_H
#define UI_UNSPLASH_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Unsplash_GUIClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *refreshLabel;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *intervalComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *resLabel;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *resComboBox;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *saveLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *defaultSaveButton;
    QPushButton *changeFolderButton;
    QLabel *saveFolderDisp;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *aboutButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Unsplash_GUIClass)
    {
        if (Unsplash_GUIClass->objectName().isEmpty())
            Unsplash_GUIClass->setObjectName(QStringLiteral("Unsplash_GUIClass"));
        Unsplash_GUIClass->resize(484, 274);
        centralWidget = new QWidget(Unsplash_GUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        refreshLabel = new QLabel(centralWidget);
        refreshLabel->setObjectName(QStringLiteral("refreshLabel"));
        QFont font;
        font.setPointSize(12);
        refreshLabel->setFont(font);

        horizontalLayout->addWidget(refreshLabel);

        horizontalSpacer_6 = new QSpacerItem(77, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        intervalComboBox = new QComboBox(centralWidget);
        intervalComboBox->setObjectName(QStringLiteral("intervalComboBox"));
        intervalComboBox->setEnabled(true);
        intervalComboBox->setMinimumSize(QSize(80, 20));
        intervalComboBox->setEditable(false);

        horizontalLayout->addWidget(intervalComboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        resLabel = new QLabel(centralWidget);
        resLabel->setObjectName(QStringLiteral("resLabel"));
        resLabel->setFont(font);

        horizontalLayout_2->addWidget(resLabel);

        horizontalSpacer_5 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        resComboBox = new QComboBox(centralWidget);
        resComboBox->setObjectName(QStringLiteral("resComboBox"));
        resComboBox->setMinimumSize(QSize(80, 20));

        horizontalLayout_2->addWidget(resComboBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        saveLabel = new QLabel(centralWidget);
        saveLabel->setObjectName(QStringLiteral("saveLabel"));
        saveLabel->setFont(font);

        horizontalLayout_3->addWidget(saveLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        defaultSaveButton = new QPushButton(centralWidget);
        defaultSaveButton->setObjectName(QStringLiteral("defaultSaveButton"));

        horizontalLayout_3->addWidget(defaultSaveButton);

        changeFolderButton = new QPushButton(centralWidget);
        changeFolderButton->setObjectName(QStringLiteral("changeFolderButton"));
        changeFolderButton->setEnabled(true);

        horizontalLayout_3->addWidget(changeFolderButton);


        verticalLayout->addLayout(horizontalLayout_3);

        saveFolderDisp = new QLabel(centralWidget);
        saveFolderDisp->setObjectName(QStringLiteral("saveFolderDisp"));
        saveFolderDisp->setFont(font);

        verticalLayout->addWidget(saveFolderDisp);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        aboutButton = new QPushButton(centralWidget);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));

        horizontalLayout_4->addWidget(aboutButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        refreshButton = new QPushButton(centralWidget);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        horizontalLayout_4->addWidget(refreshButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout_4->addWidget(exitButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        Unsplash_GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Unsplash_GUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 484, 21));
        Unsplash_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Unsplash_GUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Unsplash_GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Unsplash_GUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Unsplash_GUIClass->setStatusBar(statusBar);

        retranslateUi(Unsplash_GUIClass);
        QObject::connect(aboutButton, SIGNAL(clicked()), Unsplash_GUIClass, SLOT(on_About_clicked()));
        QObject::connect(refreshButton, SIGNAL(clicked()), Unsplash_GUIClass, SLOT(on_Refresh_clicked()));
        QObject::connect(resComboBox, SIGNAL(currentTextChanged(QString)), Unsplash_GUIClass, SLOT(on_Res_changed()));
        QObject::connect(intervalComboBox, SIGNAL(currentTextChanged(QString)), Unsplash_GUIClass, SLOT(on_Interval_changed()));
        QObject::connect(defaultSaveButton, SIGNAL(clicked()), Unsplash_GUIClass, SLOT(on_defaultSave_clicked()));
        QObject::connect(changeFolderButton, SIGNAL(clicked()), Unsplash_GUIClass, SLOT(on_changeSave_clicked()));
        QObject::connect(exitButton, SIGNAL(clicked()), Unsplash_GUIClass, SLOT(on_exit_clicked()));

        QMetaObject::connectSlotsByName(Unsplash_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Unsplash_GUIClass)
    {
        Unsplash_GUIClass->setWindowTitle(QApplication::translate("Unsplash_GUIClass", "Unsplash_GUI", 0));
        refreshLabel->setText(QApplication::translate("Unsplash_GUIClass", "Refresh interval (hour)", 0));
        intervalComboBox->clear();
        intervalComboBox->insertItems(0, QStringList()
         << QApplication::translate("Unsplash_GUIClass", "5 min", 0)
         << QApplication::translate("Unsplash_GUIClass", "10 min", 0)
         << QApplication::translate("Unsplash_GUIClass", "15 min", 0)
         << QApplication::translate("Unsplash_GUIClass", "30 min", 0)
         << QApplication::translate("Unsplash_GUIClass", "1 hour", 0)
         << QApplication::translate("Unsplash_GUIClass", "2 hour", 0)
         << QApplication::translate("Unsplash_GUIClass", "4 hour", 0)
         << QApplication::translate("Unsplash_GUIClass", "6 hour", 0)
         << QApplication::translate("Unsplash_GUIClass", "12 hour", 0)
         << QApplication::translate("Unsplash_GUIClass", "1 day", 0)
         << QApplication::translate("Unsplash_GUIClass", "Custom", 0)
        );
        intervalComboBox->setCurrentText(QApplication::translate("Unsplash_GUIClass", "5 min", 0));
        resLabel->setText(QApplication::translate("Unsplash_GUIClass", "Wallpaper resolution", 0));
        resComboBox->clear();
        resComboBox->insertItems(0, QStringList()
         << QApplication::translate("Unsplash_GUIClass", "Auto", 0)
         << QApplication::translate("Unsplash_GUIClass", "1280x720", 0)
         << QApplication::translate("Unsplash_GUIClass", "1280x800", 0)
         << QApplication::translate("Unsplash_GUIClass", "1440x810", 0)
         << QApplication::translate("Unsplash_GUIClass", "1440x900", 0)
         << QApplication::translate("Unsplash_GUIClass", "1920x1080", 0)
         << QApplication::translate("Unsplash_GUIClass", "1920x1200", 0)
         << QApplication::translate("Unsplash_GUIClass", "2560x1440", 0)
         << QApplication::translate("Unsplash_GUIClass", "2560x1600", 0)
         << QApplication::translate("Unsplash_GUIClass", "3440x1440", 0)
         << QApplication::translate("Unsplash_GUIClass", "3840x2160", 0)
        );
        saveLabel->setText(QApplication::translate("Unsplash_GUIClass", "Folder for saved wallpapers", 0));
        defaultSaveButton->setText(QApplication::translate("Unsplash_GUIClass", "Default", 0));
        changeFolderButton->setText(QApplication::translate("Unsplash_GUIClass", "Change", 0));
        saveFolderDisp->setText(QString());
        aboutButton->setText(QApplication::translate("Unsplash_GUIClass", "About", 0));
        refreshButton->setText(QApplication::translate("Unsplash_GUIClass", "Refresh now", 0));
        exitButton->setText(QApplication::translate("Unsplash_GUIClass", "Hide", 0));
    } // retranslateUi

};

namespace Ui {
    class Unsplash_GUIClass: public Ui_Unsplash_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNSPLASH_GUI_H