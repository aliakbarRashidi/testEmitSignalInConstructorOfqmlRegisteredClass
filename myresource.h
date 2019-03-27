#ifndef MYRESOURCE_H
#define MYRESOURCE_H

#include <QObject>

class MyResource : public QObject
{
Q_OBJECT
public:
explicit MyResource(QObject *parent = nullptr);
bool openResource();

signals:
    void openResourceFailed(QString error);

public slots:
};

#endif // MYRESOURCE_H
