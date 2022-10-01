// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
class CreateAvailabilityConfigurationRequest;
class CreateAvailabilityConfigurationResponse;
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
class DeleteAvailabilityConfigurationRequest;
class DeleteAvailabilityConfigurationResponse;
class DeleteEmailMonitoringConfigurationRequest;
class DeleteEmailMonitoringConfigurationResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteMailboxPermissionsRequest;
class DeleteMailboxPermissionsResponse;
class DeleteMobileDeviceAccessOverrideRequest;
class DeleteMobileDeviceAccessOverrideResponse;
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
class DeregisterMailDomainRequest;
class DeregisterMailDomainResponse;
class DescribeEmailMonitoringConfigurationRequest;
class DescribeEmailMonitoringConfigurationResponse;
class DescribeGroupRequest;
class DescribeGroupResponse;
class DescribeInboundDmarcSettingsRequest;
class DescribeInboundDmarcSettingsResponse;
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
class GetMailDomainRequest;
class GetMailDomainResponse;
class GetMailboxDetailsRequest;
class GetMailboxDetailsResponse;
class GetMobileDeviceAccessEffectRequest;
class GetMobileDeviceAccessEffectResponse;
class GetMobileDeviceAccessOverrideRequest;
class GetMobileDeviceAccessOverrideResponse;
class ListAccessControlRulesRequest;
class ListAccessControlRulesResponse;
class ListAliasesRequest;
class ListAliasesResponse;
class ListAvailabilityConfigurationsRequest;
class ListAvailabilityConfigurationsResponse;
class ListGroupMembersRequest;
class ListGroupMembersResponse;
class ListGroupsRequest;
class ListGroupsResponse;
class ListMailDomainsRequest;
class ListMailDomainsResponse;
class ListMailboxExportJobsRequest;
class ListMailboxExportJobsResponse;
class ListMailboxPermissionsRequest;
class ListMailboxPermissionsResponse;
class ListMobileDeviceAccessOverridesRequest;
class ListMobileDeviceAccessOverridesResponse;
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
class PutEmailMonitoringConfigurationRequest;
class PutEmailMonitoringConfigurationResponse;
class PutInboundDmarcSettingsRequest;
class PutInboundDmarcSettingsResponse;
class PutMailboxPermissionsRequest;
class PutMailboxPermissionsResponse;
class PutMobileDeviceAccessOverrideRequest;
class PutMobileDeviceAccessOverrideResponse;
class PutRetentionPolicyRequest;
class PutRetentionPolicyResponse;
class RegisterMailDomainRequest;
class RegisterMailDomainResponse;
class RegisterToWorkMailRequest;
class RegisterToWorkMailResponse;
class ResetPasswordRequest;
class ResetPasswordResponse;
class StartMailboxExportJobRequest;
class StartMailboxExportJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestAvailabilityConfigurationRequest;
class TestAvailabilityConfigurationResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAvailabilityConfigurationRequest;
class UpdateAvailabilityConfigurationResponse;
class UpdateDefaultMailDomainRequest;
class UpdateDefaultMailDomainResponse;
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

    explicit WorkMailClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateDelegateToResourceResponse * associateDelegateToResource(const AssociateDelegateToResourceRequest &request);
    AssociateMemberToGroupResponse * associateMemberToGroup(const AssociateMemberToGroupRequest &request);
    CancelMailboxExportJobResponse * cancelMailboxExportJob(const CancelMailboxExportJobRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateAvailabilityConfigurationResponse * createAvailabilityConfiguration(const CreateAvailabilityConfigurationRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateMobileDeviceAccessRuleResponse * createMobileDeviceAccessRule(const CreateMobileDeviceAccessRuleRequest &request);
    CreateOrganizationResponse * createOrganization(const CreateOrganizationRequest &request);
    CreateResourceResponse * createResource(const CreateResourceRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteAccessControlRuleResponse * deleteAccessControlRule(const DeleteAccessControlRuleRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteAvailabilityConfigurationResponse * deleteAvailabilityConfiguration(const DeleteAvailabilityConfigurationRequest &request);
    DeleteEmailMonitoringConfigurationResponse * deleteEmailMonitoringConfiguration(const DeleteEmailMonitoringConfigurationRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteMailboxPermissionsResponse * deleteMailboxPermissions(const DeleteMailboxPermissionsRequest &request);
    DeleteMobileDeviceAccessOverrideResponse * deleteMobileDeviceAccessOverride(const DeleteMobileDeviceAccessOverrideRequest &request);
    DeleteMobileDeviceAccessRuleResponse * deleteMobileDeviceAccessRule(const DeleteMobileDeviceAccessRuleRequest &request);
    DeleteOrganizationResponse * deleteOrganization(const DeleteOrganizationRequest &request);
    DeleteResourceResponse * deleteResource(const DeleteResourceRequest &request);
    DeleteRetentionPolicyResponse * deleteRetentionPolicy(const DeleteRetentionPolicyRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeregisterFromWorkMailResponse * deregisterFromWorkMail(const DeregisterFromWorkMailRequest &request);
    DeregisterMailDomainResponse * deregisterMailDomain(const DeregisterMailDomainRequest &request);
    DescribeEmailMonitoringConfigurationResponse * describeEmailMonitoringConfiguration(const DescribeEmailMonitoringConfigurationRequest &request);
    DescribeGroupResponse * describeGroup(const DescribeGroupRequest &request);
    DescribeInboundDmarcSettingsResponse * describeInboundDmarcSettings(const DescribeInboundDmarcSettingsRequest &request);
    DescribeMailboxExportJobResponse * describeMailboxExportJob(const DescribeMailboxExportJobRequest &request);
    DescribeOrganizationResponse * describeOrganization(const DescribeOrganizationRequest &request);
    DescribeResourceResponse * describeResource(const DescribeResourceRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    DisassociateDelegateFromResourceResponse * disassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest &request);
    DisassociateMemberFromGroupResponse * disassociateMemberFromGroup(const DisassociateMemberFromGroupRequest &request);
    GetAccessControlEffectResponse * getAccessControlEffect(const GetAccessControlEffectRequest &request);
    GetDefaultRetentionPolicyResponse * getDefaultRetentionPolicy(const GetDefaultRetentionPolicyRequest &request);
    GetMailDomainResponse * getMailDomain(const GetMailDomainRequest &request);
    GetMailboxDetailsResponse * getMailboxDetails(const GetMailboxDetailsRequest &request);
    GetMobileDeviceAccessEffectResponse * getMobileDeviceAccessEffect(const GetMobileDeviceAccessEffectRequest &request);
    GetMobileDeviceAccessOverrideResponse * getMobileDeviceAccessOverride(const GetMobileDeviceAccessOverrideRequest &request);
    ListAccessControlRulesResponse * listAccessControlRules(const ListAccessControlRulesRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListAvailabilityConfigurationsResponse * listAvailabilityConfigurations(const ListAvailabilityConfigurationsRequest &request);
    ListGroupMembersResponse * listGroupMembers(const ListGroupMembersRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListMailDomainsResponse * listMailDomains(const ListMailDomainsRequest &request);
    ListMailboxExportJobsResponse * listMailboxExportJobs(const ListMailboxExportJobsRequest &request);
    ListMailboxPermissionsResponse * listMailboxPermissions(const ListMailboxPermissionsRequest &request);
    ListMobileDeviceAccessOverridesResponse * listMobileDeviceAccessOverrides(const ListMobileDeviceAccessOverridesRequest &request);
    ListMobileDeviceAccessRulesResponse * listMobileDeviceAccessRules(const ListMobileDeviceAccessRulesRequest &request);
    ListOrganizationsResponse * listOrganizations(const ListOrganizationsRequest &request);
    ListResourceDelegatesResponse * listResourceDelegates(const ListResourceDelegatesRequest &request);
    ListResourcesResponse * listResources(const ListResourcesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    PutAccessControlRuleResponse * putAccessControlRule(const PutAccessControlRuleRequest &request);
    PutEmailMonitoringConfigurationResponse * putEmailMonitoringConfiguration(const PutEmailMonitoringConfigurationRequest &request);
    PutInboundDmarcSettingsResponse * putInboundDmarcSettings(const PutInboundDmarcSettingsRequest &request);
    PutMailboxPermissionsResponse * putMailboxPermissions(const PutMailboxPermissionsRequest &request);
    PutMobileDeviceAccessOverrideResponse * putMobileDeviceAccessOverride(const PutMobileDeviceAccessOverrideRequest &request);
    PutRetentionPolicyResponse * putRetentionPolicy(const PutRetentionPolicyRequest &request);
    RegisterMailDomainResponse * registerMailDomain(const RegisterMailDomainRequest &request);
    RegisterToWorkMailResponse * registerToWorkMail(const RegisterToWorkMailRequest &request);
    ResetPasswordResponse * resetPassword(const ResetPasswordRequest &request);
    StartMailboxExportJobResponse * startMailboxExportJob(const StartMailboxExportJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestAvailabilityConfigurationResponse * testAvailabilityConfiguration(const TestAvailabilityConfigurationRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAvailabilityConfigurationResponse * updateAvailabilityConfiguration(const UpdateAvailabilityConfigurationRequest &request);
    UpdateDefaultMailDomainResponse * updateDefaultMailDomain(const UpdateDefaultMailDomainRequest &request);
    UpdateMailboxQuotaResponse * updateMailboxQuota(const UpdateMailboxQuotaRequest &request);
    UpdateMobileDeviceAccessRuleResponse * updateMobileDeviceAccessRule(const UpdateMobileDeviceAccessRuleRequest &request);
    UpdatePrimaryEmailAddressResponse * updatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest &request);
    UpdateResourceResponse * updateResource(const UpdateResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkMailClient)
    Q_DISABLE_COPY(WorkMailClient)

};

} // namespace WorkMail
} // namespace QtAws

#endif
