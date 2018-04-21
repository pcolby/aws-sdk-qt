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

#include "sfnclient.h"
#include "sfnclient_p.h"

#include "core/awssignaturev4.h"
#include "createactivityrequest.h"
#include "createactivityresponse.h"
#include "createstatemachinerequest.h"
#include "createstatemachineresponse.h"
#include "deleteactivityrequest.h"
#include "deleteactivityresponse.h"
#include "deletestatemachinerequest.h"
#include "deletestatemachineresponse.h"
#include "describeactivityrequest.h"
#include "describeactivityresponse.h"
#include "describeexecutionrequest.h"
#include "describeexecutionresponse.h"
#include "describestatemachinerequest.h"
#include "describestatemachineresponse.h"
#include "describestatemachineforexecutionrequest.h"
#include "describestatemachineforexecutionresponse.h"
#include "getactivitytaskrequest.h"
#include "getactivitytaskresponse.h"
#include "getexecutionhistoryrequest.h"
#include "getexecutionhistoryresponse.h"
#include "listactivitiesrequest.h"
#include "listactivitiesresponse.h"
#include "listexecutionsrequest.h"
#include "listexecutionsresponse.h"
#include "liststatemachinesrequest.h"
#include "liststatemachinesresponse.h"
#include "sendtaskfailurerequest.h"
#include "sendtaskfailureresponse.h"
#include "sendtaskheartbeatrequest.h"
#include "sendtaskheartbeatresponse.h"
#include "sendtasksuccessrequest.h"
#include "sendtasksuccessresponse.h"
#include "startexecutionrequest.h"
#include "startexecutionresponse.h"
#include "stopexecutionrequest.h"
#include "stopexecutionresponse.h"
#include "updatestatemachinerequest.h"
#include "updatestatemachineresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SFN
 * \brief The QtAws::SFN contains stuff...
 *
 * \inmodule QtAwsSFN
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SFN {

/*!
 * \class QtAws::SFN::SfnClient
 * \brief The SfnClient class provides access to the AWS Step Functions ( SFN) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSFN
 *
 *  <fullname>AWS Step Functions</fullname>
 * 
 *  AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 *  using visual
 * 
 *  workflows>
 * 
 *  You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 *  or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 *  visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 *  step, and retries steps when there are errors, so your application executes predictably and in the right order every
 *  time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 * 
 *  issues>
 * 
 *  Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 *  You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 *  using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 *  href="http://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 */

/*!
 * \brief Constructs a SfnClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SfnClient::SfnClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SfnClientPrivate(this), parent)
{
    Q_D(SfnClient);
    d->apiVersion = QStringLiteral("2016-11-23");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("states");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Step Functions");
    d->serviceName = QStringLiteral("states");
}

/*!
 * \overload SfnClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SfnClient::SfnClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SfnClientPrivate(this), parent)
{
    Q_D(SfnClient);
    d->apiVersion = QStringLiteral("2016-11-23");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("states");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Step Functions");
    d->serviceName = QStringLiteral("states");
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * CreateActivityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an activity. An activity is a task which you write in any programming language and host on any machine which has
 * access to AWS Step Functions. Activities must poll Step Functions using the <code>GetActivityTask</code> API action and
 * respond using <code>SendTask*</code> API actions. This function lets Step Functions know the existence of your activity
 * and returns an identifier for use in a state machine and when polling from the
 */
CreateActivityResponse * SfnClient::createActivity(const CreateActivityRequest &request)
{
    return qobject_cast<CreateActivityResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * CreateStateMachineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a state machine. A state machine consists of a collection of states that can do work (<code>Task</code> states),
 * determine to which states to transition next (<code>Choice</code> states), stop an execution with an error
 * (<code>Fail</code> states), and so on. State machines are specified using a JSON-based, structured
 */
CreateStateMachineResponse * SfnClient::createStateMachine(const CreateStateMachineRequest &request)
{
    return qobject_cast<CreateStateMachineResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * DeleteActivityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteActivityResponse * SfnClient::deleteActivity(const DeleteActivityRequest &request)
{
    return qobject_cast<DeleteActivityResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * DeleteStateMachineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a state machine. This is an asynchronous operation: It sets the state machine's status to <code>DELETING</code>
 * and begins the deletion process. Each state machine execution is deleted the next time it makes a state
 *
 * transition> <note>
 *
 * The state machine itself is deleted after all executions are completed or
 */
DeleteStateMachineResponse * SfnClient::deleteStateMachine(const DeleteStateMachineRequest &request)
{
    return qobject_cast<DeleteStateMachineResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * DescribeActivityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 */
DescribeActivityResponse * SfnClient::describeActivity(const DescribeActivityRequest &request)
{
    return qobject_cast<DescribeActivityResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * DescribeExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 */
DescribeExecutionResponse * SfnClient::describeExecution(const DescribeExecutionRequest &request)
{
    return qobject_cast<DescribeExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * DescribeStateMachineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a state
 */
DescribeStateMachineResponse * SfnClient::describeStateMachine(const DescribeStateMachineRequest &request)
{
    return qobject_cast<DescribeStateMachineResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * DescribeStateMachineForExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the state machine associated with a specific
 */
DescribeStateMachineForExecutionResponse * SfnClient::describeStateMachineForExecution(const DescribeStateMachineForExecutionRequest &request)
{
    return qobject_cast<DescribeStateMachineForExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * GetActivityTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by workers to retrieve a task (with the specified activity ARN) which has been scheduled for execution by a running
 * state machine. This initiates a long poll, where the service holds the HTTP connection open and responds as soon as a
 * task becomes available (i.e. an execution of a task of this type is needed.) The maximum time the service holds on to
 * the request before responding is 60 seconds. If no task is available within 60 seconds, the poll returns a
 * <code>taskToken</code> with a null
 *
 * string> <b>
 *
 * Workers should set their client side socket timeout to at least 65 seconds (5 seconds higher than the maximum time the
 * service may hold the poll
 */
GetActivityTaskResponse * SfnClient::getActivityTask(const GetActivityTaskRequest &request)
{
    return qobject_cast<GetActivityTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * GetExecutionHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the history of the specified execution as a list of events. By default, the results are returned in ascending
 * order of the <code>timeStamp</code> of the events. Use the <code>reverseOrder</code> parameter to get the latest events
 *
 * first>
 *
 * If a <code>nextToken</code> is returned by a previous call, there are more results available. To retrieve the next page
 * of results, make the call again using the returned token in <code>nextToken</code>. Keep all other arguments
 */
GetExecutionHistoryResponse * SfnClient::getExecutionHistory(const GetExecutionHistoryRequest &request)
{
    return qobject_cast<GetExecutionHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * ListActivitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the existing
 *
 * activities>
 *
 * If a <code>nextToken</code> is returned by a previous call, there are more results available. To retrieve the next page
 * of results, make the call again using the returned token in <code>nextToken</code>. Keep all other arguments
 */
ListActivitiesResponse * SfnClient::listActivities(const ListActivitiesRequest &request)
{
    return qobject_cast<ListActivitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * ListExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the executions of a state machine that meet the filtering
 *
 * criteria>
 *
 * If a <code>nextToken</code> is returned by a previous call, there are more results available. To retrieve the next page
 * of results, make the call again using the returned token in <code>nextToken</code>. Keep all other arguments
 */
ListExecutionsResponse * SfnClient::listExecutions(const ListExecutionsRequest &request)
{
    return qobject_cast<ListExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * ListStateMachinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the existing state
 *
 * machines>
 *
 * If a <code>nextToken</code> is returned by a previous call, there are more results available. To retrieve the next page
 * of results, make the call again using the returned token in <code>nextToken</code>. Keep all other arguments
 */
ListStateMachinesResponse * SfnClient::listStateMachines(const ListStateMachinesRequest &request)
{
    return qobject_cast<ListStateMachinesResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * SendTaskFailureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by workers to report that the task identified by the <code>taskToken</code>
 */
SendTaskFailureResponse * SfnClient::sendTaskFailure(const SendTaskFailureRequest &request)
{
    return qobject_cast<SendTaskFailureResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * SendTaskHeartbeatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by workers to report to the service that the task represented by the specified <code>taskToken</code> is still
 * making progress. This action resets the <code>Heartbeat</code> clock. The <code>Heartbeat</code> threshold is specified
 * in the state machine's Amazon States Language definition. This action does not in itself create an event in the
 * execution history. However, if the task times out, the execution history contains an <code>ActivityTimedOut</code>
 *
 * event> <note>
 *
 * The <code>Timeout</code> of a task, defined in the state machine's Amazon States Language definition, is its maximum
 * allowed duration, regardless of the number of <a>SendTaskHeartbeat</a> requests
 *
 * received> </note> <note>
 *
 * This operation is only useful for long-lived tasks to report the liveliness of the
 */
SendTaskHeartbeatResponse * SfnClient::sendTaskHeartbeat(const SendTaskHeartbeatRequest &request)
{
    return qobject_cast<SendTaskHeartbeatResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * SendTaskSuccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by workers to report that the task identified by the <code>taskToken</code> completed
 */
SendTaskSuccessResponse * SfnClient::sendTaskSuccess(const SendTaskSuccessRequest &request)
{
    return qobject_cast<SendTaskSuccessResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * StartExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a state machine
 */
StartExecutionResponse * SfnClient::startExecution(const StartExecutionRequest &request)
{
    return qobject_cast<StartExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * StopExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an
 */
StopExecutionResponse * SfnClient::stopExecution(const StopExecutionRequest &request)
{
    return qobject_cast<StopExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SfnClient service, and returns a pointer to an
 * UpdateStateMachineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing state machine by modifying its <code>definition</code> and/or <code>roleArn</code>. Running
 * executions will continue to use the previous <code>definition</code> and
 *
 * <code>roleArn</code>> <note>
 *
 * All <code>StartExecution</code> calls within a few seconds will use the updated <code>definition</code> and
 * <code>roleArn</code>. Executions started immediately after calling <code>UpdateStateMachine</code> may use the previous
 * state machine <code>definition</code> and <code>roleArn</code>. You must include at least one of <code>definition</code>
 * or <code>roleArn</code> or you will receive a <code>MissingRequiredParameter</code>
 */
UpdateStateMachineResponse * SfnClient::updateStateMachine(const UpdateStateMachineRequest &request)
{
    return qobject_cast<UpdateStateMachineResponse *>(send(request));
}

/*!
 * \class QtAws::SFN::SfnClientPrivate
 * \brief The SfnClientPrivate class provides private implementation for SfnClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSFN
 */

/*!
 * Constructs a SfnClientPrivate object with public implementation \a q.
 */
SfnClientPrivate::SfnClientPrivate(SfnClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SFN
} // namespace QtAws
