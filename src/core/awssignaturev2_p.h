#ifndef AWSSIGNATUREV2_P_H
#define AWSSIGNATUREV2_P_H

#include "qtawsglobal.h"

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV2;

/// @private
class QTAWS_EXPORT AwsSignatureV2Private {
    Q_DECLARE_PUBLIC(AwsSignatureV2)

public:
    AwsSignatureV2Private(AwsSignatureV2 * const q);

    QString canonicalRequest(const QNetworkAccessManager::Operation operation, const QUrl &url) const;

protected:
    QString canonicalPath(const QUrl &url) const;
    QString canonicalQuery(const QUrlQuery &query) const;
    QString toString(const QNetworkAccessManager::Operation operation) const;

private:
    AwsSignatureV2 * const q_ptr;
    friend class TestAwsSignatureV2;
};

QTAWS_END_NAMESPACE

#endif
