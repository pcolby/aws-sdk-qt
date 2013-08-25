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

QTAWS_END_NAMESPACE
