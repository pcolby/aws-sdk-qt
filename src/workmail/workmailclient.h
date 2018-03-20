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

#ifndef QTAWS_WORKMAILCLIENT_H
#define QTAWS_WORKMAILCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace WorkMail {

class WorkMailClientPrivate;
class AssociateDelegateToResourceResponse;
class AssociateMemberToGroupResponse;
class CreateAliasResponse;
class CreateGroupResponse;
class CreateResourceResponse;
class CreateUserResponse;
class DeleteAliasResponse;
class DeleteGroupResponse;
class DeleteResourceResponse;
class DeleteUserResponse;
class DeregisterFromWorkMailResponse;
class DescribeGroupResponse;
class DescribeOrganizationResponse;
class DescribeResourceResponse;
class DescribeUserResponse;
class DisassociateDelegateFromResourceResponse;
class DisassociateMemberFromGroupResponse;
class ListAliasesResponse;
class ListGroupMembersResponse;
class ListGroupsResponse;
class ListOrganizationsResponse;
class ListResourceDelegatesResponse;
class ListResourcesResponse;
class ListUsersResponse;
class RegisterToWorkMailResponse;
class ResetPasswordResponse;
class UpdatePrimaryEmailAddressResponse;
class UpdateResourceResponse;

class QTAWS_EXPORT WorkMailClient : public AwsAbstractClient {
    Q_OBJECT

public:
    WorkMailClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WorkMailClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateDelegateToResourceResponse * associateDelegateToResource(const AssociateDelegateToResourceRequest &request);
    AssociateMemberToGroupResponse * associateMemberToGroup(const AssociateMemberToGroupRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateResourceResponse * createResource(const CreateResourceRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteResourceResponse * deleteResource(const DeleteResourceRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeregisterFromWorkMailResponse * deregisterFromWorkMail(const DeregisterFromWorkMailRequest &request);
    DescribeGroupResponse * describeGroup(const DescribeGroupRequest &request);
    DescribeOrganizationResponse * describeOrganization(const DescribeOrganizationRequest &request);
    DescribeResourceResponse * describeResource(const DescribeResourceRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    DisassociateDelegateFromResourceResponse * disassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest &request);
    DisassociateMemberFromGroupResponse * disassociateMemberFromGroup(const DisassociateMemberFromGroupRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListGroupMembersResponse * listGroupMembers(const ListGroupMembersRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListOrganizationsResponse * listOrganizations(const ListOrganizationsRequest &request);
    ListResourceDelegatesResponse * listResourceDelegates(const ListResourceDelegatesRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    RegisterToWorkMailResponse * registerToWorkMail(const RegisterToWorkMailRequest &request);
    ResetPasswordResponse * resetPassword(const ResetPasswordRequest &request);
    UpdatePrimaryEmailAddressResponse * updatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkMailClient)
    Q_DISABLE_COPY(WorkMailClient)

};

} // namespace WorkMail
} // namespace AWS

#endif
