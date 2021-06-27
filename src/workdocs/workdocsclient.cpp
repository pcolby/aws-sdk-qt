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

#include "workdocsclient.h"
#include "workdocsclient_p.h"

#include "core/awssignaturev4.h"
#include "abortdocumentversionuploadrequest.h"
#include "abortdocumentversionuploadresponse.h"
#include "activateuserrequest.h"
#include "activateuserresponse.h"
#include "addresourcepermissionsrequest.h"
#include "addresourcepermissionsresponse.h"
#include "createcommentrequest.h"
#include "createcommentresponse.h"
#include "createcustommetadatarequest.h"
#include "createcustommetadataresponse.h"
#include "createfolderrequest.h"
#include "createfolderresponse.h"
#include "createlabelsrequest.h"
#include "createlabelsresponse.h"
#include "createnotificationsubscriptionrequest.h"
#include "createnotificationsubscriptionresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deactivateuserrequest.h"
#include "deactivateuserresponse.h"
#include "deletecommentrequest.h"
#include "deletecommentresponse.h"
#include "deletecustommetadatarequest.h"
#include "deletecustommetadataresponse.h"
#include "deletedocumentrequest.h"
#include "deletedocumentresponse.h"
#include "deletefolderrequest.h"
#include "deletefolderresponse.h"
#include "deletefoldercontentsrequest.h"
#include "deletefoldercontentsresponse.h"
#include "deletelabelsrequest.h"
#include "deletelabelsresponse.h"
#include "deletenotificationsubscriptionrequest.h"
#include "deletenotificationsubscriptionresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describeactivitiesrequest.h"
#include "describeactivitiesresponse.h"
#include "describecommentsrequest.h"
#include "describecommentsresponse.h"
#include "describedocumentversionsrequest.h"
#include "describedocumentversionsresponse.h"
#include "describefoldercontentsrequest.h"
#include "describefoldercontentsresponse.h"
#include "describegroupsrequest.h"
#include "describegroupsresponse.h"
#include "describenotificationsubscriptionsrequest.h"
#include "describenotificationsubscriptionsresponse.h"
#include "describeresourcepermissionsrequest.h"
#include "describeresourcepermissionsresponse.h"
#include "describerootfoldersrequest.h"
#include "describerootfoldersresponse.h"
#include "describeusersrequest.h"
#include "describeusersresponse.h"
#include "getcurrentuserrequest.h"
#include "getcurrentuserresponse.h"
#include "getdocumentrequest.h"
#include "getdocumentresponse.h"
#include "getdocumentpathrequest.h"
#include "getdocumentpathresponse.h"
#include "getdocumentversionrequest.h"
#include "getdocumentversionresponse.h"
#include "getfolderrequest.h"
#include "getfolderresponse.h"
#include "getfolderpathrequest.h"
#include "getfolderpathresponse.h"
#include "getresourcesrequest.h"
#include "getresourcesresponse.h"
#include "initiatedocumentversionuploadrequest.h"
#include "initiatedocumentversionuploadresponse.h"
#include "removeallresourcepermissionsrequest.h"
#include "removeallresourcepermissionsresponse.h"
#include "removeresourcepermissionrequest.h"
#include "removeresourcepermissionresponse.h"
#include "updatedocumentrequest.h"
#include "updatedocumentresponse.h"
#include "updatedocumentversionrequest.h"
#include "updatedocumentversionresponse.h"
#include "updatefolderrequest.h"
#include "updatefolderresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WorkDocs
 * \brief Contains classess for accessing Amazon WorkDocs.
 *
 * \inmodule QtAwsWorkDocs
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::WorkDocsClient
 * \brief The WorkDocsClient class provides access to the Amazon WorkDocs service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkDocs
 *
 *  The WorkDocs API is designed for the following use
 * 
 *  cases> <ul> <li>
 * 
 *  File Migration: File migration applications are supported for users who want to migrate their files from an on-premises
 *  or off-premises file system or service. Users can insert files into a user directory structure, as well as allow for
 *  basic metadata changes, such as modifications to the permissions of
 * 
 *  files> </li> <li>
 * 
 *  Security: Support security applications are supported for users who have additional security needs, such as antivirus or
 *  data loss prevention. The API actions, along with AWS CloudTrail, allow these applications to detect when changes occur
 *  in Amazon WorkDocs. Then, the application can take the necessary actions and replace the target file. If the target file
 *  violates the policy, the application can also choose to email the
 * 
 *  user> </li> <li>
 * 
 *  eDiscovery/Analytics: General administrative applications are supported, such as eDiscovery and analytics. These
 *  applications can choose to mimic or record the actions in an Amazon WorkDocs site, along with AWS CloudTrail, to
 *  replicate data for eDiscovery, backup, or analytical
 * 
 *  applications> </li> </ul>
 * 
 *  All Amazon WorkDocs API actions are Amazon authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkDocs site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkDocs site (or as set in the IAM policy). This includes, but is not
 *  limited to, the ability to modify file permissions and upload any file to any user. This allows developers to perform
 *  the three use cases above, as well as give users the ability to grant access on a selective basis using the IAM
 */

/*!
 * \brief Constructs a WorkDocsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WorkDocsClient::WorkDocsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-05-01"),
    QStringLiteral("workdocs"),
    QStringLiteral("Amazon WorkDocs"),
    QStringLiteral("workdocs"),
    parent), d_ptr(new WorkDocsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload WorkDocsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WorkDocsClient::WorkDocsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-05-01"),
    QStringLiteral("workdocs"),
    QStringLiteral("Amazon WorkDocs"),
    QStringLiteral("workdocs"),
    parent), d_ptr(new WorkDocsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * AbortDocumentVersionUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Aborts the upload of the specified document version that was previously initiated by
 * <a>InitiateDocumentVersionUpload</a>. The client should make this call only when it no longer intends to upload the
 * document version, or fails to do
 */
AbortDocumentVersionUploadResponse * WorkDocsClient::abortDocumentVersionUpload(const AbortDocumentVersionUploadRequest &request)
{
    return qobject_cast<AbortDocumentVersionUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * ActivateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates the specified user. Only active users can access Amazon
 */
ActivateUserResponse * WorkDocsClient::activateUser(const ActivateUserRequest &request)
{
    return qobject_cast<ActivateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * AddResourcePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a set of permissions for the specified folder or document. The resource permissions are overwritten if the
 * principals already have different
 */
AddResourcePermissionsResponse * WorkDocsClient::addResourcePermissions(const AddResourcePermissionsRequest &request)
{
    return qobject_cast<AddResourcePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * CreateCommentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new comment to the specified document
 */
CreateCommentResponse * WorkDocsClient::createComment(const CreateCommentRequest &request)
{
    return qobject_cast<CreateCommentResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * CreateCustomMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more custom properties to the specified resource (a folder, document, or
 */
CreateCustomMetadataResponse * WorkDocsClient::createCustomMetadata(const CreateCustomMetadataRequest &request)
{
    return qobject_cast<CreateCustomMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * CreateFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a folder with the specified name and parent
 */
CreateFolderResponse * WorkDocsClient::createFolder(const CreateFolderRequest &request)
{
    return qobject_cast<CreateFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * CreateLabelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified list of labels to the given resource (a document or
 */
CreateLabelsResponse * WorkDocsClient::createLabels(const CreateLabelsRequest &request)
{
    return qobject_cast<CreateLabelsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * CreateNotificationSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configure Amazon WorkDocs to use Amazon SNS notifications. The endpoint receives a confirmation message, and must
 * confirm the
 *
 * subscription>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/subscribe-notifications.html">Subscribe to
 * Notifications</a> in the <i>Amazon WorkDocs Developer
 */
CreateNotificationSubscriptionResponse * WorkDocsClient::createNotificationSubscription(const CreateNotificationSubscriptionRequest &request)
{
    return qobject_cast<CreateNotificationSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user in a Simple AD or Microsoft AD directory. The status of a newly created user is "ACTIVE". New users can
 * access Amazon
 */
CreateUserResponse * WorkDocsClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeactivateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deactivates the specified user, which revokes the user's access to Amazon
 */
DeactivateUserResponse * WorkDocsClient::deactivateUser(const DeactivateUserRequest &request)
{
    return qobject_cast<DeactivateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeleteCommentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified comment from the document
 */
DeleteCommentResponse * WorkDocsClient::deleteComment(const DeleteCommentRequest &request)
{
    return qobject_cast<DeleteCommentResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeleteCustomMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes custom metadata from the specified
 */
DeleteCustomMetadataResponse * WorkDocsClient::deleteCustomMetadata(const DeleteCustomMetadataRequest &request)
{
    return qobject_cast<DeleteCustomMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeleteDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the specified document and its associated
 */
DeleteDocumentResponse * WorkDocsClient::deleteDocument(const DeleteDocumentRequest &request)
{
    return qobject_cast<DeleteDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeleteFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the specified folder and its
 */
DeleteFolderResponse * WorkDocsClient::deleteFolder(const DeleteFolderRequest &request)
{
    return qobject_cast<DeleteFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeleteFolderContentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the contents of the specified
 */
DeleteFolderContentsResponse * WorkDocsClient::deleteFolderContents(const DeleteFolderContentsRequest &request)
{
    return qobject_cast<DeleteFolderContentsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeleteLabelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified list of labels from a
 */
DeleteLabelsResponse * WorkDocsClient::deleteLabels(const DeleteLabelsRequest &request)
{
    return qobject_cast<DeleteLabelsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeleteNotificationSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified subscription from the specified
 */
DeleteNotificationSubscriptionResponse * WorkDocsClient::deleteNotificationSubscription(const DeleteNotificationSubscriptionRequest &request)
{
    return qobject_cast<DeleteNotificationSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified user from a Simple AD or Microsoft AD
 */
DeleteUserResponse * WorkDocsClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeActivitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the user activities in a specified time
 */
DescribeActivitiesResponse * WorkDocsClient::describeActivities(const DescribeActivitiesRequest &request)
{
    return qobject_cast<DescribeActivitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeCommentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all the comments for the specified document
 */
DescribeCommentsResponse * WorkDocsClient::describeComments(const DescribeCommentsRequest &request)
{
    return qobject_cast<DescribeCommentsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeDocumentVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the document versions for the specified
 *
 * document>
 *
 * By default, only active versions are
 */
DescribeDocumentVersionsResponse * WorkDocsClient::describeDocumentVersions(const DescribeDocumentVersionsRequest &request)
{
    return qobject_cast<DescribeDocumentVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeFolderContentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the contents of the specified folder, including its documents and
 *
 * subfolders>
 *
 * By default, Amazon WorkDocs returns the first 100 active document and folder metadata items. If there are more results,
 * the response includes a marker that you can use to request the next set of results. You can also request initialized
 */
DescribeFolderContentsResponse * WorkDocsClient::describeFolderContents(const DescribeFolderContentsRequest &request)
{
    return qobject_cast<DescribeFolderContentsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the groups specified by the query. Groups are defined by the underlying Active
 */
DescribeGroupsResponse * WorkDocsClient::describeGroups(const DescribeGroupsRequest &request)
{
    return qobject_cast<DescribeGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeNotificationSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the specified notification
 */
DescribeNotificationSubscriptionsResponse * WorkDocsClient::describeNotificationSubscriptions(const DescribeNotificationSubscriptionsRequest &request)
{
    return qobject_cast<DescribeNotificationSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeResourcePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the permissions of a specified
 */
DescribeResourcePermissionsResponse * WorkDocsClient::describeResourcePermissions(const DescribeResourcePermissionsRequest &request)
{
    return qobject_cast<DescribeResourcePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeRootFoldersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current user's special folders; the <code>RootFolder</code> and the <code>RecycleBin</code>.
 * <code>RootFolder</code> is the root of user's files and folders and <code>RecycleBin</code> is the root of recycled
 * items. This is not a valid action for SigV4 (administrative API)
 *
 * clients>
 *
 * This action requires an authentication token. To get an authentication token, register an application with Amazon
 * WorkDocs. For more information, see <a
 * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/wd-auth-user.html">Authentication and Access Control
 * for User Applications</a> in the <i>Amazon WorkDocs Developer
 */
DescribeRootFoldersResponse * WorkDocsClient::describeRootFolders(const DescribeRootFoldersRequest &request)
{
    return qobject_cast<DescribeRootFoldersResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * DescribeUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified users. You can describe all users or filter the results (for example, by status or
 *
 * organization)>
 *
 * By default, Amazon WorkDocs returns the first 24 active or pending users. If there are more results, the response
 * includes a marker that you can use to request the next set of
 */
DescribeUsersResponse * WorkDocsClient::describeUsers(const DescribeUsersRequest &request)
{
    return qobject_cast<DescribeUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * GetCurrentUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details of the current user for whom the authentication token was generated. This is not a valid action for
 * SigV4 (administrative API)
 *
 * clients>
 *
 * This action requires an authentication token. To get an authentication token, register an application with Amazon
 * WorkDocs. For more information, see <a
 * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/wd-auth-user.html">Authentication and Access Control
 * for User Applications</a> in the <i>Amazon WorkDocs Developer
 */
GetCurrentUserResponse * WorkDocsClient::getCurrentUser(const GetCurrentUserRequest &request)
{
    return qobject_cast<GetCurrentUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * GetDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details of a
 */
GetDocumentResponse * WorkDocsClient::getDocument(const GetDocumentRequest &request)
{
    return qobject_cast<GetDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * GetDocumentPathResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the path information (the hierarchy from the root folder) for the requested
 *
 * document>
 *
 * By default, Amazon WorkDocs returns a maximum of 100 levels upwards from the requested document and only includes the
 * IDs of the parent folders in the path. You can limit the maximum number of levels. You can also request the names of the
 * parent
 */
GetDocumentPathResponse * WorkDocsClient::getDocumentPath(const GetDocumentPathRequest &request)
{
    return qobject_cast<GetDocumentPathResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * GetDocumentVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves version metadata for the specified
 */
GetDocumentVersionResponse * WorkDocsClient::getDocumentVersion(const GetDocumentVersionRequest &request)
{
    return qobject_cast<GetDocumentVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * GetFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the metadata of the specified
 */
GetFolderResponse * WorkDocsClient::getFolder(const GetFolderRequest &request)
{
    return qobject_cast<GetFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * GetFolderPathResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the path information (the hierarchy from the root folder) for the specified
 *
 * folder>
 *
 * By default, Amazon WorkDocs returns a maximum of 100 levels upwards from the requested folder and only includes the IDs
 * of the parent folders in the path. You can limit the maximum number of levels. You can also request the parent folder
 */
GetFolderPathResponse * WorkDocsClient::getFolderPath(const GetFolderPathRequest &request)
{
    return qobject_cast<GetFolderPathResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * GetResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a collection of resources, including folders and documents. The only <code>CollectionType</code> supported is
 */
GetResourcesResponse * WorkDocsClient::getResources(const GetResourcesRequest &request)
{
    return qobject_cast<GetResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * InitiateDocumentVersionUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new document object and version
 *
 * object>
 *
 * The client specifies the parent folder ID and name of the document to upload. The ID is optionally specified when
 * creating a new version of an existing document. This is the first step to upload a document. Next, upload the document
 * to the URL returned from the call, and then call
 *
 * <a>UpdateDocumentVersion</a>>
 *
 * To cancel the document upload, call
 */
InitiateDocumentVersionUploadResponse * WorkDocsClient::initiateDocumentVersionUpload(const InitiateDocumentVersionUploadRequest &request)
{
    return qobject_cast<InitiateDocumentVersionUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * RemoveAllResourcePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes all the permissions from the specified
 */
RemoveAllResourcePermissionsResponse * WorkDocsClient::removeAllResourcePermissions(const RemoveAllResourcePermissionsRequest &request)
{
    return qobject_cast<RemoveAllResourcePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * RemoveResourcePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the permission for the specified principal from the specified
 */
RemoveResourcePermissionResponse * WorkDocsClient::removeResourcePermission(const RemoveResourcePermissionRequest &request)
{
    return qobject_cast<RemoveResourcePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * UpdateDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified attributes of a document. The user must have access to both the document and its parent folder, if
 */
UpdateDocumentResponse * WorkDocsClient::updateDocument(const UpdateDocumentRequest &request)
{
    return qobject_cast<UpdateDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * UpdateDocumentVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the status of the document version to ACTIVE.
 *
 * </p
 *
 * Amazon WorkDocs also sets its document container to ACTIVE. This is the last step in a document upload, after the client
 * uploads the document to an S3-presigned URL returned by <a>InitiateDocumentVersionUpload</a>.
 */
UpdateDocumentVersionResponse * WorkDocsClient::updateDocumentVersion(const UpdateDocumentVersionRequest &request)
{
    return qobject_cast<UpdateDocumentVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * UpdateFolderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified attributes of the specified folder. The user must have access to both the folder and its parent
 * folder, if
 */
UpdateFolderResponse * WorkDocsClient::updateFolder(const UpdateFolderRequest &request)
{
    return qobject_cast<UpdateFolderResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkDocsClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified attributes of the specified user, and grants or revokes administrative privileges to the Amazon
 * WorkDocs
 */
UpdateUserResponse * WorkDocsClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::WorkDocs::WorkDocsClientPrivate
 * \brief The WorkDocsClientPrivate class provides private implementation for WorkDocsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a WorkDocsClientPrivate object with public implementation \a q.
 */
WorkDocsClientPrivate::WorkDocsClientPrivate(WorkDocsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace WorkDocs
} // namespace QtAws
