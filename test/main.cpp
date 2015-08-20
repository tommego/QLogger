#include <QCoreApplication>
#include "logmanager.h"
#include "Logger.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LogManager::instance()->debug_log_console_on();
    qDebug() << "Use qDebug";
    qWarning() << "Use qWarning";
    qCritical() << "Use qCritical";
    LOG_INFO() << LogManager::instance()->getlogFilePath();
    LOG_TRACE() << "Use LOG_DEBUG";
    LOG_DEBUG() << "Use LOG_DEBUG";
    LOG_INFO() << "Use LOG_INFO";
    LOG_WARNING() << "Use Warning";
    LOG_ERROR() << "Use LOG_ERROR";
    LOG_FATAL() << "Use LOG_FATAL";

    return a.exec();
}
