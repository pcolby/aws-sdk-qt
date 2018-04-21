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

#include "rdsrequest.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/*!
 * \class QtAws::RDS::RdsRequest
 * \brief The RdsRequest class provides an interface for RDS requests.
 *
 * \inmodule QtAwsRDS
 */

/*!
 * \enum RdsRequest::Action
 *
 * This enum describes the actions that can be performed as RDS
 * requests.
 *
 * \value AddRoleToDBClusterAction RDS AddRoleToDBCluster action.
 * \value AddSourceIdentifierToSubscriptionAction RDS AddSourceIdentifierToSubscription action.
 * \value AddTagsToResourceAction RDS AddTagsToResource action.
 * \value ApplyPendingMaintenanceActionAction RDS ApplyPendingMaintenanceAction action.
 * \value AuthorizeDBSecurityGroupIngressAction RDS AuthorizeDBSecurityGroupIngress action.
 * \value CopyDBClusterParameterGroupAction RDS CopyDBClusterParameterGroup action.
 * \value CopyDBClusterSnapshotAction RDS CopyDBClusterSnapshot action.
 * \value CopyDBParameterGroupAction RDS CopyDBParameterGroup action.
 * \value CopyDBSnapshotAction RDS CopyDBSnapshot action.
 * \value CopyOptionGroupAction RDS CopyOptionGroup action.
 * \value CreateDBClusterAction RDS CreateDBCluster action.
 * \value CreateDBClusterParameterGroupAction RDS CreateDBClusterParameterGroup action.
 * \value CreateDBClusterSnapshotAction RDS CreateDBClusterSnapshot action.
 * \value CreateDBInstanceAction RDS CreateDBInstance action.
 * \value CreateDBInstanceReadReplicaAction RDS CreateDBInstanceReadReplica action.
 * \value CreateDBParameterGroupAction RDS CreateDBParameterGroup action.
 * \value CreateDBSecurityGroupAction RDS CreateDBSecurityGroup action.
 * \value CreateDBSnapshotAction RDS CreateDBSnapshot action.
 * \value CreateDBSubnetGroupAction RDS CreateDBSubnetGroup action.
 * \value CreateEventSubscriptionAction RDS CreateEventSubscription action.
 * \value CreateOptionGroupAction RDS CreateOptionGroup action.
 * \value DeleteDBClusterAction RDS DeleteDBCluster action.
 * \value DeleteDBClusterParameterGroupAction RDS DeleteDBClusterParameterGroup action.
 * \value DeleteDBClusterSnapshotAction RDS DeleteDBClusterSnapshot action.
 * \value DeleteDBInstanceAction RDS DeleteDBInstance action.
 * \value DeleteDBParameterGroupAction RDS DeleteDBParameterGroup action.
 * \value DeleteDBSecurityGroupAction RDS DeleteDBSecurityGroup action.
 * \value DeleteDBSnapshotAction RDS DeleteDBSnapshot action.
 * \value DeleteDBSubnetGroupAction RDS DeleteDBSubnetGroup action.
 * \value DeleteEventSubscriptionAction RDS DeleteEventSubscription action.
 * \value DeleteOptionGroupAction RDS DeleteOptionGroup action.
 * \value DescribeAccountAttributesAction RDS DescribeAccountAttributes action.
 * \value DescribeCertificatesAction RDS DescribeCertificates action.
 * \value DescribeDBClusterParameterGroupsAction RDS DescribeDBClusterParameterGroups action.
 * \value DescribeDBClusterParametersAction RDS DescribeDBClusterParameters action.
 * \value DescribeDBClusterSnapshotAttributesAction RDS DescribeDBClusterSnapshotAttributes action.
 * \value DescribeDBClusterSnapshotsAction RDS DescribeDBClusterSnapshots action.
 * \value DescribeDBClustersAction RDS DescribeDBClusters action.
 * \value DescribeDBEngineVersionsAction RDS DescribeDBEngineVersions action.
 * \value DescribeDBInstancesAction RDS DescribeDBInstances action.
 * \value DescribeDBLogFilesAction RDS DescribeDBLogFiles action.
 * \value DescribeDBParameterGroupsAction RDS DescribeDBParameterGroups action.
 * \value DescribeDBParametersAction RDS DescribeDBParameters action.
 * \value DescribeDBSecurityGroupsAction RDS DescribeDBSecurityGroups action.
 * \value DescribeDBSnapshotAttributesAction RDS DescribeDBSnapshotAttributes action.
 * \value DescribeDBSnapshotsAction RDS DescribeDBSnapshots action.
 * \value DescribeDBSubnetGroupsAction RDS DescribeDBSubnetGroups action.
 * \value DescribeEngineDefaultClusterParametersAction RDS DescribeEngineDefaultClusterParameters action.
 * \value DescribeEngineDefaultParametersAction RDS DescribeEngineDefaultParameters action.
 * \value DescribeEventCategoriesAction RDS DescribeEventCategories action.
 * \value DescribeEventSubscriptionsAction RDS DescribeEventSubscriptions action.
 * \value DescribeEventsAction RDS DescribeEvents action.
 * \value DescribeOptionGroupOptionsAction RDS DescribeOptionGroupOptions action.
 * \value DescribeOptionGroupsAction RDS DescribeOptionGroups action.
 * \value DescribeOrderableDBInstanceOptionsAction RDS DescribeOrderableDBInstanceOptions action.
 * \value DescribePendingMaintenanceActionsAction RDS DescribePendingMaintenanceActions action.
 * \value DescribeReservedDBInstancesAction RDS DescribeReservedDBInstances action.
 * \value DescribeReservedDBInstancesOfferingsAction RDS DescribeReservedDBInstancesOfferings action.
 * \value DescribeSourceRegionsAction RDS DescribeSourceRegions action.
 * \value DescribeValidDBInstanceModificationsAction RDS DescribeValidDBInstanceModifications action.
 * \value DownloadDBLogFilePortionAction RDS DownloadDBLogFilePortion action.
 * \value FailoverDBClusterAction RDS FailoverDBCluster action.
 * \value ListTagsForResourceAction RDS ListTagsForResource action.
 * \value ModifyDBClusterAction RDS ModifyDBCluster action.
 * \value ModifyDBClusterParameterGroupAction RDS ModifyDBClusterParameterGroup action.
 * \value ModifyDBClusterSnapshotAttributeAction RDS ModifyDBClusterSnapshotAttribute action.
 * \value ModifyDBInstanceAction RDS ModifyDBInstance action.
 * \value ModifyDBParameterGroupAction RDS ModifyDBParameterGroup action.
 * \value ModifyDBSnapshotAction RDS ModifyDBSnapshot action.
 * \value ModifyDBSnapshotAttributeAction RDS ModifyDBSnapshotAttribute action.
 * \value ModifyDBSubnetGroupAction RDS ModifyDBSubnetGroup action.
 * \value ModifyEventSubscriptionAction RDS ModifyEventSubscription action.
 * \value ModifyOptionGroupAction RDS ModifyOptionGroup action.
 * \value PromoteReadReplicaAction RDS PromoteReadReplica action.
 * \value PromoteReadReplicaDBClusterAction RDS PromoteReadReplicaDBCluster action.
 * \value PurchaseReservedDBInstancesOfferingAction RDS PurchaseReservedDBInstancesOffering action.
 * \value RebootDBInstanceAction RDS RebootDBInstance action.
 * \value RemoveRoleFromDBClusterAction RDS RemoveRoleFromDBCluster action.
 * \value RemoveSourceIdentifierFromSubscriptionAction RDS RemoveSourceIdentifierFromSubscription action.
 * \value RemoveTagsFromResourceAction RDS RemoveTagsFromResource action.
 * \value ResetDBClusterParameterGroupAction RDS ResetDBClusterParameterGroup action.
 * \value ResetDBParameterGroupAction RDS ResetDBParameterGroup action.
 * \value RestoreDBClusterFromS3Action RDS RestoreDBClusterFromS3 action.
 * \value RestoreDBClusterFromSnapshotAction RDS RestoreDBClusterFromSnapshot action.
 * \value RestoreDBClusterToPointInTimeAction RDS RestoreDBClusterToPointInTime action.
 * \value RestoreDBInstanceFromDBSnapshotAction RDS RestoreDBInstanceFromDBSnapshot action.
 * \value RestoreDBInstanceFromS3Action RDS RestoreDBInstanceFromS3 action.
 * \value RestoreDBInstanceToPointInTimeAction RDS RestoreDBInstanceToPointInTime action.
 * \value RevokeDBSecurityGroupIngressAction RDS RevokeDBSecurityGroupIngress action.
 * \value StartDBInstanceAction RDS StartDBInstance action.
 * \value StopDBInstanceAction RDS StopDBInstance action.
 */

/*!
 * Constructs a RdsRequest object for RDS \a action.
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
 * Returns the RDS action to be performed by this request.
 */
RdsRequest::Action RdsRequest::action() const
{
    Q_D(const RdsRequest);
    return d->action;
}

/*!
 * Returns the name of the RDS action to be performed by this request.
 */
QString RdsRequest::actionString() const
{
    return RdsRequestPrivate::toString(action());
}

/*!
 * Returns the RDS API version implemented by this request.
 */
QString RdsRequest::apiVersion() const
{
    Q_D(const RdsRequest);
    return d->apiVersion;
}

/*!
 * Sets the RDS action to be performed by this request to \a action.
 */
void RdsRequest::setAction(const Action action)
{
    Q_D(RdsRequest);
    d->action = action;
}

/*!
 * Sets the RDS API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid RDS queue name.
 *
 * @par From RDS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid RDS queue name, \c false otherwise.
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
 * Returns a network request for the RDS request using the given
 * \a endpoint.
 *
 * This RDS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest RdsRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const RdsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::RDS::RdsRequestPrivate
 * \brief The RdsRequestPrivate class provides private implementation for RdsRequest.
 * \internal
 *
 * \inmodule QtAwsRDS
 */

/*!
 * Constructs a RdsRequestPrivate object for RDS \a action,
 * with public implementation \a q.
 */
RdsRequestPrivate::RdsRequestPrivate(const RdsRequest::Action action, RdsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
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
 * string representations, appropriate for use with the RDS service's Action
 * query parameters.
 */
QString RdsRequestPrivate::toString(const RdsRequest::Action &action)
{
    #define ActionToString(action) \
        case RdsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace RDS
} // namespace QtAws
