// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "neptunerequest.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::NeptuneRequest
 * \brief The NeptuneRequest class provides an interface for Neptune requests.
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * \enum NeptuneRequest::Action
 *
 * This enum describes the actions that can be performed as Neptune
 * requests.
 *
 * \value AddRoleToDBClusterAction Neptune AddRoleToDBCluster action.
 * \value AddSourceIdentifierToSubscriptionAction Neptune AddSourceIdentifierToSubscription action.
 * \value AddTagsToResourceAction Neptune AddTagsToResource action.
 * \value ApplyPendingMaintenanceActionAction Neptune ApplyPendingMaintenanceAction action.
 * \value CopyDBClusterParameterGroupAction Neptune CopyDBClusterParameterGroup action.
 * \value CopyDBClusterSnapshotAction Neptune CopyDBClusterSnapshot action.
 * \value CopyDBParameterGroupAction Neptune CopyDBParameterGroup action.
 * \value CreateDBClusterAction Neptune CreateDBCluster action.
 * \value CreateDBClusterEndpointAction Neptune CreateDBClusterEndpoint action.
 * \value CreateDBClusterParameterGroupAction Neptune CreateDBClusterParameterGroup action.
 * \value CreateDBClusterSnapshotAction Neptune CreateDBClusterSnapshot action.
 * \value CreateDBInstanceAction Neptune CreateDBInstance action.
 * \value CreateDBParameterGroupAction Neptune CreateDBParameterGroup action.
 * \value CreateDBSubnetGroupAction Neptune CreateDBSubnetGroup action.
 * \value CreateEventSubscriptionAction Neptune CreateEventSubscription action.
 * \value CreateGlobalClusterAction Neptune CreateGlobalCluster action.
 * \value DeleteDBClusterAction Neptune DeleteDBCluster action.
 * \value DeleteDBClusterEndpointAction Neptune DeleteDBClusterEndpoint action.
 * \value DeleteDBClusterParameterGroupAction Neptune DeleteDBClusterParameterGroup action.
 * \value DeleteDBClusterSnapshotAction Neptune DeleteDBClusterSnapshot action.
 * \value DeleteDBInstanceAction Neptune DeleteDBInstance action.
 * \value DeleteDBParameterGroupAction Neptune DeleteDBParameterGroup action.
 * \value DeleteDBSubnetGroupAction Neptune DeleteDBSubnetGroup action.
 * \value DeleteEventSubscriptionAction Neptune DeleteEventSubscription action.
 * \value DeleteGlobalClusterAction Neptune DeleteGlobalCluster action.
 * \value DescribeDBClusterEndpointsAction Neptune DescribeDBClusterEndpoints action.
 * \value DescribeDBClusterParameterGroupsAction Neptune DescribeDBClusterParameterGroups action.
 * \value DescribeDBClusterParametersAction Neptune DescribeDBClusterParameters action.
 * \value DescribeDBClusterSnapshotAttributesAction Neptune DescribeDBClusterSnapshotAttributes action.
 * \value DescribeDBClusterSnapshotsAction Neptune DescribeDBClusterSnapshots action.
 * \value DescribeDBClustersAction Neptune DescribeDBClusters action.
 * \value DescribeDBEngineVersionsAction Neptune DescribeDBEngineVersions action.
 * \value DescribeDBInstancesAction Neptune DescribeDBInstances action.
 * \value DescribeDBParameterGroupsAction Neptune DescribeDBParameterGroups action.
 * \value DescribeDBParametersAction Neptune DescribeDBParameters action.
 * \value DescribeDBSubnetGroupsAction Neptune DescribeDBSubnetGroups action.
 * \value DescribeEngineDefaultClusterParametersAction Neptune DescribeEngineDefaultClusterParameters action.
 * \value DescribeEngineDefaultParametersAction Neptune DescribeEngineDefaultParameters action.
 * \value DescribeEventCategoriesAction Neptune DescribeEventCategories action.
 * \value DescribeEventSubscriptionsAction Neptune DescribeEventSubscriptions action.
 * \value DescribeEventsAction Neptune DescribeEvents action.
 * \value DescribeGlobalClustersAction Neptune DescribeGlobalClusters action.
 * \value DescribeOrderableDBInstanceOptionsAction Neptune DescribeOrderableDBInstanceOptions action.
 * \value DescribePendingMaintenanceActionsAction Neptune DescribePendingMaintenanceActions action.
 * \value DescribeValidDBInstanceModificationsAction Neptune DescribeValidDBInstanceModifications action.
 * \value FailoverDBClusterAction Neptune FailoverDBCluster action.
 * \value FailoverGlobalClusterAction Neptune FailoverGlobalCluster action.
 * \value ListTagsForResourceAction Neptune ListTagsForResource action.
 * \value ModifyDBClusterAction Neptune ModifyDBCluster action.
 * \value ModifyDBClusterEndpointAction Neptune ModifyDBClusterEndpoint action.
 * \value ModifyDBClusterParameterGroupAction Neptune ModifyDBClusterParameterGroup action.
 * \value ModifyDBClusterSnapshotAttributeAction Neptune ModifyDBClusterSnapshotAttribute action.
 * \value ModifyDBInstanceAction Neptune ModifyDBInstance action.
 * \value ModifyDBParameterGroupAction Neptune ModifyDBParameterGroup action.
 * \value ModifyDBSubnetGroupAction Neptune ModifyDBSubnetGroup action.
 * \value ModifyEventSubscriptionAction Neptune ModifyEventSubscription action.
 * \value ModifyGlobalClusterAction Neptune ModifyGlobalCluster action.
 * \value PromoteReadReplicaDBClusterAction Neptune PromoteReadReplicaDBCluster action.
 * \value RebootDBInstanceAction Neptune RebootDBInstance action.
 * \value RemoveFromGlobalClusterAction Neptune RemoveFromGlobalCluster action.
 * \value RemoveRoleFromDBClusterAction Neptune RemoveRoleFromDBCluster action.
 * \value RemoveSourceIdentifierFromSubscriptionAction Neptune RemoveSourceIdentifierFromSubscription action.
 * \value RemoveTagsFromResourceAction Neptune RemoveTagsFromResource action.
 * \value ResetDBClusterParameterGroupAction Neptune ResetDBClusterParameterGroup action.
 * \value ResetDBParameterGroupAction Neptune ResetDBParameterGroup action.
 * \value RestoreDBClusterFromSnapshotAction Neptune RestoreDBClusterFromSnapshot action.
 * \value RestoreDBClusterToPointInTimeAction Neptune RestoreDBClusterToPointInTime action.
 * \value StartDBClusterAction Neptune StartDBCluster action.
 * \value StopDBClusterAction Neptune StopDBCluster action.
 */

/*!
 * Constructs a NeptuneRequest object for Neptune \a action.
 */
NeptuneRequest::NeptuneRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new NeptuneRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
NeptuneRequest::NeptuneRequest(const NeptuneRequest &other)
    : QtAws::Core::AwsAbstractRequest(new NeptuneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the NeptuneRequest object to be equal to \a other.
 */
NeptuneRequest& NeptuneRequest::operator=(const NeptuneRequest &other)
{
    Q_D(NeptuneRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa NeptuneRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NeptuneRequestPrivate.
 */
NeptuneRequest::NeptuneRequest(NeptuneRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Neptune action to be performed by this request.
 */
NeptuneRequest::Action NeptuneRequest::action() const
{
    Q_D(const NeptuneRequest);
    return d->action;
}

/*!
 * Returns the name of the Neptune action to be performed by this request.
 */
QString NeptuneRequest::actionString() const
{
    return NeptuneRequestPrivate::toString(action());
}

/*!
 * Returns the Neptune API version implemented by this request.
 */
QString NeptuneRequest::apiVersion() const
{
    Q_D(const NeptuneRequest);
    return d->apiVersion;
}

/*!
 * Sets the Neptune action to be performed by this request to \a action.
 */
void NeptuneRequest::setAction(const Action action)
{
    Q_D(NeptuneRequest);
    d->action = action;
}

/*!
 * Sets the Neptune API version to include in this request to \a version.
 */
void NeptuneRequest::setApiVersion(const QString &version)
{
    Q_D(NeptuneRequest);
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
bool NeptuneRequest::operator==(const NeptuneRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Neptune queue name.
 *
 * @par From Neptune FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Neptune queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool NeptuneRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int NeptuneRequest::clearParameter(const QString &name)
{
    Q_D(NeptuneRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void NeptuneRequest::clearParameters()
{
    Q_D(NeptuneRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant NeptuneRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const NeptuneRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &NeptuneRequest::parameters() const
{
    Q_D(const NeptuneRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void NeptuneRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(NeptuneRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void NeptuneRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(NeptuneRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Neptune request using the given
 * \a endpoint.
 *
 * This Neptune implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest NeptuneRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const NeptuneRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Neptune::NeptuneRequestPrivate
 * \brief The NeptuneRequestPrivate class provides private implementation for NeptuneRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a NeptuneRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
NeptuneRequestPrivate::NeptuneRequestPrivate(const NeptuneRequest::Action action, NeptuneRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2014-10-31"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the NeptuneRequest class's copy constructor.
 */
NeptuneRequestPrivate::NeptuneRequestPrivate(const NeptuneRequestPrivate &other,
                                     NeptuneRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts NeptuneRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Neptune service's Action
 * query parameters.
 */
QString NeptuneRequestPrivate::toString(const NeptuneRequest::Action &action)
{
    #define ActionToString(action) \
        case NeptuneRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddRoleToDBCluster);
        ActionToString(AddSourceIdentifierToSubscription);
        ActionToString(AddTagsToResource);
        ActionToString(ApplyPendingMaintenanceAction);
        ActionToString(CopyDBClusterParameterGroup);
        ActionToString(CopyDBClusterSnapshot);
        ActionToString(CopyDBParameterGroup);
        ActionToString(CreateDBCluster);
        ActionToString(CreateDBClusterEndpoint);
        ActionToString(CreateDBClusterParameterGroup);
        ActionToString(CreateDBClusterSnapshot);
        ActionToString(CreateDBInstance);
        ActionToString(CreateDBParameterGroup);
        ActionToString(CreateDBSubnetGroup);
        ActionToString(CreateEventSubscription);
        ActionToString(CreateGlobalCluster);
        ActionToString(DeleteDBCluster);
        ActionToString(DeleteDBClusterEndpoint);
        ActionToString(DeleteDBClusterParameterGroup);
        ActionToString(DeleteDBClusterSnapshot);
        ActionToString(DeleteDBInstance);
        ActionToString(DeleteDBParameterGroup);
        ActionToString(DeleteDBSubnetGroup);
        ActionToString(DeleteEventSubscription);
        ActionToString(DeleteGlobalCluster);
        ActionToString(DescribeDBClusterEndpoints);
        ActionToString(DescribeDBClusterParameterGroups);
        ActionToString(DescribeDBClusterParameters);
        ActionToString(DescribeDBClusterSnapshotAttributes);
        ActionToString(DescribeDBClusterSnapshots);
        ActionToString(DescribeDBClusters);
        ActionToString(DescribeDBEngineVersions);
        ActionToString(DescribeDBInstances);
        ActionToString(DescribeDBParameterGroups);
        ActionToString(DescribeDBParameters);
        ActionToString(DescribeDBSubnetGroups);
        ActionToString(DescribeEngineDefaultClusterParameters);
        ActionToString(DescribeEngineDefaultParameters);
        ActionToString(DescribeEventCategories);
        ActionToString(DescribeEventSubscriptions);
        ActionToString(DescribeEvents);
        ActionToString(DescribeGlobalClusters);
        ActionToString(DescribeOrderableDBInstanceOptions);
        ActionToString(DescribePendingMaintenanceActions);
        ActionToString(DescribeValidDBInstanceModifications);
        ActionToString(FailoverDBCluster);
        ActionToString(FailoverGlobalCluster);
        ActionToString(ListTagsForResource);
        ActionToString(ModifyDBCluster);
        ActionToString(ModifyDBClusterEndpoint);
        ActionToString(ModifyDBClusterParameterGroup);
        ActionToString(ModifyDBClusterSnapshotAttribute);
        ActionToString(ModifyDBInstance);
        ActionToString(ModifyDBParameterGroup);
        ActionToString(ModifyDBSubnetGroup);
        ActionToString(ModifyEventSubscription);
        ActionToString(ModifyGlobalCluster);
        ActionToString(PromoteReadReplicaDBCluster);
        ActionToString(RebootDBInstance);
        ActionToString(RemoveFromGlobalCluster);
        ActionToString(RemoveRoleFromDBCluster);
        ActionToString(RemoveSourceIdentifierFromSubscription);
        ActionToString(RemoveTagsFromResource);
        ActionToString(ResetDBClusterParameterGroup);
        ActionToString(ResetDBParameterGroup);
        ActionToString(RestoreDBClusterFromSnapshot);
        ActionToString(RestoreDBClusterToPointInTime);
        ActionToString(StartDBCluster);
        ActionToString(StopDBCluster);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Neptune
} // namespace QtAws
