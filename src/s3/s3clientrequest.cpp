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

#include "s3clientrequest.h"
#include "s3clientrequest_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  S3ClientRequest
 *
 * @brief  Interface class for providing S3 requests
 */


/**
 * @brief  Constructs a new S3ClientRequest object.
 *
 * @param  action  The S3 action to request.
 */
S3ClientRequest::S3ClientRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new S3ClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new S3ClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
S3ClientRequest::S3ClientRequest(const S3ClientRequest &other)
    : QtAws::Core::AwsAbstractRequest(new S3ClientRequestPrivate(*other.d_func(), this))
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
S3ClientRequest& S3ClientRequest::operator=(const S3ClientRequest &other)
{
    Q_D(S3ClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new S3ClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from S3ClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
S3ClientRequest::S3ClientRequest(S3ClientRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the S3 action to be performed by this request.
 *
 * @return The S3 action to be performed by this request.
 */
S3ClientRequest::Action S3ClientRequest::action() const
{
    Q_D(const S3ClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the S3 action to be performed by this request.
 *
 * @return The name of the S3 action to be performed by this request.
 */
QString S3ClientRequest::actionString() const
{
    return S3ClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the S3 API version implemented by this request.
 *
 * @return The S3 API version implmented by this request.
 */
QString S3ClientRequest::apiVersion() const
{
    Q_D(const S3ClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the S3 action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void S3ClientRequest::setAction(const Action action)
{
    Q_D(S3ClientRequest);
    d->action = action;
}

/**
 * @brief  Set the S3 API version to include in this request.
 *
 * @param  version  The S3 API version to include in this request.
 */
void S3ClientRequest::setApiVersion(const QString &version)
{
    Q_D(S3ClientRequest);
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
bool S3ClientRequest::operator==(const S3ClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid S3 queue name.
 *
 * @par From S3 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid S3 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool S3ClientRequest::isValidQueueName(const QString &queueName)
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
int S3ClientRequest::clearParameter(const QString &name)
{
    Q_D(S3ClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void S3ClientRequest::clearParameters()
{
    Q_D(S3ClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this S3 request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant S3ClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const S3ClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this S3 request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &S3ClientRequest::parameters() const
{
    Q_D(const S3ClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this S3 request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void S3ClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(S3ClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this S3 request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void S3ClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(S3ClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this S3 request.
 *
 * This S3 implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this S3 request using the given \a endpoint.
 */
QNetworkRequest S3ClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const S3ClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  S3ClientRequestPrivate
 *
 * @brief  Private implementation for S3ClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new S3ClientRequestPrivate object.
 *
 * @param  action  S3 action being performed by the \a q request.
 * @param  q       Pointer to this object's public S3ClientRequest instance.
 */
S3ClientRequestPrivate::S3ClientRequestPrivate(const S3ClientRequest::Action action, S3ClientRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new S3ClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the S3ClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public S3ClientRequest instance.
 */
S3ClientRequestPrivate::S3ClientRequestPrivate(const S3ClientRequestPrivate &other,
                                     S3ClientRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and S3 action to a string.
 *
 * This function converts S3ClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the S3 service's Action
 * query parameters.
 *
 * @param  action  S3 action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString S3ClientRequestPrivate::toString(const S3ClientRequest::Action &action)
{
    #define ActionToString(action) \
        case S3ClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace S3
} // namespace QtAws
