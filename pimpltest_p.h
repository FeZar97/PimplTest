#ifndef PIMPLTEST_P_H
#define PIMPLTEST_P_H

#include "pimpltest.h"

class PimplTestPrivate
{
    Q_DECLARE_PUBLIC(PimplTest);

public:
    PimplTestPrivate();
    virtual ~PimplTestPrivate();

    void privateFoo();
    int i;
    PimplTest* q_ptr;
};

#endif // PIMPLTEST_P_H
