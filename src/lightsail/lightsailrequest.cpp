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

#include "lightsailrequest.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::LightsailRequest
 * \brief The LightsailRequest class provides an interface for Lightsail requests.
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * \enum LightsailRequest::Action
 *
 * This enum describes the actions that can be performed as Lightsail
 * requests.
 *
 * \value AllocateStaticIpAction Lightsail AllocateStaticIp action.
 * \value AttachCertificateToDistributionAction Lightsail AttachCertificateToDistribution action.
 * \value AttachDiskAction Lightsail AttachDisk action.
 * \value AttachInstancesToLoadBalancerAction Lightsail AttachInstancesToLoadBalancer action.
 * \value AttachLoadBalancerTlsCertificateAction Lightsail AttachLoadBalancerTlsCertificate action.
 * \value AttachStaticIpAction Lightsail AttachStaticIp action.
 * \value CloseInstancePublicPortsAction Lightsail CloseInstancePublicPorts action.
 * \value CopySnapshotAction Lightsail CopySnapshot action.
 * \value CreateBucketAction Lightsail CreateBucket action.
 * \value CreateBucketAccessKeyAction Lightsail CreateBucketAccessKey action.
 * \value CreateCertificateAction Lightsail CreateCertificate action.
 * \value CreateCloudFormationStackAction Lightsail CreateCloudFormationStack action.
 * \value CreateContactMethodAction Lightsail CreateContactMethod action.
 * \value CreateContainerServiceAction Lightsail CreateContainerService action.
 * \value CreateContainerServiceDeploymentAction Lightsail CreateContainerServiceDeployment action.
 * \value CreateContainerServiceRegistryLoginAction Lightsail CreateContainerServiceRegistryLogin action.
 * \value CreateDiskAction Lightsail CreateDisk action.
 * \value CreateDiskFromSnapshotAction Lightsail CreateDiskFromSnapshot action.
 * \value CreateDiskSnapshotAction Lightsail CreateDiskSnapshot action.
 * \value CreateDistributionAction Lightsail CreateDistribution action.
 * \value CreateDomainAction Lightsail CreateDomain action.
 * \value CreateDomainEntryAction Lightsail CreateDomainEntry action.
 * \value CreateInstanceSnapshotAction Lightsail CreateInstanceSnapshot action.
 * \value CreateInstancesAction Lightsail CreateInstances action.
 * \value CreateInstancesFromSnapshotAction Lightsail CreateInstancesFromSnapshot action.
 * \value CreateKeyPairAction Lightsail CreateKeyPair action.
 * \value CreateLoadBalancerAction Lightsail CreateLoadBalancer action.
 * \value CreateLoadBalancerTlsCertificateAction Lightsail CreateLoadBalancerTlsCertificate action.
 * \value CreateRelationalDatabaseAction Lightsail CreateRelationalDatabase action.
 * \value CreateRelationalDatabaseFromSnapshotAction Lightsail CreateRelationalDatabaseFromSnapshot action.
 * \value CreateRelationalDatabaseSnapshotAction Lightsail CreateRelationalDatabaseSnapshot action.
 * \value DeleteAlarmAction Lightsail DeleteAlarm action.
 * \value DeleteAutoSnapshotAction Lightsail DeleteAutoSnapshot action.
 * \value DeleteBucketAction Lightsail DeleteBucket action.
 * \value DeleteBucketAccessKeyAction Lightsail DeleteBucketAccessKey action.
 * \value DeleteCertificateAction Lightsail DeleteCertificate action.
 * \value DeleteContactMethodAction Lightsail DeleteContactMethod action.
 * \value DeleteContainerImageAction Lightsail DeleteContainerImage action.
 * \value DeleteContainerServiceAction Lightsail DeleteContainerService action.
 * \value DeleteDiskAction Lightsail DeleteDisk action.
 * \value DeleteDiskSnapshotAction Lightsail DeleteDiskSnapshot action.
 * \value DeleteDistributionAction Lightsail DeleteDistribution action.
 * \value DeleteDomainAction Lightsail DeleteDomain action.
 * \value DeleteDomainEntryAction Lightsail DeleteDomainEntry action.
 * \value DeleteInstanceAction Lightsail DeleteInstance action.
 * \value DeleteInstanceSnapshotAction Lightsail DeleteInstanceSnapshot action.
 * \value DeleteKeyPairAction Lightsail DeleteKeyPair action.
 * \value DeleteKnownHostKeysAction Lightsail DeleteKnownHostKeys action.
 * \value DeleteLoadBalancerAction Lightsail DeleteLoadBalancer action.
 * \value DeleteLoadBalancerTlsCertificateAction Lightsail DeleteLoadBalancerTlsCertificate action.
 * \value DeleteRelationalDatabaseAction Lightsail DeleteRelationalDatabase action.
 * \value DeleteRelationalDatabaseSnapshotAction Lightsail DeleteRelationalDatabaseSnapshot action.
 * \value DetachCertificateFromDistributionAction Lightsail DetachCertificateFromDistribution action.
 * \value DetachDiskAction Lightsail DetachDisk action.
 * \value DetachInstancesFromLoadBalancerAction Lightsail DetachInstancesFromLoadBalancer action.
 * \value DetachStaticIpAction Lightsail DetachStaticIp action.
 * \value DisableAddOnAction Lightsail DisableAddOn action.
 * \value DownloadDefaultKeyPairAction Lightsail DownloadDefaultKeyPair action.
 * \value EnableAddOnAction Lightsail EnableAddOn action.
 * \value ExportSnapshotAction Lightsail ExportSnapshot action.
 * \value GetActiveNamesAction Lightsail GetActiveNames action.
 * \value GetAlarmsAction Lightsail GetAlarms action.
 * \value GetAutoSnapshotsAction Lightsail GetAutoSnapshots action.
 * \value GetBlueprintsAction Lightsail GetBlueprints action.
 * \value GetBucketAccessKeysAction Lightsail GetBucketAccessKeys action.
 * \value GetBucketBundlesAction Lightsail GetBucketBundles action.
 * \value GetBucketMetricDataAction Lightsail GetBucketMetricData action.
 * \value GetBucketsAction Lightsail GetBuckets action.
 * \value GetBundlesAction Lightsail GetBundles action.
 * \value GetCertificatesAction Lightsail GetCertificates action.
 * \value GetCloudFormationStackRecordsAction Lightsail GetCloudFormationStackRecords action.
 * \value GetContactMethodsAction Lightsail GetContactMethods action.
 * \value GetContainerAPIMetadataAction Lightsail GetContainerAPIMetadata action.
 * \value GetContainerImagesAction Lightsail GetContainerImages action.
 * \value GetContainerLogAction Lightsail GetContainerLog action.
 * \value GetContainerServiceDeploymentsAction Lightsail GetContainerServiceDeployments action.
 * \value GetContainerServiceMetricDataAction Lightsail GetContainerServiceMetricData action.
 * \value GetContainerServicePowersAction Lightsail GetContainerServicePowers action.
 * \value GetContainerServicesAction Lightsail GetContainerServices action.
 * \value GetDiskAction Lightsail GetDisk action.
 * \value GetDiskSnapshotAction Lightsail GetDiskSnapshot action.
 * \value GetDiskSnapshotsAction Lightsail GetDiskSnapshots action.
 * \value GetDisksAction Lightsail GetDisks action.
 * \value GetDistributionBundlesAction Lightsail GetDistributionBundles action.
 * \value GetDistributionLatestCacheResetAction Lightsail GetDistributionLatestCacheReset action.
 * \value GetDistributionMetricDataAction Lightsail GetDistributionMetricData action.
 * \value GetDistributionsAction Lightsail GetDistributions action.
 * \value GetDomainAction Lightsail GetDomain action.
 * \value GetDomainsAction Lightsail GetDomains action.
 * \value GetExportSnapshotRecordsAction Lightsail GetExportSnapshotRecords action.
 * \value GetInstanceAction Lightsail GetInstance action.
 * \value GetInstanceAccessDetailsAction Lightsail GetInstanceAccessDetails action.
 * \value GetInstanceMetricDataAction Lightsail GetInstanceMetricData action.
 * \value GetInstancePortStatesAction Lightsail GetInstancePortStates action.
 * \value GetInstanceSnapshotAction Lightsail GetInstanceSnapshot action.
 * \value GetInstanceSnapshotsAction Lightsail GetInstanceSnapshots action.
 * \value GetInstanceStateAction Lightsail GetInstanceState action.
 * \value GetInstancesAction Lightsail GetInstances action.
 * \value GetKeyPairAction Lightsail GetKeyPair action.
 * \value GetKeyPairsAction Lightsail GetKeyPairs action.
 * \value GetLoadBalancerAction Lightsail GetLoadBalancer action.
 * \value GetLoadBalancerMetricDataAction Lightsail GetLoadBalancerMetricData action.
 * \value GetLoadBalancerTlsCertificatesAction Lightsail GetLoadBalancerTlsCertificates action.
 * \value GetLoadBalancerTlsPoliciesAction Lightsail GetLoadBalancerTlsPolicies action.
 * \value GetLoadBalancersAction Lightsail GetLoadBalancers action.
 * \value GetOperationAction Lightsail GetOperation action.
 * \value GetOperationsAction Lightsail GetOperations action.
 * \value GetOperationsForResourceAction Lightsail GetOperationsForResource action.
 * \value GetRegionsAction Lightsail GetRegions action.
 * \value GetRelationalDatabaseAction Lightsail GetRelationalDatabase action.
 * \value GetRelationalDatabaseBlueprintsAction Lightsail GetRelationalDatabaseBlueprints action.
 * \value GetRelationalDatabaseBundlesAction Lightsail GetRelationalDatabaseBundles action.
 * \value GetRelationalDatabaseEventsAction Lightsail GetRelationalDatabaseEvents action.
 * \value GetRelationalDatabaseLogEventsAction Lightsail GetRelationalDatabaseLogEvents action.
 * \value GetRelationalDatabaseLogStreamsAction Lightsail GetRelationalDatabaseLogStreams action.
 * \value GetRelationalDatabaseMasterUserPasswordAction Lightsail GetRelationalDatabaseMasterUserPassword action.
 * \value GetRelationalDatabaseMetricDataAction Lightsail GetRelationalDatabaseMetricData action.
 * \value GetRelationalDatabaseParametersAction Lightsail GetRelationalDatabaseParameters action.
 * \value GetRelationalDatabaseSnapshotAction Lightsail GetRelationalDatabaseSnapshot action.
 * \value GetRelationalDatabaseSnapshotsAction Lightsail GetRelationalDatabaseSnapshots action.
 * \value GetRelationalDatabasesAction Lightsail GetRelationalDatabases action.
 * \value GetStaticIpAction Lightsail GetStaticIp action.
 * \value GetStaticIpsAction Lightsail GetStaticIps action.
 * \value ImportKeyPairAction Lightsail ImportKeyPair action.
 * \value IsVpcPeeredAction Lightsail IsVpcPeered action.
 * \value OpenInstancePublicPortsAction Lightsail OpenInstancePublicPorts action.
 * \value PeerVpcAction Lightsail PeerVpc action.
 * \value PutAlarmAction Lightsail PutAlarm action.
 * \value PutInstancePublicPortsAction Lightsail PutInstancePublicPorts action.
 * \value RebootInstanceAction Lightsail RebootInstance action.
 * \value RebootRelationalDatabaseAction Lightsail RebootRelationalDatabase action.
 * \value RegisterContainerImageAction Lightsail RegisterContainerImage action.
 * \value ReleaseStaticIpAction Lightsail ReleaseStaticIp action.
 * \value ResetDistributionCacheAction Lightsail ResetDistributionCache action.
 * \value SendContactMethodVerificationAction Lightsail SendContactMethodVerification action.
 * \value SetIpAddressTypeAction Lightsail SetIpAddressType action.
 * \value SetResourceAccessForBucketAction Lightsail SetResourceAccessForBucket action.
 * \value StartInstanceAction Lightsail StartInstance action.
 * \value StartRelationalDatabaseAction Lightsail StartRelationalDatabase action.
 * \value StopInstanceAction Lightsail StopInstance action.
 * \value StopRelationalDatabaseAction Lightsail StopRelationalDatabase action.
 * \value TagResourceAction Lightsail TagResource action.
 * \value TestAlarmAction Lightsail TestAlarm action.
 * \value UnpeerVpcAction Lightsail UnpeerVpc action.
 * \value UntagResourceAction Lightsail UntagResource action.
 * \value UpdateBucketAction Lightsail UpdateBucket action.
 * \value UpdateBucketBundleAction Lightsail UpdateBucketBundle action.
 * \value UpdateContainerServiceAction Lightsail UpdateContainerService action.
 * \value UpdateDistributionAction Lightsail UpdateDistribution action.
 * \value UpdateDistributionBundleAction Lightsail UpdateDistributionBundle action.
 * \value UpdateDomainEntryAction Lightsail UpdateDomainEntry action.
 * \value UpdateLoadBalancerAttributeAction Lightsail UpdateLoadBalancerAttribute action.
 * \value UpdateRelationalDatabaseAction Lightsail UpdateRelationalDatabase action.
 * \value UpdateRelationalDatabaseParametersAction Lightsail UpdateRelationalDatabaseParameters action.
 */

/*!
 * Constructs a LightsailRequest object for Lightsail \a action.
 */
LightsailRequest::LightsailRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LightsailRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LightsailRequest::LightsailRequest(const LightsailRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LightsailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LightsailRequest object to be equal to \a other.
 */
LightsailRequest& LightsailRequest::operator=(const LightsailRequest &other)
{
    Q_D(LightsailRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LightsailRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LightsailRequestPrivate.
 */
LightsailRequest::LightsailRequest(LightsailRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Lightsail action to be performed by this request.
 */
LightsailRequest::Action LightsailRequest::action() const
{
    Q_D(const LightsailRequest);
    return d->action;
}

/*!
 * Returns the name of the Lightsail action to be performed by this request.
 */
QString LightsailRequest::actionString() const
{
    return LightsailRequestPrivate::toString(action());
}

/*!
 * Returns the Lightsail API version implemented by this request.
 */
QString LightsailRequest::apiVersion() const
{
    Q_D(const LightsailRequest);
    return d->apiVersion;
}

/*!
 * Sets the Lightsail action to be performed by this request to \a action.
 */
void LightsailRequest::setAction(const Action action)
{
    Q_D(LightsailRequest);
    d->action = action;
}

/*!
 * Sets the Lightsail API version to include in this request to \a version.
 */
void LightsailRequest::setApiVersion(const QString &version)
{
    Q_D(LightsailRequest);
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
bool LightsailRequest::operator==(const LightsailRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Lightsail queue name.
 *
 * @par From Lightsail FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Lightsail queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LightsailRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LightsailRequest::clearParameter(const QString &name)
{
    Q_D(LightsailRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LightsailRequest::clearParameters()
{
    Q_D(LightsailRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LightsailRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LightsailRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LightsailRequest::parameters() const
{
    Q_D(const LightsailRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LightsailRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LightsailRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LightsailRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LightsailRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Lightsail request using the given
 * \a endpoint.
 *
 * This Lightsail implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LightsailRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LightsailRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Lightsail::LightsailRequestPrivate
 * \brief The LightsailRequestPrivate class provides private implementation for LightsailRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a LightsailRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
LightsailRequestPrivate::LightsailRequestPrivate(const LightsailRequest::Action action, LightsailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-11-28"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LightsailRequest class's copy constructor.
 */
LightsailRequestPrivate::LightsailRequestPrivate(const LightsailRequestPrivate &other,
                                     LightsailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LightsailRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Lightsail service's Action
 * query parameters.
 */
QString LightsailRequestPrivate::toString(const LightsailRequest::Action &action)
{
    #define ActionToString(action) \
        case LightsailRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AllocateStaticIp);
        ActionToString(AttachCertificateToDistribution);
        ActionToString(AttachDisk);
        ActionToString(AttachInstancesToLoadBalancer);
        ActionToString(AttachLoadBalancerTlsCertificate);
        ActionToString(AttachStaticIp);
        ActionToString(CloseInstancePublicPorts);
        ActionToString(CopySnapshot);
        ActionToString(CreateBucket);
        ActionToString(CreateBucketAccessKey);
        ActionToString(CreateCertificate);
        ActionToString(CreateCloudFormationStack);
        ActionToString(CreateContactMethod);
        ActionToString(CreateContainerService);
        ActionToString(CreateContainerServiceDeployment);
        ActionToString(CreateContainerServiceRegistryLogin);
        ActionToString(CreateDisk);
        ActionToString(CreateDiskFromSnapshot);
        ActionToString(CreateDiskSnapshot);
        ActionToString(CreateDistribution);
        ActionToString(CreateDomain);
        ActionToString(CreateDomainEntry);
        ActionToString(CreateInstanceSnapshot);
        ActionToString(CreateInstances);
        ActionToString(CreateInstancesFromSnapshot);
        ActionToString(CreateKeyPair);
        ActionToString(CreateLoadBalancer);
        ActionToString(CreateLoadBalancerTlsCertificate);
        ActionToString(CreateRelationalDatabase);
        ActionToString(CreateRelationalDatabaseFromSnapshot);
        ActionToString(CreateRelationalDatabaseSnapshot);
        ActionToString(DeleteAlarm);
        ActionToString(DeleteAutoSnapshot);
        ActionToString(DeleteBucket);
        ActionToString(DeleteBucketAccessKey);
        ActionToString(DeleteCertificate);
        ActionToString(DeleteContactMethod);
        ActionToString(DeleteContainerImage);
        ActionToString(DeleteContainerService);
        ActionToString(DeleteDisk);
        ActionToString(DeleteDiskSnapshot);
        ActionToString(DeleteDistribution);
        ActionToString(DeleteDomain);
        ActionToString(DeleteDomainEntry);
        ActionToString(DeleteInstance);
        ActionToString(DeleteInstanceSnapshot);
        ActionToString(DeleteKeyPair);
        ActionToString(DeleteKnownHostKeys);
        ActionToString(DeleteLoadBalancer);
        ActionToString(DeleteLoadBalancerTlsCertificate);
        ActionToString(DeleteRelationalDatabase);
        ActionToString(DeleteRelationalDatabaseSnapshot);
        ActionToString(DetachCertificateFromDistribution);
        ActionToString(DetachDisk);
        ActionToString(DetachInstancesFromLoadBalancer);
        ActionToString(DetachStaticIp);
        ActionToString(DisableAddOn);
        ActionToString(DownloadDefaultKeyPair);
        ActionToString(EnableAddOn);
        ActionToString(ExportSnapshot);
        ActionToString(GetActiveNames);
        ActionToString(GetAlarms);
        ActionToString(GetAutoSnapshots);
        ActionToString(GetBlueprints);
        ActionToString(GetBucketAccessKeys);
        ActionToString(GetBucketBundles);
        ActionToString(GetBucketMetricData);
        ActionToString(GetBuckets);
        ActionToString(GetBundles);
        ActionToString(GetCertificates);
        ActionToString(GetCloudFormationStackRecords);
        ActionToString(GetContactMethods);
        ActionToString(GetContainerAPIMetadata);
        ActionToString(GetContainerImages);
        ActionToString(GetContainerLog);
        ActionToString(GetContainerServiceDeployments);
        ActionToString(GetContainerServiceMetricData);
        ActionToString(GetContainerServicePowers);
        ActionToString(GetContainerServices);
        ActionToString(GetDisk);
        ActionToString(GetDiskSnapshot);
        ActionToString(GetDiskSnapshots);
        ActionToString(GetDisks);
        ActionToString(GetDistributionBundles);
        ActionToString(GetDistributionLatestCacheReset);
        ActionToString(GetDistributionMetricData);
        ActionToString(GetDistributions);
        ActionToString(GetDomain);
        ActionToString(GetDomains);
        ActionToString(GetExportSnapshotRecords);
        ActionToString(GetInstance);
        ActionToString(GetInstanceAccessDetails);
        ActionToString(GetInstanceMetricData);
        ActionToString(GetInstancePortStates);
        ActionToString(GetInstanceSnapshot);
        ActionToString(GetInstanceSnapshots);
        ActionToString(GetInstanceState);
        ActionToString(GetInstances);
        ActionToString(GetKeyPair);
        ActionToString(GetKeyPairs);
        ActionToString(GetLoadBalancer);
        ActionToString(GetLoadBalancerMetricData);
        ActionToString(GetLoadBalancerTlsCertificates);
        ActionToString(GetLoadBalancerTlsPolicies);
        ActionToString(GetLoadBalancers);
        ActionToString(GetOperation);
        ActionToString(GetOperations);
        ActionToString(GetOperationsForResource);
        ActionToString(GetRegions);
        ActionToString(GetRelationalDatabase);
        ActionToString(GetRelationalDatabaseBlueprints);
        ActionToString(GetRelationalDatabaseBundles);
        ActionToString(GetRelationalDatabaseEvents);
        ActionToString(GetRelationalDatabaseLogEvents);
        ActionToString(GetRelationalDatabaseLogStreams);
        ActionToString(GetRelationalDatabaseMasterUserPassword);
        ActionToString(GetRelationalDatabaseMetricData);
        ActionToString(GetRelationalDatabaseParameters);
        ActionToString(GetRelationalDatabaseSnapshot);
        ActionToString(GetRelationalDatabaseSnapshots);
        ActionToString(GetRelationalDatabases);
        ActionToString(GetStaticIp);
        ActionToString(GetStaticIps);
        ActionToString(ImportKeyPair);
        ActionToString(IsVpcPeered);
        ActionToString(OpenInstancePublicPorts);
        ActionToString(PeerVpc);
        ActionToString(PutAlarm);
        ActionToString(PutInstancePublicPorts);
        ActionToString(RebootInstance);
        ActionToString(RebootRelationalDatabase);
        ActionToString(RegisterContainerImage);
        ActionToString(ReleaseStaticIp);
        ActionToString(ResetDistributionCache);
        ActionToString(SendContactMethodVerification);
        ActionToString(SetIpAddressType);
        ActionToString(SetResourceAccessForBucket);
        ActionToString(StartInstance);
        ActionToString(StartRelationalDatabase);
        ActionToString(StopInstance);
        ActionToString(StopRelationalDatabase);
        ActionToString(TagResource);
        ActionToString(TestAlarm);
        ActionToString(UnpeerVpc);
        ActionToString(UntagResource);
        ActionToString(UpdateBucket);
        ActionToString(UpdateBucketBundle);
        ActionToString(UpdateContainerService);
        ActionToString(UpdateDistribution);
        ActionToString(UpdateDistributionBundle);
        ActionToString(UpdateDomainEntry);
        ActionToString(UpdateLoadBalancerAttribute);
        ActionToString(UpdateRelationalDatabase);
        ActionToString(UpdateRelationalDatabaseParameters);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Lightsail
} // namespace QtAws
