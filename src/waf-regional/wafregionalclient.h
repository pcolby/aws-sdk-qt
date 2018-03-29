/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_WAFREGIONALCLIENT_H
#define QTAWS_WAFREGIONALCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace WAFRegional {

class WAFRegionalClientPrivate;
class AssociateWebACLRequest;
class AssociateWebACLResponse;
class CreateByteMatchSetRequest;
class CreateByteMatchSetResponse;
class CreateGeoMatchSetRequest;
class CreateGeoMatchSetResponse;
class CreateIPSetRequest;
class CreateIPSetResponse;
class CreateRateBasedRuleRequest;
class CreateRateBasedRuleResponse;
class CreateRegexMatchSetRequest;
class CreateRegexMatchSetResponse;
class CreateRegexPatternSetRequest;
class CreateRegexPatternSetResponse;
class CreateRuleRequest;
class CreateRuleResponse;
class CreateRuleGroupRequest;
class CreateRuleGroupResponse;
class CreateSizeConstraintSetRequest;
class CreateSizeConstraintSetResponse;
class CreateSqlInjectionMatchSetRequest;
class CreateSqlInjectionMatchSetResponse;
class CreateWebACLRequest;
class CreateWebACLResponse;
class CreateXssMatchSetRequest;
class CreateXssMatchSetResponse;
class DeleteByteMatchSetRequest;
class DeleteByteMatchSetResponse;
class DeleteGeoMatchSetRequest;
class DeleteGeoMatchSetResponse;
class DeleteIPSetRequest;
class DeleteIPSetResponse;
class DeletePermissionPolicyRequest;
class DeletePermissionPolicyResponse;
class DeleteRateBasedRuleRequest;
class DeleteRateBasedRuleResponse;
class DeleteRegexMatchSetRequest;
class DeleteRegexMatchSetResponse;
class DeleteRegexPatternSetRequest;
class DeleteRegexPatternSetResponse;
class DeleteRuleRequest;
class DeleteRuleResponse;
class DeleteRuleGroupRequest;
class DeleteRuleGroupResponse;
class DeleteSizeConstraintSetRequest;
class DeleteSizeConstraintSetResponse;
class DeleteSqlInjectionMatchSetRequest;
class DeleteSqlInjectionMatchSetResponse;
class DeleteWebACLRequest;
class DeleteWebACLResponse;
class DeleteXssMatchSetRequest;
class DeleteXssMatchSetResponse;
class DisassociateWebACLRequest;
class DisassociateWebACLResponse;
class GetByteMatchSetRequest;
class GetByteMatchSetResponse;
class GetChangeTokenRequest;
class GetChangeTokenResponse;
class GetChangeTokenStatusRequest;
class GetChangeTokenStatusResponse;
class GetGeoMatchSetRequest;
class GetGeoMatchSetResponse;
class GetIPSetRequest;
class GetIPSetResponse;
class GetPermissionPolicyRequest;
class GetPermissionPolicyResponse;
class GetRateBasedRuleRequest;
class GetRateBasedRuleResponse;
class GetRateBasedRuleManagedKeysRequest;
class GetRateBasedRuleManagedKeysResponse;
class GetRegexMatchSetRequest;
class GetRegexMatchSetResponse;
class GetRegexPatternSetRequest;
class GetRegexPatternSetResponse;
class GetRuleRequest;
class GetRuleResponse;
class GetRuleGroupRequest;
class GetRuleGroupResponse;
class GetSampledRequestsRequest;
class GetSampledRequestsResponse;
class GetSizeConstraintSetRequest;
class GetSizeConstraintSetResponse;
class GetSqlInjectionMatchSetRequest;
class GetSqlInjectionMatchSetResponse;
class GetWebACLRequest;
class GetWebACLResponse;
class GetWebACLForResourceRequest;
class GetWebACLForResourceResponse;
class GetXssMatchSetRequest;
class GetXssMatchSetResponse;
class ListActivatedRulesInRuleGroupRequest;
class ListActivatedRulesInRuleGroupResponse;
class ListByteMatchSetsRequest;
class ListByteMatchSetsResponse;
class ListGeoMatchSetsRequest;
class ListGeoMatchSetsResponse;
class ListIPSetsRequest;
class ListIPSetsResponse;
class ListRateBasedRulesRequest;
class ListRateBasedRulesResponse;
class ListRegexMatchSetsRequest;
class ListRegexMatchSetsResponse;
class ListRegexPatternSetsRequest;
class ListRegexPatternSetsResponse;
class ListResourcesForWebACLRequest;
class ListResourcesForWebACLResponse;
class ListRuleGroupsRequest;
class ListRuleGroupsResponse;
class ListRulesRequest;
class ListRulesResponse;
class ListSizeConstraintSetsRequest;
class ListSizeConstraintSetsResponse;
class ListSqlInjectionMatchSetsRequest;
class ListSqlInjectionMatchSetsResponse;
class ListSubscribedRuleGroupsRequest;
class ListSubscribedRuleGroupsResponse;
class ListWebACLsRequest;
class ListWebACLsResponse;
class ListXssMatchSetsRequest;
class ListXssMatchSetsResponse;
class PutPermissionPolicyRequest;
class PutPermissionPolicyResponse;
class UpdateByteMatchSetRequest;
class UpdateByteMatchSetResponse;
class UpdateGeoMatchSetRequest;
class UpdateGeoMatchSetResponse;
class UpdateIPSetRequest;
class UpdateIPSetResponse;
class UpdateRateBasedRuleRequest;
class UpdateRateBasedRuleResponse;
class UpdateRegexMatchSetRequest;
class UpdateRegexMatchSetResponse;
class UpdateRegexPatternSetRequest;
class UpdateRegexPatternSetResponse;
class UpdateRuleRequest;
class UpdateRuleResponse;
class UpdateRuleGroupRequest;
class UpdateRuleGroupResponse;
class UpdateSizeConstraintSetRequest;
class UpdateSizeConstraintSetResponse;
class UpdateSqlInjectionMatchSetRequest;
class UpdateSqlInjectionMatchSetResponse;
class UpdateWebACLRequest;
class UpdateWebACLResponse;
class UpdateXssMatchSetRequest;
class UpdateXssMatchSetResponse;

class QTAWS_EXPORT WAFRegionalClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WAFRegionalClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WAFRegionalClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateWebACLResponse * associateWebACL(const AssociateWebACLRequest &request);
    CreateByteMatchSetResponse * createByteMatchSet(const CreateByteMatchSetRequest &request);
    CreateGeoMatchSetResponse * createGeoMatchSet(const CreateGeoMatchSetRequest &request);
    CreateIPSetResponse * createIPSet(const CreateIPSetRequest &request);
    CreateRateBasedRuleResponse * createRateBasedRule(const CreateRateBasedRuleRequest &request);
    CreateRegexMatchSetResponse * createRegexMatchSet(const CreateRegexMatchSetRequest &request);
    CreateRegexPatternSetResponse * createRegexPatternSet(const CreateRegexPatternSetRequest &request);
    CreateRuleResponse * createRule(const CreateRuleRequest &request);
    CreateRuleGroupResponse * createRuleGroup(const CreateRuleGroupRequest &request);
    CreateSizeConstraintSetResponse * createSizeConstraintSet(const CreateSizeConstraintSetRequest &request);
    CreateSqlInjectionMatchSetResponse * createSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest &request);
    CreateWebACLResponse * createWebACL(const CreateWebACLRequest &request);
    CreateXssMatchSetResponse * createXssMatchSet(const CreateXssMatchSetRequest &request);
    DeleteByteMatchSetResponse * deleteByteMatchSet(const DeleteByteMatchSetRequest &request);
    DeleteGeoMatchSetResponse * deleteGeoMatchSet(const DeleteGeoMatchSetRequest &request);
    DeleteIPSetResponse * deleteIPSet(const DeleteIPSetRequest &request);
    DeletePermissionPolicyResponse * deletePermissionPolicy(const DeletePermissionPolicyRequest &request);
    DeleteRateBasedRuleResponse * deleteRateBasedRule(const DeleteRateBasedRuleRequest &request);
    DeleteRegexMatchSetResponse * deleteRegexMatchSet(const DeleteRegexMatchSetRequest &request);
    DeleteRegexPatternSetResponse * deleteRegexPatternSet(const DeleteRegexPatternSetRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DeleteRuleGroupResponse * deleteRuleGroup(const DeleteRuleGroupRequest &request);
    DeleteSizeConstraintSetResponse * deleteSizeConstraintSet(const DeleteSizeConstraintSetRequest &request);
    DeleteSqlInjectionMatchSetResponse * deleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest &request);
    DeleteWebACLResponse * deleteWebACL(const DeleteWebACLRequest &request);
    DeleteXssMatchSetResponse * deleteXssMatchSet(const DeleteXssMatchSetRequest &request);
    DisassociateWebACLResponse * disassociateWebACL(const DisassociateWebACLRequest &request);
    GetByteMatchSetResponse * getByteMatchSet(const GetByteMatchSetRequest &request);
    GetChangeTokenResponse * getChangeToken(const GetChangeTokenRequest &request);
    GetChangeTokenStatusResponse * getChangeTokenStatus(const GetChangeTokenStatusRequest &request);
    GetGeoMatchSetResponse * getGeoMatchSet(const GetGeoMatchSetRequest &request);
    GetIPSetResponse * getIPSet(const GetIPSetRequest &request);
    GetPermissionPolicyResponse * getPermissionPolicy(const GetPermissionPolicyRequest &request);
    GetRateBasedRuleResponse * getRateBasedRule(const GetRateBasedRuleRequest &request);
    GetRateBasedRuleManagedKeysResponse * getRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest &request);
    GetRegexMatchSetResponse * getRegexMatchSet(const GetRegexMatchSetRequest &request);
    GetRegexPatternSetResponse * getRegexPatternSet(const GetRegexPatternSetRequest &request);
    GetRuleResponse * getRule(const GetRuleRequest &request);
    GetRuleGroupResponse * getRuleGroup(const GetRuleGroupRequest &request);
    GetSampledRequestsResponse * getSampledRequests(const GetSampledRequestsRequest &request);
    GetSizeConstraintSetResponse * getSizeConstraintSet(const GetSizeConstraintSetRequest &request);
    GetSqlInjectionMatchSetResponse * getSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest &request);
    GetWebACLResponse * getWebACL(const GetWebACLRequest &request);
    GetWebACLForResourceResponse * getWebACLForResource(const GetWebACLForResourceRequest &request);
    GetXssMatchSetResponse * getXssMatchSet(const GetXssMatchSetRequest &request);
    ListActivatedRulesInRuleGroupResponse * listActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest &request);
    ListByteMatchSetsResponse * listByteMatchSets(const ListByteMatchSetsRequest &request);
    ListGeoMatchSetsResponse * listGeoMatchSets(const ListGeoMatchSetsRequest &request);
    ListIPSetsResponse * listIPSets(const ListIPSetsRequest &request);
    ListRateBasedRulesResponse * listRateBasedRules(const ListRateBasedRulesRequest &request);
    ListRegexMatchSetsResponse * listRegexMatchSets(const ListRegexMatchSetsRequest &request);
    ListRegexPatternSetsResponse * listRegexPatternSets(const ListRegexPatternSetsRequest &request);
    ListResourcesForWebACLResponse * listResourcesForWebACL(const ListResourcesForWebACLRequest &request);
    ListRuleGroupsResponse * listRuleGroups(const ListRuleGroupsRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListSizeConstraintSetsResponse * listSizeConstraintSets(const ListSizeConstraintSetsRequest &request);
    ListSqlInjectionMatchSetsResponse * listSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest &request);
    ListSubscribedRuleGroupsResponse * listSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest &request);
    ListWebACLsResponse * listWebACLs(const ListWebACLsRequest &request);
    ListXssMatchSetsResponse * listXssMatchSets(const ListXssMatchSetsRequest &request);
    PutPermissionPolicyResponse * putPermissionPolicy(const PutPermissionPolicyRequest &request);
    UpdateByteMatchSetResponse * updateByteMatchSet(const UpdateByteMatchSetRequest &request);
    UpdateGeoMatchSetResponse * updateGeoMatchSet(const UpdateGeoMatchSetRequest &request);
    UpdateIPSetResponse * updateIPSet(const UpdateIPSetRequest &request);
    UpdateRateBasedRuleResponse * updateRateBasedRule(const UpdateRateBasedRuleRequest &request);
    UpdateRegexMatchSetResponse * updateRegexMatchSet(const UpdateRegexMatchSetRequest &request);
    UpdateRegexPatternSetResponse * updateRegexPatternSet(const UpdateRegexPatternSetRequest &request);
    UpdateRuleResponse * updateRule(const UpdateRuleRequest &request);
    UpdateRuleGroupResponse * updateRuleGroup(const UpdateRuleGroupRequest &request);
    UpdateSizeConstraintSetResponse * updateSizeConstraintSet(const UpdateSizeConstraintSetRequest &request);
    UpdateSqlInjectionMatchSetResponse * updateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest &request);
    UpdateWebACLResponse * updateWebACL(const UpdateWebACLRequest &request);
    UpdateXssMatchSetResponse * updateXssMatchSet(const UpdateXssMatchSetRequest &request);

private:
    Q_DECLARE_PRIVATE(WAFRegionalClient)
    Q_DISABLE_COPY(WAFRegionalClient)

};

} // namespace WAFRegional
} // namespace QtAws

#endif
