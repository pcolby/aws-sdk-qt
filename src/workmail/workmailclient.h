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

#ifndef QTAWS_WORKMAILCLIENT_H
#define QTAWS_WORKMAILCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace WorkMail {

class WorkMailClientPrivate;
class AssociateDelegateToResourceRequest;
class AssociateDelegateToResourceResponse;
class AssociateMemberToGroupRequest;
class AssociateMemberToGroupResponse;
class CreateAliasRequest;
class CreateAliasResponse;
class CreateGroupRequest;
class CreateGroupResponse;
class CreateResourceRequest;
class CreateResourceResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteAliasRequest;
class DeleteAliasResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteMailboxPermissionsRequest;
class DeleteMailboxPermissionsResponse;
class DeleteResourceRequest;
class DeleteResourceResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DeregisterFromWorkMailRequest;
class DeregisterFromWorkMailResponse;
class DescribeGroupRequest;
class DescribeGroupResponse;
class DescribeOrganizationRequest;
class DescribeOrganizationResponse;
class DescribeResourceRequest;
class DescribeResourceResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class DisassociateDelegateFromResourceRequest;
class DisassociateDelegateFromResourceResponse;
class DisassociateMemberFromGroupRequest;
class DisassociateMemberFromGroupResponse;
class GetMailboxDetailsRequest;
class GetMailboxDetailsResponse;
class ListAliasesRequest;
class ListAliasesResponse;
class ListGroupMembersRequest;
class ListGroupMembersResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListMailboxPermissionsRequest;
class ListMailboxPermissionsResponse;
class ListOrganizationsRequest;
class ListOrganizationsResponse;
class ListResourceDelegatesRequest;
class ListResourceDelegatesResponse;
class ListResourcesRequest;
class ListResourcesResponse;
class ListUsersRequest;
class ListUsersResponse;
class PutMailboxPermissionsRequest;
class PutMailboxPermissionsResponse;
class RegisterToWorkMailRequest;
class RegisterToWorkMailResponse;
class ResetPasswordRequest;
class ResetPasswordResponse;
class UpdateMailboxQuotaRequest;
class UpdateMailboxQuotaResponse;
class UpdatePrimaryEmailAddressRequest;
class UpdatePrimaryEmailAddressResponse;
class UpdateResourceRequest;
class UpdateResourceResponse;

class QTAWS_EXPORT WorkMailClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WorkMailClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WorkMailClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
    DeleteMailboxPermissionsResponse * deleteMailboxPermissions(const DeleteMailboxPermissionsRequest &request);
    DeleteResourceResponse * deleteResource(const DeleteResourceRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeregisterFromWorkMailResponse * deregisterFromWorkMail(const DeregisterFromWorkMailRequest &request);
    DescribeGroupResponse * describeGroup(const DescribeGroupRequest &request);
    DescribeOrganizationResponse * describeOrganization(const DescribeOrganizationRequest &request);
    DescribeResourceResponse * describeResource(const DescribeResourceRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    DisassociateDelegateFromResourceResponse * disassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest &request);
    DisassociateMemberFromGroupResponse * disassociateMemberFromGroup(const DisassociateMemberFromGroupRequest &request);
    GetMailboxDetailsResponse * getMailboxDetails(const GetMailboxDetailsRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListGroupMembersResponse * listGroupMembers(const ListGroupMembersRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListMailboxPermissionsResponse * listMailboxPermissions(const ListMailboxPermissionsRequest &request);
    ListOrganizationsResponse * listOrganizations(const ListOrganizationsRequest &request);
    ListResourceDelegatesResponse * listResourceDelegates(const ListResourceDelegatesRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    PutMailboxPermissionsResponse * putMailboxPermissions(const PutMailboxPermissionsRequest &request);
    RegisterToWorkMailResponse * registerToWorkMail(const RegisterToWorkMailRequest &request);
    ResetPasswordResponse * resetPassword(const ResetPasswordRequest &request);
    UpdateMailboxQuotaResponse * updateMailboxQuota(const UpdateMailboxQuotaRequest &request);
    UpdatePrimaryEmailAddressResponse * updatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkMailClient)
    Q_DISABLE_COPY(WorkMailClient)

};

} // namespace WorkMail
} // namespace QtAws

#endif
