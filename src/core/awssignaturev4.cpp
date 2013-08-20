#include "awssignaturev4.h"
#include "awssignaturev4_p.h"

QTAWS_BEGIN_NAMESPACE

AwsSignatureV4::AwsSignatureV4() : d_ptr(new AwsSignatureV4Private(this)) {

}

void AwsSignatureV4::sign(const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request,
                          const AwsAbstractCredentials &credentials,
                          const QByteArray &data
) const {
    Q_UNUSED(operation)
    Q_UNUSED(request)
    Q_UNUSED(data)
    Q_UNUSED(credentials)

    Q_ASSERT_X(false, "AwsSignatureV4::sign", "Not implemented");

    //Q_D(AwsBasicCredentials);
    //return d->accessKeyId;
}

AwsSignatureV4Private::AwsSignatureV4Private(AwsSignatureV4 * const q) : q_ptr(q) { }

QTAWS_END_NAMESPACE
