#ifndef AWSSIGNATUREV2_P_H
#define AWSSIGNATUREV2_P_H

#include "qtawsglobal.h"

#include <QString>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV2;

/// @private
class QTAWS_EXPORT AwsSignatureV2Private {
    Q_DECLARE_PUBLIC(AwsSignatureV2)

public:
    AwsSignatureV2Private(AwsSignatureV2 * const q);

private:
    AwsSignatureV2 * const q_ptr;

};

QTAWS_END_NAMESPACE

#endif
