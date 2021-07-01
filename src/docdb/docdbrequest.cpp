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

#include "docdbrequest.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DocDBRequest
 * \brief The DocDBRequest class provides an interface for DocDB requests.
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * \enum DocDBRequest::Action
 *
 * This enum describes the actions that can be performed as DocDB
 * requests.
 *
 * \value AddSourceIdentifierToSubscriptionAction DocDB AddSourceIdentifierToSubscription action.
 * \value AddTagsToResourceAction DocDB AddTagsToResource action.
 * \value ApplyPendingMaintenanceActionAction DocDB ApplyPendingMaintenanceAction action.
 * \value CopyDBClusterParameterGroupAction DocDB CopyDBClusterParameterGroup action.
 * \value CopyDBClusterSnapshotAction DocDB CopyDBClusterSnapshot action.
 * \value CreateDBClusterAction DocDB CreateDBCluster action.
 * \value CreateDBClusterParameterGroupAction DocDB CreateDBClusterParameterGroup action.
 * \value CreateDBClusterSnapshotAction DocDB CreateDBClusterSnapshot action.
 * \value CreateDBInstanceAction DocDB CreateDBInstance action.
 * \value CreateDBSubnetGroupAction DocDB CreateDBSubnetGroup action.
 * \value CreateEventSubscriptionAction DocDB CreateEventSubscription action.
 * \value CreateGlobalClusterAction DocDB CreateGlobalCluster action.
 * \value DeleteDBClusterAction DocDB DeleteDBCluster action.
 * \value DeleteDBClusterParameterGroupAction DocDB DeleteDBClusterParameterGroup action.
 * \value DeleteDBClusterSnapshotAction DocDB DeleteDBClusterSnapshot action.
 * \value DeleteDBInstanceAction DocDB DeleteDBInstance action.
 * \value DeleteDBSubnetGroupAction DocDB DeleteDBSubnetGroup action.
 * \value DeleteEventSubscriptionAction DocDB DeleteEventSubscription action.
 * \value DeleteGlobalClusterAction DocDB DeleteGlobalCluster action.
 * \value DescribeCertificatesAction DocDB DescribeCertificates action.
 * \value DescribeDBClusterParameterGroupsAction DocDB DescribeDBClusterParameterGroups action.
 * \value DescribeDBClusterParametersAction DocDB DescribeDBClusterParameters action.
 * \value DescribeDBClusterSnapshotAttributesAction DocDB DescribeDBClusterSnapshotAttributes action.
 * \value DescribeDBClusterSnapshotsAction DocDB DescribeDBClusterSnapshots action.
 * \value DescribeDBClustersAction DocDB DescribeDBClusters action.
 * \value DescribeDBEngineVersionsAction DocDB DescribeDBEngineVersions action.
 * \value DescribeDBInstancesAction DocDB DescribeDBInstances action.
 * \value DescribeDBSubnetGroupsAction DocDB DescribeDBSubnetGroups action.
 * \value DescribeEngineDefaultClusterParametersAction DocDB DescribeEngineDefaultClusterParameters action.
 * \value DescribeEventCategoriesAction DocDB DescribeEventCategories action.
 * \value DescribeEventSubscriptionsAction DocDB DescribeEventSubscriptions action.
 * \value DescribeEventsAction DocDB DescribeEvents action.
 * \value DescribeGlobalClustersAction DocDB DescribeGlobalClusters action.
 * \value DescribeOrderableDBInstanceOptionsAction DocDB DescribeOrderableDBInstanceOptions action.
 * \value DescribePendingMaintenanceActionsAction DocDB DescribePendingMaintenanceActions action.
 * \value FailoverDBClusterAction DocDB FailoverDBCluster action.
 * \value ListTagsForResourceAction DocDB ListTagsForResource action.
 * \value ModifyDBClusterAction DocDB ModifyDBCluster action.
 * \value ModifyDBClusterParameterGroupAction DocDB ModifyDBClusterParameterGroup action.
 * \value ModifyDBClusterSnapshotAttributeAction DocDB ModifyDBClusterSnapshotAttribute action.
 * \value ModifyDBInstanceAction DocDB ModifyDBInstance action.
 * \value ModifyDBSubnetGroupAction DocDB ModifyDBSubnetGroup action.
 * \value ModifyEventSubscriptionAction DocDB ModifyEventSubscription action.
 * \value ModifyGlobalClusterAction DocDB ModifyGlobalCluster action.
 * \value RebootDBInstanceAction DocDB RebootDBInstance action.
 * \value RemoveFromGlobalClusterAction DocDB RemoveFromGlobalCluster action.
 * \value RemoveSourceIdentifierFromSubscriptionAction DocDB RemoveSourceIdentifierFromSubscription action.
 * \value RemoveTagsFromResourceAction DocDB RemoveTagsFromResource action.
 * \value ResetDBClusterParameterGroupAction DocDB ResetDBClusterParameterGroup action.
 * \value RestoreDBClusterFromSnapshotAction DocDB RestoreDBClusterFromSnapshot action.
 * \value RestoreDBClusterToPointInTimeAction DocDB RestoreDBClusterToPointInTime action.
 * \value StartDBClusterAction DocDB StartDBCluster action.
 * \value StopDBClusterAction DocDB StopDBCluster action.
 */

/*!
 * Constructs a DocDBRequest object for DocDB \a action.
 */
DocDBRequest::DocDBRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DocDBRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DocDBRequest::DocDBRequest(const DocDBRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DocDBRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DocDBRequest object to be equal to \a other.
 */
DocDBRequest& DocDBRequest::operator=(const DocDBRequest &other)
{
    Q_D(DocDBRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DocDBRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DocDBRequestPrivate.
 */
DocDBRequest::DocDBRequest(DocDBRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DocDB action to be performed by this request.
 */
DocDBRequest::Action DocDBRequest::action() const
{
    Q_D(const DocDBRequest);
    return d->action;
}

/*!
 * Returns the name of the DocDB action to be performed by this request.
 */
QString DocDBRequest::actionString() const
{
    return DocDBRequestPrivate::toString(action());
}

/*!
 * Returns the DocDB API version implemented by this request.
 */
QString DocDBRequest::apiVersion() const
{
    Q_D(const DocDBRequest);
    return d->apiVersion;
}

/*!
 * Sets the DocDB action to be performed by this request to \a action.
 */
void DocDBRequest::setAction(const Action action)
{
    Q_D(DocDBRequest);
    d->action = action;
}

/*!
 * Sets the DocDB API version to include in this request to \a version.
 */
void DocDBRequest::setApiVersion(const QString &version)
{
    Q_D(DocDBRequest);
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
bool DocDBRequest::operator==(const DocDBRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DocDB queue name.
 *
 * @par From DocDB FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DocDB queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DocDBRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DocDBRequest::clearParameter(const QString &name)
{
    Q_D(DocDBRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DocDBRequest::clearParameters()
{
    Q_D(DocDBRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DocDBRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DocDBRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DocDBRequest::parameters() const
{
    Q_D(const DocDBRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DocDBRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DocDBRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DocDBRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DocDBRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DocDB request using the given
 * \a endpoint.
 *
 * This DocDB implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DocDBRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DocDBRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DocDB::DocDBRequestPrivate
 * \brief The DocDBRequestPrivate class provides private implementation for DocDBRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DocDBRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DocDBRequestPrivate::DocDBRequestPrivate(const DocDBRequest::Action action, DocDBRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DocDBRequest class's copy constructor.
 */
DocDBRequestPrivate::DocDBRequestPrivate(const DocDBRequestPrivate &other,
                                     DocDBRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DocDBRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DocDB service's Action
 * query parameters.
 */
QString DocDBRequestPrivate::toString(const DocDBRequest::Action &action)
{
    #define ActionToString(action) \
        case DocDBRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddSourceIdentifierToSubscription);
        ActionToString(AddTagsToResource);
        ActionToString(ApplyPendingMaintenanceAction);
        ActionToString(CopyDBClusterParameterGroup);
        ActionToString(CopyDBClusterSnapshot);
        ActionToString(CreateDBCluster);
        ActionToString(CreateDBClusterParameterGroup);
        ActionToString(CreateDBClusterSnapshot);
        ActionToString(CreateDBInstance);
        ActionToString(CreateDBSubnetGroup);
        ActionToString(CreateEventSubscription);
        ActionToString(CreateGlobalCluster);
        ActionToString(DeleteDBCluster);
        ActionToString(DeleteDBClusterParameterGroup);
        ActionToString(DeleteDBClusterSnapshot);
        ActionToString(DeleteDBInstance);
        ActionToString(DeleteDBSubnetGroup);
        ActionToString(DeleteEventSubscription);
        ActionToString(DeleteGlobalCluster);
        ActionToString(DescribeCertificates);
        ActionToString(DescribeDBClusterParameterGroups);
        ActionToString(DescribeDBClusterParameters);
        ActionToString(DescribeDBClusterSnapshotAttributes);
        ActionToString(DescribeDBClusterSnapshots);
        ActionToString(DescribeDBClusters);
        ActionToString(DescribeDBEngineVersions);
        ActionToString(DescribeDBInstances);
        ActionToString(DescribeDBSubnetGroups);
        ActionToString(DescribeEngineDefaultClusterParameters);
        ActionToString(DescribeEventCategories);
        ActionToString(DescribeEventSubscriptions);
        ActionToString(DescribeEvents);
        ActionToString(DescribeGlobalClusters);
        ActionToString(DescribeOrderableDBInstanceOptions);
        ActionToString(DescribePendingMaintenanceActions);
        ActionToString(FailoverDBCluster);
        ActionToString(ListTagsForResource);
        ActionToString(ModifyDBCluster);
        ActionToString(ModifyDBClusterParameterGroup);
        ActionToString(ModifyDBClusterSnapshotAttribute);
        ActionToString(ModifyDBInstance);
        ActionToString(ModifyDBSubnetGroup);
        ActionToString(ModifyEventSubscription);
        ActionToString(ModifyGlobalCluster);
        ActionToString(RebootDBInstance);
        ActionToString(RemoveFromGlobalCluster);
        ActionToString(RemoveSourceIdentifierFromSubscription);
        ActionToString(RemoveTagsFromResource);
        ActionToString(ResetDBClusterParameterGroup);
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

} // namespace DocDB
} // namespace QtAws
