#include <QObject>
#ifndef RECEIVER_H
#define RECEIVER_H
class Receiver: public QObject
{
    Q_OBJECT;
public:
    explicit Receiver(QObject *parent = nullptr);
public slots:
    void ageChanged(int age);
};

#endif // RECEIVER_H
