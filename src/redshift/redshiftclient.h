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

#ifndef QTAWS_REDSHIFTCLIENT_H
#define QTAWS_REDSHIFTCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    RedshiftAuthorizeClusterSecurityGroupIngressResponse * authorizeClusterSecurityGroupIngress(const RedshiftAuthorizeClusterSecurityGroupIngressRequest &request);
    RedshiftAuthorizeSnapshotAccessResponse * authorizeSnapshotAccess(const RedshiftAuthorizeSnapshotAccessRequest &request);
    RedshiftCopyClusterSnapshotResponse * copyClusterSnapshot(const RedshiftCopyClusterSnapshotRequest &request);
    RedshiftCreateClusterResponse * createCluster(const RedshiftCreateClusterRequest &request);
    RedshiftCreateClusterParameterGroupResponse * createClusterParameterGroup(const RedshiftCreateClusterParameterGroupRequest &request);
    RedshiftCreateClusterSecurityGroupResponse * createClusterSecurityGroup(const RedshiftCreateClusterSecurityGroupRequest &request);
    RedshiftCreateClusterSnapshotResponse * createClusterSnapshot(const RedshiftCreateClusterSnapshotRequest &request);
    RedshiftCreateClusterSubnetGroupResponse * createClusterSubnetGroup(const RedshiftCreateClusterSubnetGroupRequest &request);
    RedshiftCreateEventSubscriptionResponse * createEventSubscription(const RedshiftCreateEventSubscriptionRequest &request);
    RedshiftCreateHsmClientCertificateResponse * createHsmClientCertificate(const RedshiftCreateHsmClientCertificateRequest &request);
    RedshiftCreateHsmConfigurationResponse * createHsmConfiguration(const RedshiftCreateHsmConfigurationRequest &request);
    RedshiftCreateSnapshotCopyGrantResponse * createSnapshotCopyGrant(const RedshiftCreateSnapshotCopyGrantRequest &request);
    RedshiftCreateTagsResponse * createTags(const RedshiftCreateTagsRequest &request);
    RedshiftDeleteClusterResponse * deleteCluster(const RedshiftDeleteClusterRequest &request);
    RedshiftDeleteClusterParameterGroupResponse * deleteClusterParameterGroup(const RedshiftDeleteClusterParameterGroupRequest &request);
    RedshiftDeleteClusterSecurityGroupResponse * deleteClusterSecurityGroup(const RedshiftDeleteClusterSecurityGroupRequest &request);
    RedshiftDeleteClusterSnapshotResponse * deleteClusterSnapshot(const RedshiftDeleteClusterSnapshotRequest &request);
    RedshiftDeleteClusterSubnetGroupResponse * deleteClusterSubnetGroup(const RedshiftDeleteClusterSubnetGroupRequest &request);
    RedshiftDeleteEventSubscriptionResponse * deleteEventSubscription(const RedshiftDeleteEventSubscriptionRequest &request);
    RedshiftDeleteHsmClientCertificateResponse * deleteHsmClientCertificate(const RedshiftDeleteHsmClientCertificateRequest &request);
    RedshiftDeleteHsmConfigurationResponse * deleteHsmConfiguration(const RedshiftDeleteHsmConfigurationRequest &request);
    RedshiftDeleteSnapshotCopyGrantResponse * deleteSnapshotCopyGrant(const RedshiftDeleteSnapshotCopyGrantRequest &request);
    RedshiftDeleteTagsResponse * deleteTags(const RedshiftDeleteTagsRequest &request);
    RedshiftDescribeClusterParameterGroupsResponse * describeClusterParameterGroups(const RedshiftDescribeClusterParameterGroupsRequest &request);
    RedshiftDescribeClusterParametersResponse * describeClusterParameters(const RedshiftDescribeClusterParametersRequest &request);
    RedshiftDescribeClusterSecurityGroupsResponse * describeClusterSecurityGroups(const RedshiftDescribeClusterSecurityGroupsRequest &request);
    RedshiftDescribeClusterSnapshotsResponse * describeClusterSnapshots(const RedshiftDescribeClusterSnapshotsRequest &request);
    RedshiftDescribeClusterSubnetGroupsResponse * describeClusterSubnetGroups(const RedshiftDescribeClusterSubnetGroupsRequest &request);
    RedshiftDescribeClusterVersionsResponse * describeClusterVersions(const RedshiftDescribeClusterVersionsRequest &request);
    RedshiftDescribeClustersResponse * describeClusters(const RedshiftDescribeClustersRequest &request);
    RedshiftDescribeDefaultClusterParametersResponse * describeDefaultClusterParameters(const RedshiftDescribeDefaultClusterParametersRequest &request);
    RedshiftDescribeEventCategoriesResponse * describeEventCategories(const RedshiftDescribeEventCategoriesRequest &request);
    RedshiftDescribeEventSubscriptionsResponse * describeEventSubscriptions(const RedshiftDescribeEventSubscriptionsRequest &request);
    RedshiftDescribeEventsResponse * describeEvents(const RedshiftDescribeEventsRequest &request);
    RedshiftDescribeHsmClientCertificatesResponse * describeHsmClientCertificates(const RedshiftDescribeHsmClientCertificatesRequest &request);
    RedshiftDescribeHsmConfigurationsResponse * describeHsmConfigurations(const RedshiftDescribeHsmConfigurationsRequest &request);
    RedshiftDescribeLoggingStatusResponse * describeLoggingStatus(const RedshiftDescribeLoggingStatusRequest &request);
    RedshiftDescribeOrderableClusterOptionsResponse * describeOrderableClusterOptions(const RedshiftDescribeOrderableClusterOptionsRequest &request);
    RedshiftDescribeReservedNodeOfferingsResponse * describeReservedNodeOfferings(const RedshiftDescribeReservedNodeOfferingsRequest &request);
    RedshiftDescribeReservedNodesResponse * describeReservedNodes(const RedshiftDescribeReservedNodesRequest &request);
    RedshiftDescribeResizeResponse * describeResize(const RedshiftDescribeResizeRequest &request);
    RedshiftDescribeSnapshotCopyGrantsResponse * describeSnapshotCopyGrants(const RedshiftDescribeSnapshotCopyGrantsRequest &request);
    RedshiftDescribeTableRestoreStatusResponse * describeTableRestoreStatus(const RedshiftDescribeTableRestoreStatusRequest &request);
    RedshiftDescribeTagsResponse * describeTags(const RedshiftDescribeTagsRequest &request);
    RedshiftDisableLoggingResponse * disableLogging(const RedshiftDisableLoggingRequest &request);
    RedshiftDisableSnapshotCopyResponse * disableSnapshotCopy(const RedshiftDisableSnapshotCopyRequest &request);
    RedshiftEnableLoggingResponse * enableLogging(const RedshiftEnableLoggingRequest &request);
    RedshiftEnableSnapshotCopyResponse * enableSnapshotCopy(const RedshiftEnableSnapshotCopyRequest &request);
    RedshiftModifyClusterResponse * modifyCluster(const RedshiftModifyClusterRequest &request);
    RedshiftModifyClusterIamRolesResponse * modifyClusterIamRoles(const RedshiftModifyClusterIamRolesRequest &request);
    RedshiftModifyClusterParameterGroupResponse * modifyClusterParameterGroup(const RedshiftModifyClusterParameterGroupRequest &request);
    RedshiftModifyClusterSubnetGroupResponse * modifyClusterSubnetGroup(const RedshiftModifyClusterSubnetGroupRequest &request);
    RedshiftModifyEventSubscriptionResponse * modifyEventSubscription(const RedshiftModifyEventSubscriptionRequest &request);
    RedshiftModifySnapshotCopyRetentionPeriodResponse * modifySnapshotCopyRetentionPeriod(const RedshiftModifySnapshotCopyRetentionPeriodRequest &request);
    RedshiftPurchaseReservedNodeOfferingResponse * purchaseReservedNodeOffering(const RedshiftPurchaseReservedNodeOfferingRequest &request);
    RedshiftRebootClusterResponse * rebootCluster(const RedshiftRebootClusterRequest &request);
    RedshiftResetClusterParameterGroupResponse * resetClusterParameterGroup(const RedshiftResetClusterParameterGroupRequest &request);
    RedshiftRestoreFromClusterSnapshotResponse * restoreFromClusterSnapshot(const RedshiftRestoreFromClusterSnapshotRequest &request);
    RedshiftRestoreTableFromClusterSnapshotResponse * restoreTableFromClusterSnapshot(const RedshiftRestoreTableFromClusterSnapshotRequest &request);
    RedshiftRevokeClusterSecurityGroupIngressResponse * revokeClusterSecurityGroupIngress(const RedshiftRevokeClusterSecurityGroupIngressRequest &request);
    RedshiftRevokeSnapshotAccessResponse * revokeSnapshotAccess(const RedshiftRevokeSnapshotAccessRequest &request);
    RedshiftRotateEncryptionKeyResponse * rotateEncryptionKey(const RedshiftRotateEncryptionKeyRequest &request);

private:
    Q_DECLARE_PRIVATE(RedshiftClient)
    Q_DISABLE_COPY(RedshiftClient)

};

QTAWS_END_NAMESPACE

#endif
