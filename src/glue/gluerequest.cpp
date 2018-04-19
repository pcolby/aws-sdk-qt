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

#include "gluerequest.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GlueRequest
 * \brief The GlueRequest class provides an interface for Glue requests.
 *
 * \inmodule QtAwsGlue
 */

/*!
 * \enum GlueRequest::Action
 *
 * This enum describes the actions that can be performed as Glue
 * requests.
 *
 * \value BatchCreatePartitionAction Glue BatchCreatePartition action.
 * \value BatchDeleteConnectionAction Glue BatchDeleteConnection action.
 * \value BatchDeletePartitionAction Glue BatchDeletePartition action.
 * \value BatchDeleteTableAction Glue BatchDeleteTable action.
 * \value BatchDeleteTableVersionAction Glue BatchDeleteTableVersion action.
 * \value BatchGetPartitionAction Glue BatchGetPartition action.
 * \value BatchStopJobRunAction Glue BatchStopJobRun action.
 * \value CreateClassifierAction Glue CreateClassifier action.
 * \value CreateConnectionAction Glue CreateConnection action.
 * \value CreateCrawlerAction Glue CreateCrawler action.
 * \value CreateDatabaseAction Glue CreateDatabase action.
 * \value CreateDevEndpointAction Glue CreateDevEndpoint action.
 * \value CreateJobAction Glue CreateJob action.
 * \value CreatePartitionAction Glue CreatePartition action.
 * \value CreateScriptAction Glue CreateScript action.
 * \value CreateTableAction Glue CreateTable action.
 * \value CreateTriggerAction Glue CreateTrigger action.
 * \value CreateUserDefinedFunctionAction Glue CreateUserDefinedFunction action.
 * \value DeleteClassifierAction Glue DeleteClassifier action.
 * \value DeleteConnectionAction Glue DeleteConnection action.
 * \value DeleteCrawlerAction Glue DeleteCrawler action.
 * \value DeleteDatabaseAction Glue DeleteDatabase action.
 * \value DeleteDevEndpointAction Glue DeleteDevEndpoint action.
 * \value DeleteJobAction Glue DeleteJob action.
 * \value DeletePartitionAction Glue DeletePartition action.
 * \value DeleteTableAction Glue DeleteTable action.
 * \value DeleteTableVersionAction Glue DeleteTableVersion action.
 * \value DeleteTriggerAction Glue DeleteTrigger action.
 * \value DeleteUserDefinedFunctionAction Glue DeleteUserDefinedFunction action.
 * \value GetCatalogImportStatusAction Glue GetCatalogImportStatus action.
 * \value GetClassifierAction Glue GetClassifier action.
 * \value GetClassifiersAction Glue GetClassifiers action.
 * \value GetConnectionAction Glue GetConnection action.
 * \value GetConnectionsAction Glue GetConnections action.
 * \value GetCrawlerAction Glue GetCrawler action.
 * \value GetCrawlerMetricsAction Glue GetCrawlerMetrics action.
 * \value GetCrawlersAction Glue GetCrawlers action.
 * \value GetDatabaseAction Glue GetDatabase action.
 * \value GetDatabasesAction Glue GetDatabases action.
 * \value GetDataflowGraphAction Glue GetDataflowGraph action.
 * \value GetDevEndpointAction Glue GetDevEndpoint action.
 * \value GetDevEndpointsAction Glue GetDevEndpoints action.
 * \value GetJobAction Glue GetJob action.
 * \value GetJobRunAction Glue GetJobRun action.
 * \value GetJobRunsAction Glue GetJobRuns action.
 * \value GetJobsAction Glue GetJobs action.
 * \value GetMappingAction Glue GetMapping action.
 * \value GetPartitionAction Glue GetPartition action.
 * \value GetPartitionsAction Glue GetPartitions action.
 * \value GetPlanAction Glue GetPlan action.
 * \value GetTableAction Glue GetTable action.
 * \value GetTableVersionAction Glue GetTableVersion action.
 * \value GetTableVersionsAction Glue GetTableVersions action.
 * \value GetTablesAction Glue GetTables action.
 * \value GetTriggerAction Glue GetTrigger action.
 * \value GetTriggersAction Glue GetTriggers action.
 * \value GetUserDefinedFunctionAction Glue GetUserDefinedFunction action.
 * \value GetUserDefinedFunctionsAction Glue GetUserDefinedFunctions action.
 * \value ImportCatalogToGlueAction Glue ImportCatalogToGlue action.
 * \value ResetJobBookmarkAction Glue ResetJobBookmark action.
 * \value StartCrawlerAction Glue StartCrawler action.
 * \value StartCrawlerScheduleAction Glue StartCrawlerSchedule action.
 * \value StartJobRunAction Glue StartJobRun action.
 * \value StartTriggerAction Glue StartTrigger action.
 * \value StopCrawlerAction Glue StopCrawler action.
 * \value StopCrawlerScheduleAction Glue StopCrawlerSchedule action.
 * \value StopTriggerAction Glue StopTrigger action.
 * \value UpdateClassifierAction Glue UpdateClassifier action.
 * \value UpdateConnectionAction Glue UpdateConnection action.
 * \value UpdateCrawlerAction Glue UpdateCrawler action.
 * \value UpdateCrawlerScheduleAction Glue UpdateCrawlerSchedule action.
 * \value UpdateDatabaseAction Glue UpdateDatabase action.
 * \value UpdateDevEndpointAction Glue UpdateDevEndpoint action.
 * \value UpdateJobAction Glue UpdateJob action.
 * \value UpdatePartitionAction Glue UpdatePartition action.
 * \value UpdateTableAction Glue UpdateTable action.
 * \value UpdateTriggerAction Glue UpdateTrigger action.
 * \value UpdateUserDefinedFunctionAction Glue UpdateUserDefinedFunction action.
 */

/*!
 * Constructs a[n] GlueRequest object for Glue \a action.
 */
GlueRequest::GlueRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new GlueRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GlueRequest::GlueRequest(const GlueRequest &other)
    : QtAws::Core::AwsAbstractRequest(new GlueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GlueRequest object to be equal to \a other.
 */
GlueRequest& GlueRequest::operator=(const GlueRequest &other)
{
    Q_D(GlueRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GlueRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlueRequestPrivate.
 */
GlueRequest::GlueRequest(GlueRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Glue action to be performed by this request.
 */
GlueRequest::Action GlueRequest::action() const
{
    Q_D(const GlueRequest);
    return d->action;
}

/*!
 * Returns the name of the Glue action to be performed by this request.
 */
QString GlueRequest::actionString() const
{
    return GlueRequestPrivate::toString(action());
}

/*!
 * Returns the Glue API version implemented by this request.
 */
QString GlueRequest::apiVersion() const
{
    Q_D(const GlueRequest);
    return d->apiVersion;
}

/*!
 * Sets the Glue action to be performed by this request to \a action.
 */
void GlueRequest::setAction(const Action action)
{
    Q_D(GlueRequest);
    d->action = action;
}

/*!
 * Sets the Glue API version to include in this request to \a version.
 */
void GlueRequest::setApiVersion(const QString &version)
{
    Q_D(GlueRequest);
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
bool GlueRequest::operator==(const GlueRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Glue queue name.
 *
 * @par From Glue FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Glue queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GlueRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GlueRequest::clearParameter(const QString &name)
{
    Q_D(GlueRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GlueRequest::clearParameters()
{
    Q_D(GlueRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GlueRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GlueRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GlueRequest::parameters() const
{
    Q_D(const GlueRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GlueRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GlueRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GlueRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GlueRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Glue request using the given
 * \a endpoint.
 *
 * This Glue implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GlueRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const GlueRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Glue::GlueRequestPrivate
 * \brief The GlueRequestPrivate class provides private implementation for GlueRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GlueRequestPrivate object for Glue \a action with,
 * public implementation \a q.
 */
GlueRequestPrivate::GlueRequestPrivate(const GlueRequest::Action action, GlueRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GlueRequest class's copy constructor.
 */
GlueRequestPrivate::GlueRequestPrivate(const GlueRequestPrivate &other,
                                     GlueRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GlueRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Glue service's Action
 * query parameters.
 */
QString GlueRequestPrivate::toString(const GlueRequest::Action &action)
{
    #define ActionToString(action) \
        case GlueRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Glue
} // namespace QtAws
