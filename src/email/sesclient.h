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

#ifndef QTAWS_SESCLIENT_H
#define QTAWS_SESCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SES {

class SesClientPrivate;
class CloneReceiptRuleSetRequest;
class CloneReceiptRuleSetResponse;
class CreateConfigurationSetRequest;
class CreateConfigurationSetResponse;
class CreateConfigurationSetEventDestinationRequest;
class CreateConfigurationSetEventDestinationResponse;
class CreateConfigurationSetTrackingOptionsRequest;
class CreateConfigurationSetTrackingOptionsResponse;
class CreateCustomVerificationEmailTemplateRequest;
class CreateCustomVerificationEmailTemplateResponse;
class CreateReceiptFilterRequest;
class CreateReceiptFilterResponse;
class CreateReceiptRuleRequest;
class CreateReceiptRuleResponse;
class CreateReceiptRuleSetRequest;
class CreateReceiptRuleSetResponse;
class CreateTemplateRequest;
class CreateTemplateResponse;
class DeleteConfigurationSetRequest;
class DeleteConfigurationSetResponse;
class DeleteConfigurationSetEventDestinationRequest;
class DeleteConfigurationSetEventDestinationResponse;
class DeleteConfigurationSetTrackingOptionsRequest;
class DeleteConfigurationSetTrackingOptionsResponse;
class DeleteCustomVerificationEmailTemplateRequest;
class DeleteCustomVerificationEmailTemplateResponse;
class DeleteIdentityRequest;
class DeleteIdentityResponse;
class DeleteIdentityPolicyRequest;
class DeleteIdentityPolicyResponse;
class DeleteReceiptFilterRequest;
class DeleteReceiptFilterResponse;
class DeleteReceiptRuleRequest;
class DeleteReceiptRuleResponse;
class DeleteReceiptRuleSetRequest;
class DeleteReceiptRuleSetResponse;
class DeleteTemplateRequest;
class DeleteTemplateResponse;
class DeleteVerifiedEmailAddressRequest;
class DeleteVerifiedEmailAddressResponse;
class DescribeActiveReceiptRuleSetRequest;
class DescribeActiveReceiptRuleSetResponse;
class DescribeConfigurationSetRequest;
class DescribeConfigurationSetResponse;
class DescribeReceiptRuleRequest;
class DescribeReceiptRuleResponse;
class DescribeReceiptRuleSetRequest;
class DescribeReceiptRuleSetResponse;
class GetAccountSendingEnabledResponse;
class GetCustomVerificationEmailTemplateRequest;
class GetCustomVerificationEmailTemplateResponse;
class GetIdentityDkimAttributesRequest;
class GetIdentityDkimAttributesResponse;
class GetIdentityMailFromDomainAttributesRequest;
class GetIdentityMailFromDomainAttributesResponse;
class GetIdentityNotificationAttributesRequest;
class GetIdentityNotificationAttributesResponse;
class GetIdentityPoliciesRequest;
class GetIdentityPoliciesResponse;
class GetIdentityVerificationAttributesRequest;
class GetIdentityVerificationAttributesResponse;
class GetSendQuotaResponse;
class GetSendStatisticsResponse;
class GetTemplateRequest;
class GetTemplateResponse;
class ListConfigurationSetsRequest;
class ListConfigurationSetsResponse;
class ListCustomVerificationEmailTemplatesRequest;
class ListCustomVerificationEmailTemplatesResponse;
class ListIdentitiesRequest;
class ListIdentitiesResponse;
class ListIdentityPoliciesRequest;
class ListIdentityPoliciesResponse;
class ListReceiptFiltersRequest;
class ListReceiptFiltersResponse;
class ListReceiptRuleSetsRequest;
class ListReceiptRuleSetsResponse;
class ListTemplatesRequest;
class ListTemplatesResponse;
class ListVerifiedEmailAddressesResponse;
class PutIdentityPolicyRequest;
class PutIdentityPolicyResponse;
class ReorderReceiptRuleSetRequest;
class ReorderReceiptRuleSetResponse;
class SendBounceRequest;
class SendBounceResponse;
class SendBulkTemplatedEmailRequest;
class SendBulkTemplatedEmailResponse;
class SendCustomVerificationEmailRequest;
class SendCustomVerificationEmailResponse;
class SendEmailRequest;
class SendEmailResponse;
class SendRawEmailRequest;
class SendRawEmailResponse;
class SendTemplatedEmailRequest;
class SendTemplatedEmailResponse;
class SetActiveReceiptRuleSetRequest;
class SetActiveReceiptRuleSetResponse;
class SetIdentityDkimEnabledRequest;
class SetIdentityDkimEnabledResponse;
class SetIdentityFeedbackForwardingEnabledRequest;
class SetIdentityFeedbackForwardingEnabledResponse;
class SetIdentityHeadersInNotificationsEnabledRequest;
class SetIdentityHeadersInNotificationsEnabledResponse;
class SetIdentityMailFromDomainRequest;
class SetIdentityMailFromDomainResponse;
class SetIdentityNotificationTopicRequest;
class SetIdentityNotificationTopicResponse;
class SetReceiptRulePositionRequest;
class SetReceiptRulePositionResponse;
class TestRenderTemplateRequest;
class TestRenderTemplateResponse;
class UpdateAccountSendingEnabledRequest;
class UpdateAccountSendingEnabledResponse;
class UpdateConfigurationSetEventDestinationRequest;
class UpdateConfigurationSetEventDestinationResponse;
class UpdateConfigurationSetReputationMetricsEnabledRequest;
class UpdateConfigurationSetReputationMetricsEnabledResponse;
class UpdateConfigurationSetSendingEnabledRequest;
class UpdateConfigurationSetSendingEnabledResponse;
class UpdateConfigurationSetTrackingOptionsRequest;
class UpdateConfigurationSetTrackingOptionsResponse;
class UpdateCustomVerificationEmailTemplateRequest;
class UpdateCustomVerificationEmailTemplateResponse;
class UpdateReceiptRuleRequest;
class UpdateReceiptRuleResponse;
class UpdateTemplateRequest;
class UpdateTemplateResponse;
class VerifyDomainDkimRequest;
class VerifyDomainDkimResponse;
class VerifyDomainIdentityRequest;
class VerifyDomainIdentityResponse;
class VerifyEmailAddressRequest;
class VerifyEmailAddressResponse;
class VerifyEmailIdentityRequest;
class VerifyEmailIdentityResponse;

class QTAWS_EXPORT SesClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SesClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SesClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif
