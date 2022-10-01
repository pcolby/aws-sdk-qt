// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARCLIENT_H
#define QTAWS_CODESTARCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscodestarglobal.h"

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

class QTAWSCODESTAR_EXPORT CodeStarClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeStarClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CodeStarClient(
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

private:
    Q_DECLARE_PRIVATE(CodeStarClient)
    Q_DISABLE_COPY(CodeStarClient)

};

} // namespace CodeStar
} // namespace QtAws

#endif
