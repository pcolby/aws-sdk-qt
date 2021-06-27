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

#include "elasticacherequest.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ElastiCacheRequest
 * \brief The ElastiCacheRequest class provides an interface for ElastiCache requests.
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * \enum ElastiCacheRequest::Action
 *
 * This enum describes the actions that can be performed as ElastiCache
 * requests.
 *
 * \value AddTagsToResourceAction ElastiCache AddTagsToResource action.
 * \value AuthorizeCacheSecurityGroupIngressAction ElastiCache AuthorizeCacheSecurityGroupIngress action.
 * \value BatchApplyUpdateActionAction ElastiCache BatchApplyUpdateAction action.
 * \value BatchStopUpdateActionAction ElastiCache BatchStopUpdateAction action.
 * \value CompleteMigrationAction ElastiCache CompleteMigration action.
 * \value CopySnapshotAction ElastiCache CopySnapshot action.
 * \value CreateCacheClusterAction ElastiCache CreateCacheCluster action.
 * \value CreateCacheParameterGroupAction ElastiCache CreateCacheParameterGroup action.
 * \value CreateCacheSecurityGroupAction ElastiCache CreateCacheSecurityGroup action.
 * \value CreateCacheSubnetGroupAction ElastiCache CreateCacheSubnetGroup action.
 * \value CreateGlobalReplicationGroupAction ElastiCache CreateGlobalReplicationGroup action.
 * \value CreateReplicationGroupAction ElastiCache CreateReplicationGroup action.
 * \value CreateSnapshotAction ElastiCache CreateSnapshot action.
 * \value CreateUserAction ElastiCache CreateUser action.
 * \value CreateUserGroupAction ElastiCache CreateUserGroup action.
 * \value DecreaseNodeGroupsInGlobalReplicationGroupAction ElastiCache DecreaseNodeGroupsInGlobalReplicationGroup action.
 * \value DecreaseReplicaCountAction ElastiCache DecreaseReplicaCount action.
 * \value DeleteCacheClusterAction ElastiCache DeleteCacheCluster action.
 * \value DeleteCacheParameterGroupAction ElastiCache DeleteCacheParameterGroup action.
 * \value DeleteCacheSecurityGroupAction ElastiCache DeleteCacheSecurityGroup action.
 * \value DeleteCacheSubnetGroupAction ElastiCache DeleteCacheSubnetGroup action.
 * \value DeleteGlobalReplicationGroupAction ElastiCache DeleteGlobalReplicationGroup action.
 * \value DeleteReplicationGroupAction ElastiCache DeleteReplicationGroup action.
 * \value DeleteSnapshotAction ElastiCache DeleteSnapshot action.
 * \value DeleteUserAction ElastiCache DeleteUser action.
 * \value DeleteUserGroupAction ElastiCache DeleteUserGroup action.
 * \value DescribeCacheClustersAction ElastiCache DescribeCacheClusters action.
 * \value DescribeCacheEngineVersionsAction ElastiCache DescribeCacheEngineVersions action.
 * \value DescribeCacheParameterGroupsAction ElastiCache DescribeCacheParameterGroups action.
 * \value DescribeCacheParametersAction ElastiCache DescribeCacheParameters action.
 * \value DescribeCacheSecurityGroupsAction ElastiCache DescribeCacheSecurityGroups action.
 * \value DescribeCacheSubnetGroupsAction ElastiCache DescribeCacheSubnetGroups action.
 * \value DescribeEngineDefaultParametersAction ElastiCache DescribeEngineDefaultParameters action.
 * \value DescribeEventsAction ElastiCache DescribeEvents action.
 * \value DescribeGlobalReplicationGroupsAction ElastiCache DescribeGlobalReplicationGroups action.
 * \value DescribeReplicationGroupsAction ElastiCache DescribeReplicationGroups action.
 * \value DescribeReservedCacheNodesAction ElastiCache DescribeReservedCacheNodes action.
 * \value DescribeReservedCacheNodesOfferingsAction ElastiCache DescribeReservedCacheNodesOfferings action.
 * \value DescribeServiceUpdatesAction ElastiCache DescribeServiceUpdates action.
 * \value DescribeSnapshotsAction ElastiCache DescribeSnapshots action.
 * \value DescribeUpdateActionsAction ElastiCache DescribeUpdateActions action.
 * \value DescribeUserGroupsAction ElastiCache DescribeUserGroups action.
 * \value DescribeUsersAction ElastiCache DescribeUsers action.
 * \value DisassociateGlobalReplicationGroupAction ElastiCache DisassociateGlobalReplicationGroup action.
 * \value FailoverGlobalReplicationGroupAction ElastiCache FailoverGlobalReplicationGroup action.
 * \value IncreaseNodeGroupsInGlobalReplicationGroupAction ElastiCache IncreaseNodeGroupsInGlobalReplicationGroup action.
 * \value IncreaseReplicaCountAction ElastiCache IncreaseReplicaCount action.
 * \value ListAllowedNodeTypeModificationsAction ElastiCache ListAllowedNodeTypeModifications action.
 * \value ListTagsForResourceAction ElastiCache ListTagsForResource action.
 * \value ModifyCacheClusterAction ElastiCache ModifyCacheCluster action.
 * \value ModifyCacheParameterGroupAction ElastiCache ModifyCacheParameterGroup action.
 * \value ModifyCacheSubnetGroupAction ElastiCache ModifyCacheSubnetGroup action.
 * \value ModifyGlobalReplicationGroupAction ElastiCache ModifyGlobalReplicationGroup action.
 * \value ModifyReplicationGroupAction ElastiCache ModifyReplicationGroup action.
 * \value ModifyReplicationGroupShardConfigurationAction ElastiCache ModifyReplicationGroupShardConfiguration action.
 * \value ModifyUserAction ElastiCache ModifyUser action.
 * \value ModifyUserGroupAction ElastiCache ModifyUserGroup action.
 * \value PurchaseReservedCacheNodesOfferingAction ElastiCache PurchaseReservedCacheNodesOffering action.
 * \value RebalanceSlotsInGlobalReplicationGroupAction ElastiCache RebalanceSlotsInGlobalReplicationGroup action.
 * \value RebootCacheClusterAction ElastiCache RebootCacheCluster action.
 * \value RemoveTagsFromResourceAction ElastiCache RemoveTagsFromResource action.
 * \value ResetCacheParameterGroupAction ElastiCache ResetCacheParameterGroup action.
 * \value RevokeCacheSecurityGroupIngressAction ElastiCache RevokeCacheSecurityGroupIngress action.
 * \value StartMigrationAction ElastiCache StartMigration action.
 * \value TestFailoverAction ElastiCache TestFailover action.
 */

/*!
 * Constructs a ElastiCacheRequest object for ElastiCache \a action.
 */
ElastiCacheRequest::ElastiCacheRequest(const Action action)
    : d_ptr(new ElastiCacheRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ElastiCacheRequest::ElastiCacheRequest(const ElastiCacheRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ElastiCacheRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ElastiCacheRequest object to be equal to \a other.
 */
ElastiCacheRequest& ElastiCacheRequest::operator=(const ElastiCacheRequest &other)
{
    Q_D(ElastiCacheRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ElastiCacheRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElastiCacheRequestPrivate.
 */
ElastiCacheRequest::ElastiCacheRequest(ElastiCacheRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ElastiCache action to be performed by this request.
 */
ElastiCacheRequest::Action ElastiCacheRequest::action() const
{
    Q_D(const ElastiCacheRequest);
    return d->action;
}

/*!
 * Returns the name of the ElastiCache action to be performed by this request.
 */
QString ElastiCacheRequest::actionString() const
{
    return ElastiCacheRequestPrivate::toString(action());
}

/*!
 * Returns the ElastiCache API version implemented by this request.
 */
QString ElastiCacheRequest::apiVersion() const
{
    Q_D(const ElastiCacheRequest);
    return d->apiVersion;
}

/*!
 * Sets the ElastiCache action to be performed by this request to \a action.
 */
void ElastiCacheRequest::setAction(const Action action)
{
    Q_D(ElastiCacheRequest);
    d->action = action;
}

/*!
 * Sets the ElastiCache API version to include in this request to \a version.
 */
void ElastiCacheRequest::setApiVersion(const QString &version)
{
    Q_D(ElastiCacheRequest);
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
bool ElastiCacheRequest::operator==(const ElastiCacheRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ElastiCache queue name.
 *
 * @par From ElastiCache FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElastiCache queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElastiCacheRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ElastiCacheRequest::clearParameter(const QString &name)
{
    Q_D(ElastiCacheRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ElastiCacheRequest::clearParameters()
{
    Q_D(ElastiCacheRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ElastiCacheRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElastiCacheRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ElastiCacheRequest::parameters() const
{
    Q_D(const ElastiCacheRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ElastiCacheRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElastiCacheRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ElastiCacheRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElastiCacheRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ElastiCache request using the given
 * \a endpoint.
 *
 * This ElastiCache implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ElastiCacheRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ElastiCacheRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ElastiCache::ElastiCacheRequestPrivate
 * \brief The ElastiCacheRequestPrivate class provides private implementation for ElastiCacheRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ElastiCacheRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ElastiCacheRequestPrivate::ElastiCacheRequestPrivate(const ElastiCacheRequest::Action action, ElastiCacheRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElastiCacheRequest class's copy constructor.
 */
ElastiCacheRequestPrivate::ElastiCacheRequestPrivate(const ElastiCacheRequestPrivate &other,
                                     ElastiCacheRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ElastiCacheRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElastiCache service's Action
 * query parameters.
 */
QString ElastiCacheRequestPrivate::toString(const ElastiCacheRequest::Action &action)
{
    #define ActionToString(action) \
        case ElastiCacheRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElastiCache
} // namespace QtAws
