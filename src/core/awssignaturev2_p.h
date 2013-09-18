#ifndef AWSSIGNATUREV2_P_H
#define AWSSIGNATUREV2_P_H

#include "qtawsglobal.h"

#include <QCryptographicHash>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV2;

class QTAWS_EXPORT AwsSignatureV2Private {
    Q_DECLARE_PUBLIC(AwsSignatureV2)

public:
    QCryptographicHash::Algorithm hashAlgorithm; ///< Hash algorithm to use when signing.

    AwsSignatureV2Private(AwsSignatureV2 * const q);

    QByteArray canonicalRequest(const QNetworkAccessManager::Operation operation, const QUrl &url) const;

private:
    AwsSignatureV2 * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsSignatureV2;
};

QTAWS_END_NAMESPACE

#endif
