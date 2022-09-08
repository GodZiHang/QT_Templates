#include "Receiver.h"
#include <QDebug>

Receiver::Receiver(QObject *parent) : QObject{parent}
{

}

void Receiver::ageChanged(int age) {
    qDebug() << "age:" << age;
}
