// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rdsrequest.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace Rds {

/*!
 * \class QtAws::Rds::RdsRequest
 * \brief The RdsRequest class provides an interface for Rds requests.
 *
 * \inmodule QtAwsRds
 */

/*!
 * \enum RdsRequest::Action
 *
 * This enum describes the actions that can be performed as Rds
 * requests.
 *
 * \value AddRoleToDBClusterAction Rds AddRoleToDBCluster action.
 * \value AddRoleToDBInstanceAction Rds AddRoleToDBInstance action.
 * \value AddSourceIdentifierToSubscriptionAction Rds AddSourceIdentifierToSubscription action.
 * \value AddTagsToResourceAction Rds AddTagsToResource action.
 * \value ApplyPendingMaintenanceActionAction Rds ApplyPendingMaintenanceAction action.
 * \value AuthorizeDBSecurityGroupIngressAction Rds AuthorizeDBSecurityGroupIngress action.
 * \value BacktrackDBClusterAction Rds BacktrackDBCluster action.
 * \value CancelExportTaskAction Rds CancelExportTask action.
 * \value CopyDBClusterParameterGroupAction Rds CopyDBClusterParameterGroup action.
 * \value CopyDBClusterSnapshotAction Rds CopyDBClusterSnapshot action.
 * \value CopyDBParameterGroupAction Rds CopyDBParameterGroup action.
 * \value CopyDBSnapshotAction Rds CopyDBSnapshot action.
 * \value CopyOptionGroupAction Rds CopyOptionGroup action.
 * \value CreateCustomDBEngineVersionAction Rds CreateCustomDBEngineVersion action.
 * \value CreateDBClusterAction Rds CreateDBCluster action.
 * \value CreateDBClusterEndpointAction Rds CreateDBClusterEndpoint action.
 * \value CreateDBClusterParameterGroupAction Rds CreateDBClusterParameterGroup action.
 * \value CreateDBClusterSnapshotAction Rds CreateDBClusterSnapshot action.
 * \value CreateDBInstanceAction Rds CreateDBInstance action.
 * \value CreateDBInstanceReadReplicaAction Rds CreateDBInstanceReadReplica action.
 * \value CreateDBParameterGroupAction Rds CreateDBParameterGroup action.
 * \value CreateDBProxyAction Rds CreateDBProxy action.
 * \value CreateDBProxyEndpointAction Rds CreateDBProxyEndpoint action.
 * \value CreateDBSecurityGroupAction Rds CreateDBSecurityGroup action.
 * \value CreateDBSnapshotAction Rds CreateDBSnapshot action.
 * \value CreateDBSubnetGroupAction Rds CreateDBSubnetGroup action.
 * \value CreateEventSubscriptionAction Rds CreateEventSubscription action.
 * \value CreateGlobalClusterAction Rds CreateGlobalCluster action.
 * \value CreateOptionGroupAction Rds CreateOptionGroup action.
 * \value DeleteCustomDBEngineVersionAction Rds DeleteCustomDBEngineVersion action.
 * \value DeleteDBClusterAction Rds DeleteDBCluster action.
 * \value DeleteDBClusterEndpointAction Rds DeleteDBClusterEndpoint action.
 * \value DeleteDBClusterParameterGroupAction Rds DeleteDBClusterParameterGroup action.
 * \value DeleteDBClusterSnapshotAction Rds DeleteDBClusterSnapshot action.
 * \value DeleteDBInstanceAction Rds DeleteDBInstance action.
 * \value DeleteDBInstanceAutomatedBackupAction Rds DeleteDBInstanceAutomatedBackup action.
 * \value DeleteDBParameterGroupAction Rds DeleteDBParameterGroup action.
 * \value DeleteDBProxyAction Rds DeleteDBProxy action.
 * \value DeleteDBProxyEndpointAction Rds DeleteDBProxyEndpoint action.
 * \value DeleteDBSecurityGroupAction Rds DeleteDBSecurityGroup action.
 * \value DeleteDBSnapshotAction Rds DeleteDBSnapshot action.
 * \value DeleteDBSubnetGroupAction Rds DeleteDBSubnetGroup action.
 * \value DeleteEventSubscriptionAction Rds DeleteEventSubscription action.
 * \value DeleteGlobalClusterAction Rds DeleteGlobalCluster action.
 * \value DeleteOptionGroupAction Rds DeleteOptionGroup action.
 * \value DeregisterDBProxyTargetsAction Rds DeregisterDBProxyTargets action.
 * \value DescribeAccountAttributesAction Rds DescribeAccountAttributes action.
 * \value DescribeCertificatesAction Rds DescribeCertificates action.
 * \value DescribeDBClusterBacktracksAction Rds DescribeDBClusterBacktracks action.
 * \value DescribeDBClusterEndpointsAction Rds DescribeDBClusterEndpoints action.
 * \value DescribeDBClusterParameterGroupsAction Rds DescribeDBClusterParameterGroups action.
 * \value DescribeDBClusterParametersAction Rds DescribeDBClusterParameters action.
 * \value DescribeDBClusterSnapshotAttributesAction Rds DescribeDBClusterSnapshotAttributes action.
 * \value DescribeDBClusterSnapshotsAction Rds DescribeDBClusterSnapshots action.
 * \value DescribeDBClustersAction Rds DescribeDBClusters action.
 * \value DescribeDBEngineVersionsAction Rds DescribeDBEngineVersions action.
 * \value DescribeDBInstanceAutomatedBackupsAction Rds DescribeDBInstanceAutomatedBackups action.
 * \value DescribeDBInstancesAction Rds DescribeDBInstances action.
 * \value DescribeDBLogFilesAction Rds DescribeDBLogFiles action.
 * \value DescribeDBParameterGroupsAction Rds DescribeDBParameterGroups action.
 * \value DescribeDBParametersAction Rds DescribeDBParameters action.
 * \value DescribeDBProxiesAction Rds DescribeDBProxies action.
 * \value DescribeDBProxyEndpointsAction Rds DescribeDBProxyEndpoints action.
 * \value DescribeDBProxyTargetGroupsAction Rds DescribeDBProxyTargetGroups action.
 * \value DescribeDBProxyTargetsAction Rds DescribeDBProxyTargets action.
 * \value DescribeDBSecurityGroupsAction Rds DescribeDBSecurityGroups action.
 * \value DescribeDBSnapshotAttributesAction Rds DescribeDBSnapshotAttributes action.
 * \value DescribeDBSnapshotsAction Rds DescribeDBSnapshots action.
 * \value DescribeDBSubnetGroupsAction Rds DescribeDBSubnetGroups action.
 * \value DescribeEngineDefaultClusterParametersAction Rds DescribeEngineDefaultClusterParameters action.
 * \value DescribeEngineDefaultParametersAction Rds DescribeEngineDefaultParameters action.
 * \value DescribeEventCategoriesAction Rds DescribeEventCategories action.
 * \value DescribeEventSubscriptionsAction Rds DescribeEventSubscriptions action.
 * \value DescribeEventsAction Rds DescribeEvents action.
 * \value DescribeExportTasksAction Rds DescribeExportTasks action.
 * \value DescribeGlobalClustersAction Rds DescribeGlobalClusters action.
 * \value DescribeOptionGroupOptionsAction Rds DescribeOptionGroupOptions action.
 * \value DescribeOptionGroupsAction Rds DescribeOptionGroups action.
 * \value DescribeOrderableDBInstanceOptionsAction Rds DescribeOrderableDBInstanceOptions action.
 * \value DescribePendingMaintenanceActionsAction Rds DescribePendingMaintenanceActions action.
 * \value DescribeReservedDBInstancesAction Rds DescribeReservedDBInstances action.
 * \value DescribeReservedDBInstancesOfferingsAction Rds DescribeReservedDBInstancesOfferings action.
 * \value DescribeSourceRegionsAction Rds DescribeSourceRegions action.
 * \value DescribeValidDBInstanceModificationsAction Rds DescribeValidDBInstanceModifications action.
 * \value DownloadDBLogFilePortionAction Rds DownloadDBLogFilePortion action.
 * \value FailoverDBClusterAction Rds FailoverDBCluster action.
 * \value FailoverGlobalClusterAction Rds FailoverGlobalCluster action.
 * \value ListTagsForResourceAction Rds ListTagsForResource action.
 * \value ModifyActivityStreamAction Rds ModifyActivityStream action.
 * \value ModifyCertificatesAction Rds ModifyCertificates action.
 * \value ModifyCurrentDBClusterCapacityAction Rds ModifyCurrentDBClusterCapacity action.
 * \value ModifyCustomDBEngineVersionAction Rds ModifyCustomDBEngineVersion action.
 * \value ModifyDBClusterAction Rds ModifyDBCluster action.
 * \value ModifyDBClusterEndpointAction Rds ModifyDBClusterEndpoint action.
 * \value ModifyDBClusterParameterGroupAction Rds ModifyDBClusterParameterGroup action.
 * \value ModifyDBClusterSnapshotAttributeAction Rds ModifyDBClusterSnapshotAttribute action.
 * \value ModifyDBInstanceAction Rds ModifyDBInstance action.
 * \value ModifyDBParameterGroupAction Rds ModifyDBParameterGroup action.
 * \value ModifyDBProxyAction Rds ModifyDBProxy action.
 * \value ModifyDBProxyEndpointAction Rds ModifyDBProxyEndpoint action.
 * \value ModifyDBProxyTargetGroupAction Rds ModifyDBProxyTargetGroup action.
 * \value ModifyDBSnapshotAction Rds ModifyDBSnapshot action.
 * \value ModifyDBSnapshotAttributeAction Rds ModifyDBSnapshotAttribute action.
 * \value ModifyDBSubnetGroupAction Rds ModifyDBSubnetGroup action.
 * \value ModifyEventSubscriptionAction Rds ModifyEventSubscription action.
 * \value ModifyGlobalClusterAction Rds ModifyGlobalCluster action.
 * \value ModifyOptionGroupAction Rds ModifyOptionGroup action.
 * \value PromoteReadReplicaAction Rds PromoteReadReplica action.
 * \value PromoteReadReplicaDBClusterAction Rds PromoteReadReplicaDBCluster action.
 * \value PurchaseReservedDBInstancesOfferingAction Rds PurchaseReservedDBInstancesOffering action.
 * \value RebootDBClusterAction Rds RebootDBCluster action.
 * \value RebootDBInstanceAction Rds RebootDBInstance action.
 * \value RegisterDBProxyTargetsAction Rds RegisterDBProxyTargets action.
 * \value RemoveFromGlobalClusterAction Rds RemoveFromGlobalCluster action.
 * \value RemoveRoleFromDBClusterAction Rds RemoveRoleFromDBCluster action.
 * \value RemoveRoleFromDBInstanceAction Rds RemoveRoleFromDBInstance action.
 * \value RemoveSourceIdentifierFromSubscriptionAction Rds RemoveSourceIdentifierFromSubscription action.
 * \value RemoveTagsFromResourceAction Rds RemoveTagsFromResource action.
 * \value ResetDBClusterParameterGroupAction Rds ResetDBClusterParameterGroup action.
 * \value ResetDBParameterGroupAction Rds ResetDBParameterGroup action.
 * \value RestoreDBClusterFromS3Action Rds RestoreDBClusterFromS3 action.
 * \value RestoreDBClusterFromSnapshotAction Rds RestoreDBClusterFromSnapshot action.
 * \value RestoreDBClusterToPointInTimeAction Rds RestoreDBClusterToPointInTime action.
 * \value RestoreDBInstanceFromDBSnapshotAction Rds RestoreDBInstanceFromDBSnapshot action.
 * \value RestoreDBInstanceFromS3Action Rds RestoreDBInstanceFromS3 action.
 * \value RestoreDBInstanceToPointInTimeAction Rds RestoreDBInstanceToPointInTime action.
 * \value RevokeDBSecurityGroupIngressAction Rds RevokeDBSecurityGroupIngress action.
 * \value StartActivityStreamAction Rds StartActivityStream action.
 * \value StartDBClusterAction Rds StartDBCluster action.
 * \value StartDBInstanceAction Rds StartDBInstance action.
 * \value StartDBInstanceAutomatedBackupsReplicationAction Rds StartDBInstanceAutomatedBackupsReplication action.
 * \value StartExportTaskAction Rds StartExportTask action.
 * \value StopActivityStreamAction Rds StopActivityStream action.
 * \value StopDBClusterAction Rds StopDBCluster action.
 * \value StopDBInstanceAction Rds StopDBInstance action.
 * \value StopDBInstanceAutomatedBackupsReplicationAction Rds StopDBInstanceAutomatedBackupsReplication action.
 * \value SwitchoverReadReplicaAction Rds SwitchoverReadReplica action.
 */

/*!
 * Constructs a RdsRequest object for Rds \a action.
 */
RdsRequest::RdsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new RdsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
RdsRequest::RdsRequest(const RdsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new RdsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the RdsRequest object to be equal to \a other.
 */
RdsRequest& RdsRequest::operator=(const RdsRequest &other)
{
    Q_D(RdsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa RdsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RdsRequestPrivate.
 */
RdsRequest::RdsRequest(RdsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Rds action to be performed by this request.
 */
RdsRequest::Action RdsRequest::action() const
{
    Q_D(const RdsRequest);
    return d->action;
}

/*!
 * Returns the name of the Rds action to be performed by this request.
 */
QString RdsRequest::actionString() const
{
    return RdsRequestPrivate::toString(action());
}

/*!
 * Returns the Rds API version implemented by this request.
 */
QString RdsRequest::apiVersion() const
{
    Q_D(const RdsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Rds action to be performed by this request to \a action.
 */
void RdsRequest::setAction(const Action action)
{
    Q_D(RdsRequest);
    d->action = action;
}

/*!
 * Sets the Rds API version to include in this request to \a version.
 */
void RdsRequest::setApiVersion(const QString &version)
{
    Q_D(RdsRequest);
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
bool RdsRequest::operator==(const RdsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Rds queue name.
 *
 * @par From Rds FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Rds queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool RdsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int RdsRequest::clearParameter(const QString &name)
{
    Q_D(RdsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void RdsRequest::clearParameters()
{
    Q_D(RdsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant RdsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const RdsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &RdsRequest::parameters() const
{
    Q_D(const RdsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void RdsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(RdsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void RdsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(RdsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Rds request using the given
 * \a endpoint.
 *
 * This Rds implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RdsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const RdsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Rds::RdsRequestPrivate
 * \brief The RdsRequestPrivate class provides private implementation for RdsRequest.
 * \internal
 *
 * \inmodule QtAwsRds
 */

/*!
 * Constructs a RdsRequestPrivate object for Rds \a action,
 * with public implementation \a q.
 */
RdsRequestPrivate::RdsRequestPrivate(const RdsRequest::Action action, RdsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2014-10-31"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the RdsRequest class's copy constructor.
 */
RdsRequestPrivate::RdsRequestPrivate(const RdsRequestPrivate &other,
                                     RdsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts RdsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Rds service's Action
 * query parameters.
 */
QString RdsRequestPrivate::toString(const RdsRequest::Action &action)
{
    #define ActionToString(action) \
        case RdsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddRoleToDBCluster);
        ActionToString(AddRoleToDBInstance);
        ActionToString(AddSourceIdentifierToSubscription);
        ActionToString(AddTagsToResource);
        ActionToString(ApplyPendingMaintenanceAction);
        ActionToString(AuthorizeDBSecurityGroupIngress);
        ActionToString(BacktrackDBCluster);
        ActionToString(CancelExportTask);
        ActionToString(CopyDBClusterParameterGroup);
        ActionToString(CopyDBClusterSnapshot);
        ActionToString(CopyDBParameterGroup);
        ActionToString(CopyDBSnapshot);
        ActionToString(CopyOptionGroup);
        ActionToString(CreateCustomDBEngineVersion);
        ActionToString(CreateDBCluster);
        ActionToString(CreateDBClusterEndpoint);
        ActionToString(CreateDBClusterParameterGroup);
        ActionToString(CreateDBClusterSnapshot);
        ActionToString(CreateDBInstance);
        ActionToString(CreateDBInstanceReadReplica);
        ActionToString(CreateDBParameterGroup);
        ActionToString(CreateDBProxy);
        ActionToString(CreateDBProxyEndpoint);
        ActionToString(CreateDBSecurityGroup);
        ActionToString(CreateDBSnapshot);
        ActionToString(CreateDBSubnetGroup);
        ActionToString(CreateEventSubscription);
        ActionToString(CreateGlobalCluster);
        ActionToString(CreateOptionGroup);
        ActionToString(DeleteCustomDBEngineVersion);
        ActionToString(DeleteDBCluster);
        ActionToString(DeleteDBClusterEndpoint);
        ActionToString(DeleteDBClusterParameterGroup);
        ActionToString(DeleteDBClusterSnapshot);
        ActionToString(DeleteDBInstance);
        ActionToString(DeleteDBInstanceAutomatedBackup);
        ActionToString(DeleteDBParameterGroup);
        ActionToString(DeleteDBProxy);
        ActionToString(DeleteDBProxyEndpoint);
        ActionToString(DeleteDBSecurityGroup);
        ActionToString(DeleteDBSnapshot);
        ActionToString(DeleteDBSubnetGroup);
        ActionToString(DeleteEventSubscription);
        ActionToString(DeleteGlobalCluster);
        ActionToString(DeleteOptionGroup);
        ActionToString(DeregisterDBProxyTargets);
        ActionToString(DescribeAccountAttributes);
        ActionToString(DescribeCertificates);
        ActionToString(DescribeDBClusterBacktracks);
        ActionToString(DescribeDBClusterEndpoints);
        ActionToString(DescribeDBClusterParameterGroups);
        ActionToString(DescribeDBClusterParameters);
        ActionToString(DescribeDBClusterSnapshotAttributes);
        ActionToString(DescribeDBClusterSnapshots);
        ActionToString(DescribeDBClusters);
        ActionToString(DescribeDBEngineVersions);
        ActionToString(DescribeDBInstanceAutomatedBackups);
        ActionToString(DescribeDBInstances);
        ActionToString(DescribeDBLogFiles);
        ActionToString(DescribeDBParameterGroups);
        ActionToString(DescribeDBParameters);
        ActionToString(DescribeDBProxies);
        ActionToString(DescribeDBProxyEndpoints);
        ActionToString(DescribeDBProxyTargetGroups);
        ActionToString(DescribeDBProxyTargets);
        ActionToString(DescribeDBSecurityGroups);
        ActionToString(DescribeDBSnapshotAttributes);
        ActionToString(DescribeDBSnapshots);
        ActionToString(DescribeDBSubnetGroups);
        ActionToString(DescribeEngineDefaultClusterParameters);
        ActionToString(DescribeEngineDefaultParameters);
        ActionToString(DescribeEventCategories);
        ActionToString(DescribeEventSubscriptions);
        ActionToString(DescribeEvents);
        ActionToString(DescribeExportTasks);
        ActionToString(DescribeGlobalClusters);
        ActionToString(DescribeOptionGroupOptions);
        ActionToString(DescribeOptionGroups);
        ActionToString(DescribeOrderableDBInstanceOptions);
        ActionToString(DescribePendingMaintenanceActions);
        ActionToString(DescribeReservedDBInstances);
        ActionToString(DescribeReservedDBInstancesOfferings);
        ActionToString(DescribeSourceRegions);
        ActionToString(DescribeValidDBInstanceModifications);
        ActionToString(DownloadDBLogFilePortion);
        ActionToString(FailoverDBCluster);
        ActionToString(FailoverGlobalCluster);
        ActionToString(ListTagsForResource);
        ActionToString(ModifyActivityStream);
        ActionToString(ModifyCertificates);
        ActionToString(ModifyCurrentDBClusterCapacity);
        ActionToString(ModifyCustomDBEngineVersion);
        ActionToString(ModifyDBCluster);
        ActionToString(ModifyDBClusterEndpoint);
        ActionToString(ModifyDBClusterParameterGroup);
        ActionToString(ModifyDBClusterSnapshotAttribute);
        ActionToString(ModifyDBInstance);
        ActionToString(ModifyDBParameterGroup);
        ActionToString(ModifyDBProxy);
        ActionToString(ModifyDBProxyEndpoint);
        ActionToString(ModifyDBProxyTargetGroup);
        ActionToString(ModifyDBSnapshot);
        ActionToString(ModifyDBSnapshotAttribute);
        ActionToString(ModifyDBSubnetGroup);
        ActionToString(ModifyEventSubscription);
        ActionToString(ModifyGlobalCluster);
        ActionToString(ModifyOptionGroup);
        ActionToString(PromoteReadReplica);
        ActionToString(PromoteReadReplicaDBCluster);
        ActionToString(PurchaseReservedDBInstancesOffering);
        ActionToString(RebootDBCluster);
        ActionToString(RebootDBInstance);
        ActionToString(RegisterDBProxyTargets);
        ActionToString(RemoveFromGlobalCluster);
        ActionToString(RemoveRoleFromDBCluster);
        ActionToString(RemoveRoleFromDBInstance);
        ActionToString(RemoveSourceIdentifierFromSubscription);
        ActionToString(RemoveTagsFromResource);
        ActionToString(ResetDBClusterParameterGroup);
        ActionToString(ResetDBParameterGroup);
        ActionToString(RestoreDBClusterFromS3);
        ActionToString(RestoreDBClusterFromSnapshot);
        ActionToString(RestoreDBClusterToPointInTime);
        ActionToString(RestoreDBInstanceFromDBSnapshot);
        ActionToString(RestoreDBInstanceFromS3);
        ActionToString(RestoreDBInstanceToPointInTime);
        ActionToString(RevokeDBSecurityGroupIngress);
        ActionToString(StartActivityStream);
        ActionToString(StartDBCluster);
        ActionToString(StartDBInstance);
        ActionToString(StartDBInstanceAutomatedBackupsReplication);
        ActionToString(StartExportTask);
        ActionToString(StopActivityStream);
        ActionToString(StopDBCluster);
        ActionToString(StopDBInstance);
        ActionToString(StopDBInstanceAutomatedBackupsReplication);
        ActionToString(SwitchoverReadReplica);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Rds
} // namespace QtAws
