#ifndef EXERCISE_H
#define EXERCISE_H

#include <QObject>
#include <QDate>

class Exercise : public QObject
{
public:
    Exercise(QObject *parent = 0);
    enum Intensity { HighIntensity, MediumIntensity, LowIntensity };

    Intensity intensity() const { return currentIntensity; }
    int length()    const { return currentLength; }
    QDate date()    const { return currentDate; }

public slots:
    void setIntensity(Intensity intensity);
    void setLength(int length);
    void setDate(QDate date);

signals:
    void intensityChanged(Intensity newIntensity);
    void lengthChanged(int newLength);
    void dateChanged(QDate date);

private:
    Intensity currentIntensity;
    int currentLength;
    QDate currentDate;
};

#endif // EXERCISE_H
