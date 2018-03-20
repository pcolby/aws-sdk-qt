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

#ifndef QTAWS_SESCLIENT_H
#define QTAWS_SESCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace SES {

class SesClientPrivate;
class CloneReceiptRuleSetResponse;
class CreateConfigurationSetResponse;
class CreateConfigurationSetEventDestinationResponse;
class CreateConfigurationSetTrackingOptionsResponse;
class CreateCustomVerificationEmailTemplateResponse;
class CreateReceiptFilterResponse;
class CreateReceiptRuleResponse;
class CreateReceiptRuleSetResponse;
class CreateTemplateResponse;
class DeleteConfigurationSetResponse;
class DeleteConfigurationSetEventDestinationResponse;
class DeleteConfigurationSetTrackingOptionsResponse;
class DeleteCustomVerificationEmailTemplateResponse;
class DeleteIdentityResponse;
class DeleteIdentityPolicyResponse;
class DeleteReceiptFilterResponse;
class DeleteReceiptRuleResponse;
class DeleteReceiptRuleSetResponse;
class DeleteTemplateResponse;
class DeleteVerifiedEmailAddressResponse;
class DescribeActiveReceiptRuleSetResponse;
class DescribeConfigurationSetResponse;
class DescribeReceiptRuleResponse;
class DescribeReceiptRuleSetResponse;
class GetAccountSendingEnabledResponse;
class GetCustomVerificationEmailTemplateResponse;
class GetIdentityDkimAttributesResponse;
class GetIdentityMailFromDomainAttributesResponse;
class GetIdentityNotificationAttributesResponse;
class GetIdentityPoliciesResponse;
class GetIdentityVerificationAttributesResponse;
class GetSendQuotaResponse;
class GetSendStatisticsResponse;
class GetTemplateResponse;
class ListConfigurationSetsResponse;
class ListCustomVerificationEmailTemplatesResponse;
class ListIdentitiesResponse;
class ListIdentityPoliciesResponse;
class ListReceiptFiltersResponse;
class ListReceiptRuleSetsResponse;
class ListTemplatesResponse;
class ListVerifiedEmailAddressesResponse;
class PutIdentityPolicyResponse;
class ReorderReceiptRuleSetResponse;
class SendBounceResponse;
class SendBulkTemplatedEmailResponse;
class SendCustomVerificationEmailResponse;
class SendEmailResponse;
class SendRawEmailResponse;
class SendTemplatedEmailResponse;
class SetActiveReceiptRuleSetResponse;
class SetIdentityDkimEnabledResponse;
class SetIdentityFeedbackForwardingEnabledResponse;
class SetIdentityHeadersInNotificationsEnabledResponse;
class SetIdentityMailFromDomainResponse;
class SetIdentityNotificationTopicResponse;
class SetReceiptRulePositionResponse;
class TestRenderTemplateResponse;
class UpdateAccountSendingEnabledResponse;
class UpdateConfigurationSetEventDestinationResponse;
class UpdateConfigurationSetReputationMetricsEnabledResponse;
class UpdateConfigurationSetSendingEnabledResponse;
class UpdateConfigurationSetTrackingOptionsResponse;
class UpdateCustomVerificationEmailTemplateResponse;
class UpdateReceiptRuleResponse;
class UpdateTemplateResponse;
class VerifyDomainDkimResponse;
class VerifyDomainIdentityResponse;
class VerifyEmailAddressResponse;
class VerifyEmailIdentityResponse;

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
    CreateConfigurationSetResponse * createConfigurationSet(const CreateConfigurationSetRequest &request);
    CreateConfigurationSetEventDestinationResponse * createConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest &request);
    CreateConfigurationSetTrackingOptionsResponse * createConfigurationSetTrackingOptions(const CreateConfigurationSetTrackingOptionsRequest &request);
    CreateCustomVerificationEmailTemplateResponse * createCustomVerificationEmailTemplate(const CreateCustomVerificationEmailTemplateRequest &request);
    CreateReceiptFilterResponse * createReceiptFilter(const CreateReceiptFilterRequest &request);
    CreateReceiptRuleResponse * createReceiptRule(const CreateReceiptRuleRequest &request);
    CreateReceiptRuleSetResponse * createReceiptRuleSet(const CreateReceiptRuleSetRequest &request);
    CreateTemplateResponse * createTemplate(const CreateTemplateRequest &request);
    DeleteConfigurationSetResponse * deleteConfigurationSet(const DeleteConfigurationSetRequest &request);
    DeleteConfigurationSetEventDestinationResponse * deleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest &request);
    DeleteConfigurationSetTrackingOptionsResponse * deleteConfigurationSetTrackingOptions(const DeleteConfigurationSetTrackingOptionsRequest &request);
    DeleteCustomVerificationEmailTemplateResponse * deleteCustomVerificationEmailTemplate(const DeleteCustomVerificationEmailTemplateRequest &request);
    DeleteIdentityResponse * deleteIdentity(const DeleteIdentityRequest &request);
    DeleteIdentityPolicyResponse * deleteIdentityPolicy(const DeleteIdentityPolicyRequest &request);
    DeleteReceiptFilterResponse * deleteReceiptFilter(const DeleteReceiptFilterRequest &request);
    DeleteReceiptRuleResponse * deleteReceiptRule(const DeleteReceiptRuleRequest &request);
    DeleteReceiptRuleSetResponse * deleteReceiptRuleSet(const DeleteReceiptRuleSetRequest &request);
    DeleteTemplateResponse * deleteTemplate(const DeleteTemplateRequest &request);
    DeleteVerifiedEmailAddressResponse * deleteVerifiedEmailAddress(const DeleteVerifiedEmailAddressRequest &request);
    DescribeActiveReceiptRuleSetResponse * describeActiveReceiptRuleSet(const DescribeActiveReceiptRuleSetRequest &request);
    DescribeConfigurationSetResponse * describeConfigurationSet(const DescribeConfigurationSetRequest &request);
    DescribeReceiptRuleResponse * describeReceiptRule(const DescribeReceiptRuleRequest &request);
    DescribeReceiptRuleSetResponse * describeReceiptRuleSet(const DescribeReceiptRuleSetRequest &request);
    GetAccountSendingEnabledResponse * getAccountSendingEnabled();
    GetCustomVerificationEmailTemplateResponse * getCustomVerificationEmailTemplate(const GetCustomVerificationEmailTemplateRequest &request);
    GetIdentityDkimAttributesResponse * getIdentityDkimAttributes(const GetIdentityDkimAttributesRequest &request);
    GetIdentityMailFromDomainAttributesResponse * getIdentityMailFromDomainAttributes(const GetIdentityMailFromDomainAttributesRequest &request);
    GetIdentityNotificationAttributesResponse * getIdentityNotificationAttributes(const GetIdentityNotificationAttributesRequest &request);
    GetIdentityPoliciesResponse * getIdentityPolicies(const GetIdentityPoliciesRequest &request);
    GetIdentityVerificationAttributesResponse * getIdentityVerificationAttributes(const GetIdentityVerificationAttributesRequest &request);
    GetSendQuotaResponse * getSendQuota();
    GetSendStatisticsResponse * getSendStatistics();
    GetTemplateResponse * getTemplate(const GetTemplateRequest &request);
    ListConfigurationSetsResponse * listConfigurationSets(const ListConfigurationSetsRequest &request);
    ListCustomVerificationEmailTemplatesResponse * listCustomVerificationEmailTemplates(const ListCustomVerificationEmailTemplatesRequest &request);
    ListIdentitiesResponse * listIdentities(const ListIdentitiesRequest &request);
    ListIdentityPoliciesResponse * listIdentityPolicies(const ListIdentityPoliciesRequest &request);
    ListReceiptFiltersResponse * listReceiptFilters(const ListReceiptFiltersRequest &request);
    ListReceiptRuleSetsResponse * listReceiptRuleSets(const ListReceiptRuleSetsRequest &request);
    ListTemplatesResponse * listTemplates(const ListTemplatesRequest &request);
    ListVerifiedEmailAddressesResponse * listVerifiedEmailAddresses();
    PutIdentityPolicyResponse * putIdentityPolicy(const PutIdentityPolicyRequest &request);
    ReorderReceiptRuleSetResponse * reorderReceiptRuleSet(const ReorderReceiptRuleSetRequest &request);
    SendBounceResponse * sendBounce(const SendBounceRequest &request);
    SendBulkTemplatedEmailResponse * sendBulkTemplatedEmail(const SendBulkTemplatedEmailRequest &request);
    SendCustomVerificationEmailResponse * sendCustomVerificationEmail(const SendCustomVerificationEmailRequest &request);
    SendEmailResponse * sendEmail(const SendEmailRequest &request);
    SendRawEmailResponse * sendRawEmail(const SendRawEmailRequest &request);
    SendTemplatedEmailResponse * sendTemplatedEmail(const SendTemplatedEmailRequest &request);
    SetActiveReceiptRuleSetResponse * setActiveReceiptRuleSet(const SetActiveReceiptRuleSetRequest &request);
    SetIdentityDkimEnabledResponse * setIdentityDkimEnabled(const SetIdentityDkimEnabledRequest &request);
    SetIdentityFeedbackForwardingEnabledResponse * setIdentityFeedbackForwardingEnabled(const SetIdentityFeedbackForwardingEnabledRequest &request);
    SetIdentityHeadersInNotificationsEnabledResponse * setIdentityHeadersInNotificationsEnabled(const SetIdentityHeadersInNotificationsEnabledRequest &request);
    SetIdentityMailFromDomainResponse * setIdentityMailFromDomain(const SetIdentityMailFromDomainRequest &request);
    SetIdentityNotificationTopicResponse * setIdentityNotificationTopic(const SetIdentityNotificationTopicRequest &request);
    SetReceiptRulePositionResponse * setReceiptRulePosition(const SetReceiptRulePositionRequest &request);
    TestRenderTemplateResponse * testRenderTemplate(const TestRenderTemplateRequest &request);
    UpdateAccountSendingEnabledResponse * updateAccountSendingEnabled(const UpdateAccountSendingEnabledRequest &request);
    UpdateConfigurationSetEventDestinationResponse * updateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest &request);
    UpdateConfigurationSetReputationMetricsEnabledResponse * updateConfigurationSetReputationMetricsEnabled(const UpdateConfigurationSetReputationMetricsEnabledRequest &request);
    UpdateConfigurationSetSendingEnabledResponse * updateConfigurationSetSendingEnabled(const UpdateConfigurationSetSendingEnabledRequest &request);
    UpdateConfigurationSetTrackingOptionsResponse * updateConfigurationSetTrackingOptions(const UpdateConfigurationSetTrackingOptionsRequest &request);
    UpdateCustomVerificationEmailTemplateResponse * updateCustomVerificationEmailTemplate(const UpdateCustomVerificationEmailTemplateRequest &request);
    UpdateReceiptRuleResponse * updateReceiptRule(const UpdateReceiptRuleRequest &request);
    UpdateTemplateResponse * updateTemplate(const UpdateTemplateRequest &request);
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
