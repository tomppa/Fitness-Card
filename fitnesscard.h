#ifndef FITNESSCARD_H
#define FITNESSCARD_H

#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QComboBox>
#include <QtGui/QLineEdit>
#include <QtGui/QCalendarWidget>
#include <QtGui/QMenuBar>
#include <QtGui/QMenu>
#include <QtGui/QAction>

namespace Ui
{
    class FitnessCard;
}

class FitnessCard : public QMainWindow
{
    Q_OBJECT

public:
    FitnessCard(QWidget *parent = 0);
    ~FitnessCard();

public slots:
    void addExercise();
    void viewExercises();

    void newFitnessCard();
    void saveFitnessCard();
    void loadFitnessCard();
    void aboutFitnessCard();

private:
    Ui::FitnessCard *ui;

    QPushButton *addButton;

    QComboBox *viewSelect;
    QComboBox *typeSelect;
    QComboBox *intensitySelect;

    QCalendarWidget *calendarWidget;

    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;

    QAction *newAction;
    QAction *saveAction;
    QAction *loadAction;
    QAction *quitAction;
    QAction *aboutAction;

    QLineEdit *lengthLine;
};

#endif // FITNESSCARD_H
