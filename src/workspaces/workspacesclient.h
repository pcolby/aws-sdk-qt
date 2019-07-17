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

#ifndef QTAWS_WORKSPACESCLIENT_H
#define QTAWS_WORKSPACESCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesClientPrivate;
class AssociateIpGroupsRequest;
class AssociateIpGroupsResponse;
class AuthorizeIpRulesRequest;
class AuthorizeIpRulesResponse;
class CopyWorkspaceImageRequest;
class CopyWorkspaceImageResponse;
class CreateIpGroupRequest;
class CreateIpGroupResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class CreateWorkspacesRequest;
class CreateWorkspacesResponse;
class DeleteIpGroupRequest;
class DeleteIpGroupResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DeleteWorkspaceImageRequest;
class DeleteWorkspaceImageResponse;
class DescribeAccountRequest;
class DescribeAccountResponse;
class DescribeAccountModificationsRequest;
class DescribeAccountModificationsResponse;
class DescribeClientPropertiesRequest;
class DescribeClientPropertiesResponse;
class DescribeIpGroupsRequest;
class DescribeIpGroupsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeWorkspaceBundlesRequest;
class DescribeWorkspaceBundlesResponse;
class DescribeWorkspaceDirectoriesRequest;
class DescribeWorkspaceDirectoriesResponse;
class DescribeWorkspaceImagesRequest;
class DescribeWorkspaceImagesResponse;
class DescribeWorkspacesRequest;
class DescribeWorkspacesResponse;
class DescribeWorkspacesConnectionStatusRequest;
class DescribeWorkspacesConnectionStatusResponse;
class DisassociateIpGroupsRequest;
class DisassociateIpGroupsResponse;
class ImportWorkspaceImageRequest;
class ImportWorkspaceImageResponse;
class ListAvailableManagementCidrRangesRequest;
class ListAvailableManagementCidrRangesResponse;
class ModifyAccountRequest;
class ModifyAccountResponse;
class ModifyClientPropertiesRequest;
class ModifyClientPropertiesResponse;
class ModifyWorkspacePropertiesRequest;
class ModifyWorkspacePropertiesResponse;
class ModifyWorkspaceStateRequest;
class ModifyWorkspaceStateResponse;
class RebootWorkspacesRequest;
class RebootWorkspacesResponse;
class RebuildWorkspacesRequest;
class RebuildWorkspacesResponse;
class RevokeIpRulesRequest;
class RevokeIpRulesResponse;
class StartWorkspacesRequest;
class StartWorkspacesResponse;
class StopWorkspacesRequest;
class StopWorkspacesResponse;
class TerminateWorkspacesRequest;
class TerminateWorkspacesResponse;
class UpdateRulesOfIpGroupRequest;
class UpdateRulesOfIpGroupResponse;

class QTAWS_EXPORT WorkSpacesClient : public QtAws::Core::AwsAbstractClient {
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
    AssociateIpGroupsResponse * associateIpGroups(const AssociateIpGroupsRequest &request);
    AuthorizeIpRulesResponse * authorizeIpRules(const AuthorizeIpRulesRequest &request);
    CopyWorkspaceImageResponse * copyWorkspaceImage(const CopyWorkspaceImageRequest &request);
    CreateIpGroupResponse * createIpGroup(const CreateIpGroupRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    CreateWorkspacesResponse * createWorkspaces(const CreateWorkspacesRequest &request);
    DeleteIpGroupResponse * deleteIpGroup(const DeleteIpGroupRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DeleteWorkspaceImageResponse * deleteWorkspaceImage(const DeleteWorkspaceImageRequest &request);
    DescribeAccountResponse * describeAccount(const DescribeAccountRequest &request);
    DescribeAccountModificationsResponse * describeAccountModifications(const DescribeAccountModificationsRequest &request);
    DescribeClientPropertiesResponse * describeClientProperties(const DescribeClientPropertiesRequest &request);
    DescribeIpGroupsResponse * describeIpGroups(const DescribeIpGroupsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeWorkspaceBundlesResponse * describeWorkspaceBundles(const DescribeWorkspaceBundlesRequest &request);
    DescribeWorkspaceDirectoriesResponse * describeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest &request);
    DescribeWorkspaceImagesResponse * describeWorkspaceImages(const DescribeWorkspaceImagesRequest &request);
    DescribeWorkspacesResponse * describeWorkspaces(const DescribeWorkspacesRequest &request);
    DescribeWorkspacesConnectionStatusResponse * describeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest &request);
    DisassociateIpGroupsResponse * disassociateIpGroups(const DisassociateIpGroupsRequest &request);
    ImportWorkspaceImageResponse * importWorkspaceImage(const ImportWorkspaceImageRequest &request);
    ListAvailableManagementCidrRangesResponse * listAvailableManagementCidrRanges(const ListAvailableManagementCidrRangesRequest &request);
    ModifyAccountResponse * modifyAccount(const ModifyAccountRequest &request);
    ModifyClientPropertiesResponse * modifyClientProperties(const ModifyClientPropertiesRequest &request);
    ModifyWorkspacePropertiesResponse * modifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest &request);
    ModifyWorkspaceStateResponse * modifyWorkspaceState(const ModifyWorkspaceStateRequest &request);
    RebootWorkspacesResponse * rebootWorkspaces(const RebootWorkspacesRequest &request);
    RebuildWorkspacesResponse * rebuildWorkspaces(const RebuildWorkspacesRequest &request);
    RevokeIpRulesResponse * revokeIpRules(const RevokeIpRulesRequest &request);
    StartWorkspacesResponse * startWorkspaces(const StartWorkspacesRequest &request);
    StopWorkspacesResponse * stopWorkspaces(const StopWorkspacesRequest &request);
    TerminateWorkspacesResponse * terminateWorkspaces(const TerminateWorkspacesRequest &request);
    UpdateRulesOfIpGroupResponse * updateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkSpacesClient)
    Q_DISABLE_COPY(WorkSpacesClient)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
