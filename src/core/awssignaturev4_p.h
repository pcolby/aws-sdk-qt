#ifndef AWSSIGNATUREV4_P_H
#define AWSSIGNATUREV4_P_H

#include "qtawsglobal.h"

#include <QString>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV4;

/// @private
class QTAWS_EXPORT AwsSignatureV4Private {
    Q_DECLARE_PUBLIC(AwsSignatureV4)

public:
    AwsSignatureV4Private(AwsSignatureV4 * const q);

private:
    AwsSignatureV4 * const q_ptr;
    friend class TestAwsSignatureV4;
};

QTAWS_END_NAMESPACE

#endif
