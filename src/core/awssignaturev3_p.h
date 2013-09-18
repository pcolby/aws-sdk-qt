#ifndef AWSSIGNATUREV3_P_H
#define AWSSIGNATUREV3_P_H

#include "qtawsglobal.h"

#include <QString>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV3;

class QTAWS_EXPORT AwsSignatureV3Private {
    Q_DECLARE_PUBLIC(AwsSignatureV3)

public:
    AwsSignatureV3Private(AwsSignatureV3 * const q);

private:
    AwsSignatureV3 * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsSignatureV3;
};

QTAWS_END_NAMESPACE

#endif
