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

#include "dynamodbrequest.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDb {

/*!
 * \class QtAws::DynamoDb::DynamoDbRequest
 * \brief The DynamoDbRequest class provides an interface for DynamoDb requests.
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * \enum DynamoDbRequest::Action
 *
 * This enum describes the actions that can be performed as DynamoDb
 * requests.
 *
 * \value BatchExecuteStatementAction DynamoDb BatchExecuteStatement action.
 * \value BatchGetItemAction DynamoDb BatchGetItem action.
 * \value BatchWriteItemAction DynamoDb BatchWriteItem action.
 * \value CreateBackupAction DynamoDb CreateBackup action.
 * \value CreateGlobalTableAction DynamoDb CreateGlobalTable action.
 * \value CreateTableAction DynamoDb CreateTable action.
 * \value DeleteBackupAction DynamoDb DeleteBackup action.
 * \value DeleteItemAction DynamoDb DeleteItem action.
 * \value DeleteTableAction DynamoDb DeleteTable action.
 * \value DescribeBackupAction DynamoDb DescribeBackup action.
 * \value DescribeContinuousBackupsAction DynamoDb DescribeContinuousBackups action.
 * \value DescribeContributorInsightsAction DynamoDb DescribeContributorInsights action.
 * \value DescribeEndpointsAction DynamoDb DescribeEndpoints action.
 * \value DescribeExportAction DynamoDb DescribeExport action.
 * \value DescribeGlobalTableAction DynamoDb DescribeGlobalTable action.
 * \value DescribeGlobalTableSettingsAction DynamoDb DescribeGlobalTableSettings action.
 * \value DescribeImportAction DynamoDb DescribeImport action.
 * \value DescribeKinesisStreamingDestinationAction DynamoDb DescribeKinesisStreamingDestination action.
 * \value DescribeLimitsAction DynamoDb DescribeLimits action.
 * \value DescribeTableAction DynamoDb DescribeTable action.
 * \value DescribeTableReplicaAutoScalingAction DynamoDb DescribeTableReplicaAutoScaling action.
 * \value DescribeTimeToLiveAction DynamoDb DescribeTimeToLive action.
 * \value DisableKinesisStreamingDestinationAction DynamoDb DisableKinesisStreamingDestination action.
 * \value EnableKinesisStreamingDestinationAction DynamoDb EnableKinesisStreamingDestination action.
 * \value ExecuteStatementAction DynamoDb ExecuteStatement action.
 * \value ExecuteTransactionAction DynamoDb ExecuteTransaction action.
 * \value ExportTableToPointInTimeAction DynamoDb ExportTableToPointInTime action.
 * \value GetItemAction DynamoDb GetItem action.
 * \value ImportTableAction DynamoDb ImportTable action.
 * \value ListBackupsAction DynamoDb ListBackups action.
 * \value ListContributorInsightsAction DynamoDb ListContributorInsights action.
 * \value ListExportsAction DynamoDb ListExports action.
 * \value ListGlobalTablesAction DynamoDb ListGlobalTables action.
 * \value ListImportsAction DynamoDb ListImports action.
 * \value ListTablesAction DynamoDb ListTables action.
 * \value ListTagsOfResourceAction DynamoDb ListTagsOfResource action.
 * \value PutItemAction DynamoDb PutItem action.
 * \value QueryAction DynamoDb Query action.
 * \value RestoreTableFromBackupAction DynamoDb RestoreTableFromBackup action.
 * \value RestoreTableToPointInTimeAction DynamoDb RestoreTableToPointInTime action.
 * \value ScanAction DynamoDb Scan action.
 * \value TagResourceAction DynamoDb TagResource action.
 * \value TransactGetItemsAction DynamoDb TransactGetItems action.
 * \value TransactWriteItemsAction DynamoDb TransactWriteItems action.
 * \value UntagResourceAction DynamoDb UntagResource action.
 * \value UpdateContinuousBackupsAction DynamoDb UpdateContinuousBackups action.
 * \value UpdateContributorInsightsAction DynamoDb UpdateContributorInsights action.
 * \value UpdateGlobalTableAction DynamoDb UpdateGlobalTable action.
 * \value UpdateGlobalTableSettingsAction DynamoDb UpdateGlobalTableSettings action.
 * \value UpdateItemAction DynamoDb UpdateItem action.
 * \value UpdateTableAction DynamoDb UpdateTable action.
 * \value UpdateTableReplicaAutoScalingAction DynamoDb UpdateTableReplicaAutoScaling action.
 * \value UpdateTimeToLiveAction DynamoDb UpdateTimeToLive action.
 */

/*!
 * Constructs a DynamoDbRequest object for DynamoDb \a action.
 */
DynamoDbRequest::DynamoDbRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DynamoDbRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DynamoDbRequest::DynamoDbRequest(const DynamoDbRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DynamoDbRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DynamoDbRequest object to be equal to \a other.
 */
DynamoDbRequest& DynamoDbRequest::operator=(const DynamoDbRequest &other)
{
    Q_D(DynamoDbRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DynamoDbRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DynamoDbRequestPrivate.
 */
DynamoDbRequest::DynamoDbRequest(DynamoDbRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DynamoDb action to be performed by this request.
 */
DynamoDbRequest::Action DynamoDbRequest::action() const
{
    Q_D(const DynamoDbRequest);
    return d->action;
}

/*!
 * Returns the name of the DynamoDb action to be performed by this request.
 */
QString DynamoDbRequest::actionString() const
{
    return DynamoDbRequestPrivate::toString(action());
}

/*!
 * Returns the DynamoDb API version implemented by this request.
 */
QString DynamoDbRequest::apiVersion() const
{
    Q_D(const DynamoDbRequest);
    return d->apiVersion;
}

/*!
 * Sets the DynamoDb action to be performed by this request to \a action.
 */
void DynamoDbRequest::setAction(const Action action)
{
    Q_D(DynamoDbRequest);
    d->action = action;
}

/*!
 * Sets the DynamoDb API version to include in this request to \a version.
 */
void DynamoDbRequest::setApiVersion(const QString &version)
{
    Q_D(DynamoDbRequest);
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
bool DynamoDbRequest::operator==(const DynamoDbRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DynamoDb queue name.
 *
 * @par From DynamoDb FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DynamoDb queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DynamoDbRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DynamoDbRequest::clearParameter(const QString &name)
{
    Q_D(DynamoDbRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DynamoDbRequest::clearParameters()
{
    Q_D(DynamoDbRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DynamoDbRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DynamoDbRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DynamoDbRequest::parameters() const
{
    Q_D(const DynamoDbRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DynamoDbRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DynamoDbRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DynamoDbRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DynamoDbRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DynamoDb request using the given
 * \a endpoint.
 *
 * This DynamoDb implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DynamoDbRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DynamoDbRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DynamoDb::DynamoDbRequestPrivate
 * \brief The DynamoDbRequestPrivate class provides private implementation for DynamoDbRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDb
 */

/*!
 * Constructs a DynamoDbRequestPrivate object for DynamoDb \a action,
 * with public implementation \a q.
 */
DynamoDbRequestPrivate::DynamoDbRequestPrivate(const DynamoDbRequest::Action action, DynamoDbRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-08-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DynamoDbRequest class's copy constructor.
 */
DynamoDbRequestPrivate::DynamoDbRequestPrivate(const DynamoDbRequestPrivate &other,
                                     DynamoDbRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DynamoDbRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DynamoDb service's Action
 * query parameters.
 */
QString DynamoDbRequestPrivate::toString(const DynamoDbRequest::Action &action)
{
    #define ActionToString(action) \
        case DynamoDbRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchExecuteStatement);
        ActionToString(BatchGetItem);
        ActionToString(BatchWriteItem);
        ActionToString(CreateBackup);
        ActionToString(CreateGlobalTable);
        ActionToString(CreateTable);
        ActionToString(DeleteBackup);
        ActionToString(DeleteItem);
        ActionToString(DeleteTable);
        ActionToString(DescribeBackup);
        ActionToString(DescribeContinuousBackups);
        ActionToString(DescribeContributorInsights);
        ActionToString(DescribeEndpoints);
        ActionToString(DescribeExport);
        ActionToString(DescribeGlobalTable);
        ActionToString(DescribeGlobalTableSettings);
        ActionToString(DescribeImport);
        ActionToString(DescribeKinesisStreamingDestination);
        ActionToString(DescribeLimits);
        ActionToString(DescribeTable);
        ActionToString(DescribeTableReplicaAutoScaling);
        ActionToString(DescribeTimeToLive);
        ActionToString(DisableKinesisStreamingDestination);
        ActionToString(EnableKinesisStreamingDestination);
        ActionToString(ExecuteStatement);
        ActionToString(ExecuteTransaction);
        ActionToString(ExportTableToPointInTime);
        ActionToString(GetItem);
        ActionToString(ImportTable);
        ActionToString(ListBackups);
        ActionToString(ListContributorInsights);
        ActionToString(ListExports);
        ActionToString(ListGlobalTables);
        ActionToString(ListImports);
        ActionToString(ListTables);
        ActionToString(ListTagsOfResource);
        ActionToString(PutItem);
        ActionToString(Query);
        ActionToString(RestoreTableFromBackup);
        ActionToString(RestoreTableToPointInTime);
        ActionToString(Scan);
        ActionToString(TagResource);
        ActionToString(TransactGetItems);
        ActionToString(TransactWriteItems);
        ActionToString(UntagResource);
        ActionToString(UpdateContinuousBackups);
        ActionToString(UpdateContributorInsights);
        ActionToString(UpdateGlobalTable);
        ActionToString(UpdateGlobalTableSettings);
        ActionToString(UpdateItem);
        ActionToString(UpdateTable);
        ActionToString(UpdateTableReplicaAutoScaling);
        ActionToString(UpdateTimeToLive);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DynamoDb
} // namespace QtAws
