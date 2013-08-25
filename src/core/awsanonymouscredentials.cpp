#include "awsanonymouscredentials.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAnonymousCredentials
 *
 * @brief  Basic implementation of AwsAbstractCredentials that allows use of "anonymous" credentials.
 */

/**
 * @brief  Constructs a new AwsAnonymousCredentials object.
 *
 * Constructs a new AwsAnonymousCredentials object, with no credentials at all.
 */
AwsAnonymousCredentials::AwsAnonymousCredentials(QObject * const parent) : AwsAbstractCredentials(parent)
{
}

QString AwsAnonymousCredentials::accessKeyId() const
{
    return QString();
}

QString AwsAnonymousCredentials::secretKey() const
{
    return QString();
}

QString AwsAnonymousCredentials::token() const
{
    return QString();
}

QTAWS_END_NAMESPACE
