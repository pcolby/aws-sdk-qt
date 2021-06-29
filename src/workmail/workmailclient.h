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

#ifndef QTAWS_WORKMAILCLIENT_H
#define QTAWS_WORKMAILCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsworkmailglobal.h"

class QNetworkReply;

namespace QtAws {
namespace WorkMail {

class WorkMailClientPrivate;
class AssociateDelegateToResourceRequest;
class AssociateDelegateToResourceResponse;
class AssociateMemberToGroupRequest;
class AssociateMemberToGroupResponse;
class CancelMailboxExportJobRequest;
class CancelMailboxExportJobResponse;
class CreateAliasRequest;
class CreateAliasResponse;
class CreateGroupRequest;
class CreateGroupResponse;
class CreateMobileDeviceAccessRuleRequest;
class CreateMobileDeviceAccessRuleResponse;
class CreateOrganizationRequest;
class CreateOrganizationResponse;
class CreateResourceRequest;
class CreateResourceResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteAccessControlRuleRequest;
class DeleteAccessControlRuleResponse;
class DeleteAliasRequest;
class DeleteAliasResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteMailboxPermissionsRequest;
class DeleteMailboxPermissionsResponse;
class DeleteMobileDeviceAccessRuleRequest;
class DeleteMobileDeviceAccessRuleResponse;
class DeleteOrganizationRequest;
class DeleteOrganizationResponse;
class DeleteResourceRequest;
class DeleteResourceResponse;
class DeleteRetentionPolicyRequest;
class DeleteRetentionPolicyResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DeregisterFromWorkMailRequest;
class DeregisterFromWorkMailResponse;
class DescribeGroupRequest;
class DescribeGroupResponse;
class DescribeMailboxExportJobRequest;
class DescribeMailboxExportJobResponse;
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
class GetAccessControlEffectRequest;
class GetAccessControlEffectResponse;
class GetDefaultRetentionPolicyRequest;
class GetDefaultRetentionPolicyResponse;
class GetMailboxDetailsRequest;
class GetMailboxDetailsResponse;
class GetMobileDeviceAccessEffectRequest;
class GetMobileDeviceAccessEffectResponse;
class ListAccessControlRulesRequest;
class ListAccessControlRulesResponse;
class ListAliasesRequest;
class ListAliasesResponse;
class ListGroupMembersRequest;
class ListGroupMembersResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListMailboxExportJobsRequest;
class ListMailboxExportJobsResponse;
class ListMailboxPermissionsRequest;
class ListMailboxPermissionsResponse;
class ListMobileDeviceAccessRulesRequest;
class ListMobileDeviceAccessRulesResponse;
class ListOrganizationsRequest;
class ListOrganizationsResponse;
class ListResourceDelegatesRequest;
class ListResourceDelegatesResponse;
class ListResourcesRequest;
class ListResourcesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListUsersRequest;
class ListUsersResponse;
class PutAccessControlRuleRequest;
class PutAccessControlRuleResponse;
class PutMailboxPermissionsRequest;
class PutMailboxPermissionsResponse;
class PutRetentionPolicyRequest;
class PutRetentionPolicyResponse;
class RegisterToWorkMailRequest;
class RegisterToWorkMailResponse;
class ResetPasswordRequest;
class ResetPasswordResponse;
class StartMailboxExportJobRequest;
class StartMailboxExportJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateMailboxQuotaRequest;
class UpdateMailboxQuotaResponse;
class UpdateMobileDeviceAccessRuleRequest;
class UpdateMobileDeviceAccessRuleResponse;
class UpdatePrimaryEmailAddressRequest;
class UpdatePrimaryEmailAddressResponse;
class UpdateResourceRequest;
class UpdateResourceResponse;

class QTAWSWORKMAIL_EXPORT WorkMailClient : public QtAws::Core::AwsAbstractClient {
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
    CancelMailboxExportJobResponse * cancelMailboxExportJob(const CancelMailboxExportJobRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateMobileDeviceAccessRuleResponse * createMobileDeviceAccessRule(const CreateMobileDeviceAccessRuleRequest &request);
    CreateOrganizationResponse * createOrganization(const CreateOrganizationRequest &request);
    CreateResourceResponse * createResource(const CreateResourceRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteAccessControlRuleResponse * deleteAccessControlRule(const DeleteAccessControlRuleRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteMailboxPermissionsResponse * deleteMailboxPermissions(const DeleteMailboxPermissionsRequest &request);
    DeleteMobileDeviceAccessRuleResponse * deleteMobileDeviceAccessRule(const DeleteMobileDeviceAccessRuleRequest &request);
    DeleteOrganizationResponse * deleteOrganization(const DeleteOrganizationRequest &request);
    DeleteResourceResponse * deleteResource(const DeleteResourceRequest &request);
    DeleteRetentionPolicyResponse * deleteRetentionPolicy(const DeleteRetentionPolicyRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeregisterFromWorkMailResponse * deregisterFromWorkMail(const DeregisterFromWorkMailRequest &request);
    DescribeGroupResponse * describeGroup(const DescribeGroupRequest &request);
    DescribeMailboxExportJobResponse * describeMailboxExportJob(const DescribeMailboxExportJobRequest &request);
    DescribeOrganizationResponse * describeOrganization(const DescribeOrganizationRequest &request);
    DescribeResourceResponse * describeResource(const DescribeResourceRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    DisassociateDelegateFromResourceResponse * disassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest &request);
    DisassociateMemberFromGroupResponse * disassociateMemberFromGroup(const DisassociateMemberFromGroupRequest &request);
    GetAccessControlEffectResponse * getAccessControlEffect(const GetAccessControlEffectRequest &request);
    GetDefaultRetentionPolicyResponse * getDefaultRetentionPolicy(const GetDefaultRetentionPolicyRequest &request);
    GetMailboxDetailsResponse * getMailboxDetails(const GetMailboxDetailsRequest &request);
    GetMobileDeviceAccessEffectResponse * getMobileDeviceAccessEffect(const GetMobileDeviceAccessEffectRequest &request);
    ListAccessControlRulesResponse * listAccessControlRules(const ListAccessControlRulesRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListGroupMembersResponse * listGroupMembers(const ListGroupMembersRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListMailboxExportJobsResponse * listMailboxExportJobs(const ListMailboxExportJobsRequest &request);
    ListMailboxPermissionsResponse * listMailboxPermissions(const ListMailboxPermissionsRequest &request);
    ListMobileDeviceAccessRulesResponse * listMobileDeviceAccessRules(const ListMobileDeviceAccessRulesRequest &request);
    ListOrganizationsResponse * listOrganizations(const ListOrganizationsRequest &request);
    ListResourceDelegatesResponse * listResourceDelegates(const ListResourceDelegatesRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    PutAccessControlRuleResponse * putAccessControlRule(const PutAccessControlRuleRequest &request);
    PutMailboxPermissionsResponse * putMailboxPermissions(const PutMailboxPermissionsRequest &request);
    PutRetentionPolicyResponse * putRetentionPolicy(const PutRetentionPolicyRequest &request);
    RegisterToWorkMailResponse * registerToWorkMail(const RegisterToWorkMailRequest &request);
    ResetPasswordResponse * resetPassword(const ResetPasswordRequest &request);
    StartMailboxExportJobResponse * startMailboxExportJob(const StartMailboxExportJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateMailboxQuotaResponse * updateMailboxQuota(const UpdateMailboxQuotaRequest &request);
    UpdateMobileDeviceAccessRuleResponse * updateMobileDeviceAccessRule(const UpdateMobileDeviceAccessRuleRequest &request);
    UpdatePrimaryEmailAddressResponse * updatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);

protected:
    /// @cond internal
    WorkMailClientPrivate * const d_ptr; ///< Internal d-pointer.
    WorkMailClient(WorkMailClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(WorkMailClient)
    Q_DISABLE_COPY(WorkMailClient)

};

} // namespace WorkMail
} // namespace QtAws

#endif
