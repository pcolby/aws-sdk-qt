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

#include "datapipelinerequest.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::DataPipelineRequest
 * \brief The DataPipelineRequest class provides an interface for DataPipeline requests.
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * \enum DataPipelineRequest::Action
 *
 * This enum describes the actions that can be performed as DataPipeline
 * requests.
 *
 * \value ActivatePipelineAction DataPipeline ActivatePipeline action.
 * \value AddTagsAction DataPipeline AddTags action.
 * \value CreatePipelineAction DataPipeline CreatePipeline action.
 * \value DeactivatePipelineAction DataPipeline DeactivatePipeline action.
 * \value DeletePipelineAction DataPipeline DeletePipeline action.
 * \value DescribeObjectsAction DataPipeline DescribeObjects action.
 * \value DescribePipelinesAction DataPipeline DescribePipelines action.
 * \value EvaluateExpressionAction DataPipeline EvaluateExpression action.
 * \value GetPipelineDefinitionAction DataPipeline GetPipelineDefinition action.
 * \value ListPipelinesAction DataPipeline ListPipelines action.
 * \value PollForTaskAction DataPipeline PollForTask action.
 * \value PutPipelineDefinitionAction DataPipeline PutPipelineDefinition action.
 * \value QueryObjectsAction DataPipeline QueryObjects action.
 * \value RemoveTagsAction DataPipeline RemoveTags action.
 * \value ReportTaskProgressAction DataPipeline ReportTaskProgress action.
 * \value ReportTaskRunnerHeartbeatAction DataPipeline ReportTaskRunnerHeartbeat action.
 * \value SetStatusAction DataPipeline SetStatus action.
 * \value SetTaskStatusAction DataPipeline SetTaskStatus action.
 * \value ValidatePipelineDefinitionAction DataPipeline ValidatePipelineDefinition action.
 */

/*!
 * Constructs a DataPipelineRequest object for DataPipeline \a action.
 */
DataPipelineRequest::DataPipelineRequest(const Action action)
    : d_ptr(new DataPipelineRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DataPipelineRequest::DataPipelineRequest(const DataPipelineRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new DataPipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DataPipelineRequest object to be equal to \a other.
 */
DataPipelineRequest& DataPipelineRequest::operator=(const DataPipelineRequest &other)
{
    Q_D(DataPipelineRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DataPipelineRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DataPipelineRequestPrivate.
 */
DataPipelineRequest::DataPipelineRequest(DataPipelineRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the DataPipeline action to be performed by this request.
 */
DataPipelineRequest::Action DataPipelineRequest::action() const
{
    Q_D(const DataPipelineRequest);
    return d->action;
}

/*!
 * Returns the name of the DataPipeline action to be performed by this request.
 */
QString DataPipelineRequest::actionString() const
{
    return DataPipelineRequestPrivate::toString(action());
}

/*!
 * Returns the DataPipeline API version implemented by this request.
 */
QString DataPipelineRequest::apiVersion() const
{
    Q_D(const DataPipelineRequest);
    return d->apiVersion;
}

/*!
 * Sets the DataPipeline action to be performed by this request to \a action.
 */
void DataPipelineRequest::setAction(const Action action)
{
    Q_D(DataPipelineRequest);
    d->action = action;
}

/*!
 * Sets the DataPipeline API version to include in this request to \a version.
 */
void DataPipelineRequest::setApiVersion(const QString &version)
{
    Q_D(DataPipelineRequest);
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
bool DataPipelineRequest::operator==(const DataPipelineRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DataPipeline queue name.
 *
 * @par From DataPipeline FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DataPipeline queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DataPipelineRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DataPipelineRequest::clearParameter(const QString &name)
{
    Q_D(DataPipelineRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DataPipelineRequest::clearParameters()
{
    Q_D(DataPipelineRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DataPipelineRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DataPipelineRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DataPipelineRequest::parameters() const
{
    Q_D(const DataPipelineRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DataPipelineRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DataPipelineRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DataPipelineRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DataPipelineRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DataPipeline request using the given
 * \a endpoint.
 *
 * This DataPipeline implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DataPipelineRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DataPipelineRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DataPipeline::DataPipelineRequestPrivate
 * \brief The DataPipelineRequestPrivate class provides private implementation for DataPipelineRequest.
 * \internal
 *
 * \inmodule QtAwsDataPipeline
 */

/*!
 * Constructs a DataPipelineRequestPrivate object for DataPipeline \a action,
 * with public implementation \a q.
 */
DataPipelineRequestPrivate::DataPipelineRequestPrivate(const DataPipelineRequest::Action action, DataPipelineRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DataPipelineRequest class's copy constructor.
 */
DataPipelineRequestPrivate::DataPipelineRequestPrivate(const DataPipelineRequestPrivate &other,
                                     DataPipelineRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DataPipelineRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DataPipeline service's Action
 * query parameters.
 */
QString DataPipelineRequestPrivate::toString(const DataPipelineRequest::Action &action)
{
    #define ActionToString(action) \
        case DataPipelineRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ActivatePipeline);
        ActionToString(AddTags);
        ActionToString(CreatePipeline);
        ActionToString(DeactivatePipeline);
        ActionToString(DeletePipeline);
        ActionToString(DescribeObjects);
        ActionToString(DescribePipelines);
        ActionToString(EvaluateExpression);
        ActionToString(GetPipelineDefinition);
        ActionToString(ListPipelines);
        ActionToString(PollForTask);
        ActionToString(PutPipelineDefinition);
        ActionToString(QueryObjects);
        ActionToString(RemoveTags);
        ActionToString(ReportTaskProgress);
        ActionToString(ReportTaskRunnerHeartbeat);
        ActionToString(SetStatus);
        ActionToString(SetTaskStatus);
        ActionToString(ValidatePipelineDefinition);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DataPipeline
} // namespace QtAws
