/********************************************************************************
** Form generated from reading ui file 'fitnesscard.ui'
**
** Created: Fri Feb 5 15:31:26 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FITNESSCARD_H
#define UI_FITNESSCARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FitnessCard
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionLoad;
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *exercisesTabWidget;
    QWidget *viewExercisesTab;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QComboBox *viewSelect;
    QLabel *viewLabel;
    QSpacerItem *verticalSpacer;
    QTableView *exerciseTable;
    QWidget *addExerciseTab;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *typeLabel;
    QComboBox *typeSelect;
    QLabel *lengthLabel;
    QLineEdit *lengthLine;
    QLabel *intensityLabel;
    QComboBox *intensitySelect;
    QPushButton *addButton;
    QCalendarWidget *calendarWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FitnessCard)
    {
        if (FitnessCard->objectName().isEmpty())
            FitnessCard->setObjectName(QString::fromUtf8("FitnessCard"));
        FitnessCard->resize(555, 308);
        actionNew = new QAction(FitnessCard);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionSave = new QAction(FitnessCard);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionLoad = new QAction(FitnessCard);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionQuit = new QAction(FitnessCard);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(FitnessCard);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(FitnessCard);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        exercisesTabWidget = new QTabWidget(centralWidget);
        exercisesTabWidget->setObjectName(QString::fromUtf8("exercisesTabWidget"));
        exercisesTabWidget->setGeometry(QRect(0, 0, 554, 244));
        viewExercisesTab = new QWidget();
        viewExercisesTab->setObjectName(QString::fromUtf8("viewExercisesTab"));
        horizontalLayout_2 = new QHBoxLayout(viewExercisesTab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setMargin(11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        viewSelect = new QComboBox(viewExercisesTab);
        viewSelect->setObjectName(QString::fromUtf8("viewSelect"));

        gridLayout_2->addWidget(viewSelect, 0, 1, 1, 1);

        viewLabel = new QLabel(viewExercisesTab);
        viewLabel->setObjectName(QString::fromUtf8("viewLabel"));

        gridLayout_2->addWidget(viewLabel, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        exerciseTable = new QTableView(viewExercisesTab);
        exerciseTable->setObjectName(QString::fromUtf8("exerciseTable"));

        horizontalLayout_2->addWidget(exerciseTable);

        exercisesTabWidget->addTab(viewExercisesTab, QString());
        addExerciseTab = new QWidget();
        addExerciseTab->setObjectName(QString::fromUtf8("addExerciseTab"));
        horizontalLayout = new QHBoxLayout(addExerciseTab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setMargin(11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        typeLabel = new QLabel(addExerciseTab);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        gridLayout->addWidget(typeLabel, 0, 0, 1, 1);

        typeSelect = new QComboBox(addExerciseTab);
        typeSelect->setObjectName(QString::fromUtf8("typeSelect"));

        gridLayout->addWidget(typeSelect, 0, 1, 1, 1);

        lengthLabel = new QLabel(addExerciseTab);
        lengthLabel->setObjectName(QString::fromUtf8("lengthLabel"));

        gridLayout->addWidget(lengthLabel, 1, 0, 1, 1);

        lengthLine = new QLineEdit(addExerciseTab);
        lengthLine->setObjectName(QString::fromUtf8("lengthLine"));

        gridLayout->addWidget(lengthLine, 1, 1, 1, 1);

        intensityLabel = new QLabel(addExerciseTab);
        intensityLabel->setObjectName(QString::fromUtf8("intensityLabel"));

        gridLayout->addWidget(intensityLabel, 2, 0, 1, 1);

        intensitySelect = new QComboBox(addExerciseTab);
        intensitySelect->setObjectName(QString::fromUtf8("intensitySelect"));

        gridLayout->addWidget(intensitySelect, 2, 1, 1, 1);

        addButton = new QPushButton(addExerciseTab);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 3, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        calendarWidget = new QCalendarWidget(addExerciseTab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        horizontalLayout->addWidget(calendarWidget);

        exercisesTabWidget->addTab(addExerciseTab, QString());
        FitnessCard->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FitnessCard);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 555, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        FitnessCard->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FitnessCard);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        FitnessCard->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FitnessCard);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        FitnessCard->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(FitnessCard);

        exercisesTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FitnessCard);
    } // setupUi

    void retranslateUi(QMainWindow *FitnessCard)
    {
        FitnessCard->setWindowTitle(QApplication::translate("FitnessCard", "FitnessCard", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("FitnessCard", "New", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("FitnessCard", "Save", 0, QApplication::UnicodeUTF8));
        actionLoad->setText(QApplication::translate("FitnessCard", "Load", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("FitnessCard", "Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("FitnessCard", "About", 0, QApplication::UnicodeUTF8));
        viewSelect->clear();
        viewSelect->insertItems(0, QStringList()
         << QApplication::translate("FitnessCard", "1 week", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "2 weeks", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "1 month", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "2 months", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "3 months", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "6 months", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "1 year", 0, QApplication::UnicodeUTF8)
        );
        viewLabel->setText(QApplication::translate("FitnessCard", "View length:", 0, QApplication::UnicodeUTF8));
        exercisesTabWidget->setTabText(exercisesTabWidget->indexOf(viewExercisesTab), QApplication::translate("FitnessCard", "View Exercises", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("FitnessCard", "Exercise type:", 0, QApplication::UnicodeUTF8));
        typeSelect->clear();
        typeSelect->insertItems(0, QStringList()
         << QApplication::translate("FitnessCard", "Running", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "Skiing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "Bicycling", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "Badminton", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "Tennis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "Swimming", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "Walking", 0, QApplication::UnicodeUTF8)
        );
        lengthLabel->setText(QApplication::translate("FitnessCard", "Length:", 0, QApplication::UnicodeUTF8));
        intensityLabel->setText(QApplication::translate("FitnessCard", "Intensity:", 0, QApplication::UnicodeUTF8));
        intensitySelect->clear();
        intensitySelect->insertItems(0, QStringList()
         << QApplication::translate("FitnessCard", "High", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "Medium", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FitnessCard", "Low", 0, QApplication::UnicodeUTF8)
        );
        addButton->setText(QApplication::translate("FitnessCard", "Add", 0, QApplication::UnicodeUTF8));
        exercisesTabWidget->setTabText(exercisesTabWidget->indexOf(addExerciseTab), QApplication::translate("FitnessCard", "Add exercise", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("FitnessCard", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("FitnessCard", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FitnessCard: public Ui_FitnessCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FITNESSCARD_H
