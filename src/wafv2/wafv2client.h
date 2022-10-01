// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFV2CLIENT_H
#define QTAWS_WAFV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawswafv2global.h"

class QNetworkReply;

namespace QtAws {
namespace Wafv2 {

class Wafv2ClientPrivate;
class AssociateWebACLRequest;
class AssociateWebACLResponse;
class CheckCapacityRequest;
class CheckCapacityResponse;
class CreateIPSetRequest;
class CreateIPSetResponse;
class CreateRegexPatternSetRequest;
class CreateRegexPatternSetResponse;
class CreateRuleGroupRequest;
class CreateRuleGroupResponse;
class CreateWebACLRequest;
class CreateWebACLResponse;
class DeleteFirewallManagerRuleGroupsRequest;
class DeleteFirewallManagerRuleGroupsResponse;
class DeleteIPSetRequest;
class DeleteIPSetResponse;
class DeleteLoggingConfigurationRequest;
class DeleteLoggingConfigurationResponse;
class DeletePermissionPolicyRequest;
class DeletePermissionPolicyResponse;
class DeleteRegexPatternSetRequest;
class DeleteRegexPatternSetResponse;
class DeleteRuleGroupRequest;
class DeleteRuleGroupResponse;
class DeleteWebACLRequest;
class DeleteWebACLResponse;
class DescribeManagedRuleGroupRequest;
class DescribeManagedRuleGroupResponse;
class DisassociateWebACLRequest;
class DisassociateWebACLResponse;
class GenerateMobileSdkReleaseUrlRequest;
class GenerateMobileSdkReleaseUrlResponse;
class GetIPSetRequest;
class GetIPSetResponse;
class GetLoggingConfigurationRequest;
class GetLoggingConfigurationResponse;
class GetManagedRuleSetRequest;
class GetManagedRuleSetResponse;
class GetMobileSdkReleaseRequest;
class GetMobileSdkReleaseResponse;
class GetPermissionPolicyRequest;
class GetPermissionPolicyResponse;
class GetRateBasedStatementManagedKeysRequest;
class GetRateBasedStatementManagedKeysResponse;
class GetRegexPatternSetRequest;
class GetRegexPatternSetResponse;
class GetRuleGroupRequest;
class GetRuleGroupResponse;
class GetSampledRequestsRequest;
class GetSampledRequestsResponse;
class GetWebACLRequest;
class GetWebACLResponse;
class GetWebACLForResourceRequest;
class GetWebACLForResourceResponse;
class ListAvailableManagedRuleGroupVersionsRequest;
class ListAvailableManagedRuleGroupVersionsResponse;
class ListAvailableManagedRuleGroupsRequest;
class ListAvailableManagedRuleGroupsResponse;
class ListIPSetsRequest;
class ListIPSetsResponse;
class ListLoggingConfigurationsRequest;
class ListLoggingConfigurationsResponse;
class ListManagedRuleSetsRequest;
class ListManagedRuleSetsResponse;
class ListMobileSdkReleasesRequest;
class ListMobileSdkReleasesResponse;
class ListRegexPatternSetsRequest;
class ListRegexPatternSetsResponse;
class ListResourcesForWebACLRequest;
class ListResourcesForWebACLResponse;
class ListRuleGroupsRequest;
class ListRuleGroupsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWebACLsRequest;
class ListWebACLsResponse;
class PutLoggingConfigurationRequest;
class PutLoggingConfigurationResponse;
class PutManagedRuleSetVersionsRequest;
class PutManagedRuleSetVersionsResponse;
class PutPermissionPolicyRequest;
class PutPermissionPolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateIPSetRequest;
class UpdateIPSetResponse;
class UpdateManagedRuleSetVersionExpiryDateRequest;
class UpdateManagedRuleSetVersionExpiryDateResponse;
class UpdateRegexPatternSetRequest;
class UpdateRegexPatternSetResponse;
class UpdateRuleGroupRequest;
class UpdateRuleGroupResponse;
class UpdateWebACLRequest;
class UpdateWebACLResponse;

class QTAWSWAFV2_EXPORT Wafv2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Wafv2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Wafv2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateWebACLResponse * associateWebACL(const AssociateWebACLRequest &request);
    CheckCapacityResponse * checkCapacity(const CheckCapacityRequest &request);
    CreateIPSetResponse * createIPSet(const CreateIPSetRequest &request);
    CreateRegexPatternSetResponse * createRegexPatternSet(const CreateRegexPatternSetRequest &request);
    CreateRuleGroupResponse * createRuleGroup(const CreateRuleGroupRequest &request);
    CreateWebACLResponse * createWebACL(const CreateWebACLRequest &request);
    DeleteFirewallManagerRuleGroupsResponse * deleteFirewallManagerRuleGroups(const DeleteFirewallManagerRuleGroupsRequest &request);
    DeleteIPSetResponse * deleteIPSet(const DeleteIPSetRequest &request);
    DeleteLoggingConfigurationResponse * deleteLoggingConfiguration(const DeleteLoggingConfigurationRequest &request);
    DeletePermissionPolicyResponse * deletePermissionPolicy(const DeletePermissionPolicyRequest &request);
    DeleteRegexPatternSetResponse * deleteRegexPatternSet(const DeleteRegexPatternSetRequest &request);
    DeleteRuleGroupResponse * deleteRuleGroup(const DeleteRuleGroupRequest &request);
    DeleteWebACLResponse * deleteWebACL(const DeleteWebACLRequest &request);
    DescribeManagedRuleGroupResponse * describeManagedRuleGroup(const DescribeManagedRuleGroupRequest &request);
    DisassociateWebACLResponse * disassociateWebACL(const DisassociateWebACLRequest &request);
    GenerateMobileSdkReleaseUrlResponse * generateMobileSdkReleaseUrl(const GenerateMobileSdkReleaseUrlRequest &request);
    GetIPSetResponse * getIPSet(const GetIPSetRequest &request);
    GetLoggingConfigurationResponse * getLoggingConfiguration(const GetLoggingConfigurationRequest &request);
    GetManagedRuleSetResponse * getManagedRuleSet(const GetManagedRuleSetRequest &request);
    GetMobileSdkReleaseResponse * getMobileSdkRelease(const GetMobileSdkReleaseRequest &request);
    GetPermissionPolicyResponse * getPermissionPolicy(const GetPermissionPolicyRequest &request);
    GetRateBasedStatementManagedKeysResponse * getRateBasedStatementManagedKeys(const GetRateBasedStatementManagedKeysRequest &request);
    GetRegexPatternSetResponse * getRegexPatternSet(const GetRegexPatternSetRequest &request);
    GetRuleGroupResponse * getRuleGroup(const GetRuleGroupRequest &request);
    GetSampledRequestsResponse * getSampledRequests(const GetSampledRequestsRequest &request);
    GetWebACLResponse * getWebACL(const GetWebACLRequest &request);
    GetWebACLForResourceResponse * getWebACLForResource(const GetWebACLForResourceRequest &request);
    ListAvailableManagedRuleGroupVersionsResponse * listAvailableManagedRuleGroupVersions(const ListAvailableManagedRuleGroupVersionsRequest &request);
    ListAvailableManagedRuleGroupsResponse * listAvailableManagedRuleGroups(const ListAvailableManagedRuleGroupsRequest &request);
    ListIPSetsResponse * listIPSets(const ListIPSetsRequest &request);
    ListLoggingConfigurationsResponse * listLoggingConfigurations(const ListLoggingConfigurationsRequest &request);
    ListManagedRuleSetsResponse * listManagedRuleSets(const ListManagedRuleSetsRequest &request);
    ListMobileSdkReleasesResponse * listMobileSdkReleases(const ListMobileSdkReleasesRequest &request);
    ListRegexPatternSetsResponse * listRegexPatternSets(const ListRegexPatternSetsRequest &request);
    ListResourcesForWebACLResponse * listResourcesForWebACL(const ListResourcesForWebACLRequest &request);
    ListRuleGroupsResponse * listRuleGroups(const ListRuleGroupsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWebACLsResponse * listWebACLs(const ListWebACLsRequest &request);
    PutLoggingConfigurationResponse * putLoggingConfiguration(const PutLoggingConfigurationRequest &request);
    PutManagedRuleSetVersionsResponse * putManagedRuleSetVersions(const PutManagedRuleSetVersionsRequest &request);
    PutPermissionPolicyResponse * putPermissionPolicy(const PutPermissionPolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateIPSetResponse * updateIPSet(const UpdateIPSetRequest &request);
    UpdateManagedRuleSetVersionExpiryDateResponse * updateManagedRuleSetVersionExpiryDate(const UpdateManagedRuleSetVersionExpiryDateRequest &request);
    UpdateRegexPatternSetResponse * updateRegexPatternSet(const UpdateRegexPatternSetRequest &request);
    UpdateRuleGroupResponse * updateRuleGroup(const UpdateRuleGroupRequest &request);
    UpdateWebACLResponse * updateWebACL(const UpdateWebACLRequest &request);

private:
    Q_DECLARE_PRIVATE(Wafv2Client)
    Q_DISABLE_COPY(Wafv2Client)

};

} // namespace Wafv2
} // namespace QtAws

#endif
