#include <QCoreApplication>
#include "appcustomconfig.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    AppCustomConfig appInstance;
    // 读一遍
    if(!appInstance.initAndReadConf(QCoreApplication::applicationDirPath() + "/app.conf","daodaoliang")){
        qDebug()<<"读取配置文件失败";
    }
    appInstance.releaseConf();
    // 再读一遍
    if(!appInstance.initAndReadConf(QCoreApplication::applicationDirPath() + "/app.conf","daodaoliang")){
        qDebug()<<"读取配置文件失败";
    }
    appInstance.releaseConf();
    return a.exec();
}
