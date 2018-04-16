/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "codestarclient.h"
#include "codestarclient_p.h"

#include "core/awssignaturev4.h"
#include "associateteammemberrequest.h"
#include "associateteammemberresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "createuserprofilerequest.h"
#include "createuserprofileresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deleteuserprofilerequest.h"
#include "deleteuserprofileresponse.h"
#include "describeprojectrequest.h"
#include "describeprojectresponse.h"
#include "describeuserprofilerequest.h"
#include "describeuserprofileresponse.h"
#include "disassociateteammemberrequest.h"
#include "disassociateteammemberresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listresourcesrequest.h"
#include "listresourcesresponse.h"
#include "listtagsforprojectrequest.h"
#include "listtagsforprojectresponse.h"
#include "listteammembersrequest.h"
#include "listteammembersresponse.h"
#include "listuserprofilesrequest.h"
#include "listuserprofilesresponse.h"
#include "tagprojectrequest.h"
#include "tagprojectresponse.h"
#include "untagprojectrequest.h"
#include "untagprojectresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"
#include "updateteammemberrequest.h"
#include "updateteammemberresponse.h"
#include "updateuserprofilerequest.h"
#include "updateuserprofileresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeStar
 * \brief The QtAws::CodeStar contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::CodeStarClient
 *
 * \brief The CodeStarClient class provides access to the AWS CodeStar service.
 *
 * \ingroup CodeStar
 *
 *  <fullname>AWS CodeStar</fullname>
 * 
 *  This is the API reference for AWS CodeStar. This reference provides descriptions of the operations and data types for
 *  the AWS CodeStar API along with usage
 * 
 *  examples>
 * 
 *  You can use the AWS CodeStar API to work
 * 
 *  with>
 * 
 *  Projects and their resources, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>DeleteProject</code>, which deletes a
 * 
 *  project> </li> <li>
 * 
 *  <code>DescribeProject</code>, which lists the attributes of a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListProjects</code>, which lists all projects associated with your AWS
 * 
 *  account> </li> <li>
 * 
 *  <code>ListResources</code>, which lists the resources associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTagsForProject</code>, which lists the tags associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>TagProject</code>, which adds tags to a
 * 
 *  project> </li> <li>
 * 
 *  <code>UntagProject</code>, which removes tags from a
 * 
 *  project> </li> <li>
 * 
 *  <code>UpdateProject</code>, which updates the attributes of a
 * 
 *  project> </li> </ul>
 * 
 *  Teams and team members, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>AssociateTeamMember</code>, which adds an IAM user to the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>DisassociateTeamMember</code>, which removes an IAM user from the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTeamMembers</code>, which lists all the IAM users in the team for a project, including their roles and
 * 
 *  attributes> </li> <li>
 * 
 *  <code>UpdateTeamMember</code>, which updates a team member's attributes in a
 * 
 *  project> </li> </ul>
 * 
 *  Users, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>CreateUserProfile</code>, which creates a user profile that contains data associated with the user across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DeleteUserProfile</code>, which deletes all user profile information across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DescribeUserProfile</code>, which describes the profile of a
 * 
 *  user> </li> <li>
 * 
 *  <code>ListUserProfiles</code>, which lists all user
 * 
 *  profiles> </li> <li>
 * 
 *  <code>UpdateUserProfile</code>, which updates the profile for a
 */

/*!
 * \brief Constructs a CodeStarClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CodeStarClient::CodeStarClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeStarClientPrivate(this), parent)
{
    Q_D(CodeStarClient);
    d->apiVersion = QStringLiteral("2017-04-19");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("codestar");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CodeStar");
    d->serviceName = QStringLiteral("codestar");
}

/*!
 * \overload CodeStarClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
CodeStarClient::CodeStarClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeStarClientPrivate(this), parent)
{
    Q_D(CodeStarClient);
    d->apiVersion = QStringLiteral("2017-04-19");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("codestar");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CodeStar");
    d->serviceName = QStringLiteral("codestar");
}

/*!
 * Adds an IAM user to the team for an AWS CodeStar
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateTeamMemberResponse * CodeStarClient::associateTeamMember(const AssociateTeamMemberRequest &request)
{
    return qobject_cast<AssociateTeamMemberResponse *>(send(request));
}

/*!
 * Reserved for future use. To create a project, use the AWS CodeStar
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProjectResponse * CodeStarClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Creates a profile for a user that includes user preferences, such as the display name and email address assocciated with
 * the user, in AWS CodeStar. The user profile is not project-specific. Information in the user profile is displayed
 * wherever the user's information appears to other users in AWS
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserProfileResponse * CodeStarClient::createUserProfile(const CreateUserProfileRequest &request)
{
    return qobject_cast<CreateUserProfileResponse *>(send(request));
}

/*!
 * Deletes a project, including project resources. Does not delete users associated with the project, but does delete the
 * IAM roles that allowed access to the
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProjectResponse * CodeStarClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Deletes a user profile in AWS CodeStar, including all personal preference data associated with that profile, such as
 * display name and email address. It does not delete the history of that user, for example the history of commits made by
 * that
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserProfileResponse * CodeStarClient::deleteUserProfile(const DeleteUserProfileRequest &request)
{
    return qobject_cast<DeleteUserProfileResponse *>(send(request));
}

/*!
 * Describes a project and its
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeProjectResponse * CodeStarClient::describeProject(const DescribeProjectRequest &request)
{
    return qobject_cast<DescribeProjectResponse *>(send(request));
}

/*!
 * Describes a user in AWS CodeStar and the user attributes across all
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeUserProfileResponse * CodeStarClient::describeUserProfile(const DescribeUserProfileRequest &request)
{
    return qobject_cast<DescribeUserProfileResponse *>(send(request));
}

/*!
 * Removes a user from a project. Removing a user from a project also removes the IAM policies from that user that allowed
 * access to the project and its resources. Disassociating a team member does not remove that user's profile from AWS
 * CodeStar. It does not remove the user from
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateTeamMemberResponse * CodeStarClient::disassociateTeamMember(const DisassociateTeamMemberRequest &request)
{
    return qobject_cast<DisassociateTeamMemberResponse *>(send(request));
}

/*!
 * Lists all projects in AWS CodeStar associated with your AWS
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProjectsResponse * CodeStarClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Lists resources associated with a project in AWS
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourcesResponse * CodeStarClient::listResources(const ListResourcesRequest &request)
{
    return qobject_cast<ListResourcesResponse *>(send(request));
}

/*!
 * Gets the tags for a
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForProjectResponse * CodeStarClient::listTagsForProject(const ListTagsForProjectRequest &request)
{
    return qobject_cast<ListTagsForProjectResponse *>(send(request));
}

/*!
 * Lists all team members associated with a
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTeamMembersResponse * CodeStarClient::listTeamMembers(const ListTeamMembersRequest &request)
{
    return qobject_cast<ListTeamMembersResponse *>(send(request));
}

/*!
 * Lists all the user profiles configured for your AWS account in AWS
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUserProfilesResponse * CodeStarClient::listUserProfiles(const ListUserProfilesRequest &request)
{
    return qobject_cast<ListUserProfilesResponse *>(send(request));
}

/*!
 * Adds tags to a
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagProjectResponse * CodeStarClient::tagProject(const TagProjectRequest &request)
{
    return qobject_cast<TagProjectResponse *>(send(request));
}

/*!
 * Removes tags from a
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagProjectResponse * CodeStarClient::untagProject(const UntagProjectRequest &request)
{
    return qobject_cast<UntagProjectResponse *>(send(request));
}

/*!
 * Updates a project in AWS
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProjectResponse * CodeStarClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/*!
 * Updates a team member's attributes in an AWS CodeStar project. For example, you can change a team member's role in the
 * project, or change whether they have remote access to project
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTeamMemberResponse * CodeStarClient::updateTeamMember(const UpdateTeamMemberRequest &request)
{
    return qobject_cast<UpdateTeamMemberResponse *>(send(request));
}

/*!
 * Updates a user's profile in AWS CodeStar. The user profile is not project-specific. Information in the user profile is
 * displayed wherever the user's information appears to other users in AWS CodeStar.
 *
 * @param  request Request to send to AWS CodeStar.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateUserProfileResponse * CodeStarClient::updateUserProfile(const UpdateUserProfileRequest &request)
{
    return qobject_cast<UpdateUserProfileResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  CodeStarClientPrivate
 *
 * @brief  Private implementation for CodeStarClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CodeStarClientPrivate object.
 *
 * @param  q  Pointer to this object's public CodeStarClient instance.
 */
CodeStarClientPrivate::CodeStarClientPrivate(CodeStarClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CodeStar
} // namespace QtAws
