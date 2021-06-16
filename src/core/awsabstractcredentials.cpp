/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsabstractcredentials.h"
#include "awsabstractcredentials_p.h"

#include <QDebug>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsAbstractCredentials
 * \brief The AwsAbstractCredentials class provides an interface for AWS credentials.
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
*/

/*!
 * Constructs an AwsAbstractCredentials object with parent \a parent.
 */
AwsAbstractCredentials::AwsAbstractCredentials(QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractCredentialsPrivate(this))
{

}

/*!
 * \internal
 * \overload
 *
 * Constructs an AwsAbstractCredentials object with private implementation \a d, and parent \a parent.
 */
AwsAbstractCredentials::AwsAbstractCredentials(
    AwsAbstractCredentialsPrivate * const d, QObject * const parent)
    : QObject(parent), d_ptr(d)
{

}

/*!
 * Destroys the AWS credentials.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractCredentials::~AwsAbstractCredentials()
{
    delete d_ptr;
}

/*!
 * \fn QString AwsAbstractCredentials::accessKeyId() const
 *
 * Returns the AWS access key ID for this credentials object.
 */

/*!
 * \fn QString AwsAbstractCredentials::secretKey() const
 *
 * Returns the AWS secret access key for this credentials object.
 */

/*!
 * \fn QString AwsAbstractCredentials::token() const
 *
 * Returns the AWS security token for this credentials object.
 */

/*!
 * Returns the QDateTime at which the credentials will expire.
 *
 * This method should not be invoked unless the object is known to be refreshable
 * (ie isRefreshable() returns \c true).  As the base implementation of isRefreshable()
 * always returns \c false, this implementation should not be invoked.
 *
 * Derived classes that return \c true from isRefreshable() must also override this
 * function to provide the appropriate expiration timestamp (which may a null QDateTime
 * if the credentials never expire).
 *
 * \sa isExpired()
 * \sa refresh()
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

/*!
 * Returns \c true if this credentials object has expired; \c false otherwise.
 *
 * In this base implementation, non-refreshable credentials (ie those for which
 * isRefreshable() returns \c false) are assumed to never expire, whereas refreshable
 * credentials are assume to be expired only if expiration() returns a valid QDateTime
 * representing a time in the past (ie earlier than QDateTime::currentDateTimeUtc()).
 *
 * Derived classes may override this method to implement custom expiration logic.
 *
 * \sa refresh()
 */
bool AwsAbstractCredentials::isExpired() const
{
    if (isRefreshable()) {
        const QDateTime expiration = this->expiration();
        return ((expiration.isValid()) && (expiration < QDateTime::currentDateTimeUtc()));
    }
    return false; // Non-refreshable credentials do not expire, by default.
}

/*!
 * Returns \c true if this credentials object is able to be refreshed; \c false otherwise.
 *
 * This base implementation always returns \c false - ie credentials are not refreshable
 * by default.  However, dervived classes may override this method as appropriate.
 *
 * Derived classes that override this method must also override the expiration() method
 * (merely returning a null QDateTime is the credentials do not expire), and may wish to
 * override isExpired() also.
 *
 * \sa refresh()
 */
bool AwsAbstractCredentials::isRefreshable() const
{
    return false;
}

/*!
 * Begins an asynchronous refresh transaction, and returns \c true if successfully begun; \c false otherwise.
 *
 * This method should not be invoked unless the object is known to be refreshable
 * (ie isRefreshable() returns \c true).  As the base implementation of isRefreshable()
 * always returns \c false, this implementation of expiration() should not be invoked.
 *
 * Derived classes that return \c true from isRefreshable() must also override this
 * function to provide the appropriate refresh behaviour.
 *
 * \sa changed()
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

/*!
 * \fn void AwsAbstractCredentials::changed()
 *
 * Emitted when credentials have been updated.
 *
 * \sa refresh()
 */

/*!
 * \class QtAws::Core::AwsAbstractCredentialsPrivate
 * \brief The AwsAbstractCredentialsPrivate class provides private implementation for the AwsAbstractCredentials class.
 * \internal
 *
 * \ingroup aws-authentication
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsAbstractCredentialsPrivate object with public implementation \a q.
 */
AwsAbstractCredentialsPrivate::AwsAbstractCredentialsPrivate(AwsAbstractCredentials * const q)
    : q_ptr(q)
{

}

/*!
 * Destroys the AWS credential's private object.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractCredentialsPrivate::~AwsAbstractCredentialsPrivate()
{

}

} // namespace Core
} // namespace QtAws
