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
class CreateConnectionAliasRequest;
class CreateConnectionAliasResponse;
class CreateIpGroupRequest;
class CreateIpGroupResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class CreateWorkspaceBundleRequest;
class CreateWorkspaceBundleResponse;
class CreateWorkspacesRequest;
class CreateWorkspacesResponse;
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
class DescribeClientPropertiesRequest;
class DescribeClientPropertiesResponse;
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

    WorkSpacesClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateConnectionAliasResponse * associateConnectionAlias(const AssociateConnectionAliasRequest &request);
    AssociateIpGroupsResponse * associateIpGroups(const AssociateIpGroupsRequest &request);
    AuthorizeIpRulesResponse * authorizeIpRules(const AuthorizeIpRulesRequest &request);
    CopyWorkspaceImageResponse * copyWorkspaceImage(const CopyWorkspaceImageRequest &request);
    CreateConnectionAliasResponse * createConnectionAlias(const CreateConnectionAliasRequest &request);
    CreateIpGroupResponse * createIpGroup(const CreateIpGroupRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    CreateWorkspaceBundleResponse * createWorkspaceBundle(const CreateWorkspaceBundleRequest &request);
    CreateWorkspacesResponse * createWorkspaces(const CreateWorkspacesRequest &request);
    DeleteConnectionAliasResponse * deleteConnectionAlias(const DeleteConnectionAliasRequest &request);
    DeleteIpGroupResponse * deleteIpGroup(const DeleteIpGroupRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DeleteWorkspaceBundleResponse * deleteWorkspaceBundle(const DeleteWorkspaceBundleRequest &request);
    DeleteWorkspaceImageResponse * deleteWorkspaceImage(const DeleteWorkspaceImageRequest &request);
    DeregisterWorkspaceDirectoryResponse * deregisterWorkspaceDirectory(const DeregisterWorkspaceDirectoryRequest &request);
    DescribeAccountResponse * describeAccount(const DescribeAccountRequest &request);
    DescribeAccountModificationsResponse * describeAccountModifications(const DescribeAccountModificationsRequest &request);
    DescribeClientPropertiesResponse * describeClientProperties(const DescribeClientPropertiesRequest &request);
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
    ImportWorkspaceImageResponse * importWorkspaceImage(const ImportWorkspaceImageRequest &request);
    ListAvailableManagementCidrRangesResponse * listAvailableManagementCidrRanges(const ListAvailableManagementCidrRangesRequest &request);
    MigrateWorkspaceResponse * migrateWorkspace(const MigrateWorkspaceRequest &request);
    ModifyAccountResponse * modifyAccount(const ModifyAccountRequest &request);
    ModifyClientPropertiesResponse * modifyClientProperties(const ModifyClientPropertiesRequest &request);
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
    UpdateConnectionAliasPermissionResponse * updateConnectionAliasPermission(const UpdateConnectionAliasPermissionRequest &request);
    UpdateRulesOfIpGroupResponse * updateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest &request);
    UpdateWorkspaceBundleResponse * updateWorkspaceBundle(const UpdateWorkspaceBundleRequest &request);
    UpdateWorkspaceImagePermissionResponse * updateWorkspaceImagePermission(const UpdateWorkspaceImagePermissionRequest &request);

protected:
    /// @cond internal
    WorkSpacesClientPrivate * const d_ptr; ///< Internal d-pointer.
    WorkSpacesClient(WorkSpacesClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(WorkSpacesClient)
    Q_DISABLE_COPY(WorkSpacesClient)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
