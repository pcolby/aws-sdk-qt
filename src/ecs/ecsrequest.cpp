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

#include "ecsrequest.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::EcsRequest
 * \brief The EcsRequest class provides an interface for Ecs requests.
 *
 * \inmodule QtAwsEcs
 */

/*!
 * \enum EcsRequest::Action
 *
 * This enum describes the actions that can be performed as Ecs
 * requests.
 *
 * \value CreateCapacityProviderAction Ecs CreateCapacityProvider action.
 * \value CreateClusterAction Ecs CreateCluster action.
 * \value CreateServiceAction Ecs CreateService action.
 * \value CreateTaskSetAction Ecs CreateTaskSet action.
 * \value DeleteAccountSettingAction Ecs DeleteAccountSetting action.
 * \value DeleteAttributesAction Ecs DeleteAttributes action.
 * \value DeleteCapacityProviderAction Ecs DeleteCapacityProvider action.
 * \value DeleteClusterAction Ecs DeleteCluster action.
 * \value DeleteServiceAction Ecs DeleteService action.
 * \value DeleteTaskSetAction Ecs DeleteTaskSet action.
 * \value DeregisterContainerInstanceAction Ecs DeregisterContainerInstance action.
 * \value DeregisterTaskDefinitionAction Ecs DeregisterTaskDefinition action.
 * \value DescribeCapacityProvidersAction Ecs DescribeCapacityProviders action.
 * \value DescribeClustersAction Ecs DescribeClusters action.
 * \value DescribeContainerInstancesAction Ecs DescribeContainerInstances action.
 * \value DescribeServicesAction Ecs DescribeServices action.
 * \value DescribeTaskDefinitionAction Ecs DescribeTaskDefinition action.
 * \value DescribeTaskSetsAction Ecs DescribeTaskSets action.
 * \value DescribeTasksAction Ecs DescribeTasks action.
 * \value DiscoverPollEndpointAction Ecs DiscoverPollEndpoint action.
 * \value ExecuteCommandAction Ecs ExecuteCommand action.
 * \value ListAccountSettingsAction Ecs ListAccountSettings action.
 * \value ListAttributesAction Ecs ListAttributes action.
 * \value ListClustersAction Ecs ListClusters action.
 * \value ListContainerInstancesAction Ecs ListContainerInstances action.
 * \value ListServicesAction Ecs ListServices action.
 * \value ListTagsForResourceAction Ecs ListTagsForResource action.
 * \value ListTaskDefinitionFamiliesAction Ecs ListTaskDefinitionFamilies action.
 * \value ListTaskDefinitionsAction Ecs ListTaskDefinitions action.
 * \value ListTasksAction Ecs ListTasks action.
 * \value PutAccountSettingAction Ecs PutAccountSetting action.
 * \value PutAccountSettingDefaultAction Ecs PutAccountSettingDefault action.
 * \value PutAttributesAction Ecs PutAttributes action.
 * \value PutClusterCapacityProvidersAction Ecs PutClusterCapacityProviders action.
 * \value RegisterContainerInstanceAction Ecs RegisterContainerInstance action.
 * \value RegisterTaskDefinitionAction Ecs RegisterTaskDefinition action.
 * \value RunTaskAction Ecs RunTask action.
 * \value StartTaskAction Ecs StartTask action.
 * \value StopTaskAction Ecs StopTask action.
 * \value SubmitAttachmentStateChangesAction Ecs SubmitAttachmentStateChanges action.
 * \value SubmitContainerStateChangeAction Ecs SubmitContainerStateChange action.
 * \value SubmitTaskStateChangeAction Ecs SubmitTaskStateChange action.
 * \value TagResourceAction Ecs TagResource action.
 * \value UntagResourceAction Ecs UntagResource action.
 * \value UpdateCapacityProviderAction Ecs UpdateCapacityProvider action.
 * \value UpdateClusterAction Ecs UpdateCluster action.
 * \value UpdateClusterSettingsAction Ecs UpdateClusterSettings action.
 * \value UpdateContainerAgentAction Ecs UpdateContainerAgent action.
 * \value UpdateContainerInstancesStateAction Ecs UpdateContainerInstancesState action.
 * \value UpdateServiceAction Ecs UpdateService action.
 * \value UpdateServicePrimaryTaskSetAction Ecs UpdateServicePrimaryTaskSet action.
 * \value UpdateTaskSetAction Ecs UpdateTaskSet action.
 */

/*!
 * Constructs a EcsRequest object for Ecs \a action.
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
 * Returns the Ecs action to be performed by this request.
 */
EcsRequest::Action EcsRequest::action() const
{
    Q_D(const EcsRequest);
    return d->action;
}

/*!
 * Returns the name of the Ecs action to be performed by this request.
 */
QString EcsRequest::actionString() const
{
    return EcsRequestPrivate::toString(action());
}

/*!
 * Returns the Ecs API version implemented by this request.
 */
QString EcsRequest::apiVersion() const
{
    Q_D(const EcsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Ecs action to be performed by this request to \a action.
 */
void EcsRequest::setAction(const Action action)
{
    Q_D(EcsRequest);
    d->action = action;
}

/*!
 * Sets the Ecs API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid Ecs queue name.
 *
 * @par From Ecs FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Ecs queue name, \c false otherwise.
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
 * Returns a network request for the Ecs request using the given
 * \a endpoint.
 *
 * This Ecs implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EcsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EcsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Ecs::EcsRequestPrivate
 * \brief The EcsRequestPrivate class provides private implementation for EcsRequest.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a EcsRequestPrivate object for Ecs \a action,
 * with public implementation \a q.
 */
EcsRequestPrivate::EcsRequestPrivate(const EcsRequest::Action action, EcsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2014-11-13"))
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
 * string representations, appropriate for use with the Ecs service's Action
 * query parameters.
 */
QString EcsRequestPrivate::toString(const EcsRequest::Action &action)
{
    #define ActionToString(action) \
        case EcsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateCapacityProvider);
        ActionToString(CreateCluster);
        ActionToString(CreateService);
        ActionToString(CreateTaskSet);
        ActionToString(DeleteAccountSetting);
        ActionToString(DeleteAttributes);
        ActionToString(DeleteCapacityProvider);
        ActionToString(DeleteCluster);
        ActionToString(DeleteService);
        ActionToString(DeleteTaskSet);
        ActionToString(DeregisterContainerInstance);
        ActionToString(DeregisterTaskDefinition);
        ActionToString(DescribeCapacityProviders);
        ActionToString(DescribeClusters);
        ActionToString(DescribeContainerInstances);
        ActionToString(DescribeServices);
        ActionToString(DescribeTaskDefinition);
        ActionToString(DescribeTaskSets);
        ActionToString(DescribeTasks);
        ActionToString(DiscoverPollEndpoint);
        ActionToString(ExecuteCommand);
        ActionToString(ListAccountSettings);
        ActionToString(ListAttributes);
        ActionToString(ListClusters);
        ActionToString(ListContainerInstances);
        ActionToString(ListServices);
        ActionToString(ListTagsForResource);
        ActionToString(ListTaskDefinitionFamilies);
        ActionToString(ListTaskDefinitions);
        ActionToString(ListTasks);
        ActionToString(PutAccountSetting);
        ActionToString(PutAccountSettingDefault);
        ActionToString(PutAttributes);
        ActionToString(PutClusterCapacityProviders);
        ActionToString(RegisterContainerInstance);
        ActionToString(RegisterTaskDefinition);
        ActionToString(RunTask);
        ActionToString(StartTask);
        ActionToString(StopTask);
        ActionToString(SubmitAttachmentStateChanges);
        ActionToString(SubmitContainerStateChange);
        ActionToString(SubmitTaskStateChange);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateCapacityProvider);
        ActionToString(UpdateCluster);
        ActionToString(UpdateClusterSettings);
        ActionToString(UpdateContainerAgent);
        ActionToString(UpdateContainerInstancesState);
        ActionToString(UpdateService);
        ActionToString(UpdateServicePrimaryTaskSet);
        ActionToString(UpdateTaskSet);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Ecs
} // namespace QtAws
