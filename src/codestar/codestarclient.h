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

#ifndef QTAWS_CODESTARCLIENT_H
#define QTAWS_CODESTARCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CodeStar {

class CodeStarClientPrivate;
class AssociateTeamMemberRequest;
class AssociateTeamMemberResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class CreateUserProfileRequest;
class CreateUserProfileResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteUserProfileRequest;
class DeleteUserProfileResponse;
class DescribeProjectRequest;
class DescribeProjectResponse;
class DescribeUserProfileRequest;
class DescribeUserProfileResponse;
class DisassociateTeamMemberRequest;
class DisassociateTeamMemberResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListResourcesRequest;
class ListResourcesResponse;
class ListTagsForProjectRequest;
class ListTagsForProjectResponse;
class ListTeamMembersRequest;
class ListTeamMembersResponse;
class ListUserProfilesRequest;
class ListUserProfilesResponse;
class TagProjectRequest;
class TagProjectResponse;
class UntagProjectRequest;
class UntagProjectResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;
class UpdateTeamMemberRequest;
class UpdateTeamMemberResponse;
class UpdateUserProfileRequest;
class UpdateUserProfileResponse;

class QTAWS_EXPORT CodeStarClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeStarClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeStarClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateTeamMemberResponse * associateTeamMember(const AssociateTeamMemberRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateUserProfileResponse * createUserProfile(const CreateUserProfileRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteUserProfileResponse * deleteUserProfile(const DeleteUserProfileRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    DescribeUserProfileResponse * describeUserProfile(const DescribeUserProfileRequest &request);
    DisassociateTeamMemberResponse * disassociateTeamMember(const DisassociateTeamMemberRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    ListTagsForProjectResponse * listTagsForProject(const ListTagsForProjectRequest &request);
    ListTeamMembersResponse * listTeamMembers(const ListTeamMembersRequest &request);
    ListUserProfilesResponse * listUserProfiles(const ListUserProfilesRequest &request);
    TagProjectResponse * tagProject(const TagProjectRequest &request);
    UntagProjectResponse * untagProject(const UntagProjectRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);
    UpdateTeamMemberResponse * updateTeamMember(const UpdateTeamMemberRequest &request);
    UpdateUserProfileResponse * updateUserProfile(const UpdateUserProfileRequest &request);

protected:
    /// @cond internal
    CodeStarClientPrivate * const d_ptr; ///< Internal d-pointer.
    CodeStarClient(CodeStarClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CodeStarClient)
    Q_DISABLE_COPY(CodeStarClient)

};

} // namespace CodeStar
} // namespace QtAws

#endif
