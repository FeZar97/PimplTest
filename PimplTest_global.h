#ifndef PIMPLTEST_GLOBAL_H
#define PIMPLTEST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PIMPLTEST_LIBRARY)
#  define PIMPLTEST_EXPORT Q_DECL_EXPORT
#else
#  define PIMPLTEST_EXPORT Q_DECL_IMPORT
#endif

#endif // PIMPLTEST_GLOBAL_H
