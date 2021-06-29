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

#include "datasyncrequest.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DataSyncRequest
 * \brief The DataSyncRequest class provides an interface for DataSync requests.
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * \enum DataSyncRequest::Action
 *
 * This enum describes the actions that can be performed as DataSync
 * requests.
 *
 * \value CancelTaskExecutionAction DataSync CancelTaskExecution action.
 * \value CreateAgentAction DataSync CreateAgent action.
 * \value CreateLocationEfsAction DataSync CreateLocationEfs action.
 * \value CreateLocationFsxWindowsAction DataSync CreateLocationFsxWindows action.
 * \value CreateLocationNfsAction DataSync CreateLocationNfs action.
 * \value CreateLocationObjectStorageAction DataSync CreateLocationObjectStorage action.
 * \value CreateLocationS3Action DataSync CreateLocationS3 action.
 * \value CreateLocationSmbAction DataSync CreateLocationSmb action.
 * \value CreateTaskAction DataSync CreateTask action.
 * \value DeleteAgentAction DataSync DeleteAgent action.
 * \value DeleteLocationAction DataSync DeleteLocation action.
 * \value DeleteTaskAction DataSync DeleteTask action.
 * \value DescribeAgentAction DataSync DescribeAgent action.
 * \value DescribeLocationEfsAction DataSync DescribeLocationEfs action.
 * \value DescribeLocationFsxWindowsAction DataSync DescribeLocationFsxWindows action.
 * \value DescribeLocationNfsAction DataSync DescribeLocationNfs action.
 * \value DescribeLocationObjectStorageAction DataSync DescribeLocationObjectStorage action.
 * \value DescribeLocationS3Action DataSync DescribeLocationS3 action.
 * \value DescribeLocationSmbAction DataSync DescribeLocationSmb action.
 * \value DescribeTaskAction DataSync DescribeTask action.
 * \value DescribeTaskExecutionAction DataSync DescribeTaskExecution action.
 * \value ListAgentsAction DataSync ListAgents action.
 * \value ListLocationsAction DataSync ListLocations action.
 * \value ListTagsForResourceAction DataSync ListTagsForResource action.
 * \value ListTaskExecutionsAction DataSync ListTaskExecutions action.
 * \value ListTasksAction DataSync ListTasks action.
 * \value StartTaskExecutionAction DataSync StartTaskExecution action.
 * \value TagResourceAction DataSync TagResource action.
 * \value UntagResourceAction DataSync UntagResource action.
 * \value UpdateAgentAction DataSync UpdateAgent action.
 * \value UpdateLocationNfsAction DataSync UpdateLocationNfs action.
 * \value UpdateLocationObjectStorageAction DataSync UpdateLocationObjectStorage action.
 * \value UpdateLocationSmbAction DataSync UpdateLocationSmb action.
 * \value UpdateTaskAction DataSync UpdateTask action.
 * \value UpdateTaskExecutionAction DataSync UpdateTaskExecution action.
 */

/*!
 * Constructs a DataSyncRequest object for DataSync \a action.
 */
DataSyncRequest::DataSyncRequest(const Action action)
    : d_ptr(new DataSyncRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DataSyncRequest::DataSyncRequest(const DataSyncRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new DataSyncRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DataSyncRequest object to be equal to \a other.
 */
DataSyncRequest& DataSyncRequest::operator=(const DataSyncRequest &other)
{
    Q_D(DataSyncRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DataSyncRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataSyncRequestPrivate.
 */
DataSyncRequest::DataSyncRequest(DataSyncRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the DataSync action to be performed by this request.
 */
DataSyncRequest::Action DataSyncRequest::action() const
{
    Q_D(const DataSyncRequest);
    return d->action;
}

/*!
 * Returns the name of the DataSync action to be performed by this request.
 */
QString DataSyncRequest::actionString() const
{
    return DataSyncRequestPrivate::toString(action());
}

/*!
 * Returns the DataSync API version implemented by this request.
 */
QString DataSyncRequest::apiVersion() const
{
    Q_D(const DataSyncRequest);
    return d->apiVersion;
}

/*!
 * Sets the DataSync action to be performed by this request to \a action.
 */
void DataSyncRequest::setAction(const Action action)
{
    Q_D(DataSyncRequest);
    d->action = action;
}

/*!
 * Sets the DataSync API version to include in this request to \a version.
 */
void DataSyncRequest::setApiVersion(const QString &version)
{
    Q_D(DataSyncRequest);
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
bool DataSyncRequest::operator==(const DataSyncRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DataSync queue name.
 *
 * @par From DataSync FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DataSync queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DataSyncRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DataSyncRequest::clearParameter(const QString &name)
{
    Q_D(DataSyncRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DataSyncRequest::clearParameters()
{
    Q_D(DataSyncRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DataSyncRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DataSyncRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DataSyncRequest::parameters() const
{
    Q_D(const DataSyncRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DataSyncRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DataSyncRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DataSyncRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DataSyncRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DataSync request using the given
 * \a endpoint.
 *
 * This DataSync implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DataSyncRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DataSyncRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DataSync::DataSyncRequestPrivate
 * \brief The DataSyncRequestPrivate class provides private implementation for DataSyncRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DataSyncRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DataSyncRequestPrivate::DataSyncRequestPrivate(const DataSyncRequest::Action action, DataSyncRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DataSyncRequest class's copy constructor.
 */
DataSyncRequestPrivate::DataSyncRequestPrivate(const DataSyncRequestPrivate &other,
                                     DataSyncRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DataSyncRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DataSync service's Action
 * query parameters.
 */
QString DataSyncRequestPrivate::toString(const DataSyncRequest::Action &action)
{
    #define ActionToString(action) \
        case DataSyncRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelTaskExecution);
        ActionToString(CreateAgent);
        ActionToString(CreateLocationEfs);
        ActionToString(CreateLocationFsxWindows);
        ActionToString(CreateLocationNfs);
        ActionToString(CreateLocationObjectStorage);
        ActionToString(CreateLocationS3);
        ActionToString(CreateLocationSmb);
        ActionToString(CreateTask);
        ActionToString(DeleteAgent);
        ActionToString(DeleteLocation);
        ActionToString(DeleteTask);
        ActionToString(DescribeAgent);
        ActionToString(DescribeLocationEfs);
        ActionToString(DescribeLocationFsxWindows);
        ActionToString(DescribeLocationNfs);
        ActionToString(DescribeLocationObjectStorage);
        ActionToString(DescribeLocationS3);
        ActionToString(DescribeLocationSmb);
        ActionToString(DescribeTask);
        ActionToString(DescribeTaskExecution);
        ActionToString(ListAgents);
        ActionToString(ListLocations);
        ActionToString(ListTagsForResource);
        ActionToString(ListTaskExecutions);
        ActionToString(ListTasks);
        ActionToString(StartTaskExecution);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAgent);
        ActionToString(UpdateLocationNfs);
        ActionToString(UpdateLocationObjectStorage);
        ActionToString(UpdateLocationSmb);
        ActionToString(UpdateTask);
        ActionToString(UpdateTaskExecution);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DataSync
} // namespace QtAws
