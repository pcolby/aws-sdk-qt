// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTSERVERLESSCLIENT_H
#define QTAWS_REDSHIFTSERVERLESSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsredshiftserverlessglobal.h"

class QNetworkReply;

namespace QtAws {
namespace RedshiftServerless {

class RedshiftServerlessClientPrivate;
class ConvertRecoveryPointToSnapshotRequest;
class ConvertRecoveryPointToSnapshotResponse;
class CreateEndpointAccessRequest;
class CreateEndpointAccessResponse;
class CreateNamespaceRequest;
class CreateNamespaceResponse;
class CreateSnapshotRequest;
class CreateSnapshotResponse;
class CreateUsageLimitRequest;
class CreateUsageLimitResponse;
class CreateWorkgroupRequest;
class CreateWorkgroupResponse;
class DeleteEndpointAccessRequest;
class DeleteEndpointAccessResponse;
class DeleteNamespaceRequest;
class DeleteNamespaceResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteSnapshotRequest;
class DeleteSnapshotResponse;
class DeleteUsageLimitRequest;
class DeleteUsageLimitResponse;
class DeleteWorkgroupRequest;
class DeleteWorkgroupResponse;
class GetCredentialsRequest;
class GetCredentialsResponse;
class GetEndpointAccessRequest;
class GetEndpointAccessResponse;
class GetNamespaceRequest;
class GetNamespaceResponse;
class GetRecoveryPointRequest;
class GetRecoveryPointResponse;
class GetResourcePolicyRequest;
class GetResourcePolicyResponse;
class GetSnapshotRequest;
class GetSnapshotResponse;
class GetUsageLimitRequest;
class GetUsageLimitResponse;
class GetWorkgroupRequest;
class GetWorkgroupResponse;
class ListEndpointAccessRequest;
class ListEndpointAccessResponse;
class ListNamespacesRequest;
class ListNamespacesResponse;
class ListRecoveryPointsRequest;
class ListRecoveryPointsResponse;
class ListSnapshotsRequest;
class ListSnapshotsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListUsageLimitsRequest;
class ListUsageLimitsResponse;
class ListWorkgroupsRequest;
class ListWorkgroupsResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class RestoreFromRecoveryPointRequest;
class RestoreFromRecoveryPointResponse;
class RestoreFromSnapshotRequest;
class RestoreFromSnapshotResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateEndpointAccessRequest;
class UpdateEndpointAccessResponse;
class UpdateNamespaceRequest;
class UpdateNamespaceResponse;
class UpdateSnapshotRequest;
class UpdateSnapshotResponse;
class UpdateUsageLimitRequest;
class UpdateUsageLimitResponse;
class UpdateWorkgroupRequest;
class UpdateWorkgroupResponse;

class QTAWSREDSHIFTSERVERLESS_EXPORT RedshiftServerlessClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RedshiftServerlessClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit RedshiftServerlessClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ConvertRecoveryPointToSnapshotResponse * convertRecoveryPointToSnapshot(const ConvertRecoveryPointToSnapshotRequest &request);
    CreateEndpointAccessResponse * createEndpointAccess(const CreateEndpointAccessRequest &request);
    CreateNamespaceResponse * createNamespace(const CreateNamespaceRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateUsageLimitResponse * createUsageLimit(const CreateUsageLimitRequest &request);
    CreateWorkgroupResponse * createWorkgroup(const CreateWorkgroupRequest &request);
    DeleteEndpointAccessResponse * deleteEndpointAccess(const DeleteEndpointAccessRequest &request);
    DeleteNamespaceResponse * deleteNamespace(const DeleteNamespaceRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteSnapshotResponse * deleteSnapshot(const DeleteSnapshotRequest &request);
    DeleteUsageLimitResponse * deleteUsageLimit(const DeleteUsageLimitRequest &request);
    DeleteWorkgroupResponse * deleteWorkgroup(const DeleteWorkgroupRequest &request);
    GetCredentialsResponse * getCredentials(const GetCredentialsRequest &request);
    GetEndpointAccessResponse * getEndpointAccess(const GetEndpointAccessRequest &request);
    GetNamespaceResponse * getNamespace(const GetNamespaceRequest &request);
    GetRecoveryPointResponse * getRecoveryPoint(const GetRecoveryPointRequest &request);
    GetResourcePolicyResponse * getResourcePolicy(const GetResourcePolicyRequest &request);
    GetSnapshotResponse * getSnapshot(const GetSnapshotRequest &request);
    GetUsageLimitResponse * getUsageLimit(const GetUsageLimitRequest &request);
    GetWorkgroupResponse * getWorkgroup(const GetWorkgroupRequest &request);
    ListEndpointAccessResponse * listEndpointAccess(const ListEndpointAccessRequest &request);
    ListNamespacesResponse * listNamespaces(const ListNamespacesRequest &request);
    ListRecoveryPointsResponse * listRecoveryPoints(const ListRecoveryPointsRequest &request);
    ListSnapshotsResponse * listSnapshots(const ListSnapshotsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUsageLimitsResponse * listUsageLimits(const ListUsageLimitsRequest &request);
    ListWorkgroupsResponse * listWorkgroups(const ListWorkgroupsRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    RestoreFromRecoveryPointResponse * restoreFromRecoveryPoint(const RestoreFromRecoveryPointRequest &request);
    RestoreFromSnapshotResponse * restoreFromSnapshot(const RestoreFromSnapshotRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateEndpointAccessResponse * updateEndpointAccess(const UpdateEndpointAccessRequest &request);
    UpdateNamespaceResponse * updateNamespace(const UpdateNamespaceRequest &request);
    UpdateSnapshotResponse * updateSnapshot(const UpdateSnapshotRequest &request);
    UpdateUsageLimitResponse * updateUsageLimit(const UpdateUsageLimitRequest &request);
    UpdateWorkgroupResponse * updateWorkgroup(const UpdateWorkgroupRequest &request);

private:
    Q_DECLARE_PRIVATE(RedshiftServerlessClient)
    Q_DISABLE_COPY(RedshiftServerlessClient)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
