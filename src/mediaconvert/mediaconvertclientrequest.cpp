/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mediaconvertclientrequest.h"
#include "mediaconvertclientrequest_p.h"

namespace AWS {
namespace MediaConvert {

/**
 * @class  MediaConvertClientRequest
 *
 * @brief  Interface class for providing MediaConvert requests
 */


/**
 * @brief  Constructs a new MediaConvertClientRequest object.
 *
 * @param  action  The MediaConvert action to request.
 */
MediaConvertClientRequest::MediaConvertClientRequest(const Action action)
    : AwsAbstractRequest(new MediaConvertClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new MediaConvertClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MediaConvertClientRequest::MediaConvertClientRequest(const MediaConvertClientRequest &other)
    : AwsAbstractRequest(new MediaConvertClientRequestPrivate(*other.d_func(), this))
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
MediaConvertClientRequest& MediaConvertClientRequest::operator=(const MediaConvertClientRequest &other)
{
    Q_D(MediaConvertClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new MediaConvertClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaConvertClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
MediaConvertClientRequest::MediaConvertClientRequest(MediaConvertClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the MediaConvert action to be performed by this request.
 *
 * @return The MediaConvert action to be performed by this request.
 */
MediaConvertClientRequest::Action MediaConvertClientRequest::action() const
{
    Q_D(const MediaConvertClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the MediaConvert action to be performed by this request.
 *
 * @return The name of the MediaConvert action to be performed by this request.
 */
QString MediaConvertClientRequest::actionString() const
{
    return MediaConvertClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the MediaConvert API version implemented by this request.
 *
 * @return The MediaConvert API version implmented by this request.
 */
QString MediaConvertClientRequest::apiVersion() const
{
    Q_D(const MediaConvertClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the MediaConvert action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void MediaConvertClientRequest::setAction(const Action action)
{
    Q_D(MediaConvertClientRequest);
    d->action = action;
}

/**
 * @brief  Set the MediaConvert API version to include in this request.
 *
 * @param  version  The MediaConvert API version to include in this request.
 */
void MediaConvertClientRequest::setApiVersion(const QString &version)
{
    Q_D(MediaConvertClientRequest);
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
bool MediaConvertClientRequest::operator==(const MediaConvertClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid MediaConvert queue name.
 *
 * @par From MediaConvert FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaConvert queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool MediaConvertClientRequest::isValidQueueName(const QString &queueName)
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
int MediaConvertClientRequest::clearParameter(const QString &name)
{
    Q_D(MediaConvertClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void MediaConvertClientRequest::clearParameters()
{
    Q_D(MediaConvertClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this MediaConvert request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant MediaConvertClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaConvertClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this MediaConvert request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &MediaConvertClientRequest::parameters() const
{
    Q_D(const MediaConvertClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this MediaConvert request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void MediaConvertClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaConvertClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this MediaConvert request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void MediaConvertClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaConvertClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this MediaConvert request.
 *
 * This MediaConvert implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this MediaConvert request using the given \a endpoint.
 */
QNetworkRequest MediaConvertClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const MediaConvertClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  MediaConvertClientRequestPrivate
 *
 * @brief  Private implementation for MediaConvertClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaConvertClientRequestPrivate object.
 *
 * @param  action  MediaConvert action being performed by the \a q request.
 * @param  q       Pointer to this object's public MediaConvertClientRequest instance.
 */
MediaConvertClientRequestPrivate::MediaConvertClientRequestPrivate(const MediaConvertClientRequest::Action action, MediaConvertClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MediaConvertClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaConvertClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MediaConvertClientRequest instance.
 */
MediaConvertClientRequestPrivate::MediaConvertClientRequestPrivate(const MediaConvertClientRequestPrivate &other,
                                     MediaConvertClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and MediaConvert action to a string.
 *
 * This function converts MediaConvertClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaConvert service's Action
 * query parameters.
 *
 * @param  action  MediaConvert action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString MediaConvertClientRequestPrivate::toString(const MediaConvertClientRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaConvertClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaConvert
} // namespace AWS
