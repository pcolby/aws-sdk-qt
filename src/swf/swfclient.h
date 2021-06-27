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

#ifndef QTAWS_SWFCLIENT_H
#define QTAWS_SWFCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SWF {

class SwfClientPrivate;
class CountClosedWorkflowExecutionsRequest;
class CountClosedWorkflowExecutionsResponse;
class CountOpenWorkflowExecutionsRequest;
class CountOpenWorkflowExecutionsResponse;
class CountPendingActivityTasksRequest;
class CountPendingActivityTasksResponse;
class CountPendingDecisionTasksRequest;
class CountPendingDecisionTasksResponse;
class DeprecateActivityTypeRequest;
class DeprecateActivityTypeResponse;
class DeprecateDomainRequest;
class DeprecateDomainResponse;
class DeprecateWorkflowTypeRequest;
class DeprecateWorkflowTypeResponse;
class DescribeActivityTypeRequest;
class DescribeActivityTypeResponse;
class DescribeDomainRequest;
class DescribeDomainResponse;
class DescribeWorkflowExecutionRequest;
class DescribeWorkflowExecutionResponse;
class DescribeWorkflowTypeRequest;
class DescribeWorkflowTypeResponse;
class GetWorkflowExecutionHistoryRequest;
class GetWorkflowExecutionHistoryResponse;
class ListActivityTypesRequest;
class ListActivityTypesResponse;
class ListClosedWorkflowExecutionsRequest;
class ListClosedWorkflowExecutionsResponse;
class ListDomainsRequest;
class ListDomainsResponse;
class ListOpenWorkflowExecutionsRequest;
class ListOpenWorkflowExecutionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorkflowTypesRequest;
class ListWorkflowTypesResponse;
class PollForActivityTaskRequest;
class PollForActivityTaskResponse;
class PollForDecisionTaskRequest;
class PollForDecisionTaskResponse;
class RecordActivityTaskHeartbeatRequest;
class RecordActivityTaskHeartbeatResponse;
class RegisterActivityTypeRequest;
class RegisterActivityTypeResponse;
class RegisterDomainRequest;
class RegisterDomainResponse;
class RegisterWorkflowTypeRequest;
class RegisterWorkflowTypeResponse;
class RequestCancelWorkflowExecutionRequest;
class RequestCancelWorkflowExecutionResponse;
class RespondActivityTaskCanceledRequest;
class RespondActivityTaskCanceledResponse;
class RespondActivityTaskCompletedRequest;
class RespondActivityTaskCompletedResponse;
class RespondActivityTaskFailedRequest;
class RespondActivityTaskFailedResponse;
class RespondDecisionTaskCompletedRequest;
class RespondDecisionTaskCompletedResponse;
class SignalWorkflowExecutionRequest;
class SignalWorkflowExecutionResponse;
class StartWorkflowExecutionRequest;
class StartWorkflowExecutionResponse;
class TagResourceRequest;
class TagResourceResponse;
class TerminateWorkflowExecutionRequest;
class TerminateWorkflowExecutionResponse;
class UndeprecateActivityTypeRequest;
class UndeprecateActivityTypeResponse;
class UndeprecateDomainRequest;
class UndeprecateDomainResponse;
class UndeprecateWorkflowTypeRequest;
class UndeprecateWorkflowTypeResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT SwfClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SwfClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SwfClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CountClosedWorkflowExecutionsResponse * countClosedWorkflowExecutions(const CountClosedWorkflowExecutionsRequest &request);
    CountOpenWorkflowExecutionsResponse * countOpenWorkflowExecutions(const CountOpenWorkflowExecutionsRequest &request);
    CountPendingActivityTasksResponse * countPendingActivityTasks(const CountPendingActivityTasksRequest &request);
    CountPendingDecisionTasksResponse * countPendingDecisionTasks(const CountPendingDecisionTasksRequest &request);
    DeprecateActivityTypeResponse * deprecateActivityType(const DeprecateActivityTypeRequest &request);
    DeprecateDomainResponse * deprecateDomain(const DeprecateDomainRequest &request);
    DeprecateWorkflowTypeResponse * deprecateWorkflowType(const DeprecateWorkflowTypeRequest &request);
    DescribeActivityTypeResponse * describeActivityType(const DescribeActivityTypeRequest &request);
    DescribeDomainResponse * describeDomain(const DescribeDomainRequest &request);
    DescribeWorkflowExecutionResponse * describeWorkflowExecution(const DescribeWorkflowExecutionRequest &request);
    DescribeWorkflowTypeResponse * describeWorkflowType(const DescribeWorkflowTypeRequest &request);
    GetWorkflowExecutionHistoryResponse * getWorkflowExecutionHistory(const GetWorkflowExecutionHistoryRequest &request);
    ListActivityTypesResponse * listActivityTypes(const ListActivityTypesRequest &request);
    ListClosedWorkflowExecutionsResponse * listClosedWorkflowExecutions(const ListClosedWorkflowExecutionsRequest &request);
    ListDomainsResponse * listDomains(const ListDomainsRequest &request);
    ListOpenWorkflowExecutionsResponse * listOpenWorkflowExecutions(const ListOpenWorkflowExecutionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorkflowTypesResponse * listWorkflowTypes(const ListWorkflowTypesRequest &request);
    PollForActivityTaskResponse * pollForActivityTask(const PollForActivityTaskRequest &request);
    PollForDecisionTaskResponse * pollForDecisionTask(const PollForDecisionTaskRequest &request);
    RecordActivityTaskHeartbeatResponse * recordActivityTaskHeartbeat(const RecordActivityTaskHeartbeatRequest &request);
    RegisterActivityTypeResponse * registerActivityType(const RegisterActivityTypeRequest &request);
    RegisterDomainResponse * registerDomain(const RegisterDomainRequest &request);
    RegisterWorkflowTypeResponse * registerWorkflowType(const RegisterWorkflowTypeRequest &request);
    RequestCancelWorkflowExecutionResponse * requestCancelWorkflowExecution(const RequestCancelWorkflowExecutionRequest &request);
    RespondActivityTaskCanceledResponse * respondActivityTaskCanceled(const RespondActivityTaskCanceledRequest &request);
    RespondActivityTaskCompletedResponse * respondActivityTaskCompleted(const RespondActivityTaskCompletedRequest &request);
    RespondActivityTaskFailedResponse * respondActivityTaskFailed(const RespondActivityTaskFailedRequest &request);
    RespondDecisionTaskCompletedResponse * respondDecisionTaskCompleted(const RespondDecisionTaskCompletedRequest &request);
    SignalWorkflowExecutionResponse * signalWorkflowExecution(const SignalWorkflowExecutionRequest &request);
    StartWorkflowExecutionResponse * startWorkflowExecution(const StartWorkflowExecutionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TerminateWorkflowExecutionResponse * terminateWorkflowExecution(const TerminateWorkflowExecutionRequest &request);
    UndeprecateActivityTypeResponse * undeprecateActivityType(const UndeprecateActivityTypeRequest &request);
    UndeprecateDomainResponse * undeprecateDomain(const UndeprecateDomainRequest &request);
    UndeprecateWorkflowTypeResponse * undeprecateWorkflowType(const UndeprecateWorkflowTypeRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

protected:
    /// @cond internal
    SwfClientPrivate * const d_ptr; ///< Internal d-pointer.
    SwfClient(SwfClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SwfClient)
    Q_DISABLE_COPY(SwfClient)

};

} // namespace SWF
} // namespace QtAws

#endif
