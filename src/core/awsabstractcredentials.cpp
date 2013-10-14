/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsabstractcredentials.h"

#include <QtDebug>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractCredentials
 *
 * @brief  Interface class for privding AWS credentials.
 */

/**
 * @brief    Construct an AwsAbstractCredentials.
 * @param parent
 */
AwsAbstractCredentials::AwsAbstractCredentials(QObject * const parent) : QObject(parent) { }

/**
 * @fn       QString AwsAbstractCredentials::accessKeyId() const
 *
 * @brief    AWS access key ID for this credentials object.
 *
 * @returns  The AWS access key ID for this credentials object.
 */

/**
 * @fn       QString AwsAbstractCredentials::secretKey() const
 *
 * @brief    AWS secret access key for this credentials object.
 *
 * @returns  The AWS secret access key for this credentials object.
 */

/**
 * @fn       QString AwsAbstractCredentials::token() const
 *
 * @brief    AWS security token for this credentials object.
 *
 * @returns  The AWS security token for this credentials object.
 */

/**
 * @brief    DateTime at which the credentials will expire.
 *
 * This method should not be invoked unless the object is known to be refreshable
 * (ie isRefreshable() returns \c true).  As the base implementation of isRefreshable()
 * always returns \c false, this implementation of expiration() should not be invoked.
 *
 * Derived classes that return \c true from isRefreshable() must also override this
 * function to provide the appropriate expiration timestamp (which may a null QDateTime
 * if the credentials never expire).
 *
 * @returns  The DateTime at whcih the credentials will expire.
 *
 * @see  isExpired()
 * @see  isRefreshable()
 * @see  refresh()
 */
QDateTime AwsAbstractCredentials::expiration() const
{
    if (isRefreshable()) {
        qWarning() << "AwsAbstractCredentials: expiration must be implemented by refreshable derived classes";
    } else {
        qWarning() << "AwsAbstractCredentials: expiration should not be invoked on non-refreshable objects";
    }
    return QDateTime(); // A null QDateTime.
}

/**
 * @brief    Is this credentials object currently expired.
 *
 * In this base implementation, non-refreshable credentials (ie those for which
 * isRefreshable() returns \c false) are assumed to never expire, whereas refreshable
 * credentials are assume to be expired only if expiration() returns a valid QDateTime
 * representing a time in the past (ie earlier than QDateTime::currentDateTimeUtc()).
 *
 * Derived classes may override this method to implement custom expiration logic.
 *
 * @returns  \c true if this credentials object is expired, \c false otherwise.
 *
 * @see  expiration()
 * @see  isRefreshable()
 * @see  refresh()
 */
bool AwsAbstractCredentials::isExpired() const
{
    if (isRefreshable()) {
        const QDateTime expiration = this->expiration();
        return ((expiration.isValid()) && (expiration < QDateTime::currentDateTimeUtc()));
    }
    return false; // Non-refreshable credentials do not expire, by default.
}

/**
 * @brief    Is this credentials object refreshable.
 *
 * This base implementation always returns \c false - ie credentials are not refreshable
 * by default.  However, dervived classes may override this method as appropriate.
 *
 * Derived classes that override this method must also override the expiration() method
 * (merely returning a null QDateTime is the credentials do not expire), and may wish to
 * override isExpired() also.
 *
 * @returns  \c true if this credentials object is expired, \c false otherwise.
 *
 * @see  expiration()
 * @see  isExpired()
 * @see  refresh()
 */
bool AwsAbstractCredentials::isRefreshable() const
{
    return false;
}

/**
 * @brief  Refresh this object's credentials.
 *
 * This slot begins an asynchronous refresh transaction, and should be followed by a
 * change() signal when the credentials have been refreshed.
 *
 * @todo  A signal for errors?
 *
 * This method should not be invoked unless the object is known to be refreshable
 * (ie isRefreshable() returns \c true).  As the base implementation of isRefreshable()
 * always returns \c false, this implementation of expiration() should not be invoked.
 *
 * Derived classes that return \c true from isRefreshable() must also override this
 * function to provide the appropriate refresh behaviour.
 *
 * @returns  \c true is the refresh transaction has begun successfully, \c false otherwise.
 *
 * @see  isRefreshable()
 * @see  changed()
 */
bool AwsAbstractCredentials::refresh()
{
    if (isRefreshable()) {
        qWarning() << "AwsAbstractCredentials: refresh must be implemented by refreshable derived classes";
    } else {
        qWarning() << "AwsAbstractCredentials: refresh should not be invoked on non-refreshable objects";
    }
    return false;
}

/**
 * @fn     void AwsAbstractCredentials::changed()
 *
 * @brief  Signal emitted when this object's credentials have been updated.
 *
 * @see    refresh()
 */

QTAWS_END_NAMESPACE
