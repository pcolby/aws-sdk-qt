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

#ifndef QTAWS_QUICKSIGHTCLIENT_H
#define QTAWS_QUICKSIGHTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace QuickSight {

class QuickSightClientPrivate;
class CreateGroupRequest;
class CreateGroupResponse;
class CreateGroupMembershipRequest;
class CreateGroupMembershipResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteGroupMembershipRequest;
class DeleteGroupMembershipResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DeleteUserByPrincipalIdRequest;
class DeleteUserByPrincipalIdResponse;
class DescribeGroupRequest;
class DescribeGroupResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class GetDashboardEmbedUrlRequest;
class GetDashboardEmbedUrlResponse;
class ListGroupMembershipsRequest;
class ListGroupMembershipsResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListUserGroupsRequest;
class ListUserGroupsResponse;
class ListUsersRequest;
class ListUsersResponse;
class RegisterUserRequest;
class RegisterUserResponse;
class UpdateGroupRequest;
class UpdateGroupResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWS_EXPORT QuickSightClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    QuickSightClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    QuickSightClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateGroupMembershipResponse * createGroupMembership(const CreateGroupMembershipRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteGroupMembershipResponse * deleteGroupMembership(const DeleteGroupMembershipRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeleteUserByPrincipalIdResponse * deleteUserByPrincipalId(const DeleteUserByPrincipalIdRequest &request);
    DescribeGroupResponse * describeGroup(const DescribeGroupRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    GetDashboardEmbedUrlResponse * getDashboardEmbedUrl(const GetDashboardEmbedUrlRequest &request);
    ListGroupMembershipsResponse * listGroupMemberships(const ListGroupMembershipsRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListUserGroupsResponse * listUserGroups(const ListUserGroupsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    RegisterUserResponse * registerUser(const RegisterUserRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(QuickSightClient)
    Q_DISABLE_COPY(QuickSightClient)

};

} // namespace QuickSight
} // namespace QtAws

#endif
