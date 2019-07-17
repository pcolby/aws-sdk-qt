/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_CLOUDWATCHEVENTSCLIENT_H
#define QTAWS_CLOUDWATCHEVENTSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CloudWatchEvents {

class CloudWatchEventsClientPrivate;
class DeleteRuleRequest;
class DeleteRuleResponse;
class DescribeEventBusRequest;
class DescribeEventBusResponse;
class DescribeRuleRequest;
class DescribeRuleResponse;
class DisableRuleRequest;
class DisableRuleResponse;
class EnableRuleRequest;
class EnableRuleResponse;
class ListRuleNamesByTargetRequest;
class ListRuleNamesByTargetResponse;
class ListRulesRequest;
class ListRulesResponse;
class ListTargetsByRuleRequest;
class ListTargetsByRuleResponse;
class PutEventsRequest;
class PutEventsResponse;
class PutPermissionRequest;
class PutPermissionResponse;
class PutRuleRequest;
class PutRuleResponse;
class PutTargetsRequest;
class PutTargetsResponse;
class RemovePermissionRequest;
class RemovePermissionResponse;
class RemoveTargetsRequest;
class RemoveTargetsResponse;
class TestEventPatternRequest;
class TestEventPatternResponse;

class QTAWS_EXPORT CloudWatchEventsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudWatchEventsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudWatchEventsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DescribeEventBusResponse * describeEventBus(const DescribeEventBusRequest &request);
    DescribeRuleResponse * describeRule(const DescribeRuleRequest &request);
    DisableRuleResponse * disableRule(const DisableRuleRequest &request);
    EnableRuleResponse * enableRule(const EnableRuleRequest &request);
    ListRuleNamesByTargetResponse * listRuleNamesByTarget(const ListRuleNamesByTargetRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListTargetsByRuleResponse * listTargetsByRule(const ListTargetsByRuleRequest &request);
    PutEventsResponse * putEvents(const PutEventsRequest &request);
    PutPermissionResponse * putPermission(const PutPermissionRequest &request);
    PutRuleResponse * putRule(const PutRuleRequest &request);
    PutTargetsResponse * putTargets(const PutTargetsRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    RemoveTargetsResponse * removeTargets(const RemoveTargetsRequest &request);
    TestEventPatternResponse * testEventPattern(const TestEventPatternRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudWatchEventsClient)
    Q_DISABLE_COPY(CloudWatchEventsClient)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
