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

#include "mediastoredatarequest.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/**
 * @class  MediaStoreDataRequest
 *
 * @brief  Interface class for providing MediaStoreData requests
 */


/**
 * @brief  Constructs a new MediaStoreDataRequest object.
 *
 * @param  action  The MediaStoreData action to request.
 */
MediaStoreDataRequest::MediaStoreDataRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MediaStoreDataRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new MediaStoreDataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MediaStoreDataRequest::MediaStoreDataRequest(const MediaStoreDataRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MediaStoreDataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
MediaStoreDataRequest& MediaStoreDataRequest::operator=(const MediaStoreDataRequest &other)
{
    Q_D(MediaStoreDataRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new MediaStoreDataRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaStoreDataRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
MediaStoreDataRequest::MediaStoreDataRequest(MediaStoreDataRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the MediaStoreData action to be performed by this request.
 *
 * @return The MediaStoreData action to be performed by this request.
 */
MediaStoreDataRequest::Action MediaStoreDataRequest::action() const
{
    Q_D(const MediaStoreDataRequest);
    return d->action;
}

/**
 * @brief Get the name of the MediaStoreData action to be performed by this request.
 *
 * @return The name of the MediaStoreData action to be performed by this request.
 */
QString MediaStoreDataRequest::actionString() const
{
    return MediaStoreDataRequestPrivate::toString(action());
}

/**
 * @brief  Get the MediaStoreData API version implemented by this request.
 *
 * @return The MediaStoreData API version implmented by this request.
 */
QString MediaStoreDataRequest::apiVersion() const
{
    Q_D(const MediaStoreDataRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the MediaStoreData action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void MediaStoreDataRequest::setAction(const Action action)
{
    Q_D(MediaStoreDataRequest);
    d->action = action;
}

/**
 * @brief  Set the MediaStoreData API version to include in this request.
 *
 * @param  version  The MediaStoreData API version to include in this request.
 */
void MediaStoreDataRequest::setApiVersion(const QString &version)
{
    Q_D(MediaStoreDataRequest);
    d->apiVersion = version;
}

/**
 * @brief  Equality operator.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool MediaStoreDataRequest::operator==(const MediaStoreDataRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid MediaStoreData queue name.
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
bool MediaStoreDataRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int MediaStoreDataRequest::clearParameter(const QString &name)
{
    Q_D(MediaStoreDataRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void MediaStoreDataRequest::clearParameters()
{
    Q_D(MediaStoreDataRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this MediaStoreData request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant MediaStoreDataRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaStoreDataRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this MediaStoreData request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &MediaStoreDataRequest::parameters() const
{
    Q_D(const MediaStoreDataRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this MediaStoreData request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void MediaStoreDataRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaStoreDataRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this MediaStoreData request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void MediaStoreDataRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaStoreDataRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this MediaStoreData request.
 *
 * This MediaStoreData implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this MediaStoreData request using the given \a endpoint.
 */
QNetworkRequest MediaStoreDataRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const MediaStoreDataRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  MediaStoreDataRequestPrivate
 *
 * @brief  Private implementation for MediaStoreDataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaStoreDataRequestPrivate object.
 *
 * @param  action  MediaStoreData action being performed by the \a q request.
 * @param  q       Pointer to this object's public MediaStoreDataRequest instance.
 */
MediaStoreDataRequestPrivate::MediaStoreDataRequestPrivate(const MediaStoreDataRequest::Action action, MediaStoreDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MediaStoreDataRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaStoreDataRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MediaStoreDataRequest instance.
 */
MediaStoreDataRequestPrivate::MediaStoreDataRequestPrivate(const MediaStoreDataRequestPrivate &other,
                                     MediaStoreDataRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and MediaStoreData action to a string.
 *
 * This function converts MediaStoreDataRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaStoreData service's Action
 * query parameters.
 *
 * @param  action  MediaStoreData action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString MediaStoreDataRequestPrivate::toString(const MediaStoreDataRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaStoreDataRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaStoreData
} // namespace QtAws
