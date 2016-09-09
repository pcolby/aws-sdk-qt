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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    SwfCountClosedWorkflowExecutionsResponse * countClosedWorkflowExecutions(const SwfCountClosedWorkflowExecutionsRequest &request);
    SwfCountOpenWorkflowExecutionsResponse * countOpenWorkflowExecutions(const SwfCountOpenWorkflowExecutionsRequest &request);
    SwfCountPendingActivityTasksResponse * countPendingActivityTasks(const SwfCountPendingActivityTasksRequest &request);
    SwfCountPendingDecisionTasksResponse * countPendingDecisionTasks(const SwfCountPendingDecisionTasksRequest &request);
    SwfDeprecateActivityTypeResponse * deprecateActivityType(const SwfDeprecateActivityTypeRequest &request);
    SwfDeprecateDomainResponse * deprecateDomain(const SwfDeprecateDomainRequest &request);
    SwfDeprecateWorkflowTypeResponse * deprecateWorkflowType(const SwfDeprecateWorkflowTypeRequest &request);
    SwfDescribeActivityTypeResponse * describeActivityType(const SwfDescribeActivityTypeRequest &request);
    SwfDescribeDomainResponse * describeDomain(const SwfDescribeDomainRequest &request);
    SwfDescribeWorkflowExecutionResponse * describeWorkflowExecution(const SwfDescribeWorkflowExecutionRequest &request);
    SwfDescribeWorkflowTypeResponse * describeWorkflowType(const SwfDescribeWorkflowTypeRequest &request);
    SwfGetWorkflowExecutionHistoryResponse * getWorkflowExecutionHistory(const SwfGetWorkflowExecutionHistoryRequest &request);
    SwfListActivityTypesResponse * listActivityTypes(const SwfListActivityTypesRequest &request);
    SwfListClosedWorkflowExecutionsResponse * listClosedWorkflowExecutions(const SwfListClosedWorkflowExecutionsRequest &request);
    SwfListDomainsResponse * listDomains(const SwfListDomainsRequest &request);
    SwfListOpenWorkflowExecutionsResponse * listOpenWorkflowExecutions(const SwfListOpenWorkflowExecutionsRequest &request);
    SwfListWorkflowTypesResponse * listWorkflowTypes(const SwfListWorkflowTypesRequest &request);
    SwfPollForActivityTaskResponse * pollForActivityTask(const SwfPollForActivityTaskRequest &request);
    SwfPollForDecisionTaskResponse * pollForDecisionTask(const SwfPollForDecisionTaskRequest &request);
    SwfRecordActivityTaskHeartbeatResponse * recordActivityTaskHeartbeat(const SwfRecordActivityTaskHeartbeatRequest &request);
    SwfRegisterActivityTypeResponse * registerActivityType(const SwfRegisterActivityTypeRequest &request);
    SwfRegisterDomainResponse * registerDomain(const SwfRegisterDomainRequest &request);
    SwfRegisterWorkflowTypeResponse * registerWorkflowType(const SwfRegisterWorkflowTypeRequest &request);
    SwfRequestCancelWorkflowExecutionResponse * requestCancelWorkflowExecution(const SwfRequestCancelWorkflowExecutionRequest &request);
    SwfRespondActivityTaskCanceledResponse * respondActivityTaskCanceled(const SwfRespondActivityTaskCanceledRequest &request);
    SwfRespondActivityTaskCompletedResponse * respondActivityTaskCompleted(const SwfRespondActivityTaskCompletedRequest &request);
    SwfRespondActivityTaskFailedResponse * respondActivityTaskFailed(const SwfRespondActivityTaskFailedRequest &request);
    SwfRespondDecisionTaskCompletedResponse * respondDecisionTaskCompleted(const SwfRespondDecisionTaskCompletedRequest &request);
    SwfSignalWorkflowExecutionResponse * signalWorkflowExecution(const SwfSignalWorkflowExecutionRequest &request);
    SwfStartWorkflowExecutionResponse * startWorkflowExecution(const SwfStartWorkflowExecutionRequest &request);
    SwfTerminateWorkflowExecutionResponse * terminateWorkflowExecution(const SwfTerminateWorkflowExecutionRequest &request);

private:
    Q_DECLARE_PRIVATE(SwfClient)
    Q_DISABLE_COPY(SwfClient)

};

QTAWS_END_NAMESPACE

#endif
