/*
    Copyright 2013-2018 Paul Colby

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

#include "ecsrequest.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::EcsRequest
 * \brief The EcsRequest class provides an interface for ECS requests.
 *
 * \inmodule QtAwsECS
 */

/*!
 * \enum EcsRequest::Action
 *
 * This enum describes the actions that can be performed as ECS
 * requests.
 *
 * \value CreateClusterAction ECS CreateCluster action.
 * \value CreateServiceAction ECS CreateService action.
 * \value DeleteAttributesAction ECS DeleteAttributes action.
 * \value DeleteClusterAction ECS DeleteCluster action.
 * \value DeleteServiceAction ECS DeleteService action.
 * \value DeregisterContainerInstanceAction ECS DeregisterContainerInstance action.
 * \value DeregisterTaskDefinitionAction ECS DeregisterTaskDefinition action.
 * \value DescribeClustersAction ECS DescribeClusters action.
 * \value DescribeContainerInstancesAction ECS DescribeContainerInstances action.
 * \value DescribeServicesAction ECS DescribeServices action.
 * \value DescribeTaskDefinitionAction ECS DescribeTaskDefinition action.
 * \value DescribeTasksAction ECS DescribeTasks action.
 * \value DiscoverPollEndpointAction ECS DiscoverPollEndpoint action.
 * \value ListAttributesAction ECS ListAttributes action.
 * \value ListClustersAction ECS ListClusters action.
 * \value ListContainerInstancesAction ECS ListContainerInstances action.
 * \value ListServicesAction ECS ListServices action.
 * \value ListTaskDefinitionFamiliesAction ECS ListTaskDefinitionFamilies action.
 * \value ListTaskDefinitionsAction ECS ListTaskDefinitions action.
 * \value ListTasksAction ECS ListTasks action.
 * \value PutAttributesAction ECS PutAttributes action.
 * \value RegisterContainerInstanceAction ECS RegisterContainerInstance action.
 * \value RegisterTaskDefinitionAction ECS RegisterTaskDefinition action.
 * \value RunTaskAction ECS RunTask action.
 * \value StartTaskAction ECS StartTask action.
 * \value StopTaskAction ECS StopTask action.
 * \value SubmitContainerStateChangeAction ECS SubmitContainerStateChange action.
 * \value SubmitTaskStateChangeAction ECS SubmitTaskStateChange action.
 * \value UpdateContainerAgentAction ECS UpdateContainerAgent action.
 * \value UpdateContainerInstancesStateAction ECS UpdateContainerInstancesState action.
 * \value UpdateServiceAction ECS UpdateService action.
 */

/*!
 * Constructs a EcsRequest object for ECS \a action.
 */
EcsRequest::EcsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EcsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EcsRequest::EcsRequest(const EcsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EcsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EcsRequest object to be equal to \a other.
 */
EcsRequest& EcsRequest::operator=(const EcsRequest &other)
{
    Q_D(EcsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EcsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EcsRequestPrivate.
 */
EcsRequest::EcsRequest(EcsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ECS action to be performed by this request.
 */
EcsRequest::Action EcsRequest::action() const
{
    Q_D(const EcsRequest);
    return d->action;
}

/*!
 * Returns the name of the ECS action to be performed by this request.
 */
QString EcsRequest::actionString() const
{
    return EcsRequestPrivate::toString(action());
}

/*!
 * Returns the ECS API version implemented by this request.
 */
QString EcsRequest::apiVersion() const
{
    Q_D(const EcsRequest);
    return d->apiVersion;
}

/*!
 * Sets the ECS action to be performed by this request to \a action.
 */
void EcsRequest::setAction(const Action action)
{
    Q_D(EcsRequest);
    d->action = action;
}

/*!
 * Sets the ECS API version to include in this request to \a version.
 */
void EcsRequest::setApiVersion(const QString &version)
{
    Q_D(EcsRequest);
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
bool EcsRequest::operator==(const EcsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ECS queue name.
 *
 * @par From ECS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ECS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EcsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EcsRequest::clearParameter(const QString &name)
{
    Q_D(EcsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EcsRequest::clearParameters()
{
    Q_D(EcsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EcsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EcsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EcsRequest::parameters() const
{
    Q_D(const EcsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EcsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EcsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EcsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EcsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ECS request using the given
 * \a endpoint.
 *
 * This ECS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EcsRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const EcsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ECS::EcsRequestPrivate
 * \brief The EcsRequestPrivate class provides private implementation for EcsRequest.
 * \internal
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a EcsRequestPrivate object for ECS \a action,
 * with public implementation \a q.
 */
EcsRequestPrivate::EcsRequestPrivate(const EcsRequest::Action action, EcsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EcsRequest class's copy constructor.
 */
EcsRequestPrivate::EcsRequestPrivate(const EcsRequestPrivate &other,
                                     EcsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EcsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ECS service's Action
 * query parameters.
 */
QString EcsRequestPrivate::toString(const EcsRequest::Action &action)
{
    #define ActionToString(action) \
        case EcsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ECS
} // namespace QtAws
