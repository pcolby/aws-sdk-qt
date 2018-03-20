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

#include "codestarclient.h"
#include "codestarclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CodeStar {

/**
 * @class  CodeStarClient
 *
 * @brief  Client for AWS CodeStar
 *
 * <fullname>AWS CodeStar</fullname>
 *
 * This is the API reference for AWS CodeStar. This reference provides descriptions of the operations and data types for
 * the AWS CodeStar API along with usage
 *
 * examples>
 *
 * You can use the AWS CodeStar API to work
 *
 * with>
 *
 * Projects and their resources, by calling the
 *
 * following> <ul> <li>
 *
 * <code>DeleteProject</code>, which deletes a
 *
 * project> </li> <li>
 *
 * <code>DescribeProject</code>, which lists the attributes of a
 *
 * project> </li> <li>
 *
 * <code>ListProjects</code>, which lists all projects associated with your AWS
 *
 * account> </li> <li>
 *
 * <code>ListResources</code>, which lists the resources associated with a
 *
 * project> </li> <li>
 *
 * <code>ListTagsForProject</code>, which lists the tags associated with a
 *
 * project> </li> <li>
 *
 * <code>TagProject</code>, which adds tags to a
 *
 * project> </li> <li>
 *
 * <code>UntagProject</code>, which removes tags from a
 *
 * project> </li> <li>
 *
 * <code>UpdateProject</code>, which updates the attributes of a
 *
 * project> </li> </ul>
 *
 * Teams and team members, by calling the
 *
 * following> <ul> <li>
 *
 * <code>AssociateTeamMember</code>, which adds an IAM user to the team for a
 *
 * project> </li> <li>
 *
 * <code>DisassociateTeamMember</code>, which removes an IAM user from the team for a
 *
 * project> </li> <li>
 *
 * <code>ListTeamMembers</code>, which lists all the IAM users in the team for a project, including their roles and
 *
 * attributes> </li> <li>
 *
 * <code>UpdateTeamMember</code>, which updates a team member's attributes in a
 *
 * project> </li> </ul>
 *
 * Users, by calling the
 *
 * following> <ul> <li>
 *
 * <code>CreateUserProfile</code>, which creates a user profile that contains data associated with the user across all
 *
 * projects> </li> <li>
 *
 * <code>DeleteUserProfile</code>, which deletes all user profile information across all
 *
 * projects> </li> <li>
 *
 * <code>DescribeUserProfile</code>, which describes the profile of a
 *
 * user> </li> <li>
 *
 * <code>ListUserProfiles</code>, which lists all user
 *
 * profiles> </li> <li>
 *
 * <code>UpdateUserProfile</code>, which updates the profile for a
 */

/**
 * @brief  Constructs a new CodeStarClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CodeStarClient::CodeStarClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeStarClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new CodeStarClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CodeStarClient::CodeStarClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeStarClientPrivate(this), parent)
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

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
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
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  CodeStarClientPrivate
 *
 * @brief  Private implementation for CodeStarClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeStarClientPrivate object.
 *
 * @param  q  Pointer to this object's public CodeStarClient instance.
 */
CodeStarClientPrivate::CodeStarClientPrivate(CodeStarClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CodeStar
} // namespace AWS
