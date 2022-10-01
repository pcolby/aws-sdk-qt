// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "docdbrequest.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DocDbRequest
 * \brief The DocDbRequest class provides an interface for DocDb requests.
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * \enum DocDbRequest::Action
 *
 * This enum describes the actions that can be performed as DocDb
 * requests.
 *
 * \value AddSourceIdentifierToSubscriptionAction DocDb AddSourceIdentifierToSubscription action.
 * \value AddTagsToResourceAction DocDb AddTagsToResource action.
 * \value ApplyPendingMaintenanceActionAction DocDb ApplyPendingMaintenanceAction action.
 * \value CopyDBClusterParameterGroupAction DocDb CopyDBClusterParameterGroup action.
 * \value CopyDBClusterSnapshotAction DocDb CopyDBClusterSnapshot action.
 * \value CreateDBClusterAction DocDb CreateDBCluster action.
 * \value CreateDBClusterParameterGroupAction DocDb CreateDBClusterParameterGroup action.
 * \value CreateDBClusterSnapshotAction DocDb CreateDBClusterSnapshot action.
 * \value CreateDBInstanceAction DocDb CreateDBInstance action.
 * \value CreateDBSubnetGroupAction DocDb CreateDBSubnetGroup action.
 * \value CreateEventSubscriptionAction DocDb CreateEventSubscription action.
 * \value CreateGlobalClusterAction DocDb CreateGlobalCluster action.
 * \value DeleteDBClusterAction DocDb DeleteDBCluster action.
 * \value DeleteDBClusterParameterGroupAction DocDb DeleteDBClusterParameterGroup action.
 * \value DeleteDBClusterSnapshotAction DocDb DeleteDBClusterSnapshot action.
 * \value DeleteDBInstanceAction DocDb DeleteDBInstance action.
 * \value DeleteDBSubnetGroupAction DocDb DeleteDBSubnetGroup action.
 * \value DeleteEventSubscriptionAction DocDb DeleteEventSubscription action.
 * \value DeleteGlobalClusterAction DocDb DeleteGlobalCluster action.
 * \value DescribeCertificatesAction DocDb DescribeCertificates action.
 * \value DescribeDBClusterParameterGroupsAction DocDb DescribeDBClusterParameterGroups action.
 * \value DescribeDBClusterParametersAction DocDb DescribeDBClusterParameters action.
 * \value DescribeDBClusterSnapshotAttributesAction DocDb DescribeDBClusterSnapshotAttributes action.
 * \value DescribeDBClusterSnapshotsAction DocDb DescribeDBClusterSnapshots action.
 * \value DescribeDBClustersAction DocDb DescribeDBClusters action.
 * \value DescribeDBEngineVersionsAction DocDb DescribeDBEngineVersions action.
 * \value DescribeDBInstancesAction DocDb DescribeDBInstances action.
 * \value DescribeDBSubnetGroupsAction DocDb DescribeDBSubnetGroups action.
 * \value DescribeEngineDefaultClusterParametersAction DocDb DescribeEngineDefaultClusterParameters action.
 * \value DescribeEventCategoriesAction DocDb DescribeEventCategories action.
 * \value DescribeEventSubscriptionsAction DocDb DescribeEventSubscriptions action.
 * \value DescribeEventsAction DocDb DescribeEvents action.
 * \value DescribeGlobalClustersAction DocDb DescribeGlobalClusters action.
 * \value DescribeOrderableDBInstanceOptionsAction DocDb DescribeOrderableDBInstanceOptions action.
 * \value DescribePendingMaintenanceActionsAction DocDb DescribePendingMaintenanceActions action.
 * \value FailoverDBClusterAction DocDb FailoverDBCluster action.
 * \value ListTagsForResourceAction DocDb ListTagsForResource action.
 * \value ModifyDBClusterAction DocDb ModifyDBCluster action.
 * \value ModifyDBClusterParameterGroupAction DocDb ModifyDBClusterParameterGroup action.
 * \value ModifyDBClusterSnapshotAttributeAction DocDb ModifyDBClusterSnapshotAttribute action.
 * \value ModifyDBInstanceAction DocDb ModifyDBInstance action.
 * \value ModifyDBSubnetGroupAction DocDb ModifyDBSubnetGroup action.
 * \value ModifyEventSubscriptionAction DocDb ModifyEventSubscription action.
 * \value ModifyGlobalClusterAction DocDb ModifyGlobalCluster action.
 * \value RebootDBInstanceAction DocDb RebootDBInstance action.
 * \value RemoveFromGlobalClusterAction DocDb RemoveFromGlobalCluster action.
 * \value RemoveSourceIdentifierFromSubscriptionAction DocDb RemoveSourceIdentifierFromSubscription action.
 * \value RemoveTagsFromResourceAction DocDb RemoveTagsFromResource action.
 * \value ResetDBClusterParameterGroupAction DocDb ResetDBClusterParameterGroup action.
 * \value RestoreDBClusterFromSnapshotAction DocDb RestoreDBClusterFromSnapshot action.
 * \value RestoreDBClusterToPointInTimeAction DocDb RestoreDBClusterToPointInTime action.
 * \value StartDBClusterAction DocDb StartDBCluster action.
 * \value StopDBClusterAction DocDb StopDBCluster action.
 */

/*!
 * Constructs a DocDbRequest object for DocDb \a action.
 */
DocDbRequest::DocDbRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DocDbRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DocDbRequest::DocDbRequest(const DocDbRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DocDbRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DocDbRequest object to be equal to \a other.
 */
DocDbRequest& DocDbRequest::operator=(const DocDbRequest &other)
{
    Q_D(DocDbRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DocDbRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DocDbRequestPrivate.
 */
DocDbRequest::DocDbRequest(DocDbRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DocDb action to be performed by this request.
 */
DocDbRequest::Action DocDbRequest::action() const
{
    Q_D(const DocDbRequest);
    return d->action;
}

/*!
 * Returns the name of the DocDb action to be performed by this request.
 */
QString DocDbRequest::actionString() const
{
    return DocDbRequestPrivate::toString(action());
}

/*!
 * Returns the DocDb API version implemented by this request.
 */
QString DocDbRequest::apiVersion() const
{
    Q_D(const DocDbRequest);
    return d->apiVersion;
}

/*!
 * Sets the DocDb action to be performed by this request to \a action.
 */
void DocDbRequest::setAction(const Action action)
{
    Q_D(DocDbRequest);
    d->action = action;
}

/*!
 * Sets the DocDb API version to include in this request to \a version.
 */
void DocDbRequest::setApiVersion(const QString &version)
{
    Q_D(DocDbRequest);
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
bool DocDbRequest::operator==(const DocDbRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DocDb queue name.
 *
 * @par From DocDb FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DocDb queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DocDbRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DocDbRequest::clearParameter(const QString &name)
{
    Q_D(DocDbRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DocDbRequest::clearParameters()
{
    Q_D(DocDbRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DocDbRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DocDbRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DocDbRequest::parameters() const
{
    Q_D(const DocDbRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DocDbRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DocDbRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DocDbRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DocDbRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DocDb request using the given
 * \a endpoint.
 *
 * This DocDb implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DocDbRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DocDbRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DocDb::DocDbRequestPrivate
 * \brief The DocDbRequestPrivate class provides private implementation for DocDbRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DocDbRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DocDbRequestPrivate::DocDbRequestPrivate(const DocDbRequest::Action action, DocDbRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2014-10-31"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DocDbRequest class's copy constructor.
 */
DocDbRequestPrivate::DocDbRequestPrivate(const DocDbRequestPrivate &other,
                                     DocDbRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DocDbRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DocDb service's Action
 * query parameters.
 */
QString DocDbRequestPrivate::toString(const DocDbRequest::Action &action)
{
    #define ActionToString(action) \
        case DocDbRequest::action##Action: return QStringLiteral(#action)
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

} // namespace DocDb
} // namespace QtAws
