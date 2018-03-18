/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_REDSHIFTCLIENT_H
#define QTAWS_REDSHIFTCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Redshift {

class RedshiftClientPrivate;

class QTAWS_EXPORT RedshiftClient : public AwsAbstractClient {
    Q_OBJECT

public:
    RedshiftClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RedshiftClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AuthorizeClusterSecurityGroupIngressResponse * authorizeClusterSecurityGroupIngress(const AuthorizeClusterSecurityGroupIngressRequest &request);
    AuthorizeSnapshotAccessResponse * authorizeSnapshotAccess(const AuthorizeSnapshotAccessRequest &request);
    CopyClusterSnapshotResponse * copyClusterSnapshot(const CopyClusterSnapshotRequest &request);
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateClusterParameterGroupResponse * createClusterParameterGroup(const CreateClusterParameterGroupRequest &request);
    CreateClusterSecurityGroupResponse * createClusterSecurityGroup(const CreateClusterSecurityGroupRequest &request);
    CreateClusterSnapshotResponse * createClusterSnapshot(const CreateClusterSnapshotRequest &request);
    CreateClusterSubnetGroupResponse * createClusterSubnetGroup(const CreateClusterSubnetGroupRequest &request);
    CreateEventSubscriptionResponse * createEventSubscription(const CreateEventSubscriptionRequest &request);
    CreateHsmClientCertificateResponse * createHsmClientCertificate(const CreateHsmClientCertificateRequest &request);
    CreateHsmConfigurationResponse * createHsmConfiguration(const CreateHsmConfigurationRequest &request);
    CreateSnapshotCopyGrantResponse * createSnapshotCopyGrant(const CreateSnapshotCopyGrantRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteClusterParameterGroupResponse * deleteClusterParameterGroup(const DeleteClusterParameterGroupRequest &request);
    DeleteClusterSecurityGroupResponse * deleteClusterSecurityGroup(const DeleteClusterSecurityGroupRequest &request);
    DeleteClusterSnapshotResponse * deleteClusterSnapshot(const DeleteClusterSnapshotRequest &request);
    DeleteClusterSubnetGroupResponse * deleteClusterSubnetGroup(const DeleteClusterSubnetGroupRequest &request);
    DeleteEventSubscriptionResponse * deleteEventSubscription(const DeleteEventSubscriptionRequest &request);
    DeleteHsmClientCertificateResponse * deleteHsmClientCertificate(const DeleteHsmClientCertificateRequest &request);
    DeleteHsmConfigurationResponse * deleteHsmConfiguration(const DeleteHsmConfigurationRequest &request);
    DeleteSnapshotCopyGrantResponse * deleteSnapshotCopyGrant(const DeleteSnapshotCopyGrantRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeClusterParameterGroupsResponse * describeClusterParameterGroups(const DescribeClusterParameterGroupsRequest &request);
    DescribeClusterParametersResponse * describeClusterParameters(const DescribeClusterParametersRequest &request);
    DescribeClusterSecurityGroupsResponse * describeClusterSecurityGroups(const DescribeClusterSecurityGroupsRequest &request);
    DescribeClusterSnapshotsResponse * describeClusterSnapshots(const DescribeClusterSnapshotsRequest &request);
    DescribeClusterSubnetGroupsResponse * describeClusterSubnetGroups(const DescribeClusterSubnetGroupsRequest &request);
    DescribeClusterVersionsResponse * describeClusterVersions(const DescribeClusterVersionsRequest &request);
    DescribeClustersResponse * describeClusters(const DescribeClustersRequest &request);
    DescribeDefaultClusterParametersResponse * describeDefaultClusterParameters(const DescribeDefaultClusterParametersRequest &request);
    DescribeEventCategoriesResponse * describeEventCategories(const DescribeEventCategoriesRequest &request);
    DescribeEventSubscriptionsResponse * describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeHsmClientCertificatesResponse * describeHsmClientCertificates(const DescribeHsmClientCertificatesRequest &request);
    DescribeHsmConfigurationsResponse * describeHsmConfigurations(const DescribeHsmConfigurationsRequest &request);
    DescribeLoggingStatusResponse * describeLoggingStatus(const DescribeLoggingStatusRequest &request);
    DescribeOrderableClusterOptionsResponse * describeOrderableClusterOptions(const DescribeOrderableClusterOptionsRequest &request);
    DescribeReservedNodeOfferingsResponse * describeReservedNodeOfferings(const DescribeReservedNodeOfferingsRequest &request);
    DescribeReservedNodesResponse * describeReservedNodes(const DescribeReservedNodesRequest &request);
    DescribeResizeResponse * describeResize(const DescribeResizeRequest &request);
    DescribeSnapshotCopyGrantsResponse * describeSnapshotCopyGrants(const DescribeSnapshotCopyGrantsRequest &request);
    DescribeTableRestoreStatusResponse * describeTableRestoreStatus(const DescribeTableRestoreStatusRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DisableLoggingResponse * disableLogging(const DisableLoggingRequest &request);
    DisableSnapshotCopyResponse * disableSnapshotCopy(const DisableSnapshotCopyRequest &request);
    EnableLoggingResponse * enableLogging(const EnableLoggingRequest &request);
    EnableSnapshotCopyResponse * enableSnapshotCopy(const EnableSnapshotCopyRequest &request);
    GetClusterCredentialsResponse * getClusterCredentials(const GetClusterCredentialsRequest &request);
    ModifyClusterResponse * modifyCluster(const ModifyClusterRequest &request);
    ModifyClusterIamRolesResponse * modifyClusterIamRoles(const ModifyClusterIamRolesRequest &request);
    ModifyClusterParameterGroupResponse * modifyClusterParameterGroup(const ModifyClusterParameterGroupRequest &request);
    ModifyClusterSubnetGroupResponse * modifyClusterSubnetGroup(const ModifyClusterSubnetGroupRequest &request);
    ModifyEventSubscriptionResponse * modifyEventSubscription(const ModifyEventSubscriptionRequest &request);
    ModifySnapshotCopyRetentionPeriodResponse * modifySnapshotCopyRetentionPeriod(const ModifySnapshotCopyRetentionPeriodRequest &request);
    PurchaseReservedNodeOfferingResponse * purchaseReservedNodeOffering(const PurchaseReservedNodeOfferingRequest &request);
    RebootClusterResponse * rebootCluster(const RebootClusterRequest &request);
    ResetClusterParameterGroupResponse * resetClusterParameterGroup(const ResetClusterParameterGroupRequest &request);
    RestoreFromClusterSnapshotResponse * restoreFromClusterSnapshot(const RestoreFromClusterSnapshotRequest &request);
    RestoreTableFromClusterSnapshotResponse * restoreTableFromClusterSnapshot(const RestoreTableFromClusterSnapshotRequest &request);
    RevokeClusterSecurityGroupIngressResponse * revokeClusterSecurityGroupIngress(const RevokeClusterSecurityGroupIngressRequest &request);
    RevokeSnapshotAccessResponse * revokeSnapshotAccess(const RevokeSnapshotAccessRequest &request);
    RotateEncryptionKeyResponse * rotateEncryptionKey(const RotateEncryptionKeyRequest &request);

private:
    Q_DECLARE_PRIVATE(RedshiftClient)
    Q_DISABLE_COPY(RedshiftClient)

};

} // namespace Redshift
} // namespace AWS

#endif
