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

#include "databasemigrationservicerequest.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DatabaseMigrationServiceRequest
 * \brief The DatabaseMigrationServiceRequest class provides an interface for DatabaseMigrationService requests.
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * \enum DatabaseMigrationServiceRequest::Action
 *
 * This enum describes the actions that can be performed as DatabaseMigrationService
 * requests.
 *
 * \value AddTagsToResourceAction DatabaseMigrationService AddTagsToResource action.
 * \value ApplyPendingMaintenanceActionAction DatabaseMigrationService ApplyPendingMaintenanceAction action.
 * \value CreateEndpointAction DatabaseMigrationService CreateEndpoint action.
 * \value CreateEventSubscriptionAction DatabaseMigrationService CreateEventSubscription action.
 * \value CreateReplicationInstanceAction DatabaseMigrationService CreateReplicationInstance action.
 * \value CreateReplicationSubnetGroupAction DatabaseMigrationService CreateReplicationSubnetGroup action.
 * \value CreateReplicationTaskAction DatabaseMigrationService CreateReplicationTask action.
 * \value DeleteCertificateAction DatabaseMigrationService DeleteCertificate action.
 * \value DeleteEndpointAction DatabaseMigrationService DeleteEndpoint action.
 * \value DeleteEventSubscriptionAction DatabaseMigrationService DeleteEventSubscription action.
 * \value DeleteReplicationInstanceAction DatabaseMigrationService DeleteReplicationInstance action.
 * \value DeleteReplicationSubnetGroupAction DatabaseMigrationService DeleteReplicationSubnetGroup action.
 * \value DeleteReplicationTaskAction DatabaseMigrationService DeleteReplicationTask action.
 * \value DescribeAccountAttributesAction DatabaseMigrationService DescribeAccountAttributes action.
 * \value DescribeCertificatesAction DatabaseMigrationService DescribeCertificates action.
 * \value DescribeConnectionsAction DatabaseMigrationService DescribeConnections action.
 * \value DescribeEndpointTypesAction DatabaseMigrationService DescribeEndpointTypes action.
 * \value DescribeEndpointsAction DatabaseMigrationService DescribeEndpoints action.
 * \value DescribeEventCategoriesAction DatabaseMigrationService DescribeEventCategories action.
 * \value DescribeEventSubscriptionsAction DatabaseMigrationService DescribeEventSubscriptions action.
 * \value DescribeEventsAction DatabaseMigrationService DescribeEvents action.
 * \value DescribeOrderableReplicationInstancesAction DatabaseMigrationService DescribeOrderableReplicationInstances action.
 * \value DescribePendingMaintenanceActionsAction DatabaseMigrationService DescribePendingMaintenanceActions action.
 * \value DescribeRefreshSchemasStatusAction DatabaseMigrationService DescribeRefreshSchemasStatus action.
 * \value DescribeReplicationInstanceTaskLogsAction DatabaseMigrationService DescribeReplicationInstanceTaskLogs action.
 * \value DescribeReplicationInstancesAction DatabaseMigrationService DescribeReplicationInstances action.
 * \value DescribeReplicationSubnetGroupsAction DatabaseMigrationService DescribeReplicationSubnetGroups action.
 * \value DescribeReplicationTaskAssessmentResultsAction DatabaseMigrationService DescribeReplicationTaskAssessmentResults action.
 * \value DescribeReplicationTasksAction DatabaseMigrationService DescribeReplicationTasks action.
 * \value DescribeSchemasAction DatabaseMigrationService DescribeSchemas action.
 * \value DescribeTableStatisticsAction DatabaseMigrationService DescribeTableStatistics action.
 * \value ImportCertificateAction DatabaseMigrationService ImportCertificate action.
 * \value ListTagsForResourceAction DatabaseMigrationService ListTagsForResource action.
 * \value ModifyEndpointAction DatabaseMigrationService ModifyEndpoint action.
 * \value ModifyEventSubscriptionAction DatabaseMigrationService ModifyEventSubscription action.
 * \value ModifyReplicationInstanceAction DatabaseMigrationService ModifyReplicationInstance action.
 * \value ModifyReplicationSubnetGroupAction DatabaseMigrationService ModifyReplicationSubnetGroup action.
 * \value ModifyReplicationTaskAction DatabaseMigrationService ModifyReplicationTask action.
 * \value RebootReplicationInstanceAction DatabaseMigrationService RebootReplicationInstance action.
 * \value RefreshSchemasAction DatabaseMigrationService RefreshSchemas action.
 * \value ReloadTablesAction DatabaseMigrationService ReloadTables action.
 * \value RemoveTagsFromResourceAction DatabaseMigrationService RemoveTagsFromResource action.
 * \value StartReplicationTaskAction DatabaseMigrationService StartReplicationTask action.
 * \value StartReplicationTaskAssessmentAction DatabaseMigrationService StartReplicationTaskAssessment action.
 * \value StopReplicationTaskAction DatabaseMigrationService StopReplicationTask action.
 * \value TestConnectionAction DatabaseMigrationService TestConnection action.
 */

/*!
 * Constructs a DatabaseMigrationServiceRequest object for DatabaseMigrationService \a action.
 */
DatabaseMigrationServiceRequest::DatabaseMigrationServiceRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DatabaseMigrationServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DatabaseMigrationServiceRequest::DatabaseMigrationServiceRequest(const DatabaseMigrationServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DatabaseMigrationServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DatabaseMigrationServiceRequest object to be equal to \a other.
 */
DatabaseMigrationServiceRequest& DatabaseMigrationServiceRequest::operator=(const DatabaseMigrationServiceRequest &other)
{
    Q_D(DatabaseMigrationServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DatabaseMigrationServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DatabaseMigrationServiceRequestPrivate.
 */
DatabaseMigrationServiceRequest::DatabaseMigrationServiceRequest(DatabaseMigrationServiceRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DatabaseMigrationService action to be performed by this request.
 */
DatabaseMigrationServiceRequest::Action DatabaseMigrationServiceRequest::action() const
{
    Q_D(const DatabaseMigrationServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the DatabaseMigrationService action to be performed by this request.
 */
QString DatabaseMigrationServiceRequest::actionString() const
{
    return DatabaseMigrationServiceRequestPrivate::toString(action());
}

/*!
 * Returns the DatabaseMigrationService API version implemented by this request.
 */
QString DatabaseMigrationServiceRequest::apiVersion() const
{
    Q_D(const DatabaseMigrationServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the DatabaseMigrationService action to be performed by this request to \a action.
 */
void DatabaseMigrationServiceRequest::setAction(const Action action)
{
    Q_D(DatabaseMigrationServiceRequest);
    d->action = action;
}

/*!
 * Sets the DatabaseMigrationService API version to include in this request to \a version.
 */
void DatabaseMigrationServiceRequest::setApiVersion(const QString &version)
{
    Q_D(DatabaseMigrationServiceRequest);
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
bool DatabaseMigrationServiceRequest::operator==(const DatabaseMigrationServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DatabaseMigrationService queue name.
 *
 * @par From DatabaseMigrationService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DatabaseMigrationService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DatabaseMigrationServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DatabaseMigrationServiceRequest::clearParameter(const QString &name)
{
    Q_D(DatabaseMigrationServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DatabaseMigrationServiceRequest::clearParameters()
{
    Q_D(DatabaseMigrationServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DatabaseMigrationServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DatabaseMigrationServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DatabaseMigrationServiceRequest::parameters() const
{
    Q_D(const DatabaseMigrationServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DatabaseMigrationServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DatabaseMigrationServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DatabaseMigrationServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DatabaseMigrationServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DatabaseMigrationService request using the given
 * \a endpoint.
 *
 * This DatabaseMigrationService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DatabaseMigrationServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DatabaseMigrationServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DatabaseMigrationService::DatabaseMigrationServiceRequestPrivate
 * \brief The DatabaseMigrationServiceRequestPrivate class provides private implementation for DatabaseMigrationServiceRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DatabaseMigrationServiceRequestPrivate object for DatabaseMigrationService \a action,
 * with public implementation \a q.
 */
DatabaseMigrationServiceRequestPrivate::DatabaseMigrationServiceRequestPrivate(const DatabaseMigrationServiceRequest::Action action, DatabaseMigrationServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DatabaseMigrationServiceRequest class's copy constructor.
 */
DatabaseMigrationServiceRequestPrivate::DatabaseMigrationServiceRequestPrivate(const DatabaseMigrationServiceRequestPrivate &other,
                                     DatabaseMigrationServiceRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DatabaseMigrationServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DatabaseMigrationService service's Action
 * query parameters.
 */
QString DatabaseMigrationServiceRequestPrivate::toString(const DatabaseMigrationServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case DatabaseMigrationServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DatabaseMigrationService
} // namespace QtAws
