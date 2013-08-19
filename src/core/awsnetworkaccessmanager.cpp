#include "awsnetworkaccessmanager.h"
#include "awsnetworkaccessmanager_p.h"
#include "awsabstractsignature.h"
#include "awssignaturev2.h"
#include "awssignaturev3.h"
#include "awssignaturev4.h"

#include "awsbasiccredentials.h" /// @todo  Temporary / remove.

#include <QtNetwork/QNetworkReply>

QTAWS_BEGIN_NAMESPACE

AwsNetworkAccessManager::AwsNetworkAccessManager(
        const SignatureVersion signatureVersion,
        QObject * const parent
) : QNetworkAccessManager(parent), d_ptr(new AwsNetworkAccessManagerPrivate(this))
{
    Q_D(AwsNetworkAccessManager);
    d->signatureVersion = signatureVersion;
}

AwsNetworkAccessManager::SignatureVersion AwsNetworkAccessManager::signatureVersion() const {
    Q_D(const AwsNetworkAccessManager);
    return d->signatureVersion;
}

void AwsNetworkAccessManager::setSignatureVersion(const SignatureVersion signatureVersion) {
    Q_D(AwsNetworkAccessManager);
    d->signatureVersion = signatureVersion;
    emit versionChanged(d->signatureVersion);
}


QNetworkReply * AwsNetworkAccessManager::createRequest(
        Operation operation, const QNetworkRequest &request, QIODevice * data
) {
    AwsAbstractSignature * signature = NULL;
    switch (signatureVersion()) {
        case SignatureV2: signature = new AwsSignatureV2(this); break;
        case SignatureV3: signature = new AwsSignatureV3(this); break;
        case SignatureV4: signature = new AwsSignatureV4(this); break;
        default:
            Q_ASSERT_X(false, "AwsNetworkAccessManager::createRequest", "invalid SignatureVersion");
    }
    Q_ASSERT(signature != NULL);

    QNetworkRequest thisRequest = request;
    if (signature != NULL) {
        /// @todo  Track the real credentials, including refreshing if necessary.
        AwsBasicCredentials credentials(QString::fromLatin1(""), QString::fromLatin1(""));
        signature->sign(operation, thisRequest, data, credentials);
    }
    return QNetworkAccessManager::createRequest(operation, thisRequest, data);
}

AwsNetworkAccessManagerPrivate::AwsNetworkAccessManagerPrivate(AwsNetworkAccessManager * const q) : q_ptr(q) { }

QTAWS_END_NAMESPACE
