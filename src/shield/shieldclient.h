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

#ifndef QTAWS_SHIELDCLIENT_H
#define QTAWS_SHIELDCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Shield {

class ShieldClientPrivate;
class AssociateDRTLogBucketRequest;
class AssociateDRTLogBucketResponse;
class AssociateDRTRoleRequest;
class AssociateDRTRoleResponse;
class AssociateHealthCheckRequest;
class AssociateHealthCheckResponse;
class AssociateProactiveEngagementDetailsRequest;
class AssociateProactiveEngagementDetailsResponse;
class CreateProtectionRequest;
class CreateProtectionResponse;
class CreateProtectionGroupRequest;
class CreateProtectionGroupResponse;
class CreateSubscriptionRequest;
class CreateSubscriptionResponse;
class DeleteProtectionRequest;
class DeleteProtectionResponse;
class DeleteProtectionGroupRequest;
class DeleteProtectionGroupResponse;
class DeleteSubscriptionRequest;
class DeleteSubscriptionResponse;
class DescribeAttackRequest;
class DescribeAttackResponse;
class DescribeAttackStatisticsRequest;
class DescribeAttackStatisticsResponse;
class DescribeDRTAccessRequest;
class DescribeDRTAccessResponse;
class DescribeEmergencyContactSettingsRequest;
class DescribeEmergencyContactSettingsResponse;
class DescribeProtectionRequest;
class DescribeProtectionResponse;
class DescribeProtectionGroupRequest;
class DescribeProtectionGroupResponse;
class DescribeSubscriptionRequest;
class DescribeSubscriptionResponse;
class DisableProactiveEngagementRequest;
class DisableProactiveEngagementResponse;
class DisassociateDRTLogBucketRequest;
class DisassociateDRTLogBucketResponse;
class DisassociateDRTRoleRequest;
class DisassociateDRTRoleResponse;
class DisassociateHealthCheckRequest;
class DisassociateHealthCheckResponse;
class EnableProactiveEngagementRequest;
class EnableProactiveEngagementResponse;
class GetSubscriptionStateRequest;
class GetSubscriptionStateResponse;
class ListAttacksRequest;
class ListAttacksResponse;
class ListProtectionGroupsRequest;
class ListProtectionGroupsResponse;
class ListProtectionsRequest;
class ListProtectionsResponse;
class ListResourcesInProtectionGroupRequest;
class ListResourcesInProtectionGroupResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateEmergencyContactSettingsRequest;
class UpdateEmergencyContactSettingsResponse;
class UpdateProtectionGroupRequest;
class UpdateProtectionGroupResponse;
class UpdateSubscriptionRequest;
class UpdateSubscriptionResponse;

class QTAWS_EXPORT ShieldClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ShieldClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ShieldClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateDRTLogBucketResponse * associateDRTLogBucket(const AssociateDRTLogBucketRequest &request);
    AssociateDRTRoleResponse * associateDRTRole(const AssociateDRTRoleRequest &request);
    AssociateHealthCheckResponse * associateHealthCheck(const AssociateHealthCheckRequest &request);
    AssociateProactiveEngagementDetailsResponse * associateProactiveEngagementDetails(const AssociateProactiveEngagementDetailsRequest &request);
    CreateProtectionResponse * createProtection(const CreateProtectionRequest &request);
    CreateProtectionGroupResponse * createProtectionGroup(const CreateProtectionGroupRequest &request);
    CreateSubscriptionResponse * createSubscription(const CreateSubscriptionRequest &request);
    DeleteProtectionResponse * deleteProtection(const DeleteProtectionRequest &request);
    DeleteProtectionGroupResponse * deleteProtectionGroup(const DeleteProtectionGroupRequest &request);
    DeleteSubscriptionResponse * deleteSubscription(const DeleteSubscriptionRequest &request);
    DescribeAttackResponse * describeAttack(const DescribeAttackRequest &request);
    DescribeAttackStatisticsResponse * describeAttackStatistics(const DescribeAttackStatisticsRequest &request);
    DescribeDRTAccessResponse * describeDRTAccess(const DescribeDRTAccessRequest &request);
    DescribeEmergencyContactSettingsResponse * describeEmergencyContactSettings(const DescribeEmergencyContactSettingsRequest &request);
    DescribeProtectionResponse * describeProtection(const DescribeProtectionRequest &request);
    DescribeProtectionGroupResponse * describeProtectionGroup(const DescribeProtectionGroupRequest &request);
    DescribeSubscriptionResponse * describeSubscription(const DescribeSubscriptionRequest &request);
    DisableProactiveEngagementResponse * disableProactiveEngagement(const DisableProactiveEngagementRequest &request);
    DisassociateDRTLogBucketResponse * disassociateDRTLogBucket(const DisassociateDRTLogBucketRequest &request);
    DisassociateDRTRoleResponse * disassociateDRTRole(const DisassociateDRTRoleRequest &request);
    DisassociateHealthCheckResponse * disassociateHealthCheck(const DisassociateHealthCheckRequest &request);
    EnableProactiveEngagementResponse * enableProactiveEngagement(const EnableProactiveEngagementRequest &request);
    GetSubscriptionStateResponse * getSubscriptionState(const GetSubscriptionStateRequest &request);
    ListAttacksResponse * listAttacks(const ListAttacksRequest &request);
    ListProtectionGroupsResponse * listProtectionGroups(const ListProtectionGroupsRequest &request);
    ListProtectionsResponse * listProtections(const ListProtectionsRequest &request);
    ListResourcesInProtectionGroupResponse * listResourcesInProtectionGroup(const ListResourcesInProtectionGroupRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateEmergencyContactSettingsResponse * updateEmergencyContactSettings(const UpdateEmergencyContactSettingsRequest &request);
    UpdateProtectionGroupResponse * updateProtectionGroup(const UpdateProtectionGroupRequest &request);
    UpdateSubscriptionResponse * updateSubscription(const UpdateSubscriptionRequest &request);

private:
    Q_DECLARE_PRIVATE(ShieldClient)
    Q_DISABLE_COPY(ShieldClient)

};

} // namespace Shield
} // namespace QtAws

#endif
