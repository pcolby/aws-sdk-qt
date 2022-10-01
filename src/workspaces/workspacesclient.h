// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESCLIENT_H
#define QTAWS_WORKSPACESCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsworkspacesglobal.h"

class QNetworkReply;

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesClientPrivate;
class AssociateConnectionAliasRequest;
class AssociateConnectionAliasResponse;
class AssociateIpGroupsRequest;
class AssociateIpGroupsResponse;
class AuthorizeIpRulesRequest;
class AuthorizeIpRulesResponse;
class CopyWorkspaceImageRequest;
class CopyWorkspaceImageResponse;
class CreateConnectClientAddInRequest;
class CreateConnectClientAddInResponse;
class CreateConnectionAliasRequest;
class CreateConnectionAliasResponse;
class CreateIpGroupRequest;
class CreateIpGroupResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class CreateUpdatedWorkspaceImageRequest;
class CreateUpdatedWorkspaceImageResponse;
class CreateWorkspaceBundleRequest;
class CreateWorkspaceBundleResponse;
class CreateWorkspaceImageRequest;
class CreateWorkspaceImageResponse;
class CreateWorkspacesRequest;
class CreateWorkspacesResponse;
class DeleteClientBrandingRequest;
class DeleteClientBrandingResponse;
class DeleteConnectClientAddInRequest;
class DeleteConnectClientAddInResponse;
class DeleteConnectionAliasRequest;
class DeleteConnectionAliasResponse;
class DeleteIpGroupRequest;
class DeleteIpGroupResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DeleteWorkspaceBundleRequest;
class DeleteWorkspaceBundleResponse;
class DeleteWorkspaceImageRequest;
class DeleteWorkspaceImageResponse;
class DeregisterWorkspaceDirectoryRequest;
class DeregisterWorkspaceDirectoryResponse;
class DescribeAccountRequest;
class DescribeAccountResponse;
class DescribeAccountModificationsRequest;
class DescribeAccountModificationsResponse;
class DescribeClientBrandingRequest;
class DescribeClientBrandingResponse;
class DescribeClientPropertiesRequest;
class DescribeClientPropertiesResponse;
class DescribeConnectClientAddInsRequest;
class DescribeConnectClientAddInsResponse;
class DescribeConnectionAliasPermissionsRequest;
class DescribeConnectionAliasPermissionsResponse;
class DescribeConnectionAliasesRequest;
class DescribeConnectionAliasesResponse;
class DescribeIpGroupsRequest;
class DescribeIpGroupsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeWorkspaceBundlesRequest;
class DescribeWorkspaceBundlesResponse;
class DescribeWorkspaceDirectoriesRequest;
class DescribeWorkspaceDirectoriesResponse;
class DescribeWorkspaceImagePermissionsRequest;
class DescribeWorkspaceImagePermissionsResponse;
class DescribeWorkspaceImagesRequest;
class DescribeWorkspaceImagesResponse;
class DescribeWorkspaceSnapshotsRequest;
class DescribeWorkspaceSnapshotsResponse;
class DescribeWorkspacesRequest;
class DescribeWorkspacesResponse;
class DescribeWorkspacesConnectionStatusRequest;
class DescribeWorkspacesConnectionStatusResponse;
class DisassociateConnectionAliasRequest;
class DisassociateConnectionAliasResponse;
class DisassociateIpGroupsRequest;
class DisassociateIpGroupsResponse;
class ImportClientBrandingRequest;
class ImportClientBrandingResponse;
class ImportWorkspaceImageRequest;
class ImportWorkspaceImageResponse;
class ListAvailableManagementCidrRangesRequest;
class ListAvailableManagementCidrRangesResponse;
class MigrateWorkspaceRequest;
class MigrateWorkspaceResponse;
class ModifyAccountRequest;
class ModifyAccountResponse;
class ModifyClientPropertiesRequest;
class ModifyClientPropertiesResponse;
class ModifySamlPropertiesRequest;
class ModifySamlPropertiesResponse;
class ModifySelfservicePermissionsRequest;
class ModifySelfservicePermissionsResponse;
class ModifyWorkspaceAccessPropertiesRequest;
class ModifyWorkspaceAccessPropertiesResponse;
class ModifyWorkspaceCreationPropertiesRequest;
class ModifyWorkspaceCreationPropertiesResponse;
class ModifyWorkspacePropertiesRequest;
class ModifyWorkspacePropertiesResponse;
class ModifyWorkspaceStateRequest;
class ModifyWorkspaceStateResponse;
class RebootWorkspacesRequest;
class RebootWorkspacesResponse;
class RebuildWorkspacesRequest;
class RebuildWorkspacesResponse;
class RegisterWorkspaceDirectoryRequest;
class RegisterWorkspaceDirectoryResponse;
class RestoreWorkspaceRequest;
class RestoreWorkspaceResponse;
class RevokeIpRulesRequest;
class RevokeIpRulesResponse;
class StartWorkspacesRequest;
class StartWorkspacesResponse;
class StopWorkspacesRequest;
class StopWorkspacesResponse;
class TerminateWorkspacesRequest;
class TerminateWorkspacesResponse;
class UpdateConnectClientAddInRequest;
class UpdateConnectClientAddInResponse;
class UpdateConnectionAliasPermissionRequest;
class UpdateConnectionAliasPermissionResponse;
class UpdateRulesOfIpGroupRequest;
class UpdateRulesOfIpGroupResponse;
class UpdateWorkspaceBundleRequest;
class UpdateWorkspaceBundleResponse;
class UpdateWorkspaceImagePermissionRequest;
class UpdateWorkspaceImagePermissionResponse;

class QTAWSWORKSPACES_EXPORT WorkSpacesClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WorkSpacesClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit WorkSpacesClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateConnectionAliasResponse * associateConnectionAlias(const AssociateConnectionAliasRequest &request);
    AssociateIpGroupsResponse * associateIpGroups(const AssociateIpGroupsRequest &request);
    AuthorizeIpRulesResponse * authorizeIpRules(const AuthorizeIpRulesRequest &request);
    CopyWorkspaceImageResponse * copyWorkspaceImage(const CopyWorkspaceImageRequest &request);
    CreateConnectClientAddInResponse * createConnectClientAddIn(const CreateConnectClientAddInRequest &request);
    CreateConnectionAliasResponse * createConnectionAlias(const CreateConnectionAliasRequest &request);
    CreateIpGroupResponse * createIpGroup(const CreateIpGroupRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    CreateUpdatedWorkspaceImageResponse * createUpdatedWorkspaceImage(const CreateUpdatedWorkspaceImageRequest &request);
    CreateWorkspaceBundleResponse * createWorkspaceBundle(const CreateWorkspaceBundleRequest &request);
    CreateWorkspaceImageResponse * createWorkspaceImage(const CreateWorkspaceImageRequest &request);
    CreateWorkspacesResponse * createWorkspaces(const CreateWorkspacesRequest &request);
    DeleteClientBrandingResponse * deleteClientBranding(const DeleteClientBrandingRequest &request);
    DeleteConnectClientAddInResponse * deleteConnectClientAddIn(const DeleteConnectClientAddInRequest &request);
    DeleteConnectionAliasResponse * deleteConnectionAlias(const DeleteConnectionAliasRequest &request);
    DeleteIpGroupResponse * deleteIpGroup(const DeleteIpGroupRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DeleteWorkspaceBundleResponse * deleteWorkspaceBundle(const DeleteWorkspaceBundleRequest &request);
    DeleteWorkspaceImageResponse * deleteWorkspaceImage(const DeleteWorkspaceImageRequest &request);
    DeregisterWorkspaceDirectoryResponse * deregisterWorkspaceDirectory(const DeregisterWorkspaceDirectoryRequest &request);
    DescribeAccountResponse * describeAccount(const DescribeAccountRequest &request);
    DescribeAccountModificationsResponse * describeAccountModifications(const DescribeAccountModificationsRequest &request);
    DescribeClientBrandingResponse * describeClientBranding(const DescribeClientBrandingRequest &request);
    DescribeClientPropertiesResponse * describeClientProperties(const DescribeClientPropertiesRequest &request);
    DescribeConnectClientAddInsResponse * describeConnectClientAddIns(const DescribeConnectClientAddInsRequest &request);
    DescribeConnectionAliasPermissionsResponse * describeConnectionAliasPermissions(const DescribeConnectionAliasPermissionsRequest &request);
    DescribeConnectionAliasesResponse * describeConnectionAliases(const DescribeConnectionAliasesRequest &request);
    DescribeIpGroupsResponse * describeIpGroups(const DescribeIpGroupsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeWorkspaceBundlesResponse * describeWorkspaceBundles(const DescribeWorkspaceBundlesRequest &request);
    DescribeWorkspaceDirectoriesResponse * describeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest &request);
    DescribeWorkspaceImagePermissionsResponse * describeWorkspaceImagePermissions(const DescribeWorkspaceImagePermissionsRequest &request);
    DescribeWorkspaceImagesResponse * describeWorkspaceImages(const DescribeWorkspaceImagesRequest &request);
    DescribeWorkspaceSnapshotsResponse * describeWorkspaceSnapshots(const DescribeWorkspaceSnapshotsRequest &request);
    DescribeWorkspacesResponse * describeWorkspaces(const DescribeWorkspacesRequest &request);
    DescribeWorkspacesConnectionStatusResponse * describeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest &request);
    DisassociateConnectionAliasResponse * disassociateConnectionAlias(const DisassociateConnectionAliasRequest &request);
    DisassociateIpGroupsResponse * disassociateIpGroups(const DisassociateIpGroupsRequest &request);
    ImportClientBrandingResponse * importClientBranding(const ImportClientBrandingRequest &request);
    ImportWorkspaceImageResponse * importWorkspaceImage(const ImportWorkspaceImageRequest &request);
    ListAvailableManagementCidrRangesResponse * listAvailableManagementCidrRanges(const ListAvailableManagementCidrRangesRequest &request);
    MigrateWorkspaceResponse * migrateWorkspace(const MigrateWorkspaceRequest &request);
    ModifyAccountResponse * modifyAccount(const ModifyAccountRequest &request);
    ModifyClientPropertiesResponse * modifyClientProperties(const ModifyClientPropertiesRequest &request);
    ModifySamlPropertiesResponse * modifySamlProperties(const ModifySamlPropertiesRequest &request);
    ModifySelfservicePermissionsResponse * modifySelfservicePermissions(const ModifySelfservicePermissionsRequest &request);
    ModifyWorkspaceAccessPropertiesResponse * modifyWorkspaceAccessProperties(const ModifyWorkspaceAccessPropertiesRequest &request);
    ModifyWorkspaceCreationPropertiesResponse * modifyWorkspaceCreationProperties(const ModifyWorkspaceCreationPropertiesRequest &request);
    ModifyWorkspacePropertiesResponse * modifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest &request);
    ModifyWorkspaceStateResponse * modifyWorkspaceState(const ModifyWorkspaceStateRequest &request);
    RebootWorkspacesResponse * rebootWorkspaces(const RebootWorkspacesRequest &request);
    RebuildWorkspacesResponse * rebuildWorkspaces(const RebuildWorkspacesRequest &request);
    RegisterWorkspaceDirectoryResponse * registerWorkspaceDirectory(const RegisterWorkspaceDirectoryRequest &request);
    RestoreWorkspaceResponse * restoreWorkspace(const RestoreWorkspaceRequest &request);
    RevokeIpRulesResponse * revokeIpRules(const RevokeIpRulesRequest &request);
    StartWorkspacesResponse * startWorkspaces(const StartWorkspacesRequest &request);
    StopWorkspacesResponse * stopWorkspaces(const StopWorkspacesRequest &request);
    TerminateWorkspacesResponse * terminateWorkspaces(const TerminateWorkspacesRequest &request);
    UpdateConnectClientAddInResponse * updateConnectClientAddIn(const UpdateConnectClientAddInRequest &request);
    UpdateConnectionAliasPermissionResponse * updateConnectionAliasPermission(const UpdateConnectionAliasPermissionRequest &request);
    UpdateRulesOfIpGroupResponse * updateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest &request);
    UpdateWorkspaceBundleResponse * updateWorkspaceBundle(const UpdateWorkspaceBundleRequest &request);
    UpdateWorkspaceImagePermissionResponse * updateWorkspaceImagePermission(const UpdateWorkspaceImagePermissionRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkSpacesClient)
    Q_DISABLE_COPY(WorkSpacesClient)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
