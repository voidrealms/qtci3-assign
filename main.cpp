#include <QCoreApplication>
#include <QDebug>
#include <QSettings>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   
    QSettings setting("MyCompany","MyApp");
    settings.setValue("key", 123);

    settings.beginGroup("test");
    settings.setValue("key", 456);
    settings.endGroup();

    settings.sync();

    qInfo() << settings.value("key");

    settings.beginGroup("test");
    qInfo() << settings.value("key");
    settings.endGroup();

    return a.exec();
}
