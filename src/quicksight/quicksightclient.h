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

#ifndef QTAWS_QUICKSIGHTCLIENT_H
#define QTAWS_QUICKSIGHTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsquicksightglobal.h"

class QNetworkReply;

namespace QtAws {
namespace QuickSight {

class QuickSightClientPrivate;
class CancelIngestionRequest;
class CancelIngestionResponse;
class CreateAccountCustomizationRequest;
class CreateAccountCustomizationResponse;
class CreateAnalysisRequest;
class CreateAnalysisResponse;
class CreateDashboardRequest;
class CreateDashboardResponse;
class CreateDataSetRequest;
class CreateDataSetResponse;
class CreateDataSourceRequest;
class CreateDataSourceResponse;
class CreateGroupRequest;
class CreateGroupResponse;
class CreateGroupMembershipRequest;
class CreateGroupMembershipResponse;
class CreateIAMPolicyAssignmentRequest;
class CreateIAMPolicyAssignmentResponse;
class CreateIngestionRequest;
class CreateIngestionResponse;
class CreateNamespaceRequest;
class CreateNamespaceResponse;
class CreateTemplateRequest;
class CreateTemplateResponse;
class CreateTemplateAliasRequest;
class CreateTemplateAliasResponse;
class CreateThemeRequest;
class CreateThemeResponse;
class CreateThemeAliasRequest;
class CreateThemeAliasResponse;
class DeleteAccountCustomizationRequest;
class DeleteAccountCustomizationResponse;
class DeleteAnalysisRequest;
class DeleteAnalysisResponse;
class DeleteDashboardRequest;
class DeleteDashboardResponse;
class DeleteDataSetRequest;
class DeleteDataSetResponse;
class DeleteDataSourceRequest;
class DeleteDataSourceResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteGroupMembershipRequest;
class DeleteGroupMembershipResponse;
class DeleteIAMPolicyAssignmentRequest;
class DeleteIAMPolicyAssignmentResponse;
class DeleteNamespaceRequest;
class DeleteNamespaceResponse;
class DeleteTemplateRequest;
class DeleteTemplateResponse;
class DeleteTemplateAliasRequest;
class DeleteTemplateAliasResponse;
class DeleteThemeRequest;
class DeleteThemeResponse;
class DeleteThemeAliasRequest;
class DeleteThemeAliasResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DeleteUserByPrincipalIdRequest;
class DeleteUserByPrincipalIdResponse;
class DescribeAccountCustomizationRequest;
class DescribeAccountCustomizationResponse;
class DescribeAccountSettingsRequest;
class DescribeAccountSettingsResponse;
class DescribeAnalysisRequest;
class DescribeAnalysisResponse;
class DescribeAnalysisPermissionsRequest;
class DescribeAnalysisPermissionsResponse;
class DescribeDashboardRequest;
class DescribeDashboardResponse;
class DescribeDashboardPermissionsRequest;
class DescribeDashboardPermissionsResponse;
class DescribeDataSetRequest;
class DescribeDataSetResponse;
class DescribeDataSetPermissionsRequest;
class DescribeDataSetPermissionsResponse;
class DescribeDataSourceRequest;
class DescribeDataSourceResponse;
class DescribeDataSourcePermissionsRequest;
class DescribeDataSourcePermissionsResponse;
class DescribeGroupRequest;
class DescribeGroupResponse;
class DescribeIAMPolicyAssignmentRequest;
class DescribeIAMPolicyAssignmentResponse;
class DescribeIngestionRequest;
class DescribeIngestionResponse;
class DescribeNamespaceRequest;
class DescribeNamespaceResponse;
class DescribeTemplateRequest;
class DescribeTemplateResponse;
class DescribeTemplateAliasRequest;
class DescribeTemplateAliasResponse;
class DescribeTemplatePermissionsRequest;
class DescribeTemplatePermissionsResponse;
class DescribeThemeRequest;
class DescribeThemeResponse;
class DescribeThemeAliasRequest;
class DescribeThemeAliasResponse;
class DescribeThemePermissionsRequest;
class DescribeThemePermissionsResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class GetDashboardEmbedUrlRequest;
class GetDashboardEmbedUrlResponse;
class GetSessionEmbedUrlRequest;
class GetSessionEmbedUrlResponse;
class ListAnalysesRequest;
class ListAnalysesResponse;
class ListDashboardVersionsRequest;
class ListDashboardVersionsResponse;
class ListDashboardsRequest;
class ListDashboardsResponse;
class ListDataSetsRequest;
class ListDataSetsResponse;
class ListDataSourcesRequest;
class ListDataSourcesResponse;
class ListGroupMembershipsRequest;
class ListGroupMembershipsResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListIAMPolicyAssignmentsRequest;
class ListIAMPolicyAssignmentsResponse;
class ListIAMPolicyAssignmentsForUserRequest;
class ListIAMPolicyAssignmentsForUserResponse;
class ListIngestionsRequest;
class ListIngestionsResponse;
class ListNamespacesRequest;
class ListNamespacesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTemplateAliasesRequest;
class ListTemplateAliasesResponse;
class ListTemplateVersionsRequest;
class ListTemplateVersionsResponse;
class ListTemplatesRequest;
class ListTemplatesResponse;
class ListThemeAliasesRequest;
class ListThemeAliasesResponse;
class ListThemeVersionsRequest;
class ListThemeVersionsResponse;
class ListThemesRequest;
class ListThemesResponse;
class ListUserGroupsRequest;
class ListUserGroupsResponse;
class ListUsersRequest;
class ListUsersResponse;
class RegisterUserRequest;
class RegisterUserResponse;
class RestoreAnalysisRequest;
class RestoreAnalysisResponse;
class SearchAnalysesRequest;
class SearchAnalysesResponse;
class SearchDashboardsRequest;
class SearchDashboardsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAccountCustomizationRequest;
class UpdateAccountCustomizationResponse;
class UpdateAccountSettingsRequest;
class UpdateAccountSettingsResponse;
class UpdateAnalysisRequest;
class UpdateAnalysisResponse;
class UpdateAnalysisPermissionsRequest;
class UpdateAnalysisPermissionsResponse;
class UpdateDashboardRequest;
class UpdateDashboardResponse;
class UpdateDashboardPermissionsRequest;
class UpdateDashboardPermissionsResponse;
class UpdateDashboardPublishedVersionRequest;
class UpdateDashboardPublishedVersionResponse;
class UpdateDataSetRequest;
class UpdateDataSetResponse;
class UpdateDataSetPermissionsRequest;
class UpdateDataSetPermissionsResponse;
class UpdateDataSourceRequest;
class UpdateDataSourceResponse;
class UpdateDataSourcePermissionsRequest;
class UpdateDataSourcePermissionsResponse;
class UpdateGroupRequest;
class UpdateGroupResponse;
class UpdateIAMPolicyAssignmentRequest;
class UpdateIAMPolicyAssignmentResponse;
class UpdateTemplateRequest;
class UpdateTemplateResponse;
class UpdateTemplateAliasRequest;
class UpdateTemplateAliasResponse;
class UpdateTemplatePermissionsRequest;
class UpdateTemplatePermissionsResponse;
class UpdateThemeRequest;
class UpdateThemeResponse;
class UpdateThemeAliasRequest;
class UpdateThemeAliasResponse;
class UpdateThemePermissionsRequest;
class UpdateThemePermissionsResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWSQUICKSIGHT_EXPORT QuickSightClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    QuickSightClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit QuickSightClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelIngestionResponse * cancelIngestion(const CancelIngestionRequest &request);
    CreateAccountCustomizationResponse * createAccountCustomization(const CreateAccountCustomizationRequest &request);
    CreateAnalysisResponse * createAnalysis(const CreateAnalysisRequest &request);
    CreateDashboardResponse * createDashboard(const CreateDashboardRequest &request);
    CreateDataSetResponse * createDataSet(const CreateDataSetRequest &request);
    CreateDataSourceResponse * createDataSource(const CreateDataSourceRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateGroupMembershipResponse * createGroupMembership(const CreateGroupMembershipRequest &request);
    CreateIAMPolicyAssignmentResponse * createIAMPolicyAssignment(const CreateIAMPolicyAssignmentRequest &request);
    CreateIngestionResponse * createIngestion(const CreateIngestionRequest &request);
    CreateNamespaceResponse * createNamespace(const CreateNamespaceRequest &request);
    CreateTemplateResponse * createTemplate(const CreateTemplateRequest &request);
    CreateTemplateAliasResponse * createTemplateAlias(const CreateTemplateAliasRequest &request);
    CreateThemeResponse * createTheme(const CreateThemeRequest &request);
    CreateThemeAliasResponse * createThemeAlias(const CreateThemeAliasRequest &request);
    DeleteAccountCustomizationResponse * deleteAccountCustomization(const DeleteAccountCustomizationRequest &request);
    DeleteAnalysisResponse * deleteAnalysis(const DeleteAnalysisRequest &request);
    DeleteDashboardResponse * deleteDashboard(const DeleteDashboardRequest &request);
    DeleteDataSetResponse * deleteDataSet(const DeleteDataSetRequest &request);
    DeleteDataSourceResponse * deleteDataSource(const DeleteDataSourceRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteGroupMembershipResponse * deleteGroupMembership(const DeleteGroupMembershipRequest &request);
    DeleteIAMPolicyAssignmentResponse * deleteIAMPolicyAssignment(const DeleteIAMPolicyAssignmentRequest &request);
    DeleteNamespaceResponse * deleteNamespace(const DeleteNamespaceRequest &request);
    DeleteTemplateResponse * deleteTemplate(const DeleteTemplateRequest &request);
    DeleteTemplateAliasResponse * deleteTemplateAlias(const DeleteTemplateAliasRequest &request);
    DeleteThemeResponse * deleteTheme(const DeleteThemeRequest &request);
    DeleteThemeAliasResponse * deleteThemeAlias(const DeleteThemeAliasRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeleteUserByPrincipalIdResponse * deleteUserByPrincipalId(const DeleteUserByPrincipalIdRequest &request);
    DescribeAccountCustomizationResponse * describeAccountCustomization(const DescribeAccountCustomizationRequest &request);
    DescribeAccountSettingsResponse * describeAccountSettings(const DescribeAccountSettingsRequest &request);
    DescribeAnalysisResponse * describeAnalysis(const DescribeAnalysisRequest &request);
    DescribeAnalysisPermissionsResponse * describeAnalysisPermissions(const DescribeAnalysisPermissionsRequest &request);
    DescribeDashboardResponse * describeDashboard(const DescribeDashboardRequest &request);
    DescribeDashboardPermissionsResponse * describeDashboardPermissions(const DescribeDashboardPermissionsRequest &request);
    DescribeDataSetResponse * describeDataSet(const DescribeDataSetRequest &request);
    DescribeDataSetPermissionsResponse * describeDataSetPermissions(const DescribeDataSetPermissionsRequest &request);
    DescribeDataSourceResponse * describeDataSource(const DescribeDataSourceRequest &request);
    DescribeDataSourcePermissionsResponse * describeDataSourcePermissions(const DescribeDataSourcePermissionsRequest &request);
    DescribeGroupResponse * describeGroup(const DescribeGroupRequest &request);
    DescribeIAMPolicyAssignmentResponse * describeIAMPolicyAssignment(const DescribeIAMPolicyAssignmentRequest &request);
    DescribeIngestionResponse * describeIngestion(const DescribeIngestionRequest &request);
    DescribeNamespaceResponse * describeNamespace(const DescribeNamespaceRequest &request);
    DescribeTemplateResponse * describeTemplate(const DescribeTemplateRequest &request);
    DescribeTemplateAliasResponse * describeTemplateAlias(const DescribeTemplateAliasRequest &request);
    DescribeTemplatePermissionsResponse * describeTemplatePermissions(const DescribeTemplatePermissionsRequest &request);
    DescribeThemeResponse * describeTheme(const DescribeThemeRequest &request);
    DescribeThemeAliasResponse * describeThemeAlias(const DescribeThemeAliasRequest &request);
    DescribeThemePermissionsResponse * describeThemePermissions(const DescribeThemePermissionsRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    GetDashboardEmbedUrlResponse * getDashboardEmbedUrl(const GetDashboardEmbedUrlRequest &request);
    GetSessionEmbedUrlResponse * getSessionEmbedUrl(const GetSessionEmbedUrlRequest &request);
    ListAnalysesResponse * listAnalyses(const ListAnalysesRequest &request);
    ListDashboardVersionsResponse * listDashboardVersions(const ListDashboardVersionsRequest &request);
    ListDashboardsResponse * listDashboards(const ListDashboardsRequest &request);
    ListDataSetsResponse * listDataSets(const ListDataSetsRequest &request);
    ListDataSourcesResponse * listDataSources(const ListDataSourcesRequest &request);
    ListGroupMembershipsResponse * listGroupMemberships(const ListGroupMembershipsRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListIAMPolicyAssignmentsResponse * listIAMPolicyAssignments(const ListIAMPolicyAssignmentsRequest &request);
    ListIAMPolicyAssignmentsForUserResponse * listIAMPolicyAssignmentsForUser(const ListIAMPolicyAssignmentsForUserRequest &request);
    ListIngestionsResponse * listIngestions(const ListIngestionsRequest &request);
    ListNamespacesResponse * listNamespaces(const ListNamespacesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTemplateAliasesResponse * listTemplateAliases(const ListTemplateAliasesRequest &request);
    ListTemplateVersionsResponse * listTemplateVersions(const ListTemplateVersionsRequest &request);
    ListTemplatesResponse * listTemplates(const ListTemplatesRequest &request);
    ListThemeAliasesResponse * listThemeAliases(const ListThemeAliasesRequest &request);
    ListThemeVersionsResponse * listThemeVersions(const ListThemeVersionsRequest &request);
    ListThemesResponse * listThemes(const ListThemesRequest &request);
    ListUserGroupsResponse * listUserGroups(const ListUserGroupsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    RegisterUserResponse * registerUser(const RegisterUserRequest &request);
    RestoreAnalysisResponse * restoreAnalysis(const RestoreAnalysisRequest &request);
    SearchAnalysesResponse * searchAnalyses(const SearchAnalysesRequest &request);
    SearchDashboardsResponse * searchDashboards(const SearchDashboardsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAccountCustomizationResponse * updateAccountCustomization(const UpdateAccountCustomizationRequest &request);
    UpdateAccountSettingsResponse * updateAccountSettings(const UpdateAccountSettingsRequest &request);
    UpdateAnalysisResponse * updateAnalysis(const UpdateAnalysisRequest &request);
    UpdateAnalysisPermissionsResponse * updateAnalysisPermissions(const UpdateAnalysisPermissionsRequest &request);
    UpdateDashboardResponse * updateDashboard(const UpdateDashboardRequest &request);
    UpdateDashboardPermissionsResponse * updateDashboardPermissions(const UpdateDashboardPermissionsRequest &request);
    UpdateDashboardPublishedVersionResponse * updateDashboardPublishedVersion(const UpdateDashboardPublishedVersionRequest &request);
    UpdateDataSetResponse * updateDataSet(const UpdateDataSetRequest &request);
    UpdateDataSetPermissionsResponse * updateDataSetPermissions(const UpdateDataSetPermissionsRequest &request);
    UpdateDataSourceResponse * updateDataSource(const UpdateDataSourceRequest &request);
    UpdateDataSourcePermissionsResponse * updateDataSourcePermissions(const UpdateDataSourcePermissionsRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateIAMPolicyAssignmentResponse * updateIAMPolicyAssignment(const UpdateIAMPolicyAssignmentRequest &request);
    UpdateTemplateResponse * updateTemplate(const UpdateTemplateRequest &request);
    UpdateTemplateAliasResponse * updateTemplateAlias(const UpdateTemplateAliasRequest &request);
    UpdateTemplatePermissionsResponse * updateTemplatePermissions(const UpdateTemplatePermissionsRequest &request);
    UpdateThemeResponse * updateTheme(const UpdateThemeRequest &request);
    UpdateThemeAliasResponse * updateThemeAlias(const UpdateThemeAliasRequest &request);
    UpdateThemePermissionsResponse * updateThemePermissions(const UpdateThemePermissionsRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

protected:
    /// @cond internal
    QuickSightClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit QuickSightClient(QuickSightClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(QuickSightClient)
    Q_DISABLE_COPY(QuickSightClient)

};

} // namespace QuickSight
} // namespace QtAws

#endif
