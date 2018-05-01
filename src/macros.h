#ifndef MACROS_H

#define UNUSED(x) (void)(x)

#include "arenatracker.h"
#include "logger.h"

#include <QApplication>
#include <QDebug>

#define LOGI(msg) \
if(qApp){ \
    ((ArenaTracker*) qApp->instance())->logger->logI(__PRETTY_FUNCTION__, __LINE__, msg); \
} else { \
    QString prettyFunction = QString(__PRETTY_FUNCTION__); \
    QString function = prettyFunction.left(prettyFunction.indexOf("::")); \
    qDebug() << QString("%1:%2 - %3").arg(function).arg(__LINE__).arg(msg); \
}

#define LOGD(msg) \
if(qApp){ \
    ((ArenaTracker*) qApp->instance())->logger->logD(__PRETTY_FUNCTION__, __LINE__, msg); \
} else { \
    QString prettyFunction = QString(__PRETTY_FUNCTION__); \
    QString function = prettyFunction.left(prettyFunction.indexOf("::")); \
    qDebug() << QString("%1:%2 - %3").arg(function).arg(__LINE__).arg(msg); \
}

#define LOGW(msg) \
if(qApp){ \
    ((ArenaTracker*) qApp->instance())->logger->logW(__PRETTY_FUNCTION__, __LINE__, msg); \
} else { \
    QString prettyFunction = QString(__PRETTY_FUNCTION__); \
    QString function = prettyFunction.left(prettyFunction.indexOf("::")); \
    qDebug() << QString("%1:%2 - %3").arg(function).arg(__LINE__).arg(msg); \
}

#define DELETE(__CLASSNAME__) \
if(__CLASSNAME__){ \
    delete __CLASSNAME__; \
    __CLASSNAME__ = NULL; \
} \

#endif // MACROS_H
