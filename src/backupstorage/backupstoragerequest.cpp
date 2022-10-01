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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "backupstoragerequest.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::BackupStorageRequest
 * \brief The BackupStorageRequest class provides an interface for BackupStorage requests.
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * \enum BackupStorageRequest::Action
 *
 * This enum describes the actions that can be performed as BackupStorage
 * requests.
 *
 * \value DeleteObjectAction BackupStorage DeleteObject action.
 * \value GetChunkAction BackupStorage GetChunk action.
 * \value GetObjectMetadataAction BackupStorage GetObjectMetadata action.
 * \value ListChunksAction BackupStorage ListChunks action.
 * \value ListObjectsAction BackupStorage ListObjects action.
 * \value NotifyObjectCompleteAction BackupStorage NotifyObjectComplete action.
 * \value PutChunkAction BackupStorage PutChunk action.
 * \value PutObjectAction BackupStorage PutObject action.
 * \value StartObjectAction BackupStorage StartObject action.
 */

/*!
 * Constructs a BackupStorageRequest object for BackupStorage \a action.
 */
BackupStorageRequest::BackupStorageRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new BackupStorageRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
BackupStorageRequest::BackupStorageRequest(const BackupStorageRequest &other)
    : QtAws::Core::AwsAbstractRequest(new BackupStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the BackupStorageRequest object to be equal to \a other.
 */
BackupStorageRequest& BackupStorageRequest::operator=(const BackupStorageRequest &other)
{
    Q_D(BackupStorageRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa BackupStorageRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BackupStorageRequestPrivate.
 */
BackupStorageRequest::BackupStorageRequest(BackupStorageRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the BackupStorage action to be performed by this request.
 */
BackupStorageRequest::Action BackupStorageRequest::action() const
{
    Q_D(const BackupStorageRequest);
    return d->action;
}

/*!
 * Returns the name of the BackupStorage action to be performed by this request.
 */
QString BackupStorageRequest::actionString() const
{
    return BackupStorageRequestPrivate::toString(action());
}

/*!
 * Returns the BackupStorage API version implemented by this request.
 */
QString BackupStorageRequest::apiVersion() const
{
    Q_D(const BackupStorageRequest);
    return d->apiVersion;
}

/*!
 * Sets the BackupStorage action to be performed by this request to \a action.
 */
void BackupStorageRequest::setAction(const Action action)
{
    Q_D(BackupStorageRequest);
    d->action = action;
}

/*!
 * Sets the BackupStorage API version to include in this request to \a version.
 */
void BackupStorageRequest::setApiVersion(const QString &version)
{
    Q_D(BackupStorageRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool BackupStorageRequest::operator==(const BackupStorageRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid BackupStorage queue name.
 *
 * @par From BackupStorage FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid BackupStorage queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool BackupStorageRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int BackupStorageRequest::clearParameter(const QString &name)
{
    Q_D(BackupStorageRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void BackupStorageRequest::clearParameters()
{
    Q_D(BackupStorageRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant BackupStorageRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const BackupStorageRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &BackupStorageRequest::parameters() const
{
    Q_D(const BackupStorageRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void BackupStorageRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(BackupStorageRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void BackupStorageRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(BackupStorageRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the BackupStorage request using the given
 * \a endpoint.
 *
 * This BackupStorage implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest BackupStorageRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const BackupStorageRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::BackupStorage::BackupStorageRequestPrivate
 * \brief The BackupStorageRequestPrivate class provides private implementation for BackupStorageRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a BackupStorageRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
BackupStorageRequestPrivate::BackupStorageRequestPrivate(const BackupStorageRequest::Action action, BackupStorageRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-04-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the BackupStorageRequest class's copy constructor.
 */
BackupStorageRequestPrivate::BackupStorageRequestPrivate(const BackupStorageRequestPrivate &other,
                                     BackupStorageRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts BackupStorageRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the BackupStorage service's Action
 * query parameters.
 */
QString BackupStorageRequestPrivate::toString(const BackupStorageRequest::Action &action)
{
    #define ActionToString(action) \
        case BackupStorageRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteObject);
        ActionToString(GetChunk);
        ActionToString(GetObjectMetadata);
        ActionToString(ListChunks);
        ActionToString(ListObjects);
        ActionToString(NotifyObjectComplete);
        ActionToString(PutChunk);
        ActionToString(PutObject);
        ActionToString(StartObject);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace BackupStorage
} // namespace QtAws
