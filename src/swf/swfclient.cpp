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

#include "swfclient.h"
#include "swfclient_p.h"

#include "core/awssignaturev4.h"
#include "countclosedworkflowexecutionsrequest.h"
#include "countclosedworkflowexecutionsresponse.h"
#include "countopenworkflowexecutionsrequest.h"
#include "countopenworkflowexecutionsresponse.h"
#include "countpendingactivitytasksrequest.h"
#include "countpendingactivitytasksresponse.h"
#include "countpendingdecisiontasksrequest.h"
#include "countpendingdecisiontasksresponse.h"
#include "deprecateactivitytyperequest.h"
#include "deprecateactivitytyperesponse.h"
#include "deprecatedomainrequest.h"
#include "deprecatedomainresponse.h"
#include "deprecateworkflowtyperequest.h"
#include "deprecateworkflowtyperesponse.h"
#include "describeactivitytyperequest.h"
#include "describeactivitytyperesponse.h"
#include "describedomainrequest.h"
#include "describedomainresponse.h"
#include "describeworkflowexecutionrequest.h"
#include "describeworkflowexecutionresponse.h"
#include "describeworkflowtyperequest.h"
#include "describeworkflowtyperesponse.h"
#include "getworkflowexecutionhistoryrequest.h"
#include "getworkflowexecutionhistoryresponse.h"
#include "listactivitytypesrequest.h"
#include "listactivitytypesresponse.h"
#include "listclosedworkflowexecutionsrequest.h"
#include "listclosedworkflowexecutionsresponse.h"
#include "listdomainsrequest.h"
#include "listdomainsresponse.h"
#include "listopenworkflowexecutionsrequest.h"
#include "listopenworkflowexecutionsresponse.h"
#include "listworkflowtypesrequest.h"
#include "listworkflowtypesresponse.h"
#include "pollforactivitytaskrequest.h"
#include "pollforactivitytaskresponse.h"
#include "pollfordecisiontaskrequest.h"
#include "pollfordecisiontaskresponse.h"
#include "recordactivitytaskheartbeatrequest.h"
#include "recordactivitytaskheartbeatresponse.h"
#include "registeractivitytyperequest.h"
#include "registeractivitytyperesponse.h"
#include "registerdomainrequest.h"
#include "registerdomainresponse.h"
#include "registerworkflowtyperequest.h"
#include "registerworkflowtyperesponse.h"
#include "requestcancelworkflowexecutionrequest.h"
#include "requestcancelworkflowexecutionresponse.h"
#include "respondactivitytaskcanceledrequest.h"
#include "respondactivitytaskcanceledresponse.h"
#include "respondactivitytaskcompletedrequest.h"
#include "respondactivitytaskcompletedresponse.h"
#include "respondactivitytaskfailedrequest.h"
#include "respondactivitytaskfailedresponse.h"
#include "responddecisiontaskcompletedrequest.h"
#include "responddecisiontaskcompletedresponse.h"
#include "signalworkflowexecutionrequest.h"
#include "signalworkflowexecutionresponse.h"
#include "startworkflowexecutionrequest.h"
#include "startworkflowexecutionresponse.h"
#include "terminateworkflowexecutionrequest.h"
#include "terminateworkflowexecutionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SWF
 * \brief The QtAws::SWF contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::SwfClient
 * \brief The SwfClient class provides access to the Amazon Simple Workflow Service ( SWF) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSWF
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 */

/*!
 * \brief Constructs a SwfClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SwfClient::SwfClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SwfClientPrivate(this), parent)
{
    Q_D(SwfClient);
    d->apiVersion = QStringLiteral("2012-01-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("swf");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Simple Workflow Service");
    d->serviceName = QStringLiteral("swf");
}

/*!
 * \overload SwfClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
SwfClient::SwfClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SwfClientPrivate(this), parent)
{
    Q_D(SwfClient);
    d->apiVersion = QStringLiteral("2012-01-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("swf");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Simple Workflow Service");
    d->serviceName = QStringLiteral("swf");
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * CountClosedWorkflowExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of closed workflow executions within the given domain that meet the specified filtering
 *
 * criteria> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>tagFilter.tag</code>: String constraint. The key is
 *
 * <code>swf:tagFilter.tag</code>> </li> <li>
 *
 * <code>typeFilter.name</code>: String constraint. The key is
 *
 * <code>swf:typeFilter.name</code>> </li> <li>
 *
 * <code>typeFilter.version</code>: String constraint. The key is
 *
 * <code>swf:typeFilter.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
CountClosedWorkflowExecutionsResponse * SwfClient::countClosedWorkflowExecutions(const CountClosedWorkflowExecutionsRequest &request)
{
    return qobject_cast<CountClosedWorkflowExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * CountOpenWorkflowExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of open workflow executions within the given domain that meet the specified filtering
 *
 * criteria> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>tagFilter.tag</code>: String constraint. The key is
 *
 * <code>swf:tagFilter.tag</code>> </li> <li>
 *
 * <code>typeFilter.name</code>: String constraint. The key is
 *
 * <code>swf:typeFilter.name</code>> </li> <li>
 *
 * <code>typeFilter.version</code>: String constraint. The key is
 *
 * <code>swf:typeFilter.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
CountOpenWorkflowExecutionsResponse * SwfClient::countOpenWorkflowExecutions(const CountOpenWorkflowExecutionsRequest &request)
{
    return qobject_cast<CountOpenWorkflowExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * CountPendingActivityTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the estimated number of activity tasks in the specified task list. The count returned is an approximation and
 * isn't guaranteed to be exact. If you specify a task list that no activity task was ever scheduled in then <code>0</code>
 * is
 *
 * returned>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the <code>taskList.name</code> parameter by using a <code>Condition</code> element with the
 * <code>swf:taskList.name</code> key to allow the action to access only certain task
 *
 * lists> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
CountPendingActivityTasksResponse * SwfClient::countPendingActivityTasks(const CountPendingActivityTasksRequest &request)
{
    return qobject_cast<CountPendingActivityTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * CountPendingDecisionTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the estimated number of decision tasks in the specified task list. The count returned is an approximation and
 * isn't guaranteed to be exact. If you specify a task list that no decision task was ever scheduled in then <code>0</code>
 * is
 *
 * returned>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the <code>taskList.name</code> parameter by using a <code>Condition</code> element with the
 * <code>swf:taskList.name</code> key to allow the action to access only certain task
 *
 * lists> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
CountPendingDecisionTasksResponse * SwfClient::countPendingDecisionTasks(const CountPendingDecisionTasksRequest &request)
{
    return qobject_cast<CountPendingDecisionTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * DeprecateActivityTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecates the specified <i>activity type</i>. After an activity type has been deprecated, you cannot create new tasks
 * of that activity type. Tasks of this type that were scheduled before the type was deprecated continue to
 *
 * run> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>activityType.name</code>: String constraint. The key is
 *
 * <code>swf:activityType.name</code>> </li> <li>
 *
 * <code>activityType.version</code>: String constraint. The key is
 *
 * <code>swf:activityType.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
DeprecateActivityTypeResponse * SwfClient::deprecateActivityType(const DeprecateActivityTypeRequest &request)
{
    return qobject_cast<DeprecateActivityTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * DeprecateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecates the specified domain. After a domain has been deprecated it cannot be used to create new workflow executions
 * or register new types. However, you can still use visibility actions on this domain. Deprecating a domain also
 * deprecates all activity and workflow types registered in the domain. Executions that were started before the domain was
 * deprecated continues to
 *
 * run> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
DeprecateDomainResponse * SwfClient::deprecateDomain(const DeprecateDomainRequest &request)
{
    return qobject_cast<DeprecateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * DeprecateWorkflowTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecates the specified <i>workflow type</i>. After a workflow type has been deprecated, you cannot create new
 * executions of that type. Executions that were started before the type was deprecated continues to run. A deprecated
 * workflow type may still be used when calling visibility
 *
 * actions> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>workflowType.name</code>: String constraint. The key is
 *
 * <code>swf:workflowType.name</code>> </li> <li>
 *
 * <code>workflowType.version</code>: String constraint. The key is
 *
 * <code>swf:workflowType.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
DeprecateWorkflowTypeResponse * SwfClient::deprecateWorkflowType(const DeprecateWorkflowTypeRequest &request)
{
    return qobject_cast<DeprecateWorkflowTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * DescribeActivityTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified activity type. This includes configuration settings provided when the type was
 * registered and other general information about the
 *
 * type>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>activityType.name</code>: String constraint. The key is
 *
 * <code>swf:activityType.name</code>> </li> <li>
 *
 * <code>activityType.version</code>: String constraint. The key is
 *
 * <code>swf:activityType.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
DescribeActivityTypeResponse * SwfClient::describeActivityType(const DescribeActivityTypeRequest &request)
{
    return qobject_cast<DescribeActivityTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * DescribeDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified domain, including description and
 *
 * status>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
DescribeDomainResponse * SwfClient::describeDomain(const DescribeDomainRequest &request)
{
    return qobject_cast<DescribeDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * DescribeWorkflowExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified workflow execution including its type and some
 *
 * statistics> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
DescribeWorkflowExecutionResponse * SwfClient::describeWorkflowExecution(const DescribeWorkflowExecutionRequest &request)
{
    return qobject_cast<DescribeWorkflowExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * DescribeWorkflowTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified <i>workflow type</i>. This includes configuration settings specified when the
 * type was registered and other information such as creation date, current status,
 *
 * etc>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>workflowType.name</code>: String constraint. The key is
 *
 * <code>swf:workflowType.name</code>> </li> <li>
 *
 * <code>workflowType.version</code>: String constraint. The key is
 *
 * <code>swf:workflowType.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
DescribeWorkflowTypeResponse * SwfClient::describeWorkflowType(const DescribeWorkflowTypeRequest &request)
{
    return qobject_cast<DescribeWorkflowTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * GetWorkflowExecutionHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the history of the specified workflow execution. The results may be split into multiple pages. To retrieve
 * subsequent pages, make the call again using the <code>nextPageToken</code> returned by the initial
 *
 * call> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
GetWorkflowExecutionHistoryResponse * SwfClient::getWorkflowExecutionHistory(const GetWorkflowExecutionHistoryRequest &request)
{
    return qobject_cast<GetWorkflowExecutionHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * ListActivityTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all activities registered in the specified domain that match the specified name and
 * registration status. The result includes information like creation date, current status of the activity, etc. The
 * results may be split into multiple pages. To retrieve subsequent pages, make the call again using the
 * <code>nextPageToken</code> returned by the initial
 *
 * call>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
ListActivityTypesResponse * SwfClient::listActivityTypes(const ListActivityTypesRequest &request)
{
    return qobject_cast<ListActivityTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * ListClosedWorkflowExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of closed workflow executions in the specified domain that meet the filtering criteria. The results may
 * be split into multiple pages. To retrieve subsequent pages, make the call again using the nextPageToken returned by the
 * initial
 *
 * call> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>tagFilter.tag</code>: String constraint. The key is
 *
 * <code>swf:tagFilter.tag</code>> </li> <li>
 *
 * <code>typeFilter.name</code>: String constraint. The key is
 *
 * <code>swf:typeFilter.name</code>> </li> <li>
 *
 * <code>typeFilter.version</code>: String constraint. The key is
 *
 * <code>swf:typeFilter.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
ListClosedWorkflowExecutionsResponse * SwfClient::listClosedWorkflowExecutions(const ListClosedWorkflowExecutionsRequest &request)
{
    return qobject_cast<ListClosedWorkflowExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * ListDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of domains registered in the account. The results may be split into multiple pages. To retrieve
 * subsequent pages, make the call again using the nextPageToken returned by the initial
 *
 * call> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified domains. The element must
 * be set to <code>arn:aws:swf::AccountID:domain/*</code>, where <i>AccountID</i> is the account ID, with no
 *
 * dashes> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
ListDomainsResponse * SwfClient::listDomains(const ListDomainsRequest &request)
{
    return qobject_cast<ListDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * ListOpenWorkflowExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of open workflow executions in the specified domain that meet the filtering criteria. The results may be
 * split into multiple pages. To retrieve subsequent pages, make the call again using the nextPageToken returned by the
 * initial
 *
 * call> <note>
 *
 * This operation is eventually consistent. The results are best effort and may not exactly reflect recent updates and
 *
 * changes> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>tagFilter.tag</code>: String constraint. The key is
 *
 * <code>swf:tagFilter.tag</code>> </li> <li>
 *
 * <code>typeFilter.name</code>: String constraint. The key is
 *
 * <code>swf:typeFilter.name</code>> </li> <li>
 *
 * <code>typeFilter.version</code>: String constraint. The key is
 *
 * <code>swf:typeFilter.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
ListOpenWorkflowExecutionsResponse * SwfClient::listOpenWorkflowExecutions(const ListOpenWorkflowExecutionsRequest &request)
{
    return qobject_cast<ListOpenWorkflowExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * ListWorkflowTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about workflow types in the specified domain. The results may be split into multiple pages that can
 * be retrieved by making the call
 *
 * repeatedly>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
ListWorkflowTypesResponse * SwfClient::listWorkflowTypes(const ListWorkflowTypesRequest &request)
{
    return qobject_cast<ListWorkflowTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * PollForActivityTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by workers to get an <a>ActivityTask</a> from the specified activity <code>taskList</code>. This initiates a long
 * poll, where the service holds the HTTP connection open and responds as soon as a task becomes available. The maximum
 * time the service holds on to the request before responding is 60 seconds. If no task is available within 60 seconds, the
 * poll returns an empty result. An empty result, in this context, means that an ActivityTask is returned, but that the
 * value of taskToken is an empty string. If a task is returned, the worker should use its type to identify and process it
 *
 * correctly> <b>
 *
 * Workers should set their client side socket timeout to at least 70 seconds (10 seconds higher than the maximum time
 * service may hold the poll
 *
 * request)> </b>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the <code>taskList.name</code> parameter by using a <code>Condition</code> element with the
 * <code>swf:taskList.name</code> key to allow the action to access only certain task
 *
 * lists> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
PollForActivityTaskResponse * SwfClient::pollForActivityTask(const PollForActivityTaskRequest &request)
{
    return qobject_cast<PollForActivityTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * PollForDecisionTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by deciders to get a <a>DecisionTask</a> from the specified decision <code>taskList</code>. A decision task may be
 * returned for any open workflow execution that is using the specified task list. The task includes a paginated view of
 * the history of the workflow execution. The decider should use the workflow type and the history to determine how to
 * properly handle the
 *
 * task>
 *
 * This action initiates a long poll, where the service holds the HTTP connection open and responds as soon a task becomes
 * available. If no decision task is available in the specified task list before the timeout of 60 seconds expires, an
 * empty result is returned. An empty result, in this context, means that a DecisionTask is returned, but that the value of
 * taskToken is an empty
 *
 * string> <b>
 *
 * Deciders should set their client side socket timeout to at least 70 seconds (10 seconds higher than the
 *
 * timeout)> </b> <b>
 *
 * Because the number of workflow history events for a single workflow execution might be very large, the result returned
 * might be split up across a number of pages. To retrieve subsequent pages, make additional calls to
 * <code>PollForDecisionTask</code> using the <code>nextPageToken</code> returned by the initial call. Note that you do
 * <i>not</i> call <code>GetWorkflowExecutionHistory</code> with this <code>nextPageToken</code>. Instead, call
 * <code>PollForDecisionTask</code>
 *
 * again> </b>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the <code>taskList.name</code> parameter by using a <code>Condition</code> element with the
 * <code>swf:taskList.name</code> key to allow the action to access only certain task
 *
 * lists> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
PollForDecisionTaskResponse * SwfClient::pollForDecisionTask(const PollForDecisionTaskRequest &request)
{
    return qobject_cast<PollForDecisionTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RecordActivityTaskHeartbeatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by activity workers to report to the service that the <a>ActivityTask</a> represented by the specified
 * <code>taskToken</code> is still making progress. The worker can also specify details of the progress, for example
 * percent complete, using the <code>details</code> parameter. This action can also be used by the worker as a mechanism to
 * check if cancellation is being requested for the activity task. If a cancellation is being attempted for the specified
 * task, then the boolean <code>cancelRequested</code> flag returned by the service is set to
 *
 * <code>true</code>>
 *
 * This action resets the <code>taskHeartbeatTimeout</code> clock. The <code>taskHeartbeatTimeout</code> is specified in
 *
 * <a>RegisterActivityType</a>>
 *
 * This action doesn't in itself create an event in the workflow execution history. However, if the task times out, the
 * workflow execution history contains a <code>ActivityTaskTimedOut</code> event that contains the information from the
 * last heartbeat generated by the activity
 *
 * worker> <note>
 *
 * The <code>taskStartToCloseTimeout</code> of an activity type is the maximum duration of an activity task, regardless of
 * the number of <a>RecordActivityTaskHeartbeat</a> requests received. The <code>taskStartToCloseTimeout</code> is also
 * specified in
 *
 * <a>RegisterActivityType</a>> </note> <note>
 *
 * This operation is only useful for long-lived activities to report liveliness of the task and to determine if a
 * cancellation is being
 *
 * attempted> </note> <b>
 *
 * If the <code>cancelRequested</code> flag returns <code>true</code>, a cancellation is being attempted. If the worker can
 * cancel the activity, it should respond with <a>RespondActivityTaskCanceled</a>. Otherwise, it should ignore the
 * cancellation
 *
 * request> </b>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RecordActivityTaskHeartbeatResponse * SwfClient::recordActivityTaskHeartbeat(const RecordActivityTaskHeartbeatRequest &request)
{
    return qobject_cast<RecordActivityTaskHeartbeatResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RegisterActivityTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a new <i>activity type</i> along with its configuration settings in the specified
 *
 * domain> <b>
 *
 * A <code>TypeAlreadyExists</code> fault is returned if the type already exists in the domain. You cannot change any
 * configuration settings of the type after its registration, and it must be registered as a new
 *
 * version> </b>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>defaultTaskList.name</code>: String constraint. The key is
 *
 * <code>swf:defaultTaskList.name</code>> </li> <li>
 *
 * <code>name</code>: String constraint. The key is
 *
 * <code>swf:name</code>> </li> <li>
 *
 * <code>version</code>: String constraint. The key is
 *
 * <code>swf:version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RegisterActivityTypeResponse * SwfClient::registerActivityType(const RegisterActivityTypeRequest &request)
{
    return qobject_cast<RegisterActivityTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RegisterDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a new
 *
 * domain>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * You cannot use an IAM policy to control domain access for this action. The name of the domain being registered is
 * available as the resource of this
 *
 * action> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RegisterDomainResponse * SwfClient::registerDomain(const RegisterDomainRequest &request)
{
    return qobject_cast<RegisterDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RegisterWorkflowTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a new <i>workflow type</i> and its configuration settings in the specified
 *
 * domain>
 *
 * The retention period for the workflow history is set by the <a>RegisterDomain</a>
 *
 * action> <b>
 *
 * If the type already exists, then a <code>TypeAlreadyExists</code> fault is returned. You cannot change the configuration
 * settings of a workflow type once it is registered and it must be registered as a new
 *
 * version> </b>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>defaultTaskList.name</code>: String constraint. The key is
 *
 * <code>swf:defaultTaskList.name</code>> </li> <li>
 *
 * <code>name</code>: String constraint. The key is
 *
 * <code>swf:name</code>> </li> <li>
 *
 * <code>version</code>: String constraint. The key is
 *
 * <code>swf:version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RegisterWorkflowTypeResponse * SwfClient::registerWorkflowType(const RegisterWorkflowTypeRequest &request)
{
    return qobject_cast<RegisterWorkflowTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RequestCancelWorkflowExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Records a <code>WorkflowExecutionCancelRequested</code> event in the currently running workflow execution identified by
 * the given domain, workflowId, and runId. This logically requests the cancellation of the workflow execution as a whole.
 * It is up to the decider to take appropriate actions when it receives an execution history with this
 *
 * event> <note>
 *
 * If the runId isn't specified, the <code>WorkflowExecutionCancelRequested</code> event is recorded in the history of the
 * current open workflow execution with the specified workflowId in the
 *
 * domain> </note> <note>
 *
 * Because this action allows the workflow to properly clean up and gracefully close, it should be used instead of
 * <a>TerminateWorkflowExecution</a> when
 *
 * possible> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RequestCancelWorkflowExecutionResponse * SwfClient::requestCancelWorkflowExecution(const RequestCancelWorkflowExecutionRequest &request)
{
    return qobject_cast<RequestCancelWorkflowExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RespondActivityTaskCanceledResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by workers to tell the service that the <a>ActivityTask</a> identified by the <code>taskToken</code> was
 * successfully canceled. Additional <code>details</code> can be provided using the <code>details</code>
 *
 * argument>
 *
 * These <code>details</code> (if provided) appear in the <code>ActivityTaskCanceled</code> event added to the workflow
 *
 * history> <b>
 *
 * Only use this operation if the <code>canceled</code> flag of a <a>RecordActivityTaskHeartbeat</a> request returns
 * <code>true</code> and if the activity can be safely undone or
 *
 * abandoned> </b>
 *
 * A task is considered open from the time that it is scheduled until it is closed. Therefore a task is reported as open
 * while a worker is processing it. A task is closed after it has been specified in a call to
 * <a>RespondActivityTaskCompleted</a>, RespondActivityTaskCanceled, <a>RespondActivityTaskFailed</a>, or the task has <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
 *
 * out</a>>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RespondActivityTaskCanceledResponse * SwfClient::respondActivityTaskCanceled(const RespondActivityTaskCanceledRequest &request)
{
    return qobject_cast<RespondActivityTaskCanceledResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RespondActivityTaskCompletedResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by workers to tell the service that the <a>ActivityTask</a> identified by the <code>taskToken</code> completed
 * successfully with a <code>result</code> (if provided). The <code>result</code> appears in the
 * <code>ActivityTaskCompleted</code> event in the workflow
 *
 * history> <b>
 *
 * If the requested task doesn't complete successfully, use <a>RespondActivityTaskFailed</a> instead. If the worker finds
 * that the task is canceled through the <code>canceled</code> flag returned by <a>RecordActivityTaskHeartbeat</a>, it
 * should cancel the task, clean up and then call
 *
 * <a>RespondActivityTaskCanceled</a>> </b>
 *
 * A task is considered open from the time that it is scheduled until it is closed. Therefore a task is reported as open
 * while a worker is processing it. A task is closed after it has been specified in a call to RespondActivityTaskCompleted,
 * <a>RespondActivityTaskCanceled</a>, <a>RespondActivityTaskFailed</a>, or the task has <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
 *
 * out</a>>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RespondActivityTaskCompletedResponse * SwfClient::respondActivityTaskCompleted(const RespondActivityTaskCompletedRequest &request)
{
    return qobject_cast<RespondActivityTaskCompletedResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RespondActivityTaskFailedResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by workers to tell the service that the <a>ActivityTask</a> identified by the <code>taskToken</code> has failed
 * with <code>reason</code> (if specified). The <code>reason</code> and <code>details</code> appear in the
 * <code>ActivityTaskFailed</code> event added to the workflow
 *
 * history>
 *
 * A task is considered open from the time that it is scheduled until it is closed. Therefore a task is reported as open
 * while a worker is processing it. A task is closed after it has been specified in a call to
 * <a>RespondActivityTaskCompleted</a>, <a>RespondActivityTaskCanceled</a>, RespondActivityTaskFailed, or the task has <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
 *
 * out</a>>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RespondActivityTaskFailedResponse * SwfClient::respondActivityTaskFailed(const RespondActivityTaskFailedRequest &request)
{
    return qobject_cast<RespondActivityTaskFailedResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * RespondDecisionTaskCompletedResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by deciders to tell the service that the <a>DecisionTask</a> identified by the <code>taskToken</code> has
 * successfully completed. The <code>decisions</code> argument specifies the list of decisions made while processing the
 *
 * task>
 *
 * A <code>DecisionTaskCompleted</code> event is added to the workflow history. The <code>executionContext</code> specified
 * is attached to the event in the workflow execution
 *
 * history>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * If an IAM policy grants permission to use <code>RespondDecisionTaskCompleted</code>, it can express permissions for the
 * list of decisions in the <code>decisions</code> parameter. Each of the decisions has one or more parameters, much like a
 * regular API call. To allow for policies to be as readable as possible, you can express permissions on decisions as if
 * they were actual API calls, including applying conditions to some parameters. For more information, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
RespondDecisionTaskCompletedResponse * SwfClient::respondDecisionTaskCompleted(const RespondDecisionTaskCompletedRequest &request)
{
    return qobject_cast<RespondDecisionTaskCompletedResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * SignalWorkflowExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Records a <code>WorkflowExecutionSignaled</code> event in the workflow execution history and creates a decision task for
 * the workflow execution identified by the given domain, workflowId and runId. The event is recorded with the specified
 * user defined signalName and input (if
 *
 * provided)> <note>
 *
 * If a runId isn't specified, then the <code>WorkflowExecutionSignaled</code> event is recorded in the history of the
 * current open workflow with the matching workflowId in the
 *
 * domain> </note> <note>
 *
 * If the specified workflow execution isn't open, this method fails with
 *
 * <code>UnknownResource</code>> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
SignalWorkflowExecutionResponse * SwfClient::signalWorkflowExecution(const SignalWorkflowExecutionRequest &request)
{
    return qobject_cast<SignalWorkflowExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * StartWorkflowExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an execution of the workflow type in the specified domain using the provided <code>workflowId</code> and input
 *
 * data>
 *
 * This action returns the newly started workflow
 *
 * execution>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * Constrain the following parameters by using a <code>Condition</code> element with the appropriate
 *
 * keys> <ul> <li>
 *
 * <code>tagList.member.0</code>: The key is
 *
 * <code>swf:tagList.member.0</code>> </li> <li>
 *
 * <code>tagList.member.1</code>: The key is
 *
 * <code>swf:tagList.member.1</code>> </li> <li>
 *
 * <code>tagList.member.2</code>: The key is
 *
 * <code>swf:tagList.member.2</code>> </li> <li>
 *
 * <code>tagList.member.3</code>: The key is
 *
 * <code>swf:tagList.member.3</code>> </li> <li>
 *
 * <code>tagList.member.4</code>: The key is
 *
 * <code>swf:tagList.member.4</code>> </li> <li>
 *
 * <code>taskList</code>: String constraint. The key is
 *
 * <code>swf:taskList.name</code>> </li> <li>
 *
 * <code>workflowType.name</code>: String constraint. The key is
 *
 * <code>swf:workflowType.name</code>> </li> <li>
 *
 * <code>workflowType.version</code>: String constraint. The key is
 *
 * <code>swf:workflowType.version</code>> </li> </ul> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
StartWorkflowExecutionResponse * SwfClient::startWorkflowExecution(const StartWorkflowExecutionRequest &request)
{
    return qobject_cast<StartWorkflowExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SwfClient service, and returns a pointer to an
 * TerminateWorkflowExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Records a <code>WorkflowExecutionTerminated</code> event and forces closure of the workflow execution identified by the
 * given domain, runId, and workflowId. The child policy, registered with the workflow type or specified when starting this
 * execution, is applied to any open child workflow executions of this workflow
 *
 * execution> <b>
 *
 * If the identified workflow execution was in progress, it is terminated
 *
 * immediately> </b> <note>
 *
 * If a runId isn't specified, then the <code>WorkflowExecutionTerminated</code> event is recorded in the history of the
 * current open workflow with the matching workflowId in the
 *
 * domain> </note> <note>
 *
 * You should consider using <a>RequestCancelWorkflowExecution</a> action instead because it allows the workflow to
 * gracefully close while <a>TerminateWorkflowExecution</a>
 *
 * doesn't> </note>
 *
 * <b>Access Control</b>
 *
 * </p
 *
 * You can use IAM policies to control this action's access to Amazon SWF resources as
 *
 * follows> <ul> <li>
 *
 * Use a <code>Resource</code> element with the domain name to limit the action to only specified
 *
 * domains> </li> <li>
 *
 * Use an <code>Action</code> element to allow or deny permission to call this
 *
 * action> </li> <li>
 *
 * You cannot use an IAM policy to constrain this action's
 *
 * parameters> </li> </ul>
 *
 * If the caller doesn't have sufficient permissions to invoke the action, or the parameter values fall outside the
 * specified constraints, the action fails. The associated event attribute's <code>cause</code> parameter is set to
 * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see <a
 * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using IAM to Manage Access to Amazon
 * SWF Workflows</a> in the <i>Amazon SWF Developer
 */
TerminateWorkflowExecutionResponse * SwfClient::terminateWorkflowExecution(const TerminateWorkflowExecutionRequest &request)
{
    return qobject_cast<TerminateWorkflowExecutionResponse *>(send(request));
}

/*!
 * \class QtAws::SWF::SwfClientPrivate
 * \brief The SwfClientPrivate class provides private implementation for SwfClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a SwfClientPrivate object with public implementation \a q.
 */
SwfClientPrivate::SwfClientPrivate(SwfClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SWF
} // namespace QtAws
