#include "fitnesscard.h"
#include "ui_fitnesscard.h"

FitnessCard::FitnessCard(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::FitnessCard)
{
    ui->setupUi(this);

    typeSelect = new QComboBox;
    typeSelect = ui->typeSelect;

    lengthLine = new QLineEdit;
    lengthLine = ui->lengthLine;

    intensitySelect = new QComboBox;
    intensitySelect = ui->intensitySelect;

    calendarWidget = new QCalendarWidget;
    calendarWidget = ui->calendarWidget;

    addButton = new QPushButton;
    addButton = ui->addButton;

    menuBar = new QMenuBar;
    menuBar = ui->menuBar;

    menuFile = new QMenu;
    menuFile = ui->menuFile;

    menuHelp = new QMenu;
    menuHelp = ui->menuHelp;

    newAction = new QAction(menuFile);
    newAction = ui->actionNew;

    saveAction = new QAction(menuFile);
    saveAction = ui->actionSave;

    loadAction = new QAction(menuFile);
    loadAction = ui->actionLoad;

    quitAction = new QAction(menuFile);
    quitAction = ui->actionQuit;

    aboutAction = new QAction(menuHelp);
    aboutAction = ui->actionAbout;

    connect(addButton, SIGNAL(clicked()), this, SLOT(addExercise()));
    connect(newAction, SIGNAL(triggered()), this, SLOT(newFitnessCard()));
    connect(saveAction, SIGNAL(triggered()), this, SLOT(saveFitnessCard()));
    connect(loadAction, SIGNAL(triggered()), this, SLOT(loadFitnessCard()));
    connect(quitAction, SIGNAL(triggered()), this, SLOT(close()));
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(aboutFitnessCard()));
}

FitnessCard::~FitnessCard()
{
    delete ui;
}

void FitnessCard::addExercise() {

}

void FitnessCard::viewExercises() {

}

void FitnessCard::newFitnessCard() {

}

void FitnessCard::saveFitnessCard() {

}

void FitnessCard::loadFitnessCard() {

}

void FitnessCard::aboutFitnessCard() {

}
