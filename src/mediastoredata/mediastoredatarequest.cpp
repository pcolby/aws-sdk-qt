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

#include "mediastoredatarequest.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::MediaStoreDataRequest
 * \brief The MediaStoreDataRequest class provides an interface for MediaStoreData requests.
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * \enum MediaStoreDataRequest::Action
 *
 * This enum describes the actions that can be performed as MediaStoreData
 * requests.
 *
 * \value DeleteObjectAction MediaStoreData DeleteObject action.
 * \value DescribeObjectAction MediaStoreData DescribeObject action.
 * \value GetObjectAction MediaStoreData GetObject action.
 * \value ListItemsAction MediaStoreData ListItems action.
 * \value PutObjectAction MediaStoreData PutObject action.
 */

/*!
 * Constructs a MediaStoreDataRequest object for MediaStoreData \a action.
 */
MediaStoreDataRequest::MediaStoreDataRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MediaStoreDataRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MediaStoreDataRequest::MediaStoreDataRequest(const MediaStoreDataRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MediaStoreDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MediaStoreDataRequest object to be equal to \a other.
 */
MediaStoreDataRequest& MediaStoreDataRequest::operator=(const MediaStoreDataRequest &other)
{
    Q_D(MediaStoreDataRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MediaStoreDataRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaStoreDataRequestPrivate.
 */
MediaStoreDataRequest::MediaStoreDataRequest(MediaStoreDataRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MediaStoreData action to be performed by this request.
 */
MediaStoreDataRequest::Action MediaStoreDataRequest::action() const
{
    Q_D(const MediaStoreDataRequest);
    return d->action;
}

/*!
 * Returns the name of the MediaStoreData action to be performed by this request.
 */
QString MediaStoreDataRequest::actionString() const
{
    return MediaStoreDataRequestPrivate::toString(action());
}

/*!
 * Returns the MediaStoreData API version implemented by this request.
 */
QString MediaStoreDataRequest::apiVersion() const
{
    Q_D(const MediaStoreDataRequest);
    return d->apiVersion;
}

/*!
 * Sets the MediaStoreData action to be performed by this request to \a action.
 */
void MediaStoreDataRequest::setAction(const Action action)
{
    Q_D(MediaStoreDataRequest);
    d->action = action;
}

/*!
 * Sets the MediaStoreData API version to include in this request to \a version.
 */
void MediaStoreDataRequest::setApiVersion(const QString &version)
{
    Q_D(MediaStoreDataRequest);
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
bool MediaStoreDataRequest::operator==(const MediaStoreDataRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MediaStoreData queue name.
 *
 * @par From MediaStoreData FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaStoreData queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MediaStoreDataRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MediaStoreDataRequest::clearParameter(const QString &name)
{
    Q_D(MediaStoreDataRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MediaStoreDataRequest::clearParameters()
{
    Q_D(MediaStoreDataRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MediaStoreDataRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaStoreDataRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MediaStoreDataRequest::parameters() const
{
    Q_D(const MediaStoreDataRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MediaStoreDataRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaStoreDataRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MediaStoreDataRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaStoreDataRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MediaStoreData request using the given
 * \a endpoint.
 *
 * This MediaStoreData implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MediaStoreDataRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MediaStoreDataRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MediaStoreData::MediaStoreDataRequestPrivate
 * \brief The MediaStoreDataRequestPrivate class provides private implementation for MediaStoreDataRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a MediaStoreDataRequestPrivate object for MediaStoreData \a action,
 * with public implementation \a q.
 */
MediaStoreDataRequestPrivate::MediaStoreDataRequestPrivate(const MediaStoreDataRequest::Action action, MediaStoreDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaStoreDataRequest class's copy constructor.
 */
MediaStoreDataRequestPrivate::MediaStoreDataRequestPrivate(const MediaStoreDataRequestPrivate &other,
                                     MediaStoreDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MediaStoreDataRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaStoreData service's Action
 * query parameters.
 */
QString MediaStoreDataRequestPrivate::toString(const MediaStoreDataRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaStoreDataRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteObject);
        ActionToString(DescribeObject);
        ActionToString(GetObject);
        ActionToString(ListItems);
        ActionToString(PutObject);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaStoreData
} // namespace QtAws
