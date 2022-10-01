// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IDENTITYSTORECLIENT_H
#define QTAWS_IDENTITYSTORECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsidentitystoreglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IdentityStore {

class IdentityStoreClientPrivate;
class CreateGroupRequest;
class CreateGroupResponse;
class CreateGroupMembershipRequest;
class CreateGroupMembershipResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteGroupMembershipRequest;
class DeleteGroupMembershipResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DescribeGroupRequest;
class DescribeGroupResponse;
class DescribeGroupMembershipRequest;
class DescribeGroupMembershipResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class GetGroupIdRequest;
class GetGroupIdResponse;
class GetGroupMembershipIdRequest;
class GetGroupMembershipIdResponse;
class GetUserIdRequest;
class GetUserIdResponse;
class IsMemberInGroupsRequest;
class IsMemberInGroupsResponse;
class ListGroupMembershipsRequest;
class ListGroupMembershipsResponse;
class ListGroupMembershipsForMemberRequest;
class ListGroupMembershipsForMemberResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListUsersRequest;
class ListUsersResponse;
class UpdateGroupRequest;
class UpdateGroupResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWSIDENTITYSTORE_EXPORT IdentityStoreClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IdentityStoreClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit IdentityStoreClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateGroupMembershipResponse * createGroupMembership(const CreateGroupMembershipRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteGroupMembershipResponse * deleteGroupMembership(const DeleteGroupMembershipRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeGroupResponse * describeGroup(const DescribeGroupRequest &request);
    DescribeGroupMembershipResponse * describeGroupMembership(const DescribeGroupMembershipRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    GetGroupIdResponse * getGroupId(const GetGroupIdRequest &request);
    GetGroupMembershipIdResponse * getGroupMembershipId(const GetGroupMembershipIdRequest &request);
    GetUserIdResponse * getUserId(const GetUserIdRequest &request);
    IsMemberInGroupsResponse * isMemberInGroups(const IsMemberInGroupsRequest &request);
    ListGroupMembershipsResponse * listGroupMemberships(const ListGroupMembershipsRequest &request);
    ListGroupMembershipsForMemberResponse * listGroupMembershipsForMember(const ListGroupMembershipsForMemberRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(IdentityStoreClient)
    Q_DISABLE_COPY(IdentityStoreClient)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
