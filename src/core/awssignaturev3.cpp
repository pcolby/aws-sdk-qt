#include "awssignaturev3.h"
#include "awssignaturev3_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsSignatureV3
 *
 * @brief  Implements AWS Signature Version 3.
 *
 * @note   Signature Version 3 has been discontinued by Amazon, but is included here for posterity.
 *
 * @warning  This class has not been implemented yet!
 */

AwsSignatureV3::AwsSignatureV3() : d_ptr(new AwsSignatureV3Private(this)) {

}

/**
 * @brief AwsSignatureV3 destructor.
 */
AwsSignatureV3::~AwsSignatureV3()
{
    delete d_ptr;
}

void AwsSignatureV3::sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                          QNetworkRequest &request, const QByteArray &data) const
{
    Q_UNUSED(operation)
    Q_UNUSED(request)
    Q_UNUSED(data)
    Q_UNUSED(credentials)

    Q_ASSERT_X(false, "AwsSignatureV3::sign", "Not implemented");

    //Q_D(AwsBasicCredentials);
    //return d->accessKeyId;
}

/**
 * @internal
 *
 * @class  AwsSignatureV3Private
 *
 * @brief  Private implementation for AwsSignatureV3.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/**
 * @brief  Constructs a new AwsSignatureV3Private object.
 *
 * @param  q  Pointer to this object's public AwsSignatureV3 instance.
 */
AwsSignatureV3Private::AwsSignatureV3Private(AwsSignatureV3 * const q) : q_ptr(q) { }

QTAWS_END_NAMESPACE
