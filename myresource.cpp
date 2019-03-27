#include "myresource.h"
#include <QDebug>

MyResource::MyResource(QObject *parent) : QObject(parent)
{
    if(!openResource()) {
        // qDebug() << "Check Permission of FileSystem For Example.";
        emit openResourceFailed("Check Permission of FileSystem For Example.");
    }
}

bool MyResource::openResource()
{
    // on situation opening resource failed
    return false;
}
