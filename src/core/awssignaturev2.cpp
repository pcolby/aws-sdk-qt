#include "awssignaturev2.h"
#include "awssignaturev2_p.h"

QTAWS_BEGIN_NAMESPACE

AwsSignatureV2::AwsSignatureV2() : d_ptr(new AwsSignatureV2Private(this)) {

}

void AwsSignatureV2::sign(const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request,
                          const AwsAbstractCredentials &credentials,
                          const QByteArray &data
) const {
    Q_UNUSED(operation)
    Q_UNUSED(request)
    Q_UNUSED(data)
    Q_UNUSED(credentials)

    Q_ASSERT_X(false, "AwsSignatureV2::sign", "Not implemented");

    //Q_D(AwsBasicCredentials);
    //return d->accessKeyId;
}

AwsSignatureV2Private::AwsSignatureV2Private(AwsSignatureV2 * const q) : q_ptr(q) { }

QTAWS_END_NAMESPACE
