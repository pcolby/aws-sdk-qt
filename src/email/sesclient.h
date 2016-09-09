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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    SesCloneReceiptRuleSetResponse * cloneReceiptRuleSet(const SesCloneReceiptRuleSetRequest &request);
    SesCreateReceiptFilterResponse * createReceiptFilter(const SesCreateReceiptFilterRequest &request);
    SesCreateReceiptRuleResponse * createReceiptRule(const SesCreateReceiptRuleRequest &request);
    SesCreateReceiptRuleSetResponse * createReceiptRuleSet(const SesCreateReceiptRuleSetRequest &request);
    SesDeleteIdentityResponse * deleteIdentity(const SesDeleteIdentityRequest &request);
    SesDeleteIdentityPolicyResponse * deleteIdentityPolicy(const SesDeleteIdentityPolicyRequest &request);
    SesDeleteReceiptFilterResponse * deleteReceiptFilter(const SesDeleteReceiptFilterRequest &request);
    SesDeleteReceiptRuleResponse * deleteReceiptRule(const SesDeleteReceiptRuleRequest &request);
    SesDeleteReceiptRuleSetResponse * deleteReceiptRuleSet(const SesDeleteReceiptRuleSetRequest &request);
    SesDeleteVerifiedEmailAddressResponse * deleteVerifiedEmailAddress(const SesDeleteVerifiedEmailAddressRequest &request);
    SesDescribeActiveReceiptRuleSetResponse * describeActiveReceiptRuleSet(const SesDescribeActiveReceiptRuleSetRequest &request);
    SesDescribeReceiptRuleResponse * describeReceiptRule(const SesDescribeReceiptRuleRequest &request);
    SesDescribeReceiptRuleSetResponse * describeReceiptRuleSet(const SesDescribeReceiptRuleSetRequest &request);
    SesGetIdentityDkimAttributesResponse * getIdentityDkimAttributes(const SesGetIdentityDkimAttributesRequest &request);
    SesGetIdentityMailFromDomainAttributesResponse * getIdentityMailFromDomainAttributes(const SesGetIdentityMailFromDomainAttributesRequest &request);
    SesGetIdentityNotificationAttributesResponse * getIdentityNotificationAttributes(const SesGetIdentityNotificationAttributesRequest &request);
    SesGetIdentityPoliciesResponse * getIdentityPolicies(const SesGetIdentityPoliciesRequest &request);
    SesGetIdentityVerificationAttributesResponse * getIdentityVerificationAttributes(const SesGetIdentityVerificationAttributesRequest &request);
    SesGetSendQuotaResponse * getSendQuota();
    SesGetSendStatisticsResponse * getSendStatistics();
    SesListIdentitiesResponse * listIdentities(const SesListIdentitiesRequest &request);
    SesListIdentityPoliciesResponse * listIdentityPolicies(const SesListIdentityPoliciesRequest &request);
    SesListReceiptFiltersResponse * listReceiptFilters(const SesListReceiptFiltersRequest &request);
    SesListReceiptRuleSetsResponse * listReceiptRuleSets(const SesListReceiptRuleSetsRequest &request);
    SesListVerifiedEmailAddressesResponse * listVerifiedEmailAddresses();
    SesPutIdentityPolicyResponse * putIdentityPolicy(const SesPutIdentityPolicyRequest &request);
    SesReorderReceiptRuleSetResponse * reorderReceiptRuleSet(const SesReorderReceiptRuleSetRequest &request);
    SesSendBounceResponse * sendBounce(const SesSendBounceRequest &request);
    SesSendEmailResponse * sendEmail(const SesSendEmailRequest &request);
    SesSendRawEmailResponse * sendRawEmail(const SesSendRawEmailRequest &request);
    SesSetActiveReceiptRuleSetResponse * setActiveReceiptRuleSet(const SesSetActiveReceiptRuleSetRequest &request);
    SesSetIdentityDkimEnabledResponse * setIdentityDkimEnabled(const SesSetIdentityDkimEnabledRequest &request);
    SesSetIdentityFeedbackForwardingEnabledResponse * setIdentityFeedbackForwardingEnabled(const SesSetIdentityFeedbackForwardingEnabledRequest &request);
    SesSetIdentityHeadersInNotificationsEnabledResponse * setIdentityHeadersInNotificationsEnabled(const SesSetIdentityHeadersInNotificationsEnabledRequest &request);
    SesSetIdentityMailFromDomainResponse * setIdentityMailFromDomain(const SesSetIdentityMailFromDomainRequest &request);
    SesSetIdentityNotificationTopicResponse * setIdentityNotificationTopic(const SesSetIdentityNotificationTopicRequest &request);
    SesSetReceiptRulePositionResponse * setReceiptRulePosition(const SesSetReceiptRulePositionRequest &request);
    SesUpdateReceiptRuleResponse * updateReceiptRule(const SesUpdateReceiptRuleRequest &request);
    SesVerifyDomainDkimResponse * verifyDomainDkim(const SesVerifyDomainDkimRequest &request);
    SesVerifyDomainIdentityResponse * verifyDomainIdentity(const SesVerifyDomainIdentityRequest &request);
    SesVerifyEmailAddressResponse * verifyEmailAddress(const SesVerifyEmailAddressRequest &request);
    SesVerifyEmailIdentityResponse * verifyEmailIdentity(const SesVerifyEmailIdentityRequest &request);

private:
    Q_DECLARE_PRIVATE(SesClient)
    Q_DISABLE_COPY(SesClient)

};

QTAWS_END_NAMESPACE

#endif
