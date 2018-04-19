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

#include "opsworksrequest.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/*!
 * \class QtAws::OpsWorks::OpsWorksRequest
 * \brief The OpsWorksRequest class provides an interface for OpsWorks requests.
 *
 * \inmodule QtAwsOpsWorks
 */

/*!
 * \enum OpsWorksRequest::Action
 *
 * This enum describes the actions that can be performed as OpsWorks
 * requests.
 *
 * \value AssignInstanceAction OpsWorks AssignInstance action.
 * \value AssignVolumeAction OpsWorks AssignVolume action.
 * \value AssociateElasticIpAction OpsWorks AssociateElasticIp action.
 * \value AttachElasticLoadBalancerAction OpsWorks AttachElasticLoadBalancer action.
 * \value CloneStackAction OpsWorks CloneStack action.
 * \value CreateAppAction OpsWorks CreateApp action.
 * \value CreateDeploymentAction OpsWorks CreateDeployment action.
 * \value CreateInstanceAction OpsWorks CreateInstance action.
 * \value CreateLayerAction OpsWorks CreateLayer action.
 * \value CreateStackAction OpsWorks CreateStack action.
 * \value CreateUserProfileAction OpsWorks CreateUserProfile action.
 * \value DeleteAppAction OpsWorks DeleteApp action.
 * \value DeleteInstanceAction OpsWorks DeleteInstance action.
 * \value DeleteLayerAction OpsWorks DeleteLayer action.
 * \value DeleteStackAction OpsWorks DeleteStack action.
 * \value DeleteUserProfileAction OpsWorks DeleteUserProfile action.
 * \value DeregisterEcsClusterAction OpsWorks DeregisterEcsCluster action.
 * \value DeregisterElasticIpAction OpsWorks DeregisterElasticIp action.
 * \value DeregisterInstanceAction OpsWorks DeregisterInstance action.
 * \value DeregisterRdsDbInstanceAction OpsWorks DeregisterRdsDbInstance action.
 * \value DeregisterVolumeAction OpsWorks DeregisterVolume action.
 * \value DescribeAgentVersionsAction OpsWorks DescribeAgentVersions action.
 * \value DescribeAppsAction OpsWorks DescribeApps action.
 * \value DescribeCommandsAction OpsWorks DescribeCommands action.
 * \value DescribeDeploymentsAction OpsWorks DescribeDeployments action.
 * \value DescribeEcsClustersAction OpsWorks DescribeEcsClusters action.
 * \value DescribeElasticIpsAction OpsWorks DescribeElasticIps action.
 * \value DescribeElasticLoadBalancersAction OpsWorks DescribeElasticLoadBalancers action.
 * \value DescribeInstancesAction OpsWorks DescribeInstances action.
 * \value DescribeLayersAction OpsWorks DescribeLayers action.
 * \value DescribeLoadBasedAutoScalingAction OpsWorks DescribeLoadBasedAutoScaling action.
 * \value DescribeMyUserProfileAction OpsWorks DescribeMyUserProfile action.
 * \value DescribeOperatingSystemsAction OpsWorks DescribeOperatingSystems action.
 * \value DescribePermissionsAction OpsWorks DescribePermissions action.
 * \value DescribeRaidArraysAction OpsWorks DescribeRaidArrays action.
 * \value DescribeRdsDbInstancesAction OpsWorks DescribeRdsDbInstances action.
 * \value DescribeServiceErrorsAction OpsWorks DescribeServiceErrors action.
 * \value DescribeStackProvisioningParametersAction OpsWorks DescribeStackProvisioningParameters action.
 * \value DescribeStackSummaryAction OpsWorks DescribeStackSummary action.
 * \value DescribeStacksAction OpsWorks DescribeStacks action.
 * \value DescribeTimeBasedAutoScalingAction OpsWorks DescribeTimeBasedAutoScaling action.
 * \value DescribeUserProfilesAction OpsWorks DescribeUserProfiles action.
 * \value DescribeVolumesAction OpsWorks DescribeVolumes action.
 * \value DetachElasticLoadBalancerAction OpsWorks DetachElasticLoadBalancer action.
 * \value DisassociateElasticIpAction OpsWorks DisassociateElasticIp action.
 * \value GetHostnameSuggestionAction OpsWorks GetHostnameSuggestion action.
 * \value GrantAccessAction OpsWorks GrantAccess action.
 * \value ListTagsAction OpsWorks ListTags action.
 * \value RebootInstanceAction OpsWorks RebootInstance action.
 * \value RegisterEcsClusterAction OpsWorks RegisterEcsCluster action.
 * \value RegisterElasticIpAction OpsWorks RegisterElasticIp action.
 * \value RegisterInstanceAction OpsWorks RegisterInstance action.
 * \value RegisterRdsDbInstanceAction OpsWorks RegisterRdsDbInstance action.
 * \value RegisterVolumeAction OpsWorks RegisterVolume action.
 * \value SetLoadBasedAutoScalingAction OpsWorks SetLoadBasedAutoScaling action.
 * \value SetPermissionAction OpsWorks SetPermission action.
 * \value SetTimeBasedAutoScalingAction OpsWorks SetTimeBasedAutoScaling action.
 * \value StartInstanceAction OpsWorks StartInstance action.
 * \value StartStackAction OpsWorks StartStack action.
 * \value StopInstanceAction OpsWorks StopInstance action.
 * \value StopStackAction OpsWorks StopStack action.
 * \value TagResourceAction OpsWorks TagResource action.
 * \value UnassignInstanceAction OpsWorks UnassignInstance action.
 * \value UnassignVolumeAction OpsWorks UnassignVolume action.
 * \value UntagResourceAction OpsWorks UntagResource action.
 * \value UpdateAppAction OpsWorks UpdateApp action.
 * \value UpdateElasticIpAction OpsWorks UpdateElasticIp action.
 * \value UpdateInstanceAction OpsWorks UpdateInstance action.
 * \value UpdateLayerAction OpsWorks UpdateLayer action.
 * \value UpdateMyUserProfileAction OpsWorks UpdateMyUserProfile action.
 * \value UpdateRdsDbInstanceAction OpsWorks UpdateRdsDbInstance action.
 * \value UpdateStackAction OpsWorks UpdateStack action.
 * \value UpdateUserProfileAction OpsWorks UpdateUserProfile action.
 * \value UpdateVolumeAction OpsWorks UpdateVolume action.
 */

/*!
 * Constructs a OpsWorksRequest object for OpsWorks \a action.
 */
OpsWorksRequest::OpsWorksRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new OpsWorksRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
OpsWorksRequest::OpsWorksRequest(const OpsWorksRequest &other)
    : QtAws::Core::AwsAbstractRequest(new OpsWorksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the OpsWorksRequest object to be equal to \a other.
 */
OpsWorksRequest& OpsWorksRequest::operator=(const OpsWorksRequest &other)
{
    Q_D(OpsWorksRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa OpsWorksRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OpsWorksRequestPrivate.
 */
OpsWorksRequest::OpsWorksRequest(OpsWorksRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the OpsWorks action to be performed by this request.
 */
OpsWorksRequest::Action OpsWorksRequest::action() const
{
    Q_D(const OpsWorksRequest);
    return d->action;
}

/*!
 * Returns the name of the OpsWorks action to be performed by this request.
 */
QString OpsWorksRequest::actionString() const
{
    return OpsWorksRequestPrivate::toString(action());
}

/*!
 * Returns the OpsWorks API version implemented by this request.
 */
QString OpsWorksRequest::apiVersion() const
{
    Q_D(const OpsWorksRequest);
    return d->apiVersion;
}

/*!
 * Sets the OpsWorks action to be performed by this request to \a action.
 */
void OpsWorksRequest::setAction(const Action action)
{
    Q_D(OpsWorksRequest);
    d->action = action;
}

/*!
 * Sets the OpsWorks API version to include in this request to \a version.
 */
void OpsWorksRequest::setApiVersion(const QString &version)
{
    Q_D(OpsWorksRequest);
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
bool OpsWorksRequest::operator==(const OpsWorksRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid OpsWorks queue name.
 *
 * @par From OpsWorks FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid OpsWorks queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool OpsWorksRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int OpsWorksRequest::clearParameter(const QString &name)
{
    Q_D(OpsWorksRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void OpsWorksRequest::clearParameters()
{
    Q_D(OpsWorksRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant OpsWorksRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const OpsWorksRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &OpsWorksRequest::parameters() const
{
    Q_D(const OpsWorksRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void OpsWorksRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(OpsWorksRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void OpsWorksRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(OpsWorksRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the OpsWorks request using the given
 * \a endpoint.
 *
 * This OpsWorks implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest OpsWorksRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const OpsWorksRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::OpsWorks::OpsWorksRequestPrivate
 * \brief The OpsWorksRequestPrivate class provides private implementation for OpsWorksRequest.
 * \internal
 *
 * \inmodule QtAwsOpsWorks
 */

/*!
 * Constructs a OpsWorksRequestPrivate object for OpsWorks \a action,
 * with public implementation \a q.
 */
OpsWorksRequestPrivate::OpsWorksRequestPrivate(const OpsWorksRequest::Action action, OpsWorksRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the OpsWorksRequest class's copy constructor.
 */
OpsWorksRequestPrivate::OpsWorksRequestPrivate(const OpsWorksRequestPrivate &other,
                                     OpsWorksRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts OpsWorksRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the OpsWorks service's Action
 * query parameters.
 */
QString OpsWorksRequestPrivate::toString(const OpsWorksRequest::Action &action)
{
    #define ActionToString(action) \
        case OpsWorksRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace OpsWorks
} // namespace QtAws
