/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_WAFCLIENT_H
#define QTAWS_WAFCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace WAF {

class WafClientPrivate;

class QTAWS_EXPORT WafClient : public AwsAbstractClient {
    Q_OBJECT

public:
    WafClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WafClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateByteMatchSetResponse * createByteMatchSet(const CreateByteMatchSetRequest &request);
    CreateIPSetResponse * createIPSet(const CreateIPSetRequest &request);
    CreateRuleResponse * createRule(const CreateRuleRequest &request);
    CreateSizeConstraintSetResponse * createSizeConstraintSet(const CreateSizeConstraintSetRequest &request);
    CreateSqlInjectionMatchSetResponse * createSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest &request);
    CreateWebACLResponse * createWebACL(const CreateWebACLRequest &request);
    CreateXssMatchSetResponse * createXssMatchSet(const CreateXssMatchSetRequest &request);
    DeleteByteMatchSetResponse * deleteByteMatchSet(const DeleteByteMatchSetRequest &request);
    DeleteIPSetResponse * deleteIPSet(const DeleteIPSetRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DeleteSizeConstraintSetResponse * deleteSizeConstraintSet(const DeleteSizeConstraintSetRequest &request);
    DeleteSqlInjectionMatchSetResponse * deleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest &request);
    DeleteWebACLResponse * deleteWebACL(const DeleteWebACLRequest &request);
    DeleteXssMatchSetResponse * deleteXssMatchSet(const DeleteXssMatchSetRequest &request);
    GetByteMatchSetResponse * getByteMatchSet(const GetByteMatchSetRequest &request);
    GetChangeTokenResponse * getChangeToken(const GetChangeTokenRequest &request);
    GetChangeTokenStatusResponse * getChangeTokenStatus(const GetChangeTokenStatusRequest &request);
    GetIPSetResponse * getIPSet(const GetIPSetRequest &request);
    GetRuleResponse * getRule(const GetRuleRequest &request);
    GetSampledRequestsResponse * getSampledRequests(const GetSampledRequestsRequest &request);
    GetSizeConstraintSetResponse * getSizeConstraintSet(const GetSizeConstraintSetRequest &request);
    GetSqlInjectionMatchSetResponse * getSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest &request);
    GetWebACLResponse * getWebACL(const GetWebACLRequest &request);
    GetXssMatchSetResponse * getXssMatchSet(const GetXssMatchSetRequest &request);
    ListByteMatchSetsResponse * listByteMatchSets(const ListByteMatchSetsRequest &request);
    ListIPSetsResponse * listIPSets(const ListIPSetsRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListSizeConstraintSetsResponse * listSizeConstraintSets(const ListSizeConstraintSetsRequest &request);
    ListSqlInjectionMatchSetsResponse * listSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest &request);
    ListWebACLsResponse * listWebACLs(const ListWebACLsRequest &request);
    ListXssMatchSetsResponse * listXssMatchSets(const ListXssMatchSetsRequest &request);
    UpdateByteMatchSetResponse * updateByteMatchSet(const UpdateByteMatchSetRequest &request);
    UpdateIPSetResponse * updateIPSet(const UpdateIPSetRequest &request);
    UpdateRuleResponse * updateRule(const UpdateRuleRequest &request);
    UpdateSizeConstraintSetResponse * updateSizeConstraintSet(const UpdateSizeConstraintSetRequest &request);
    UpdateSqlInjectionMatchSetResponse * updateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest &request);
    UpdateWebACLResponse * updateWebACL(const UpdateWebACLRequest &request);
    UpdateXssMatchSetResponse * updateXssMatchSet(const UpdateXssMatchSetRequest &request);

private:
    Q_DECLARE_PRIVATE(WafClient)
    Q_DISABLE_COPY(WafClient)

};

} // namespace WAF
} // namespace AWS

#endif
