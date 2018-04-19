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

#include "ecsrequest.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::ECSRequest
 * \brief The ECSRequest class provides an interface for ECS requests.
 *
 * \inmodule QtAwsECS
 */

/*!
 * \enum ECSRequest::Action
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
 * Constructs a ECSRequest object for ECS \a action.
 */
ECSRequest::ECSRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ECSRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ECSRequest::ECSRequest(const ECSRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ECSRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ECSRequest object to be equal to \a other.
 */
ECSRequest& ECSRequest::operator=(const ECSRequest &other)
{
    Q_D(ECSRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ECSRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ECSRequestPrivate.
 */
ECSRequest::ECSRequest(ECSRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ECS action to be performed by this request.
 */
ECSRequest::Action ECSRequest::action() const
{
    Q_D(const ECSRequest);
    return d->action;
}

/*!
 * Returns the name of the ECS action to be performed by this request.
 */
QString ECSRequest::actionString() const
{
    return ECSRequestPrivate::toString(action());
}

/*!
 * Returns the ECS API version implemented by this request.
 */
QString ECSRequest::apiVersion() const
{
    Q_D(const ECSRequest);
    return d->apiVersion;
}

/*!
 * Sets the ECS action to be performed by this request to \a action.
 */
void ECSRequest::setAction(const Action action)
{
    Q_D(ECSRequest);
    d->action = action;
}

/*!
 * Sets the ECS API version to include in this request to \a version.
 */
void ECSRequest::setApiVersion(const QString &version)
{
    Q_D(ECSRequest);
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
bool ECSRequest::operator==(const ECSRequest &other) const
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
/*bool ECSRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ECSRequest::clearParameter(const QString &name)
{
    Q_D(ECSRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ECSRequest::clearParameters()
{
    Q_D(ECSRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ECSRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ECSRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ECSRequest::parameters() const
{
    Q_D(const ECSRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ECSRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ECSRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ECSRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ECSRequest);
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
QNetworkRequest ECSRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ECSRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ECS::ECSRequestPrivate
 * \brief The ECSRequestPrivate class provides private implementation for ECSRequest.
 * \internal
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a ECSRequestPrivate object for ECS \a action,
 * with public implementation \a q.
 */
ECSRequestPrivate::ECSRequestPrivate(const ECSRequest::Action action, ECSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ECSRequest class's copy constructor.
 */
ECSRequestPrivate::ECSRequestPrivate(const ECSRequestPrivate &other,
                                     ECSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ECSRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ECS service's Action
 * query parameters.
 */
QString ECSRequestPrivate::toString(const ECSRequest::Action &action)
{
    #define ActionToString(action) \
        case ECSRequest::action##Action: return QStringLiteral(#action)
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
