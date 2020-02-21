#include "pimpltest.h"
#include "pimpltest_p.h"

PimplTestPrivate::PimplTestPrivate()
{}

PimplTestPrivate::~PimplTestPrivate()
{}

void PimplTestPrivate::privateFoo() {
    Q_Q(PimplTest);
    emit(q->publicSignal(i));
}

PimplTest::PimplTest(QObject *parent):QObject(parent), d_ptr(new PimplTestPrivate()) {
    Q_D(PimplTest);
    d->q_ptr = this;
}

PimplTest::PimplTest(PimplTestPrivate &dd, QObject * parent):QObject(parent), d_ptr(&dd) {
    Q_D(PimplTest);
    d->q_ptr = this;
}

int PimplTest::publicFoo() const {
    Q_D(const PimplTest);
    return d->i;
}
