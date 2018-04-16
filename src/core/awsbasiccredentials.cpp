/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsbasiccredentials.h"
#include "awsbasiccredentials_p.h"

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsBasicCredentials
 * \brief The AwsBasicCredentials class provides basic (non-refreshable) AWS credentials.
 */

/*!
 * @brief Constructs a new AwsBasicCredentials object.
 *
 * Constructs a new AwsBasicCredentials object, with the specified AWS access
 * key, AWS secret key, and AWS security token.
 *
 * @param accessKeyId  The AWS access key ID to use for this credentials object.
 * @param secretKey    The AWS secret access key to use for this credentials object.
 * @param token        The AWS security token to use for this credentials object.
 * @param parent       This object's parent.
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
 * @brief  Constructs a new AwsBasicCredentials object.
 *
 * Constructs a new AwsBasicCredentials object, with the specified AWS access key and AWS secret
 * key.  The object's security token will be left as null string, unless set later via setToken().
 *
 * @param accessKeyId  The AWS access key ID to use for this credentials object.
 * @param secretKey    The AWS secret access key to use for this credentials object.
 * @param parent       This object's parent.
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

QString AwsBasicCredentials::accessKeyId() const
{
    Q_D(const AwsBasicCredentials);
    return d->accessKeyId;
}

QString AwsBasicCredentials::secretKey() const
{
    Q_D(const AwsBasicCredentials);
    return d->secretKey;
}

QString AwsBasicCredentials::token() const
{
    Q_D(const AwsBasicCredentials);
    return d->token;
}

/*!
 * @brief Set the AWS access key ID for this credentials object.
 *
 * @param accessKeyId  The AWS access key ID to set for this credentials object.
 */
void AwsBasicCredentials::setAccessKeyId(const QString &accessKeyId)
{
    Q_D(AwsBasicCredentials);
    d->accessKeyId = accessKeyId;
    emit changed();
}

/*!
 * @brief Set the AWS secret access key for this credentials object.
 *
 * @param secretKey  The AWS secret access key to set for this credentials object.
 */
void AwsBasicCredentials::setSecretKey(const QString &secretKey)
{
    Q_D(AwsBasicCredentials);
    d->secretKey = secretKey;
    emit changed();
}

/*!
 * @brief Set the AWS security token for this credentials object.
 *
 * @param token  The AWS security token to set for this credentials object.
 */
void AwsBasicCredentials::setToken(const QString &token)
{
    Q_D(AwsBasicCredentials);
    d->token = token;
    emit changed();
}

/*!
 * @internal
 *
 * \class QtAws::Core::AwsBasicCredentialsPrivate
 *
 * @brief  Private implementation for AwsBasicCredentials.
 *
 * @see    http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AwsBasicCredentialsPrivate object.
 *
 * @param  q  Pointer to this object's public AwsBasicCredentials instance.
 */
AwsBasicCredentialsPrivate::AwsBasicCredentialsPrivate(AwsBasicCredentials * const q)
    : AwsAbstractCredentialsPrivate(q)
{

}

} // namespace Core
} // namespace QtAws
