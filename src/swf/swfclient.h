/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SWFCLIENT_H
#define QTAWS_SWFCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace SWF {

class SwfClientPrivate;

class QTAWS_EXPORT SwfClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SwfClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SwfClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
    TerminateWorkflowExecutionResponse * terminateWorkflowExecution(const TerminateWorkflowExecutionRequest &request);

private:
    Q_DECLARE_PRIVATE(SwfClient)
    Q_DISABLE_COPY(SwfClient)

};

} // namespace SWF
} // namespace AWS

#endif
