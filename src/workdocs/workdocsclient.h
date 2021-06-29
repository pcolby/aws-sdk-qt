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

#ifndef QTAWS_WORKDOCSCLIENT_H
#define QTAWS_WORKDOCSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsworkdocsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace WorkDocs {

class WorkDocsClientPrivate;
class AbortDocumentVersionUploadRequest;
class AbortDocumentVersionUploadResponse;
class ActivateUserRequest;
class ActivateUserResponse;
class AddResourcePermissionsRequest;
class AddResourcePermissionsResponse;
class CreateCommentRequest;
class CreateCommentResponse;
class CreateCustomMetadataRequest;
class CreateCustomMetadataResponse;
class CreateFolderRequest;
class CreateFolderResponse;
class CreateLabelsRequest;
class CreateLabelsResponse;
class CreateNotificationSubscriptionRequest;
class CreateNotificationSubscriptionResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeactivateUserRequest;
class DeactivateUserResponse;
class DeleteCommentRequest;
class DeleteCommentResponse;
class DeleteCustomMetadataRequest;
class DeleteCustomMetadataResponse;
class DeleteDocumentRequest;
class DeleteDocumentResponse;
class DeleteFolderRequest;
class DeleteFolderResponse;
class DeleteFolderContentsRequest;
class DeleteFolderContentsResponse;
class DeleteLabelsRequest;
class DeleteLabelsResponse;
class DeleteNotificationSubscriptionRequest;
class DeleteNotificationSubscriptionResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DescribeActivitiesRequest;
class DescribeActivitiesResponse;
class DescribeCommentsRequest;
class DescribeCommentsResponse;
class DescribeDocumentVersionsRequest;
class DescribeDocumentVersionsResponse;
class DescribeFolderContentsRequest;
class DescribeFolderContentsResponse;
class DescribeGroupsRequest;
class DescribeGroupsResponse;
class DescribeNotificationSubscriptionsRequest;
class DescribeNotificationSubscriptionsResponse;
class DescribeResourcePermissionsRequest;
class DescribeResourcePermissionsResponse;
class DescribeRootFoldersRequest;
class DescribeRootFoldersResponse;
class DescribeUsersRequest;
class DescribeUsersResponse;
class GetCurrentUserRequest;
class GetCurrentUserResponse;
class GetDocumentRequest;
class GetDocumentResponse;
class GetDocumentPathRequest;
class GetDocumentPathResponse;
class GetDocumentVersionRequest;
class GetDocumentVersionResponse;
class GetFolderRequest;
class GetFolderResponse;
class GetFolderPathRequest;
class GetFolderPathResponse;
class GetResourcesRequest;
class GetResourcesResponse;
class InitiateDocumentVersionUploadRequest;
class InitiateDocumentVersionUploadResponse;
class RemoveAllResourcePermissionsRequest;
class RemoveAllResourcePermissionsResponse;
class RemoveResourcePermissionRequest;
class RemoveResourcePermissionResponse;
class UpdateDocumentRequest;
class UpdateDocumentResponse;
class UpdateDocumentVersionRequest;
class UpdateDocumentVersionResponse;
class UpdateFolderRequest;
class UpdateFolderResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWSWORKDOCS_EXPORT WorkDocsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WorkDocsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WorkDocsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AbortDocumentVersionUploadResponse * abortDocumentVersionUpload(const AbortDocumentVersionUploadRequest &request);
    ActivateUserResponse * activateUser(const ActivateUserRequest &request);
    AddResourcePermissionsResponse * addResourcePermissions(const AddResourcePermissionsRequest &request);
    CreateCommentResponse * createComment(const CreateCommentRequest &request);
    CreateCustomMetadataResponse * createCustomMetadata(const CreateCustomMetadataRequest &request);
    CreateFolderResponse * createFolder(const CreateFolderRequest &request);
    CreateLabelsResponse * createLabels(const CreateLabelsRequest &request);
    CreateNotificationSubscriptionResponse * createNotificationSubscription(const CreateNotificationSubscriptionRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeactivateUserResponse * deactivateUser(const DeactivateUserRequest &request);
    DeleteCommentResponse * deleteComment(const DeleteCommentRequest &request);
    DeleteCustomMetadataResponse * deleteCustomMetadata(const DeleteCustomMetadataRequest &request);
    DeleteDocumentResponse * deleteDocument(const DeleteDocumentRequest &request);
    DeleteFolderResponse * deleteFolder(const DeleteFolderRequest &request);
    DeleteFolderContentsResponse * deleteFolderContents(const DeleteFolderContentsRequest &request);
    DeleteLabelsResponse * deleteLabels(const DeleteLabelsRequest &request);
    DeleteNotificationSubscriptionResponse * deleteNotificationSubscription(const DeleteNotificationSubscriptionRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeActivitiesResponse * describeActivities(const DescribeActivitiesRequest &request);
    DescribeCommentsResponse * describeComments(const DescribeCommentsRequest &request);
    DescribeDocumentVersionsResponse * describeDocumentVersions(const DescribeDocumentVersionsRequest &request);
    DescribeFolderContentsResponse * describeFolderContents(const DescribeFolderContentsRequest &request);
    DescribeGroupsResponse * describeGroups(const DescribeGroupsRequest &request);
    DescribeNotificationSubscriptionsResponse * describeNotificationSubscriptions(const DescribeNotificationSubscriptionsRequest &request);
    DescribeResourcePermissionsResponse * describeResourcePermissions(const DescribeResourcePermissionsRequest &request);
    DescribeRootFoldersResponse * describeRootFolders(const DescribeRootFoldersRequest &request);
    DescribeUsersResponse * describeUsers(const DescribeUsersRequest &request);
    GetCurrentUserResponse * getCurrentUser(const GetCurrentUserRequest &request);
    GetDocumentResponse * getDocument(const GetDocumentRequest &request);
    GetDocumentPathResponse * getDocumentPath(const GetDocumentPathRequest &request);
    GetDocumentVersionResponse * getDocumentVersion(const GetDocumentVersionRequest &request);
    GetFolderResponse * getFolder(const GetFolderRequest &request);
    GetFolderPathResponse * getFolderPath(const GetFolderPathRequest &request);
    GetResourcesResponse * getResources(const GetResourcesRequest &request);
    InitiateDocumentVersionUploadResponse * initiateDocumentVersionUpload(const InitiateDocumentVersionUploadRequest &request);
    RemoveAllResourcePermissionsResponse * removeAllResourcePermissions(const RemoveAllResourcePermissionsRequest &request);
    RemoveResourcePermissionResponse * removeResourcePermission(const RemoveResourcePermissionRequest &request);
    UpdateDocumentResponse * updateDocument(const UpdateDocumentRequest &request);
    UpdateDocumentVersionResponse * updateDocumentVersion(const UpdateDocumentVersionRequest &request);
    UpdateFolderResponse * updateFolder(const UpdateFolderRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

protected:
    /// @cond internal
    WorkDocsClientPrivate * const d_ptr; ///< Internal d-pointer.
    WorkDocsClient(WorkDocsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(WorkDocsClient)
    Q_DISABLE_COPY(WorkDocsClient)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
