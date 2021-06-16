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

#ifndef QTAWS_EVENTBRIDGECLIENT_H
#define QTAWS_EVENTBRIDGECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace EventBridge {

class EventBridgeClientPrivate;
class ActivateEventSourceRequest;
class ActivateEventSourceResponse;
class CreateEventBusRequest;
class CreateEventBusResponse;
class CreatePartnerEventSourceRequest;
class CreatePartnerEventSourceResponse;
class DeactivateEventSourceRequest;
class DeactivateEventSourceResponse;
class DeleteEventBusRequest;
class DeleteEventBusResponse;
class DeletePartnerEventSourceRequest;
class DeletePartnerEventSourceResponse;
class DeleteRuleRequest;
class DeleteRuleResponse;
class DescribeEventBusRequest;
class DescribeEventBusResponse;
class DescribeEventSourceRequest;
class DescribeEventSourceResponse;
class DescribePartnerEventSourceRequest;
class DescribePartnerEventSourceResponse;
class DescribeRuleRequest;
class DescribeRuleResponse;
class DisableRuleRequest;
class DisableRuleResponse;
class EnableRuleRequest;
class EnableRuleResponse;
class ListEventBusesRequest;
class ListEventBusesResponse;
class ListEventSourcesRequest;
class ListEventSourcesResponse;
class ListPartnerEventSourceAccountsRequest;
class ListPartnerEventSourceAccountsResponse;
class ListPartnerEventSourcesRequest;
class ListPartnerEventSourcesResponse;
class ListRuleNamesByTargetRequest;
class ListRuleNamesByTargetResponse;
class ListRulesRequest;
class ListRulesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTargetsByRuleRequest;
class ListTargetsByRuleResponse;
class PutEventsRequest;
class PutEventsResponse;
class PutPartnerEventsRequest;
class PutPartnerEventsResponse;
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
class TagResourceRequest;
class TagResourceResponse;
class TestEventPatternRequest;
class TestEventPatternResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWS_EXPORT EventBridgeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EventBridgeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EventBridgeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ActivateEventSourceResponse * activateEventSource(const ActivateEventSourceRequest &request);
    CreateEventBusResponse * createEventBus(const CreateEventBusRequest &request);
    CreatePartnerEventSourceResponse * createPartnerEventSource(const CreatePartnerEventSourceRequest &request);
    DeactivateEventSourceResponse * deactivateEventSource(const DeactivateEventSourceRequest &request);
    DeleteEventBusResponse * deleteEventBus(const DeleteEventBusRequest &request);
    DeletePartnerEventSourceResponse * deletePartnerEventSource(const DeletePartnerEventSourceRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DescribeEventBusResponse * describeEventBus(const DescribeEventBusRequest &request);
    DescribeEventSourceResponse * describeEventSource(const DescribeEventSourceRequest &request);
    DescribePartnerEventSourceResponse * describePartnerEventSource(const DescribePartnerEventSourceRequest &request);
    DescribeRuleResponse * describeRule(const DescribeRuleRequest &request);
    DisableRuleResponse * disableRule(const DisableRuleRequest &request);
    EnableRuleResponse * enableRule(const EnableRuleRequest &request);
    ListEventBusesResponse * listEventBuses(const ListEventBusesRequest &request);
    ListEventSourcesResponse * listEventSources(const ListEventSourcesRequest &request);
    ListPartnerEventSourceAccountsResponse * listPartnerEventSourceAccounts(const ListPartnerEventSourceAccountsRequest &request);
    ListPartnerEventSourcesResponse * listPartnerEventSources(const ListPartnerEventSourcesRequest &request);
    ListRuleNamesByTargetResponse * listRuleNamesByTarget(const ListRuleNamesByTargetRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTargetsByRuleResponse * listTargetsByRule(const ListTargetsByRuleRequest &request);
    PutEventsResponse * putEvents(const PutEventsRequest &request);
    PutPartnerEventsResponse * putPartnerEvents(const PutPartnerEventsRequest &request);
    PutPermissionResponse * putPermission(const PutPermissionRequest &request);
    PutRuleResponse * putRule(const PutRuleRequest &request);
    PutTargetsResponse * putTargets(const PutTargetsRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    RemoveTargetsResponse * removeTargets(const RemoveTargetsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestEventPatternResponse * testEventPattern(const TestEventPatternRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(EventBridgeClient)
    Q_DISABLE_COPY(EventBridgeClient)

};

} // namespace EventBridge
} // namespace QtAws

#endif
