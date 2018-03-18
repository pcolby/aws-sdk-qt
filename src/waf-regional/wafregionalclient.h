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

#ifndef QTAWS_WAFREGIONALCLIENT_H
#define QTAWS_WAFREGIONALCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace WAFRegional {

class WAFRegionalClientPrivate;

class QTAWS_EXPORT WAFRegionalClient : public AwsAbstractClient {
    Q_OBJECT

public:
    WAFRegionalClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WAFRegionalClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
