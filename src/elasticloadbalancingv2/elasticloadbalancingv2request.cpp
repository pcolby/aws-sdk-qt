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

#include "elasticloadbalancingv2request.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::ElasticLoadBalancingv2Request
 *
 * \brief The ElasticLoadBalancingv2Request class is the base class for all ElasticLoadBalancingv2 requests.
 *
 * \ingroup ElasticLoadBalancingv2
 */

/*!
 * @brief  Constructs a new ElasticLoadBalancingv2Request object.
 *
 * @param  action  The ElasticLoadBalancingv2 action to request.
 */
ElasticLoadBalancingv2Request::ElasticLoadBalancingv2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ElasticLoadBalancingv2RequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new ElasticLoadBalancingv2Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
ElasticLoadBalancingv2Request::ElasticLoadBalancingv2Request(const ElasticLoadBalancingv2Request &other)
    : QtAws::Core::AwsAbstractRequest(new ElasticLoadBalancingv2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
ElasticLoadBalancingv2Request& ElasticLoadBalancingv2Request::operator=(const ElasticLoadBalancingv2Request &other)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingv2Request object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticLoadBalancingv2RequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ElasticLoadBalancingv2Request::ElasticLoadBalancingv2Request(ElasticLoadBalancingv2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the ElasticLoadBalancingv2 action to be performed by this request.
 */
ElasticLoadBalancingv2Request::Action ElasticLoadBalancingv2Request::action() const
{
    Q_D(const ElasticLoadBalancingv2Request);
    return d->action;
}

/*!
 * \brief Returns the name of the ElasticLoadBalancingv2 action to be performed by this request.
 */
QString ElasticLoadBalancingv2Request::actionString() const
{
    return ElasticLoadBalancingv2RequestPrivate::toString(action());
}

/*!
 * \brief Returns the ElasticLoadBalancingv2 API version implemented by this request.
 */
QString ElasticLoadBalancingv2Request::apiVersion() const
{
    Q_D(const ElasticLoadBalancingv2Request);
    return d->apiVersion;
}

/*!
 * @brief Set the ElasticLoadBalancingv2 action to be performed by this request to \a action.
 */
void ElasticLoadBalancingv2Request::setAction(const Action action)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->action = action;
}

/*!
 * Set the ElasticLoadBalancingv2 API version to include in this request to \a version.
 */
void ElasticLoadBalancingv2Request::setApiVersion(const QString &version)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->apiVersion = version;
}

/*!
 * \brief Returns \c true if this request is the same as \a other.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool ElasticLoadBalancingv2Request::operator==(const ElasticLoadBalancingv2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid ElasticLoadBalancingv2 queue name.
 *
 * @par From ElasticLoadBalancingv2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticLoadBalancingv2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElasticLoadBalancingv2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int ElasticLoadBalancingv2Request::clearParameter(const QString &name)
{
    Q_D(ElasticLoadBalancingv2Request);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void ElasticLoadBalancingv2Request::clearParameters()
{
    Q_D(ElasticLoadBalancingv2Request);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant ElasticLoadBalancingv2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticLoadBalancingv2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &ElasticLoadBalancingv2Request::parameters() const
{
    Q_D(const ElasticLoadBalancingv2Request);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void ElasticLoadBalancingv2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void ElasticLoadBalancingv2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this ElasticLoadBalancingv2 request using the given \a endpoint.
 *
 * This ElasticLoadBalancingv2 implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest ElasticLoadBalancingv2Request::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ElasticLoadBalancingv2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  ElasticLoadBalancingv2RequestPrivate
 *
 * \brief  Private implementation for ElasticLoadBalancingv2Request.
 */

/*!
 * \internal
 *
 * \brief Constructs a new ElasticLoadBalancingv2RequestPrivate object.
 */
ElasticLoadBalancingv2RequestPrivate::ElasticLoadBalancingv2RequestPrivate(const ElasticLoadBalancingv2Request::Action action, ElasticLoadBalancingv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new ElasticLoadBalancingv2RequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticLoadBalancingv2Request class's copy constructor.
 */
ElasticLoadBalancingv2RequestPrivate::ElasticLoadBalancingv2RequestPrivate(const ElasticLoadBalancingv2RequestPrivate &other,
                                     ElasticLoadBalancingv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts ElasticLoadBalancingv2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticLoadBalancingv2 service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ElasticLoadBalancingv2RequestPrivate::toString(const ElasticLoadBalancingv2Request::Action &action)
{
    #define ActionToString(action) \
        case ElasticLoadBalancingv2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
