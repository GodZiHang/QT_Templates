/*
 * 对象的创建、挂载与销毁
 */
#include <QCoreApplication>

class A: public QObject
{
public:
    A(QObject *parent = nullptr);
    ~A(){qDebug()<<this<<"被销毁";};
};

A::A(QObject *parent):QObject(parent)
{
    qDebug()<<this<<"被构造";
}

int main(int argc, char* argv[])
{
    A objA;
    // A objAcopy(objA); 不允许拷贝构造
    A *objA2 = new A(&objA); // 可以使用指针
    A *objA3 = new A(objA2);
    objA2->setObjectName("A2");
    objA3->setObjectName("A3");
    //objA  = *objA2; 不允许使用赋值运算符
    objA.dumpObjectTree();
    qDebug()<<"objA2:"<<objA2;
}
