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

#ifndef QTAWS_SESCLIENT_H
#define QTAWS_SESCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace SES {

class SesClientPrivate;

class QTAWS_EXPORT SesClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SesClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SesClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CloneReceiptRuleSetResponse * cloneReceiptRuleSet(const CloneReceiptRuleSetRequest &request);
    CreateReceiptFilterResponse * createReceiptFilter(const CreateReceiptFilterRequest &request);
    CreateReceiptRuleResponse * createReceiptRule(const CreateReceiptRuleRequest &request);
    CreateReceiptRuleSetResponse * createReceiptRuleSet(const CreateReceiptRuleSetRequest &request);
    DeleteIdentityResponse * deleteIdentity(const DeleteIdentityRequest &request);
    DeleteIdentityPolicyResponse * deleteIdentityPolicy(const DeleteIdentityPolicyRequest &request);
    DeleteReceiptFilterResponse * deleteReceiptFilter(const DeleteReceiptFilterRequest &request);
    DeleteReceiptRuleResponse * deleteReceiptRule(const DeleteReceiptRuleRequest &request);
    DeleteReceiptRuleSetResponse * deleteReceiptRuleSet(const DeleteReceiptRuleSetRequest &request);
    DeleteVerifiedEmailAddressResponse * deleteVerifiedEmailAddress(const DeleteVerifiedEmailAddressRequest &request);
    DescribeActiveReceiptRuleSetResponse * describeActiveReceiptRuleSet(const DescribeActiveReceiptRuleSetRequest &request);
    DescribeReceiptRuleResponse * describeReceiptRule(const DescribeReceiptRuleRequest &request);
    DescribeReceiptRuleSetResponse * describeReceiptRuleSet(const DescribeReceiptRuleSetRequest &request);
    GetIdentityDkimAttributesResponse * getIdentityDkimAttributes(const GetIdentityDkimAttributesRequest &request);
    GetIdentityMailFromDomainAttributesResponse * getIdentityMailFromDomainAttributes(const GetIdentityMailFromDomainAttributesRequest &request);
    GetIdentityNotificationAttributesResponse * getIdentityNotificationAttributes(const GetIdentityNotificationAttributesRequest &request);
    GetIdentityPoliciesResponse * getIdentityPolicies(const GetIdentityPoliciesRequest &request);
    GetIdentityVerificationAttributesResponse * getIdentityVerificationAttributes(const GetIdentityVerificationAttributesRequest &request);
    GetSendQuotaResponse * getSendQuota();
    GetSendStatisticsResponse * getSendStatistics();
    ListIdentitiesResponse * listIdentities(const ListIdentitiesRequest &request);
    ListIdentityPoliciesResponse * listIdentityPolicies(const ListIdentityPoliciesRequest &request);
    ListReceiptFiltersResponse * listReceiptFilters(const ListReceiptFiltersRequest &request);
    ListReceiptRuleSetsResponse * listReceiptRuleSets(const ListReceiptRuleSetsRequest &request);
    ListVerifiedEmailAddressesResponse * listVerifiedEmailAddresses();
    PutIdentityPolicyResponse * putIdentityPolicy(const PutIdentityPolicyRequest &request);
    ReorderReceiptRuleSetResponse * reorderReceiptRuleSet(const ReorderReceiptRuleSetRequest &request);
    SendBounceResponse * sendBounce(const SendBounceRequest &request);
    SendEmailResponse * sendEmail(const SendEmailRequest &request);
    SendRawEmailResponse * sendRawEmail(const SendRawEmailRequest &request);
    SetActiveReceiptRuleSetResponse * setActiveReceiptRuleSet(const SetActiveReceiptRuleSetRequest &request);
    SetIdentityDkimEnabledResponse * setIdentityDkimEnabled(const SetIdentityDkimEnabledRequest &request);
    SetIdentityFeedbackForwardingEnabledResponse * setIdentityFeedbackForwardingEnabled(const SetIdentityFeedbackForwardingEnabledRequest &request);
    SetIdentityHeadersInNotificationsEnabledResponse * setIdentityHeadersInNotificationsEnabled(const SetIdentityHeadersInNotificationsEnabledRequest &request);
    SetIdentityMailFromDomainResponse * setIdentityMailFromDomain(const SetIdentityMailFromDomainRequest &request);
    SetIdentityNotificationTopicResponse * setIdentityNotificationTopic(const SetIdentityNotificationTopicRequest &request);
    SetReceiptRulePositionResponse * setReceiptRulePosition(const SetReceiptRulePositionRequest &request);
    UpdateReceiptRuleResponse * updateReceiptRule(const UpdateReceiptRuleRequest &request);
    VerifyDomainDkimResponse * verifyDomainDkim(const VerifyDomainDkimRequest &request);
    VerifyDomainIdentityResponse * verifyDomainIdentity(const VerifyDomainIdentityRequest &request);
    VerifyEmailAddressResponse * verifyEmailAddress(const VerifyEmailAddressRequest &request);
    VerifyEmailIdentityResponse * verifyEmailIdentity(const VerifyEmailIdentityRequest &request);

private:
    Q_DECLARE_PRIVATE(SesClient)
    Q_DISABLE_COPY(SesClient)

};

} // namespace SES
} // namespace AWS

#endif
