#ifndef PIMPLTEST_H
#define PIMPLTEST_H

#include <QObject>
#include "PimplTest_global.h"

class PimplTestPrivate;
class PIMPLTEST_EXPORT PimplTest: public QObject
{
    Q_OBJECT

public:
    explicit PimplTest(QObject* parent = nullptr);

    int publicFoo() const;

protected:
    PimplTestPrivate* const d_ptr;
    PimplTest(PimplTestPrivate &dd, QObject * parent);

private:
    Q_DECLARE_PRIVATE(PimplTest);

signals:
    void publicSignal(int);
};

#endif // PIMPLTEST_H
