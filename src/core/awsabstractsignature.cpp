#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractSignature
 *
 * @brief  Interface class for providing AWS signatures.
 */

/**
 * @brief  AwsAbstractSignature destructor.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractSignature::~AwsAbstractSignature() { }

/**
 * @fn     void AwsAbstractSignature::sign() const
 *
 * @brief  Sign an AWS request.
 *
 * Note, \a credentials must be valid before calling this function.  So, for
 * example, if \a credentials has expired, and is refreshable, it is the
 * caller's responsibility to refresh the credentials before calling this
 * function.
 *
 * @param  operation     The network operation to sign \a request for.
 * @param  request       The network request to be signed.
 * @param  credentials   The credentials to use for signing.
 * @param  data          Optional POST / PUT data to sign \a request for.
 */

// CanonicalURI or
QString AwsAbstractSignature::canonicalPath(const QUrl &url) const
{
    QString path = url.path(QUrl::FullyEncoded);
    if (path.isEmpty()) {
        path = QLatin1Char('/');
    }
    return path;
}

QByteArray AwsAbstractSignature::canonicalQuery(const QUrlQuery &query) const
{
    typedef QPair<QString, QString> QStringPair;
    QList<QStringPair> list = query.queryItems(QUrl::FullyEncoded);
    qSort(list);
    QString result;
    foreach (const QStringPair &pair, list) {
        if (!result.isEmpty()) result += QLatin1Char('&');
        result += QString::fromUtf8(QUrl::toPercentEncoding(pair.first)) + QLatin1Char('=') +
                  QString::fromUtf8(QUrl::toPercentEncoding(pair.second));
    }
    return result.toUtf8();
}

QString AwsAbstractSignature::httpMethod(const QNetworkAccessManager::Operation operation) const {
    switch (operation) {
        case QNetworkAccessManager::DeleteOperation: return QLatin1String("DELETE");
        case QNetworkAccessManager::HeadOperation:   return QLatin1String("HEAD");
        case QNetworkAccessManager::GetOperation:    return QLatin1String("GET");
        case QNetworkAccessManager::PostOperation:   return QLatin1String("POST");
        case QNetworkAccessManager::PutOperation:    return QLatin1String("PUT");
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            Q_ASSERT_X(false, "AwsSignatureV4Private::toString", "invalid operation");
    }
    return QString();
}

QTAWS_END_NAMESPACE
