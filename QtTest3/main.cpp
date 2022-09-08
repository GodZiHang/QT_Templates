// signal & slot
#include <QCoreApplication>
#include "Sender.h"
#include "Receiver.h"

int main(int argc, char *argv[])
{
    Sender senderObj;
    Receiver receiverObj;

    senderObj.incAge();

    QObject::connect(&senderObj, &Sender::ageChanged, &receiverObj, &Receiver::ageChanged);

    senderObj.incAge();
    senderObj.incAge();

    QObject::disconnect(&senderObj, &Sender::ageChanged, &receiverObj, &Receiver::ageChanged);

    senderObj.incAge();
    QCoreApplication a(argc, argv);

    return a.exec();
}
