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

#include "datapipelineclient.h"
#include "datapipelineclient_p.h"

#include "core/awssignaturev4.h"
#include "activatepipelinerequest.h"
#include "activatepipelineresponse.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "createpipelinerequest.h"
#include "createpipelineresponse.h"
#include "deactivatepipelinerequest.h"
#include "deactivatepipelineresponse.h"
#include "deletepipelinerequest.h"
#include "deletepipelineresponse.h"
#include "describeobjectsrequest.h"
#include "describeobjectsresponse.h"
#include "describepipelinesrequest.h"
#include "describepipelinesresponse.h"
#include "evaluateexpressionrequest.h"
#include "evaluateexpressionresponse.h"
#include "getpipelinedefinitionrequest.h"
#include "getpipelinedefinitionresponse.h"
#include "listpipelinesrequest.h"
#include "listpipelinesresponse.h"
#include "pollfortaskrequest.h"
#include "pollfortaskresponse.h"
#include "putpipelinedefinitionrequest.h"
#include "putpipelinedefinitionresponse.h"
#include "queryobjectsrequest.h"
#include "queryobjectsresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "reporttaskprogressrequest.h"
#include "reporttaskprogressresponse.h"
#include "reporttaskrunnerheartbeatrequest.h"
#include "reporttaskrunnerheartbeatresponse.h"
#include "setstatusrequest.h"
#include "setstatusresponse.h"
#include "settaskstatusrequest.h"
#include "settaskstatusresponse.h"
#include "validatepipelinedefinitionrequest.h"
#include "validatepipelinedefinitionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DataPipeline
 * \brief The QtAws::DataPipeline contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DataPipeline {

/*!
 * \class QtAws::DataPipeline::DataPipelineClient
 *
 * \brief The DataPipelineClient class provides access to the AWS Data Pipeline service.
 *
 * \ingroup DataPipeline
 *
 *  AWS Data Pipeline configures and manages a data-driven workflow called a pipeline. AWS Data Pipeline handles the details
 *  of scheduling and ensuring that data dependencies are met so that your application can focus on processing the
 * 
 *  data>
 * 
 *  AWS Data Pipeline provides a JAR implementation of a task runner called AWS Data Pipeline Task Runner. AWS Data Pipeline
 *  Task Runner provides logic for common data management scenarios, such as performing database queries and running data
 *  analysis using Amazon Elastic MapReduce (Amazon EMR). You can use AWS Data Pipeline Task Runner as your task runner, or
 *  you can write your own task runner to provide custom data
 * 
 *  management>
 * 
 *  AWS Data Pipeline implements two main sets of functionality. Use the first set to create a pipeline and define data
 *  sources, schedules, dependencies, and the transforms to be performed on the data. Use the second set in your task runner
 *  application to receive the next task ready for processing. The logic for performing the task, such as querying the data,
 *  running data analysis, or converting the data from one format to another, is contained within the task runner. The task
 *  runner performs the task assigned to it by the web service, reporting progress to the web service as it does so. When
 *  the task is done, the task runner reports the final success or failure of the task to the web
 */

/*!
 * \brief Constructs a DataPipelineClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DataPipelineClient::DataPipelineClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DataPipelineClientPrivate(this), parent)
{
    Q_D(DataPipelineClient);
    d->apiVersion = QStringLiteral("2012-10-29");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("datapipeline");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Data Pipeline");
    d->serviceName = QStringLiteral("datapipeline");
}

/*!
 * \overload DataPipelineClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
DataPipelineClient::DataPipelineClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DataPipelineClientPrivate(this), parent)
{
    Q_D(DataPipelineClient);
    d->apiVersion = QStringLiteral("2012-10-29");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("datapipeline");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Data Pipeline");
    d->serviceName = QStringLiteral("datapipeline");
}

/*!
 * Validates the specified pipeline and starts processing pipeline tasks. If the pipeline does not pass validation,
 * activation
 *
 * fails>
 *
 * If you need to pause the pipeline to investigate an issue with a component, such as a data source or script, call
 *
 * <a>DeactivatePipeline</a>>
 *
 * To activate a finished pipeline, modify the end date for the pipeline and then activate
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ActivatePipelineResponse * DataPipelineClient::activatePipeline(const ActivatePipelineRequest &request)
{
    return qobject_cast<ActivatePipelineResponse *>(send(request));
}

/*!
 * Adds or modifies tags for the specified
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsResponse * DataPipelineClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Creates a new, empty pipeline. Use <a>PutPipelineDefinition</a> to populate the
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePipelineResponse * DataPipelineClient::createPipeline(const CreatePipelineRequest &request)
{
    return qobject_cast<CreatePipelineResponse *>(send(request));
}

/*!
 * Deactivates the specified running pipeline. The pipeline is set to the <code>DEACTIVATING</code> state until the
 * deactivation process
 *
 * completes>
 *
 * To resume a deactivated pipeline, use <a>ActivatePipeline</a>. By default, the pipeline resumes from the last completed
 * execution. Optionally, you can specify the date and time to resume the
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeactivatePipelineResponse * DataPipelineClient::deactivatePipeline(const DeactivatePipelineRequest &request)
{
    return qobject_cast<DeactivatePipelineResponse *>(send(request));
}

/*!
 * Deletes a pipeline, its pipeline definition, and its run history. AWS Data Pipeline attempts to cancel instances
 * associated with the pipeline that are currently being processed by task
 *
 * runners>
 *
 * Deleting a pipeline cannot be undone. You cannot query or restore a deleted pipeline. To temporarily pause a pipeline
 * instead of deleting it, call <a>SetStatus</a> with the status set to <code>PAUSE</code> on individual components.
 * Components that are paused by <a>SetStatus</a> can be
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePipelineResponse * DataPipelineClient::deletePipeline(const DeletePipelineRequest &request)
{
    return qobject_cast<DeletePipelineResponse *>(send(request));
}

/*!
 * Gets the object definitions for a set of objects associated with the pipeline. Object definitions are composed of a set
 * of fields that define the properties of the
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeObjectsResponse * DataPipelineClient::describeObjects(const DescribeObjectsRequest &request)
{
    return qobject_cast<DescribeObjectsResponse *>(send(request));
}

/*!
 * Retrieves metadata about one or more pipelines. The information retrieved includes the name of the pipeline, the
 * pipeline identifier, its current state, and the user account that owns the pipeline. Using account credentials, you can
 * retrieve metadata about pipelines that you or your IAM users have created. If you are using an IAM user account, you can
 * retrieve metadata about only those pipelines for which you have read
 *
 * permissions>
 *
 * To retrieve the full pipeline definition instead of metadata about the pipeline, call
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribePipelinesResponse * DataPipelineClient::describePipelines(const DescribePipelinesRequest &request)
{
    return qobject_cast<DescribePipelinesResponse *>(send(request));
}

/*!
 * Task runners call <code>EvaluateExpression</code> to evaluate a string in the context of the specified object. For
 * example, a task runner can evaluate SQL queries stored in Amazon
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EvaluateExpressionResponse * DataPipelineClient::evaluateExpression(const EvaluateExpressionRequest &request)
{
    return qobject_cast<EvaluateExpressionResponse *>(send(request));
}

/*!
 * Gets the definition of the specified pipeline. You can call <code>GetPipelineDefinition</code> to retrieve the pipeline
 * definition that you provided using
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPipelineDefinitionResponse * DataPipelineClient::getPipelineDefinition(const GetPipelineDefinitionRequest &request)
{
    return qobject_cast<GetPipelineDefinitionResponse *>(send(request));
}

/*!
 * Lists the pipeline identifiers for all active pipelines that you have permission to
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPipelinesResponse * DataPipelineClient::listPipelines(const ListPipelinesRequest &request)
{
    return qobject_cast<ListPipelinesResponse *>(send(request));
}

/*!
 * Task runners call <code>PollForTask</code> to receive a task to perform from AWS Data Pipeline. The task runner
 * specifies which tasks it can perform by setting a value for the <code>workerGroup</code> parameter. The task returned
 * can come from any of the pipelines that match the <code>workerGroup</code> value passed in by the task runner and that
 * was launched using the IAM user credentials specified by the task
 *
 * runner>
 *
 * If tasks are ready in the work queue, <code>PollForTask</code> returns a response immediately. If no tasks are available
 * in the queue, <code>PollForTask</code> uses long-polling and holds on to a poll connection for up to a 90 seconds,
 * during which time the first newly scheduled task is handed to the task runner. To accomodate this, set the socket
 * timeout in your task runner to 90 seconds. The task runner should not call <code>PollForTask</code> again on the same
 * <code>workerGroup</code> until it receives a response, and this can take up to 90 seconds.
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PollForTaskResponse * DataPipelineClient::pollForTask(const PollForTaskRequest &request)
{
    return qobject_cast<PollForTaskResponse *>(send(request));
}

/*!
 * Adds tasks, schedules, and preconditions to the specified pipeline. You can use <code>PutPipelineDefinition</code> to
 * populate a new
 *
 * pipeline>
 *
 * <code>PutPipelineDefinition</code> also validates the configuration as it adds it to the pipeline. Changes to the
 * pipeline are saved unless one of the following three validation errors exists in the pipeline.
 *
 * </p <ol> <li>An object is missing a name or identifier field.</li> <li>A string or reference field is empty.</li>
 * <li>The number of objects in the pipeline exceeds the maximum allowed objects.</li> <li>The pipeline is in a FINISHED
 * state.</li> </ol>
 *
 * Pipeline object definitions are passed to the <code>PutPipelineDefinition</code> action and returned by the
 * <a>GetPipelineDefinition</a> action.
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutPipelineDefinitionResponse * DataPipelineClient::putPipelineDefinition(const PutPipelineDefinitionRequest &request)
{
    return qobject_cast<PutPipelineDefinitionResponse *>(send(request));
}

/*!
 * Queries the specified pipeline for the names of objects that match the specified set of
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
QueryObjectsResponse * DataPipelineClient::queryObjects(const QueryObjectsRequest &request)
{
    return qobject_cast<QueryObjectsResponse *>(send(request));
}

/*!
 * Removes existing tags from the specified
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsResponse * DataPipelineClient::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Task runners call <code>ReportTaskProgress</code> when assigned a task to acknowledge that it has the task. If the web
 * service does not receive this acknowledgement within 2 minutes, it assigns the task in a subsequent <a>PollForTask</a>
 * call. After this initial acknowledgement, the task runner only needs to report progress every 15 minutes to maintain its
 * ownership of the task. You can change this reporting time from 15 minutes by specifying a
 * <code>reportProgressTimeout</code> field in your
 *
 * pipeline>
 *
 * If a task runner does not report its status after 5 minutes, AWS Data Pipeline assumes that the task runner is unable to
 * process the task and reassigns the task in a subsequent response to <a>PollForTask</a>. Task runners should call
 * <code>ReportTaskProgress</code> every 60
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReportTaskProgressResponse * DataPipelineClient::reportTaskProgress(const ReportTaskProgressRequest &request)
{
    return qobject_cast<ReportTaskProgressResponse *>(send(request));
}

/*!
 * Task runners call <code>ReportTaskRunnerHeartbeat</code> every 15 minutes to indicate that they are operational. If the
 * AWS Data Pipeline Task Runner is launched on a resource managed by AWS Data Pipeline, the web service can use this call
 * to detect when the task runner application has failed and restart a new
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReportTaskRunnerHeartbeatResponse * DataPipelineClient::reportTaskRunnerHeartbeat(const ReportTaskRunnerHeartbeatRequest &request)
{
    return qobject_cast<ReportTaskRunnerHeartbeatResponse *>(send(request));
}

/*!
 * Requests that the status of the specified physical or logical pipeline objects be updated in the specified pipeline.
 * This update might not occur immediately, but is eventually consistent. The status that can be set depends on the type of
 * object (for example, DataNode or Activity). You cannot perform this operation on <code>FINISHED</code> pipelines and
 * attempting to do so returns
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetStatusResponse * DataPipelineClient::setStatus(const SetStatusRequest &request)
{
    return qobject_cast<SetStatusResponse *>(send(request));
}

/*!
 * Task runners call <code>SetTaskStatus</code> to notify AWS Data Pipeline that a task is completed and provide
 * information about the final status. A task runner makes this call regardless of whether the task was sucessful. A task
 * runner does not need to call <code>SetTaskStatus</code> for tasks that are canceled by the web service during a call to
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetTaskStatusResponse * DataPipelineClient::setTaskStatus(const SetTaskStatusRequest &request)
{
    return qobject_cast<SetTaskStatusResponse *>(send(request));
}

/*!
 * Validates the specified pipeline definition to ensure that it is well formed and can be run without
 *
 * @param  request Request to send to AWS Data Pipeline.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ValidatePipelineDefinitionResponse * DataPipelineClient::validatePipelineDefinition(const ValidatePipelineDefinitionRequest &request)
{
    return qobject_cast<ValidatePipelineDefinitionResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  DataPipelineClientPrivate
 *
 * @brief  Private implementation for DataPipelineClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DataPipelineClientPrivate object.
 *
 * @param  q  Pointer to this object's public DataPipelineClient instance.
 */
DataPipelineClientPrivate::DataPipelineClientPrivate(DataPipelineClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DataPipeline
} // namespace QtAws
