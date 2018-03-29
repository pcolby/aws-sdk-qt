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

#include "sagemakerrequest.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  SageMakerRequest
 *
 * @brief  Interface class for providing SageMaker requests
 */


/**
 * @brief  Constructs a new SageMakerRequest object.
 *
 * @param  action  The SageMaker action to request.
 */
SageMakerRequest::SageMakerRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SageMakerRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new SageMakerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SageMakerRequest::SageMakerRequest(const SageMakerRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SageMakerRequestPrivate(*other.d_func(), this))
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
SageMakerRequest& SageMakerRequest::operator=(const SageMakerRequest &other)
{
    Q_D(SageMakerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SageMakerRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SageMakerRequest::SageMakerRequest(SageMakerRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the SageMaker action to be performed by this request.
 *
 * @return The SageMaker action to be performed by this request.
 */
SageMakerRequest::Action SageMakerRequest::action() const
{
    Q_D(const SageMakerRequest);
    return d->action;
}

/**
 * @brief Get the name of the SageMaker action to be performed by this request.
 *
 * @return The name of the SageMaker action to be performed by this request.
 */
QString SageMakerRequest::actionString() const
{
    return SageMakerRequestPrivate::toString(action());
}

/**
 * @brief  Get the SageMaker API version implemented by this request.
 *
 * @return The SageMaker API version implmented by this request.
 */
QString SageMakerRequest::apiVersion() const
{
    Q_D(const SageMakerRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the SageMaker action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void SageMakerRequest::setAction(const Action action)
{
    Q_D(SageMakerRequest);
    d->action = action;
}

/**
 * @brief  Set the SageMaker API version to include in this request.
 *
 * @param  version  The SageMaker API version to include in this request.
 */
void SageMakerRequest::setApiVersion(const QString &version)
{
    Q_D(SageMakerRequest);
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
bool SageMakerRequest::operator==(const SageMakerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid SageMaker queue name.
 *
 * @par From SageMaker FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SageMaker queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SageMakerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int SageMakerRequest::clearParameter(const QString &name)
{
    Q_D(SageMakerRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void SageMakerRequest::clearParameters()
{
    Q_D(SageMakerRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this SageMaker request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant SageMakerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SageMakerRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this SageMaker request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &SageMakerRequest::parameters() const
{
    Q_D(const SageMakerRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this SageMaker request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void SageMakerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SageMakerRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this SageMaker request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void SageMakerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SageMakerRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this SageMaker request.
 *
 * This SageMaker implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this SageMaker request using the given \a endpoint.
 */
QNetworkRequest SageMakerRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SageMakerRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  SageMakerRequestPrivate
 *
 * @brief  Private implementation for SageMakerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerRequestPrivate object.
 *
 * @param  action  SageMaker action being performed by the \a q request.
 * @param  q       Pointer to this object's public SageMakerRequest instance.
 */
SageMakerRequestPrivate::SageMakerRequestPrivate(const SageMakerRequest::Action action, SageMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SageMakerRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SageMakerRequest instance.
 */
SageMakerRequestPrivate::SageMakerRequestPrivate(const SageMakerRequestPrivate &other,
                                     SageMakerRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and SageMaker action to a string.
 *
 * This function converts SageMakerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SageMaker service's Action
 * query parameters.
 *
 * @param  action  SageMaker action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString SageMakerRequestPrivate::toString(const SageMakerRequest::Action &action)
{
    #define ActionToString(action) \
        case SageMakerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SageMaker
} // namespace QtAws
