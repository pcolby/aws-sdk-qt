// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "awsbasiccredentials.h"
#include "awsbasiccredentials_p.h"

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsBasicCredentials
 * \brief The AwsBasicCredentials class provides basic (non-refreshable) AWS credentials.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsBasicCredentials object with \a accessKeyId, \a secretKey and \a token
 * AWS credentials, and parent \a parent.
 */
AwsBasicCredentials::AwsBasicCredentials(
        const QString &accessKeyId,
        const QString &secretKey,
        const QString &token,
        QObject * const parent)
    : AwsAbstractCredentials(new AwsBasicCredentialsPrivate(this), parent)
{
    Q_D(AwsBasicCredentials);
    d->accessKeyId = accessKeyId;
    d->secretKey = secretKey;
    d->token = token;
}

/*!
 * Constructs an AwsBasicCredentials object with \a accessKeyId and \a secretKey AWS credentials,
 * and parent \a parent.
 *
 * The object's security token will be left as null string, unless set later via setToken().
 */
AwsBasicCredentials::AwsBasicCredentials(
        const QString &accessKeyId,
        const QString &secretKey,
        QObject * const parent)
    : AwsAbstractCredentials(new AwsBasicCredentialsPrivate(this), parent)
{
    Q_D(AwsBasicCredentials);
    d->accessKeyId = accessKeyId;
    d->secretKey = secretKey;
}

/*!
 * \reimp
 */
QString AwsBasicCredentials::accessKeyId() const
{
    Q_D(const AwsBasicCredentials);
    return d->accessKeyId;
}

/*!
 * \reimp
 */
QString AwsBasicCredentials::secretKey() const
{
    Q_D(const AwsBasicCredentials);
    return d->secretKey;
}

/*!
 * \reimp
 */
QString AwsBasicCredentials::token() const
{
    Q_D(const AwsBasicCredentials);
    return d->token;
}

/*!
 * Sets the AWS access key ID to \a accessKeyId, and emits AwsAbstractCredentials::changed().
 */
void AwsBasicCredentials::setAccessKeyId(const QString &accessKeyId)
{
    Q_D(AwsBasicCredentials);
    d->accessKeyId = accessKeyId;
    emit changed();
}

/*!
 * Sets the AWS secret access key to \a secretKey, and emits AwsAbstractCredentials::changed().
 */
void AwsBasicCredentials::setSecretKey(const QString &secretKey)
{
    Q_D(AwsBasicCredentials);
    d->secretKey = secretKey;
    emit changed();
}

/*!
 * Sets the AWS security token to \a token, and emits AwsAbstractCredentials::changed().
 */
void AwsBasicCredentials::setToken(const QString &token)
{
    Q_D(AwsBasicCredentials);
    d->token = token;
    emit changed();
}

/*!
 * \class QtAws::Core::AwsBasicCredentialsPrivate
 * \brief The AwsBasicCredentialsPrivate class provides private implementation for the AwsBasicCredentials class.
 * \internal
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsBasicCredentialsPrivate object with public implementation \a q.
 */
AwsBasicCredentialsPrivate::AwsBasicCredentialsPrivate(AwsBasicCredentials * const q)
    : AwsAbstractCredentialsPrivate(q)
{

}

} // namespace Core
} // namespace QtAws
