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

#include "servicediscoveryrequest.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ServiceDiscoveryRequest
 * \brief The ServiceDiscoveryRequest class provides an interface for ServiceDiscovery requests.
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * \enum ServiceDiscoveryRequest::Action
 *
 * This enum describes the actions that can be performed as ServiceDiscovery
 * requests.
 *
 * \value CreatePrivateDnsNamespaceAction ServiceDiscovery CreatePrivateDnsNamespace action.
 * \value CreatePublicDnsNamespaceAction ServiceDiscovery CreatePublicDnsNamespace action.
 * \value CreateServiceAction ServiceDiscovery CreateService action.
 * \value DeleteNamespaceAction ServiceDiscovery DeleteNamespace action.
 * \value DeleteServiceAction ServiceDiscovery DeleteService action.
 * \value DeregisterInstanceAction ServiceDiscovery DeregisterInstance action.
 * \value GetInstanceAction ServiceDiscovery GetInstance action.
 * \value GetInstancesHealthStatusAction ServiceDiscovery GetInstancesHealthStatus action.
 * \value GetNamespaceAction ServiceDiscovery GetNamespace action.
 * \value GetOperationAction ServiceDiscovery GetOperation action.
 * \value GetServiceAction ServiceDiscovery GetService action.
 * \value ListInstancesAction ServiceDiscovery ListInstances action.
 * \value ListNamespacesAction ServiceDiscovery ListNamespaces action.
 * \value ListOperationsAction ServiceDiscovery ListOperations action.
 * \value ListServicesAction ServiceDiscovery ListServices action.
 * \value RegisterInstanceAction ServiceDiscovery RegisterInstance action.
 * \value UpdateInstanceCustomHealthStatusAction ServiceDiscovery UpdateInstanceCustomHealthStatus action.
 * \value UpdateServiceAction ServiceDiscovery UpdateService action.
 */

/*!
 * Constructs a ServiceDiscoveryRequest object for ServiceDiscovery \a action.
 */
ServiceDiscoveryRequest::ServiceDiscoveryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ServiceDiscoveryRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ServiceDiscoveryRequest::ServiceDiscoveryRequest(const ServiceDiscoveryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ServiceDiscoveryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ServiceDiscoveryRequest object to be equal to \a other.
 */
ServiceDiscoveryRequest& ServiceDiscoveryRequest::operator=(const ServiceDiscoveryRequest &other)
{
    Q_D(ServiceDiscoveryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ServiceDiscoveryRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceDiscoveryRequestPrivate.
 */
ServiceDiscoveryRequest::ServiceDiscoveryRequest(ServiceDiscoveryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ServiceDiscovery action to be performed by this request.
 */
ServiceDiscoveryRequest::Action ServiceDiscoveryRequest::action() const
{
    Q_D(const ServiceDiscoveryRequest);
    return d->action;
}

/*!
 * Returns the name of the ServiceDiscovery action to be performed by this request.
 */
QString ServiceDiscoveryRequest::actionString() const
{
    return ServiceDiscoveryRequestPrivate::toString(action());
}

/*!
 * Returns the ServiceDiscovery API version implemented by this request.
 */
QString ServiceDiscoveryRequest::apiVersion() const
{
    Q_D(const ServiceDiscoveryRequest);
    return d->apiVersion;
}

/*!
 * Sets the ServiceDiscovery action to be performed by this request to \a action.
 */
void ServiceDiscoveryRequest::setAction(const Action action)
{
    Q_D(ServiceDiscoveryRequest);
    d->action = action;
}

/*!
 * Sets the ServiceDiscovery API version to include in this request to \a version.
 */
void ServiceDiscoveryRequest::setApiVersion(const QString &version)
{
    Q_D(ServiceDiscoveryRequest);
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
bool ServiceDiscoveryRequest::operator==(const ServiceDiscoveryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ServiceDiscovery queue name.
 *
 * @par From ServiceDiscovery FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ServiceDiscovery queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ServiceDiscoveryRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ServiceDiscoveryRequest::clearParameter(const QString &name)
{
    Q_D(ServiceDiscoveryRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ServiceDiscoveryRequest::clearParameters()
{
    Q_D(ServiceDiscoveryRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ServiceDiscoveryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ServiceDiscoveryRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ServiceDiscoveryRequest::parameters() const
{
    Q_D(const ServiceDiscoveryRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ServiceDiscoveryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ServiceDiscoveryRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ServiceDiscoveryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ServiceDiscoveryRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ServiceDiscovery request using the given
 * \a endpoint.
 *
 * This ServiceDiscovery implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ServiceDiscoveryRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ServiceDiscoveryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ServiceDiscovery::ServiceDiscoveryRequestPrivate
 * \brief The ServiceDiscoveryRequestPrivate class provides private implementation for ServiceDiscoveryRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ServiceDiscoveryRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
ServiceDiscoveryRequestPrivate::ServiceDiscoveryRequestPrivate(const ServiceDiscoveryRequest::Action action, ServiceDiscoveryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ServiceDiscoveryRequest class's copy constructor.
 */
ServiceDiscoveryRequestPrivate::ServiceDiscoveryRequestPrivate(const ServiceDiscoveryRequestPrivate &other,
                                     ServiceDiscoveryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ServiceDiscoveryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ServiceDiscovery service's Action
 * query parameters.
 */
QString ServiceDiscoveryRequestPrivate::toString(const ServiceDiscoveryRequest::Action &action)
{
    #define ActionToString(action) \
        case ServiceDiscoveryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ServiceDiscovery
} // namespace QtAws
