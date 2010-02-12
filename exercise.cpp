#include "exercise.h"

Exercise::Exercise(QObject *parent)
    : QObject(parent)
{
    currentIntensity = LowIntensity;
    currentLength = 0;
    currentDate.setDate(1, 1, 2000);
}

void Exercise::setIntensity(Intensity intensity) {

    emit intensityChanged(currentIntensity);
}

void Exercise::setLength(int length) {

    emit lengthChanged(currentLength);
}

void Exercise::setDate(QDate date) {

    emit dateChanged(currentDate);
}
