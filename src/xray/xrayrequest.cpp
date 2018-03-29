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

#include "xrayrequest.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/**
 * @class  XRayRequest
 *
 * @brief  Interface class for providing XRay requests
 */


/**
 * @brief  Constructs a new XRayRequest object.
 *
 * @param  action  The XRay action to request.
 */
XRayRequest::XRayRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new XRayRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new XRayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
XRayRequest::XRayRequest(const XRayRequest &other)
    : QtAws::Core::AwsAbstractRequest(new XRayRequestPrivate(*other.d_func(), this))
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
XRayRequest& XRayRequest::operator=(const XRayRequest &other)
{
    Q_D(XRayRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new XRayRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from XRayRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
XRayRequest::XRayRequest(XRayRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the XRay action to be performed by this request.
 *
 * @return The XRay action to be performed by this request.
 */
XRayRequest::Action XRayRequest::action() const
{
    Q_D(const XRayRequest);
    return d->action;
}

/**
 * @brief Get the name of the XRay action to be performed by this request.
 *
 * @return The name of the XRay action to be performed by this request.
 */
QString XRayRequest::actionString() const
{
    return XRayRequestPrivate::toString(action());
}

/**
 * @brief  Get the XRay API version implemented by this request.
 *
 * @return The XRay API version implmented by this request.
 */
QString XRayRequest::apiVersion() const
{
    Q_D(const XRayRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the XRay action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void XRayRequest::setAction(const Action action)
{
    Q_D(XRayRequest);
    d->action = action;
}

/**
 * @brief  Set the XRay API version to include in this request.
 *
 * @param  version  The XRay API version to include in this request.
 */
void XRayRequest::setApiVersion(const QString &version)
{
    Q_D(XRayRequest);
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
bool XRayRequest::operator==(const XRayRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid XRay queue name.
 *
 * @par From XRay FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid XRay queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool XRayRequest::isValidQueueName(const QString &queueName)
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
int XRayRequest::clearParameter(const QString &name)
{
    Q_D(XRayRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void XRayRequest::clearParameters()
{
    Q_D(XRayRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this XRay request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant XRayRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const XRayRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this XRay request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &XRayRequest::parameters() const
{
    Q_D(const XRayRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this XRay request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void XRayRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(XRayRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this XRay request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void XRayRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(XRayRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this XRay request.
 *
 * This XRay implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this XRay request using the given \a endpoint.
 */
QNetworkRequest XRayRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const XRayRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  XRayRequestPrivate
 *
 * @brief  Private implementation for XRayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new XRayRequestPrivate object.
 *
 * @param  action  XRay action being performed by the \a q request.
 * @param  q       Pointer to this object's public XRayRequest instance.
 */
XRayRequestPrivate::XRayRequestPrivate(const XRayRequest::Action action, XRayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new XRayRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the XRayRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public XRayRequest instance.
 */
XRayRequestPrivate::XRayRequestPrivate(const XRayRequestPrivate &other,
                                     XRayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and XRay action to a string.
 *
 * This function converts XRayRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the XRay service's Action
 * query parameters.
 *
 * @param  action  XRay action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString XRayRequestPrivate::toString(const XRayRequest::Action &action)
{
    #define ActionToString(action) \
        case XRayRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace XRay
} // namespace QtAws
