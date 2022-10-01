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

#ifndef QTAWS_SSMINCIDENTSCLIENT_H
#define QTAWS_SSMINCIDENTSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsssmincidentsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SsmIncidents {

class SsmIncidentsClientPrivate;
class CreateReplicationSetRequest;
class CreateReplicationSetResponse;
class CreateResponsePlanRequest;
class CreateResponsePlanResponse;
class CreateTimelineEventRequest;
class CreateTimelineEventResponse;
class DeleteIncidentRecordRequest;
class DeleteIncidentRecordResponse;
class DeleteReplicationSetRequest;
class DeleteReplicationSetResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteResponsePlanRequest;
class DeleteResponsePlanResponse;
class DeleteTimelineEventRequest;
class DeleteTimelineEventResponse;
class GetIncidentRecordRequest;
class GetIncidentRecordResponse;
class GetReplicationSetRequest;
class GetReplicationSetResponse;
class GetResourcePoliciesRequest;
class GetResourcePoliciesResponse;
class GetResponsePlanRequest;
class GetResponsePlanResponse;
class GetTimelineEventRequest;
class GetTimelineEventResponse;
class ListIncidentRecordsRequest;
class ListIncidentRecordsResponse;
class ListRelatedItemsRequest;
class ListRelatedItemsResponse;
class ListReplicationSetsRequest;
class ListReplicationSetsResponse;
class ListResponsePlansRequest;
class ListResponsePlansResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTimelineEventsRequest;
class ListTimelineEventsResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class StartIncidentRequest;
class StartIncidentResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDeletionProtectionRequest;
class UpdateDeletionProtectionResponse;
class UpdateIncidentRecordRequest;
class UpdateIncidentRecordResponse;
class UpdateRelatedItemsRequest;
class UpdateRelatedItemsResponse;
class UpdateReplicationSetRequest;
class UpdateReplicationSetResponse;
class UpdateResponsePlanRequest;
class UpdateResponsePlanResponse;
class UpdateTimelineEventRequest;
class UpdateTimelineEventResponse;

class QTAWSSSMINCIDENTS_EXPORT SsmIncidentsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SsmIncidentsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SsmIncidentsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateReplicationSetResponse * createReplicationSet(const CreateReplicationSetRequest &request);
    CreateResponsePlanResponse * createResponsePlan(const CreateResponsePlanRequest &request);
    CreateTimelineEventResponse * createTimelineEvent(const CreateTimelineEventRequest &request);
    DeleteIncidentRecordResponse * deleteIncidentRecord(const DeleteIncidentRecordRequest &request);
    DeleteReplicationSetResponse * deleteReplicationSet(const DeleteReplicationSetRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteResponsePlanResponse * deleteResponsePlan(const DeleteResponsePlanRequest &request);
    DeleteTimelineEventResponse * deleteTimelineEvent(const DeleteTimelineEventRequest &request);
    GetIncidentRecordResponse * getIncidentRecord(const GetIncidentRecordRequest &request);
    GetReplicationSetResponse * getReplicationSet(const GetReplicationSetRequest &request);
    GetResourcePoliciesResponse * getResourcePolicies(const GetResourcePoliciesRequest &request);
    GetResponsePlanResponse * getResponsePlan(const GetResponsePlanRequest &request);
    GetTimelineEventResponse * getTimelineEvent(const GetTimelineEventRequest &request);
    ListIncidentRecordsResponse * listIncidentRecords(const ListIncidentRecordsRequest &request);
    ListRelatedItemsResponse * listRelatedItems(const ListRelatedItemsRequest &request);
    ListReplicationSetsResponse * listReplicationSets(const ListReplicationSetsRequest &request);
    ListResponsePlansResponse * listResponsePlans(const ListResponsePlansRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTimelineEventsResponse * listTimelineEvents(const ListTimelineEventsRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    StartIncidentResponse * startIncident(const StartIncidentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDeletionProtectionResponse * updateDeletionProtection(const UpdateDeletionProtectionRequest &request);
    UpdateIncidentRecordResponse * updateIncidentRecord(const UpdateIncidentRecordRequest &request);
    UpdateRelatedItemsResponse * updateRelatedItems(const UpdateRelatedItemsRequest &request);
    UpdateReplicationSetResponse * updateReplicationSet(const UpdateReplicationSetRequest &request);
    UpdateResponsePlanResponse * updateResponsePlan(const UpdateResponsePlanRequest &request);
    UpdateTimelineEventResponse * updateTimelineEvent(const UpdateTimelineEventRequest &request);

private:
    Q_DECLARE_PRIVATE(SsmIncidentsClient)
    Q_DISABLE_COPY(SsmIncidentsClient)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
