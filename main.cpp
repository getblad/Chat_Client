#include "ChatClient.h"
#include <QtWidgets/QApplication>
#include <plog/Log.h> 
#include <plog/Initializers/RollingFileInitializer.h>

int main(int argc, char* argv[])
{
    plog::init(plog::debug, "log.txt", 1000000, 5);
    PLOGD << "CLient application starting. Logging is enabled.";

    QApplication a(argc, argv);
    ChatClient w;
    w.startClient();
    w.show();
    return a.exec();
}

