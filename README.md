#### Qt 日志模块的使用

### 使用步骤
+ 拷贝**[cutelogger]**目录到自己的项目工程
+ 在自己的工程文件中添加如下代码

		include(../cutelogger/cutelogger.pri)

+ 在main.cpp中引入头文件
	
		#include "logmanager.h"
		#include "Logger.h"

+ 在main函数内部启动logmanager实例，debug模式log输出到终端和文件，release模式下log仅仅输出到文件

		LogManager::instance()->debug_log_console_on();

#### 代码示例
	
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

###高级用法
+  完全兼容Qt原生的 日志打印用法

		qDebug()  <==> LOG_DEBUG()
	    qWarning()  <==> LOG_WARNING()
	    qCritical()  <==> LOG_ERROR();
+  参照loggermanager的使用基本用法，加以拓展
+  阅读cutelogger的源码获取更多的使用方法

参考第三方库：https://github.com/dept2/CuteLogger	
>**Logger: simple, convinient and thread safe logger for Qt-based C++ apps**
