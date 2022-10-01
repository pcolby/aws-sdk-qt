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

#include "route53recoveryclusterrequest.h"
#include "route53recoveryclusterrequest_p.h"

namespace QtAws {
namespace Route53RecoveryCluster {

/*!
 * \class QtAws::Route53RecoveryCluster::Route53RecoveryClusterRequest
 * \brief The Route53RecoveryClusterRequest class provides an interface for Route53RecoveryCluster requests.
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 */

/*!
 * \enum Route53RecoveryClusterRequest::Action
 *
 * This enum describes the actions that can be performed as Route53RecoveryCluster
 * requests.
 *
 * \value GetRoutingControlStateAction Route53RecoveryCluster GetRoutingControlState action.
 * \value ListRoutingControlsAction Route53RecoveryCluster ListRoutingControls action.
 * \value UpdateRoutingControlStateAction Route53RecoveryCluster UpdateRoutingControlState action.
 * \value UpdateRoutingControlStatesAction Route53RecoveryCluster UpdateRoutingControlStates action.
 */

/*!
 * Constructs a Route53RecoveryClusterRequest object for Route53RecoveryCluster \a action.
 */
Route53RecoveryClusterRequest::Route53RecoveryClusterRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Route53RecoveryClusterRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Route53RecoveryClusterRequest::Route53RecoveryClusterRequest(const Route53RecoveryClusterRequest &other)
    : QtAws::Core::AwsAbstractRequest(new Route53RecoveryClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Route53RecoveryClusterRequest object to be equal to \a other.
 */
Route53RecoveryClusterRequest& Route53RecoveryClusterRequest::operator=(const Route53RecoveryClusterRequest &other)
{
    Q_D(Route53RecoveryClusterRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Route53RecoveryClusterRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53RecoveryClusterRequestPrivate.
 */
Route53RecoveryClusterRequest::Route53RecoveryClusterRequest(Route53RecoveryClusterRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Route53RecoveryCluster action to be performed by this request.
 */
Route53RecoveryClusterRequest::Action Route53RecoveryClusterRequest::action() const
{
    Q_D(const Route53RecoveryClusterRequest);
    return d->action;
}

/*!
 * Returns the name of the Route53RecoveryCluster action to be performed by this request.
 */
QString Route53RecoveryClusterRequest::actionString() const
{
    return Route53RecoveryClusterRequestPrivate::toString(action());
}

/*!
 * Returns the Route53RecoveryCluster API version implemented by this request.
 */
QString Route53RecoveryClusterRequest::apiVersion() const
{
    Q_D(const Route53RecoveryClusterRequest);
    return d->apiVersion;
}

/*!
 * Sets the Route53RecoveryCluster action to be performed by this request to \a action.
 */
void Route53RecoveryClusterRequest::setAction(const Action action)
{
    Q_D(Route53RecoveryClusterRequest);
    d->action = action;
}

/*!
 * Sets the Route53RecoveryCluster API version to include in this request to \a version.
 */
void Route53RecoveryClusterRequest::setApiVersion(const QString &version)
{
    Q_D(Route53RecoveryClusterRequest);
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
bool Route53RecoveryClusterRequest::operator==(const Route53RecoveryClusterRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Route53RecoveryCluster queue name.
 *
 * @par From Route53RecoveryCluster FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Route53RecoveryCluster queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Route53RecoveryClusterRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Route53RecoveryClusterRequest::clearParameter(const QString &name)
{
    Q_D(Route53RecoveryClusterRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Route53RecoveryClusterRequest::clearParameters()
{
    Q_D(Route53RecoveryClusterRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Route53RecoveryClusterRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Route53RecoveryClusterRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Route53RecoveryClusterRequest::parameters() const
{
    Q_D(const Route53RecoveryClusterRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Route53RecoveryClusterRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Route53RecoveryClusterRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Route53RecoveryClusterRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(Route53RecoveryClusterRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Route53RecoveryCluster request using the given
 * \a endpoint.
 *
 * This Route53RecoveryCluster implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Route53RecoveryClusterRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Route53RecoveryClusterRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Route53RecoveryCluster::Route53RecoveryClusterRequestPrivate
 * \brief The Route53RecoveryClusterRequestPrivate class provides private implementation for Route53RecoveryClusterRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryCluster
 */

/*!
 * Constructs a Route53RecoveryClusterRequestPrivate object for Route53RecoveryCluster \a action,
 * with public implementation \a q.
 */
Route53RecoveryClusterRequestPrivate::Route53RecoveryClusterRequestPrivate(const Route53RecoveryClusterRequest::Action action, Route53RecoveryClusterRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-12-02"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Route53RecoveryClusterRequest class's copy constructor.
 */
Route53RecoveryClusterRequestPrivate::Route53RecoveryClusterRequestPrivate(const Route53RecoveryClusterRequestPrivate &other,
                                     Route53RecoveryClusterRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Route53RecoveryClusterRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Route53RecoveryCluster service's Action
 * query parameters.
 */
QString Route53RecoveryClusterRequestPrivate::toString(const Route53RecoveryClusterRequest::Action &action)
{
    #define ActionToString(action) \
        case Route53RecoveryClusterRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(GetRoutingControlState);
        ActionToString(ListRoutingControls);
        ActionToString(UpdateRoutingControlState);
        ActionToString(UpdateRoutingControlStates);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Route53RecoveryCluster
} // namespace QtAws
