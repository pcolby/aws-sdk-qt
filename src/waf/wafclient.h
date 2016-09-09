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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    WafCreateByteMatchSetResponse * createByteMatchSet(const WafCreateByteMatchSetRequest &request);
    WafCreateIPSetResponse * createIPSet(const WafCreateIPSetRequest &request);
    WafCreateRuleResponse * createRule(const WafCreateRuleRequest &request);
    WafCreateSizeConstraintSetResponse * createSizeConstraintSet(const WafCreateSizeConstraintSetRequest &request);
    WafCreateSqlInjectionMatchSetResponse * createSqlInjectionMatchSet(const WafCreateSqlInjectionMatchSetRequest &request);
    WafCreateWebACLResponse * createWebACL(const WafCreateWebACLRequest &request);
    WafCreateXssMatchSetResponse * createXssMatchSet(const WafCreateXssMatchSetRequest &request);
    WafDeleteByteMatchSetResponse * deleteByteMatchSet(const WafDeleteByteMatchSetRequest &request);
    WafDeleteIPSetResponse * deleteIPSet(const WafDeleteIPSetRequest &request);
    WafDeleteRuleResponse * deleteRule(const WafDeleteRuleRequest &request);
    WafDeleteSizeConstraintSetResponse * deleteSizeConstraintSet(const WafDeleteSizeConstraintSetRequest &request);
    WafDeleteSqlInjectionMatchSetResponse * deleteSqlInjectionMatchSet(const WafDeleteSqlInjectionMatchSetRequest &request);
    WafDeleteWebACLResponse * deleteWebACL(const WafDeleteWebACLRequest &request);
    WafDeleteXssMatchSetResponse * deleteXssMatchSet(const WafDeleteXssMatchSetRequest &request);
    WafGetByteMatchSetResponse * getByteMatchSet(const WafGetByteMatchSetRequest &request);
    WafGetChangeTokenResponse * getChangeToken(const WafGetChangeTokenRequest &request);
    WafGetChangeTokenStatusResponse * getChangeTokenStatus(const WafGetChangeTokenStatusRequest &request);
    WafGetIPSetResponse * getIPSet(const WafGetIPSetRequest &request);
    WafGetRuleResponse * getRule(const WafGetRuleRequest &request);
    WafGetSampledRequestsResponse * getSampledRequests(const WafGetSampledRequestsRequest &request);
    WafGetSizeConstraintSetResponse * getSizeConstraintSet(const WafGetSizeConstraintSetRequest &request);
    WafGetSqlInjectionMatchSetResponse * getSqlInjectionMatchSet(const WafGetSqlInjectionMatchSetRequest &request);
    WafGetWebACLResponse * getWebACL(const WafGetWebACLRequest &request);
    WafGetXssMatchSetResponse * getXssMatchSet(const WafGetXssMatchSetRequest &request);
    WafListByteMatchSetsResponse * listByteMatchSets(const WafListByteMatchSetsRequest &request);
    WafListIPSetsResponse * listIPSets(const WafListIPSetsRequest &request);
    WafListRulesResponse * listRules(const WafListRulesRequest &request);
    WafListSizeConstraintSetsResponse * listSizeConstraintSets(const WafListSizeConstraintSetsRequest &request);
    WafListSqlInjectionMatchSetsResponse * listSqlInjectionMatchSets(const WafListSqlInjectionMatchSetsRequest &request);
    WafListWebACLsResponse * listWebACLs(const WafListWebACLsRequest &request);
    WafListXssMatchSetsResponse * listXssMatchSets(const WafListXssMatchSetsRequest &request);
    WafUpdateByteMatchSetResponse * updateByteMatchSet(const WafUpdateByteMatchSetRequest &request);
    WafUpdateIPSetResponse * updateIPSet(const WafUpdateIPSetRequest &request);
    WafUpdateRuleResponse * updateRule(const WafUpdateRuleRequest &request);
    WafUpdateSizeConstraintSetResponse * updateSizeConstraintSet(const WafUpdateSizeConstraintSetRequest &request);
    WafUpdateSqlInjectionMatchSetResponse * updateSqlInjectionMatchSet(const WafUpdateSqlInjectionMatchSetRequest &request);
    WafUpdateWebACLResponse * updateWebACL(const WafUpdateWebACLRequest &request);
    WafUpdateXssMatchSetResponse * updateXssMatchSet(const WafUpdateXssMatchSetRequest &request);

private:
    Q_DECLARE_PRIVATE(WafClient)
    Q_DISABLE_COPY(WafClient)

};

QTAWS_END_NAMESPACE

#endif
