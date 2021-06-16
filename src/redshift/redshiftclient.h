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

#ifndef QTAWS_REDSHIFTCLIENT_H
#define QTAWS_REDSHIFTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Redshift {

class RedshiftClientPrivate;
class AcceptReservedNodeExchangeRequest;
class AcceptReservedNodeExchangeResponse;
class AddPartnerRequest;
class AddPartnerResponse;
class AuthorizeClusterSecurityGroupIngressRequest;
class AuthorizeClusterSecurityGroupIngressResponse;
class AuthorizeEndpointAccessRequest;
class AuthorizeEndpointAccessResponse;
class AuthorizeSnapshotAccessRequest;
class AuthorizeSnapshotAccessResponse;
class BatchDeleteClusterSnapshotsRequest;
class BatchDeleteClusterSnapshotsResponse;
class BatchModifyClusterSnapshotsRequest;
class BatchModifyClusterSnapshotsResponse;
class CancelResizeRequest;
class CancelResizeResponse;
class CopyClusterSnapshotRequest;
class CopyClusterSnapshotResponse;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateClusterParameterGroupRequest;
class CreateClusterParameterGroupResponse;
class CreateClusterSecurityGroupRequest;
class CreateClusterSecurityGroupResponse;
class CreateClusterSnapshotRequest;
class CreateClusterSnapshotResponse;
class CreateClusterSubnetGroupRequest;
class CreateClusterSubnetGroupResponse;
class CreateEndpointAccessRequest;
class CreateEndpointAccessResponse;
class CreateEventSubscriptionRequest;
class CreateEventSubscriptionResponse;
class CreateHsmClientCertificateRequest;
class CreateHsmClientCertificateResponse;
class CreateHsmConfigurationRequest;
class CreateHsmConfigurationResponse;
class CreateScheduledActionRequest;
class CreateScheduledActionResponse;
class CreateSnapshotCopyGrantRequest;
class CreateSnapshotCopyGrantResponse;
class CreateSnapshotScheduleRequest;
class CreateSnapshotScheduleResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class CreateUsageLimitRequest;
class CreateUsageLimitResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DeleteClusterParameterGroupRequest;
class DeleteClusterParameterGroupResponse;
class DeleteClusterSecurityGroupRequest;
class DeleteClusterSecurityGroupResponse;
class DeleteClusterSnapshotRequest;
class DeleteClusterSnapshotResponse;
class DeleteClusterSubnetGroupRequest;
class DeleteClusterSubnetGroupResponse;
class DeleteEndpointAccessRequest;
class DeleteEndpointAccessResponse;
class DeleteEventSubscriptionRequest;
class DeleteEventSubscriptionResponse;
class DeleteHsmClientCertificateRequest;
class DeleteHsmClientCertificateResponse;
class DeleteHsmConfigurationRequest;
class DeleteHsmConfigurationResponse;
class DeletePartnerRequest;
class DeletePartnerResponse;
class DeleteScheduledActionRequest;
class DeleteScheduledActionResponse;
class DeleteSnapshotCopyGrantRequest;
class DeleteSnapshotCopyGrantResponse;
class DeleteSnapshotScheduleRequest;
class DeleteSnapshotScheduleResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DeleteUsageLimitRequest;
class DeleteUsageLimitResponse;
class DescribeAccountAttributesRequest;
class DescribeAccountAttributesResponse;
class DescribeClusterDbRevisionsRequest;
class DescribeClusterDbRevisionsResponse;
class DescribeClusterParameterGroupsRequest;
class DescribeClusterParameterGroupsResponse;
class DescribeClusterParametersRequest;
class DescribeClusterParametersResponse;
class DescribeClusterSecurityGroupsRequest;
class DescribeClusterSecurityGroupsResponse;
class DescribeClusterSnapshotsRequest;
class DescribeClusterSnapshotsResponse;
class DescribeClusterSubnetGroupsRequest;
class DescribeClusterSubnetGroupsResponse;
class DescribeClusterTracksRequest;
class DescribeClusterTracksResponse;
class DescribeClusterVersionsRequest;
class DescribeClusterVersionsResponse;
class DescribeClustersRequest;
class DescribeClustersResponse;
class DescribeDefaultClusterParametersRequest;
class DescribeDefaultClusterParametersResponse;
class DescribeEndpointAccessRequest;
class DescribeEndpointAccessResponse;
class DescribeEndpointAuthorizationRequest;
class DescribeEndpointAuthorizationResponse;
class DescribeEventCategoriesRequest;
class DescribeEventCategoriesResponse;
class DescribeEventSubscriptionsRequest;
class DescribeEventSubscriptionsResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeHsmClientCertificatesRequest;
class DescribeHsmClientCertificatesResponse;
class DescribeHsmConfigurationsRequest;
class DescribeHsmConfigurationsResponse;
class DescribeLoggingStatusRequest;
class DescribeLoggingStatusResponse;
class DescribeNodeConfigurationOptionsRequest;
class DescribeNodeConfigurationOptionsResponse;
class DescribeOrderableClusterOptionsRequest;
class DescribeOrderableClusterOptionsResponse;
class DescribePartnersRequest;
class DescribePartnersResponse;
class DescribeReservedNodeOfferingsRequest;
class DescribeReservedNodeOfferingsResponse;
class DescribeReservedNodesRequest;
class DescribeReservedNodesResponse;
class DescribeResizeRequest;
class DescribeResizeResponse;
class DescribeScheduledActionsRequest;
class DescribeScheduledActionsResponse;
class DescribeSnapshotCopyGrantsRequest;
class DescribeSnapshotCopyGrantsResponse;
class DescribeSnapshotSchedulesRequest;
class DescribeSnapshotSchedulesResponse;
class DescribeStorageRequest;
class DescribeStorageResponse;
class DescribeTableRestoreStatusRequest;
class DescribeTableRestoreStatusResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeUsageLimitsRequest;
class DescribeUsageLimitsResponse;
class DisableLoggingRequest;
class DisableLoggingResponse;
class DisableSnapshotCopyRequest;
class DisableSnapshotCopyResponse;
class EnableLoggingRequest;
class EnableLoggingResponse;
class EnableSnapshotCopyRequest;
class EnableSnapshotCopyResponse;
class GetClusterCredentialsRequest;
class GetClusterCredentialsResponse;
class GetReservedNodeExchangeOfferingsRequest;
class GetReservedNodeExchangeOfferingsResponse;
class ModifyAquaConfigurationRequest;
class ModifyAquaConfigurationResponse;
class ModifyClusterRequest;
class ModifyClusterResponse;
class ModifyClusterDbRevisionRequest;
class ModifyClusterDbRevisionResponse;
class ModifyClusterIamRolesRequest;
class ModifyClusterIamRolesResponse;
class ModifyClusterMaintenanceRequest;
class ModifyClusterMaintenanceResponse;
class ModifyClusterParameterGroupRequest;
class ModifyClusterParameterGroupResponse;
class ModifyClusterSnapshotRequest;
class ModifyClusterSnapshotResponse;
class ModifyClusterSnapshotScheduleRequest;
class ModifyClusterSnapshotScheduleResponse;
class ModifyClusterSubnetGroupRequest;
class ModifyClusterSubnetGroupResponse;
class ModifyEndpointAccessRequest;
class ModifyEndpointAccessResponse;
class ModifyEventSubscriptionRequest;
class ModifyEventSubscriptionResponse;
class ModifyScheduledActionRequest;
class ModifyScheduledActionResponse;
class ModifySnapshotCopyRetentionPeriodRequest;
class ModifySnapshotCopyRetentionPeriodResponse;
class ModifySnapshotScheduleRequest;
class ModifySnapshotScheduleResponse;
class ModifyUsageLimitRequest;
class ModifyUsageLimitResponse;
class PauseClusterRequest;
class PauseClusterResponse;
class PurchaseReservedNodeOfferingRequest;
class PurchaseReservedNodeOfferingResponse;
class RebootClusterRequest;
class RebootClusterResponse;
class ResetClusterParameterGroupRequest;
class ResetClusterParameterGroupResponse;
class ResizeClusterRequest;
class ResizeClusterResponse;
class RestoreFromClusterSnapshotRequest;
class RestoreFromClusterSnapshotResponse;
class RestoreTableFromClusterSnapshotRequest;
class RestoreTableFromClusterSnapshotResponse;
class ResumeClusterRequest;
class ResumeClusterResponse;
class RevokeClusterSecurityGroupIngressRequest;
class RevokeClusterSecurityGroupIngressResponse;
class RevokeEndpointAccessRequest;
class RevokeEndpointAccessResponse;
class RevokeSnapshotAccessRequest;
class RevokeSnapshotAccessResponse;
class RotateEncryptionKeyRequest;
class RotateEncryptionKeyResponse;
class UpdatePartnerStatusRequest;
class UpdatePartnerStatusResponse;

class QTAWS_EXPORT RedshiftClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RedshiftClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RedshiftClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptReservedNodeExchangeResponse * acceptReservedNodeExchange(const AcceptReservedNodeExchangeRequest &request);
    AddPartnerResponse * addPartner(const AddPartnerRequest &request);
    AuthorizeClusterSecurityGroupIngressResponse * authorizeClusterSecurityGroupIngress(const AuthorizeClusterSecurityGroupIngressRequest &request);
    AuthorizeEndpointAccessResponse * authorizeEndpointAccess(const AuthorizeEndpointAccessRequest &request);
    AuthorizeSnapshotAccessResponse * authorizeSnapshotAccess(const AuthorizeSnapshotAccessRequest &request);
    BatchDeleteClusterSnapshotsResponse * batchDeleteClusterSnapshots(const BatchDeleteClusterSnapshotsRequest &request);
    BatchModifyClusterSnapshotsResponse * batchModifyClusterSnapshots(const BatchModifyClusterSnapshotsRequest &request);
    CancelResizeResponse * cancelResize(const CancelResizeRequest &request);
    CopyClusterSnapshotResponse * copyClusterSnapshot(const CopyClusterSnapshotRequest &request);
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateClusterParameterGroupResponse * createClusterParameterGroup(const CreateClusterParameterGroupRequest &request);
    CreateClusterSecurityGroupResponse * createClusterSecurityGroup(const CreateClusterSecurityGroupRequest &request);
    CreateClusterSnapshotResponse * createClusterSnapshot(const CreateClusterSnapshotRequest &request);
    CreateClusterSubnetGroupResponse * createClusterSubnetGroup(const CreateClusterSubnetGroupRequest &request);
    CreateEndpointAccessResponse * createEndpointAccess(const CreateEndpointAccessRequest &request);
    CreateEventSubscriptionResponse * createEventSubscription(const CreateEventSubscriptionRequest &request);
    CreateHsmClientCertificateResponse * createHsmClientCertificate(const CreateHsmClientCertificateRequest &request);
    CreateHsmConfigurationResponse * createHsmConfiguration(const CreateHsmConfigurationRequest &request);
    CreateScheduledActionResponse * createScheduledAction(const CreateScheduledActionRequest &request);
    CreateSnapshotCopyGrantResponse * createSnapshotCopyGrant(const CreateSnapshotCopyGrantRequest &request);
    CreateSnapshotScheduleResponse * createSnapshotSchedule(const CreateSnapshotScheduleRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    CreateUsageLimitResponse * createUsageLimit(const CreateUsageLimitRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteClusterParameterGroupResponse * deleteClusterParameterGroup(const DeleteClusterParameterGroupRequest &request);
    DeleteClusterSecurityGroupResponse * deleteClusterSecurityGroup(const DeleteClusterSecurityGroupRequest &request);
    DeleteClusterSnapshotResponse * deleteClusterSnapshot(const DeleteClusterSnapshotRequest &request);
    DeleteClusterSubnetGroupResponse * deleteClusterSubnetGroup(const DeleteClusterSubnetGroupRequest &request);
    DeleteEndpointAccessResponse * deleteEndpointAccess(const DeleteEndpointAccessRequest &request);
    DeleteEventSubscriptionResponse * deleteEventSubscription(const DeleteEventSubscriptionRequest &request);
    DeleteHsmClientCertificateResponse * deleteHsmClientCertificate(const DeleteHsmClientCertificateRequest &request);
    DeleteHsmConfigurationResponse * deleteHsmConfiguration(const DeleteHsmConfigurationRequest &request);
    DeletePartnerResponse * deletePartner(const DeletePartnerRequest &request);
    DeleteScheduledActionResponse * deleteScheduledAction(const DeleteScheduledActionRequest &request);
    DeleteSnapshotCopyGrantResponse * deleteSnapshotCopyGrant(const DeleteSnapshotCopyGrantRequest &request);
    DeleteSnapshotScheduleResponse * deleteSnapshotSchedule(const DeleteSnapshotScheduleRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DeleteUsageLimitResponse * deleteUsageLimit(const DeleteUsageLimitRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeClusterDbRevisionsResponse * describeClusterDbRevisions(const DescribeClusterDbRevisionsRequest &request);
    DescribeClusterParameterGroupsResponse * describeClusterParameterGroups(const DescribeClusterParameterGroupsRequest &request);
    DescribeClusterParametersResponse * describeClusterParameters(const DescribeClusterParametersRequest &request);
    DescribeClusterSecurityGroupsResponse * describeClusterSecurityGroups(const DescribeClusterSecurityGroupsRequest &request);
    DescribeClusterSnapshotsResponse * describeClusterSnapshots(const DescribeClusterSnapshotsRequest &request);
    DescribeClusterSubnetGroupsResponse * describeClusterSubnetGroups(const DescribeClusterSubnetGroupsRequest &request);
    DescribeClusterTracksResponse * describeClusterTracks(const DescribeClusterTracksRequest &request);
    DescribeClusterVersionsResponse * describeClusterVersions(const DescribeClusterVersionsRequest &request);
    DescribeClustersResponse * describeClusters(const DescribeClustersRequest &request);
    DescribeDefaultClusterParametersResponse * describeDefaultClusterParameters(const DescribeDefaultClusterParametersRequest &request);
    DescribeEndpointAccessResponse * describeEndpointAccess(const DescribeEndpointAccessRequest &request);
    DescribeEndpointAuthorizationResponse * describeEndpointAuthorization(const DescribeEndpointAuthorizationRequest &request);
    DescribeEventCategoriesResponse * describeEventCategories(const DescribeEventCategoriesRequest &request);
    DescribeEventSubscriptionsResponse * describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeHsmClientCertificatesResponse * describeHsmClientCertificates(const DescribeHsmClientCertificatesRequest &request);
    DescribeHsmConfigurationsResponse * describeHsmConfigurations(const DescribeHsmConfigurationsRequest &request);
    DescribeLoggingStatusResponse * describeLoggingStatus(const DescribeLoggingStatusRequest &request);
    DescribeNodeConfigurationOptionsResponse * describeNodeConfigurationOptions(const DescribeNodeConfigurationOptionsRequest &request);
    DescribeOrderableClusterOptionsResponse * describeOrderableClusterOptions(const DescribeOrderableClusterOptionsRequest &request);
    DescribePartnersResponse * describePartners(const DescribePartnersRequest &request);
    DescribeReservedNodeOfferingsResponse * describeReservedNodeOfferings(const DescribeReservedNodeOfferingsRequest &request);
    DescribeReservedNodesResponse * describeReservedNodes(const DescribeReservedNodesRequest &request);
    DescribeResizeResponse * describeResize(const DescribeResizeRequest &request);
    DescribeScheduledActionsResponse * describeScheduledActions(const DescribeScheduledActionsRequest &request);
    DescribeSnapshotCopyGrantsResponse * describeSnapshotCopyGrants(const DescribeSnapshotCopyGrantsRequest &request);
    DescribeSnapshotSchedulesResponse * describeSnapshotSchedules(const DescribeSnapshotSchedulesRequest &request);
    DescribeStorageResponse * describeStorage(const DescribeStorageRequest &request);
    DescribeStorageResponse * describeStorage();
    DescribeTableRestoreStatusResponse * describeTableRestoreStatus(const DescribeTableRestoreStatusRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeUsageLimitsResponse * describeUsageLimits(const DescribeUsageLimitsRequest &request);
    DisableLoggingResponse * disableLogging(const DisableLoggingRequest &request);
    DisableSnapshotCopyResponse * disableSnapshotCopy(const DisableSnapshotCopyRequest &request);
    EnableLoggingResponse * enableLogging(const EnableLoggingRequest &request);
    EnableSnapshotCopyResponse * enableSnapshotCopy(const EnableSnapshotCopyRequest &request);
    GetClusterCredentialsResponse * getClusterCredentials(const GetClusterCredentialsRequest &request);
    GetReservedNodeExchangeOfferingsResponse * getReservedNodeExchangeOfferings(const GetReservedNodeExchangeOfferingsRequest &request);
    ModifyAquaConfigurationResponse * modifyAquaConfiguration(const ModifyAquaConfigurationRequest &request);
    ModifyClusterResponse * modifyCluster(const ModifyClusterRequest &request);
    ModifyClusterDbRevisionResponse * modifyClusterDbRevision(const ModifyClusterDbRevisionRequest &request);
    ModifyClusterIamRolesResponse * modifyClusterIamRoles(const ModifyClusterIamRolesRequest &request);
    ModifyClusterMaintenanceResponse * modifyClusterMaintenance(const ModifyClusterMaintenanceRequest &request);
    ModifyClusterParameterGroupResponse * modifyClusterParameterGroup(const ModifyClusterParameterGroupRequest &request);
    ModifyClusterSnapshotResponse * modifyClusterSnapshot(const ModifyClusterSnapshotRequest &request);
    ModifyClusterSnapshotScheduleResponse * modifyClusterSnapshotSchedule(const ModifyClusterSnapshotScheduleRequest &request);
    ModifyClusterSubnetGroupResponse * modifyClusterSubnetGroup(const ModifyClusterSubnetGroupRequest &request);
    ModifyEndpointAccessResponse * modifyEndpointAccess(const ModifyEndpointAccessRequest &request);
    ModifyEventSubscriptionResponse * modifyEventSubscription(const ModifyEventSubscriptionRequest &request);
    ModifyScheduledActionResponse * modifyScheduledAction(const ModifyScheduledActionRequest &request);
    ModifySnapshotCopyRetentionPeriodResponse * modifySnapshotCopyRetentionPeriod(const ModifySnapshotCopyRetentionPeriodRequest &request);
    ModifySnapshotScheduleResponse * modifySnapshotSchedule(const ModifySnapshotScheduleRequest &request);
    ModifyUsageLimitResponse * modifyUsageLimit(const ModifyUsageLimitRequest &request);
    PauseClusterResponse * pauseCluster(const PauseClusterRequest &request);
    PurchaseReservedNodeOfferingResponse * purchaseReservedNodeOffering(const PurchaseReservedNodeOfferingRequest &request);
    RebootClusterResponse * rebootCluster(const RebootClusterRequest &request);
    ResetClusterParameterGroupResponse * resetClusterParameterGroup(const ResetClusterParameterGroupRequest &request);
    ResizeClusterResponse * resizeCluster(const ResizeClusterRequest &request);
    RestoreFromClusterSnapshotResponse * restoreFromClusterSnapshot(const RestoreFromClusterSnapshotRequest &request);
    RestoreTableFromClusterSnapshotResponse * restoreTableFromClusterSnapshot(const RestoreTableFromClusterSnapshotRequest &request);
    ResumeClusterResponse * resumeCluster(const ResumeClusterRequest &request);
    RevokeClusterSecurityGroupIngressResponse * revokeClusterSecurityGroupIngress(const RevokeClusterSecurityGroupIngressRequest &request);
    RevokeEndpointAccessResponse * revokeEndpointAccess(const RevokeEndpointAccessRequest &request);
    RevokeSnapshotAccessResponse * revokeSnapshotAccess(const RevokeSnapshotAccessRequest &request);
    RotateEncryptionKeyResponse * rotateEncryptionKey(const RotateEncryptionKeyRequest &request);
    UpdatePartnerStatusResponse * updatePartnerStatus(const UpdatePartnerStatusRequest &request);

private:
    Q_DECLARE_PRIVATE(RedshiftClient)
    Q_DISABLE_COPY(RedshiftClient)

};

} // namespace Redshift
} // namespace QtAws

#endif
