#include <QObject>
#ifndef SENDER_H
#define SENDER_H
class Sender: public QObject
{
    Q_OBJECT;
public:
    explicit Sender(QObject *parent = nullptr);

private:
    int m_age = 10;
public:
    void incAge();
signals:
    void ageChanged(int value);
};

#endif // SENDER_H
