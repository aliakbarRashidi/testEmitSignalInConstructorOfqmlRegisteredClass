#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <myresource.h>

int main(int argc, char *argv[])
{
QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

QGuiApplication app(argc, argv);

qmlRegisterType<MyResource>("My.Company.Core", 1, 0, "MyResource");

QQmlApplicationEngine engine;
engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
if (engine.rootObjects().isEmpty())
return -1;

return app.exec();
}
