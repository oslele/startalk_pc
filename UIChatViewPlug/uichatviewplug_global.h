#ifndef UICHATVIEW_GLOBAL_H
#define UICHATVIEW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(UICHATVIEW_LIBRARY)
#  define UICHATVIEWSHARED_EXPORT Q_DECL_EXPORT
#else
#  define UICHATVIEWSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // UICHATVIEW_GLOBAL_H
