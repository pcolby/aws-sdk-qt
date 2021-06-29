/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SESV2CLIENT_H
#define QTAWS_SESV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssesv2global.h"

class QNetworkReply;

namespace QtAws {
namespace SESV2 {

class Sesv2ClientPrivate;
class CreateConfigurationSetRequest;
class CreateConfigurationSetResponse;
class CreateConfigurationSetEventDestinationRequest;
class CreateConfigurationSetEventDestinationResponse;
class CreateContactRequest;
class CreateContactResponse;
class CreateContactListRequest;
class CreateContactListResponse;
class CreateCustomVerificationEmailTemplateRequest;
class CreateCustomVerificationEmailTemplateResponse;
class CreateDedicatedIpPoolRequest;
class CreateDedicatedIpPoolResponse;
class CreateDeliverabilityTestReportRequest;
class CreateDeliverabilityTestReportResponse;
class CreateEmailIdentityRequest;
class CreateEmailIdentityResponse;
class CreateEmailIdentityPolicyRequest;
class CreateEmailIdentityPolicyResponse;
class CreateEmailTemplateRequest;
class CreateEmailTemplateResponse;
class CreateImportJobRequest;
class CreateImportJobResponse;
class DeleteConfigurationSetRequest;
class DeleteConfigurationSetResponse;
class DeleteConfigurationSetEventDestinationRequest;
class DeleteConfigurationSetEventDestinationResponse;
class DeleteContactRequest;
class DeleteContactResponse;
class DeleteContactListRequest;
class DeleteContactListResponse;
class DeleteCustomVerificationEmailTemplateRequest;
class DeleteCustomVerificationEmailTemplateResponse;
class DeleteDedicatedIpPoolRequest;
class DeleteDedicatedIpPoolResponse;
class DeleteEmailIdentityRequest;
class DeleteEmailIdentityResponse;
class DeleteEmailIdentityPolicyRequest;
class DeleteEmailIdentityPolicyResponse;
class DeleteEmailTemplateRequest;
class DeleteEmailTemplateResponse;
class DeleteSuppressedDestinationRequest;
class DeleteSuppressedDestinationResponse;
class GetAccountRequest;
class GetAccountResponse;
class GetBlacklistReportsRequest;
class GetBlacklistReportsResponse;
class GetConfigurationSetRequest;
class GetConfigurationSetResponse;
class GetConfigurationSetEventDestinationsRequest;
class GetConfigurationSetEventDestinationsResponse;
class GetContactRequest;
class GetContactResponse;
class GetContactListRequest;
class GetContactListResponse;
class GetCustomVerificationEmailTemplateRequest;
class GetCustomVerificationEmailTemplateResponse;
class GetDedicatedIpRequest;
class GetDedicatedIpResponse;
class GetDedicatedIpsRequest;
class GetDedicatedIpsResponse;
class GetDeliverabilityDashboardOptionsRequest;
class GetDeliverabilityDashboardOptionsResponse;
class GetDeliverabilityTestReportRequest;
class GetDeliverabilityTestReportResponse;
class GetDomainDeliverabilityCampaignRequest;
class GetDomainDeliverabilityCampaignResponse;
class GetDomainStatisticsReportRequest;
class GetDomainStatisticsReportResponse;
class GetEmailIdentityRequest;
class GetEmailIdentityResponse;
class GetEmailIdentityPoliciesRequest;
class GetEmailIdentityPoliciesResponse;
class GetEmailTemplateRequest;
class GetEmailTemplateResponse;
class GetImportJobRequest;
class GetImportJobResponse;
class GetSuppressedDestinationRequest;
class GetSuppressedDestinationResponse;
class ListConfigurationSetsRequest;
class ListConfigurationSetsResponse;
class ListContactListsRequest;
class ListContactListsResponse;
class ListContactsRequest;
class ListContactsResponse;
class ListCustomVerificationEmailTemplatesRequest;
class ListCustomVerificationEmailTemplatesResponse;
class ListDedicatedIpPoolsRequest;
class ListDedicatedIpPoolsResponse;
class ListDeliverabilityTestReportsRequest;
class ListDeliverabilityTestReportsResponse;
class ListDomainDeliverabilityCampaignsRequest;
class ListDomainDeliverabilityCampaignsResponse;
class ListEmailIdentitiesRequest;
class ListEmailIdentitiesResponse;
class ListEmailTemplatesRequest;
class ListEmailTemplatesResponse;
class ListImportJobsRequest;
class ListImportJobsResponse;
class ListSuppressedDestinationsRequest;
class ListSuppressedDestinationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutAccountDedicatedIpWarmupAttributesRequest;
class PutAccountDedicatedIpWarmupAttributesResponse;
class PutAccountDetailsRequest;
class PutAccountDetailsResponse;
class PutAccountSendingAttributesRequest;
class PutAccountSendingAttributesResponse;
class PutAccountSuppressionAttributesRequest;
class PutAccountSuppressionAttributesResponse;
class PutConfigurationSetDeliveryOptionsRequest;
class PutConfigurationSetDeliveryOptionsResponse;
class PutConfigurationSetReputationOptionsRequest;
class PutConfigurationSetReputationOptionsResponse;
class PutConfigurationSetSendingOptionsRequest;
class PutConfigurationSetSendingOptionsResponse;
class PutConfigurationSetSuppressionOptionsRequest;
class PutConfigurationSetSuppressionOptionsResponse;
class PutConfigurationSetTrackingOptionsRequest;
class PutConfigurationSetTrackingOptionsResponse;
class PutDedicatedIpInPoolRequest;
class PutDedicatedIpInPoolResponse;
class PutDedicatedIpWarmupAttributesRequest;
class PutDedicatedIpWarmupAttributesResponse;
class PutDeliverabilityDashboardOptionRequest;
class PutDeliverabilityDashboardOptionResponse;
class PutEmailIdentityConfigurationSetAttributesRequest;
class PutEmailIdentityConfigurationSetAttributesResponse;
class PutEmailIdentityDkimAttributesRequest;
class PutEmailIdentityDkimAttributesResponse;
class PutEmailIdentityDkimSigningAttributesRequest;
class PutEmailIdentityDkimSigningAttributesResponse;
class PutEmailIdentityFeedbackAttributesRequest;
class PutEmailIdentityFeedbackAttributesResponse;
class PutEmailIdentityMailFromAttributesRequest;
class PutEmailIdentityMailFromAttributesResponse;
class PutSuppressedDestinationRequest;
class PutSuppressedDestinationResponse;
class SendBulkEmailRequest;
class SendBulkEmailResponse;
class SendCustomVerificationEmailRequest;
class SendCustomVerificationEmailResponse;
class SendEmailRequest;
class SendEmailResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestRenderEmailTemplateRequest;
class TestRenderEmailTemplateResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConfigurationSetEventDestinationRequest;
class UpdateConfigurationSetEventDestinationResponse;
class UpdateContactRequest;
class UpdateContactResponse;
class UpdateContactListRequest;
class UpdateContactListResponse;
class UpdateCustomVerificationEmailTemplateRequest;
class UpdateCustomVerificationEmailTemplateResponse;
class UpdateEmailIdentityPolicyRequest;
class UpdateEmailIdentityPolicyResponse;
class UpdateEmailTemplateRequest;
class UpdateEmailTemplateResponse;

class QTAWSSESV2_EXPORT Sesv2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Sesv2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Sesv2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateConfigurationSetResponse * createConfigurationSet(const CreateConfigurationSetRequest &request);
    CreateConfigurationSetEventDestinationResponse * createConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest &request);
    CreateContactResponse * createContact(const CreateContactRequest &request);
    CreateContactListResponse * createContactList(const CreateContactListRequest &request);
    CreateCustomVerificationEmailTemplateResponse * createCustomVerificationEmailTemplate(const CreateCustomVerificationEmailTemplateRequest &request);
    CreateDedicatedIpPoolResponse * createDedicatedIpPool(const CreateDedicatedIpPoolRequest &request);
    CreateDeliverabilityTestReportResponse * createDeliverabilityTestReport(const CreateDeliverabilityTestReportRequest &request);
    CreateEmailIdentityResponse * createEmailIdentity(const CreateEmailIdentityRequest &request);
    CreateEmailIdentityPolicyResponse * createEmailIdentityPolicy(const CreateEmailIdentityPolicyRequest &request);
    CreateEmailTemplateResponse * createEmailTemplate(const CreateEmailTemplateRequest &request);
    CreateImportJobResponse * createImportJob(const CreateImportJobRequest &request);
    DeleteConfigurationSetResponse * deleteConfigurationSet(const DeleteConfigurationSetRequest &request);
    DeleteConfigurationSetEventDestinationResponse * deleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest &request);
    DeleteContactResponse * deleteContact(const DeleteContactRequest &request);
    DeleteContactListResponse * deleteContactList(const DeleteContactListRequest &request);
    DeleteCustomVerificationEmailTemplateResponse * deleteCustomVerificationEmailTemplate(const DeleteCustomVerificationEmailTemplateRequest &request);
    DeleteDedicatedIpPoolResponse * deleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest &request);
    DeleteEmailIdentityResponse * deleteEmailIdentity(const DeleteEmailIdentityRequest &request);
    DeleteEmailIdentityPolicyResponse * deleteEmailIdentityPolicy(const DeleteEmailIdentityPolicyRequest &request);
    DeleteEmailTemplateResponse * deleteEmailTemplate(const DeleteEmailTemplateRequest &request);
    DeleteSuppressedDestinationResponse * deleteSuppressedDestination(const DeleteSuppressedDestinationRequest &request);
    GetAccountResponse * getAccount(const GetAccountRequest &request);
    GetBlacklistReportsResponse * getBlacklistReports(const GetBlacklistReportsRequest &request);
    GetConfigurationSetResponse * getConfigurationSet(const GetConfigurationSetRequest &request);
    GetConfigurationSetEventDestinationsResponse * getConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest &request);
    GetContactResponse * getContact(const GetContactRequest &request);
    GetContactListResponse * getContactList(const GetContactListRequest &request);
    GetCustomVerificationEmailTemplateResponse * getCustomVerificationEmailTemplate(const GetCustomVerificationEmailTemplateRequest &request);
    GetDedicatedIpResponse * getDedicatedIp(const GetDedicatedIpRequest &request);
    GetDedicatedIpsResponse * getDedicatedIps(const GetDedicatedIpsRequest &request);
    GetDeliverabilityDashboardOptionsResponse * getDeliverabilityDashboardOptions(const GetDeliverabilityDashboardOptionsRequest &request);
    GetDeliverabilityTestReportResponse * getDeliverabilityTestReport(const GetDeliverabilityTestReportRequest &request);
    GetDomainDeliverabilityCampaignResponse * getDomainDeliverabilityCampaign(const GetDomainDeliverabilityCampaignRequest &request);
    GetDomainStatisticsReportResponse * getDomainStatisticsReport(const GetDomainStatisticsReportRequest &request);
    GetEmailIdentityResponse * getEmailIdentity(const GetEmailIdentityRequest &request);
    GetEmailIdentityPoliciesResponse * getEmailIdentityPolicies(const GetEmailIdentityPoliciesRequest &request);
    GetEmailTemplateResponse * getEmailTemplate(const GetEmailTemplateRequest &request);
    GetImportJobResponse * getImportJob(const GetImportJobRequest &request);
    GetSuppressedDestinationResponse * getSuppressedDestination(const GetSuppressedDestinationRequest &request);
    ListConfigurationSetsResponse * listConfigurationSets(const ListConfigurationSetsRequest &request);
    ListContactListsResponse * listContactLists(const ListContactListsRequest &request);
    ListContactsResponse * listContacts(const ListContactsRequest &request);
    ListCustomVerificationEmailTemplatesResponse * listCustomVerificationEmailTemplates(const ListCustomVerificationEmailTemplatesRequest &request);
    ListDedicatedIpPoolsResponse * listDedicatedIpPools(const ListDedicatedIpPoolsRequest &request);
    ListDeliverabilityTestReportsResponse * listDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest &request);
    ListDomainDeliverabilityCampaignsResponse * listDomainDeliverabilityCampaigns(const ListDomainDeliverabilityCampaignsRequest &request);
    ListEmailIdentitiesResponse * listEmailIdentities(const ListEmailIdentitiesRequest &request);
    ListEmailTemplatesResponse * listEmailTemplates(const ListEmailTemplatesRequest &request);
    ListImportJobsResponse * listImportJobs(const ListImportJobsRequest &request);
    ListSuppressedDestinationsResponse * listSuppressedDestinations(const ListSuppressedDestinationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutAccountDedicatedIpWarmupAttributesResponse * putAccountDedicatedIpWarmupAttributes(const PutAccountDedicatedIpWarmupAttributesRequest &request);
    PutAccountDetailsResponse * putAccountDetails(const PutAccountDetailsRequest &request);
    PutAccountSendingAttributesResponse * putAccountSendingAttributes(const PutAccountSendingAttributesRequest &request);
    PutAccountSuppressionAttributesResponse * putAccountSuppressionAttributes(const PutAccountSuppressionAttributesRequest &request);
    PutConfigurationSetDeliveryOptionsResponse * putConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest &request);
    PutConfigurationSetReputationOptionsResponse * putConfigurationSetReputationOptions(const PutConfigurationSetReputationOptionsRequest &request);
    PutConfigurationSetSendingOptionsResponse * putConfigurationSetSendingOptions(const PutConfigurationSetSendingOptionsRequest &request);
    PutConfigurationSetSuppressionOptionsResponse * putConfigurationSetSuppressionOptions(const PutConfigurationSetSuppressionOptionsRequest &request);
    PutConfigurationSetTrackingOptionsResponse * putConfigurationSetTrackingOptions(const PutConfigurationSetTrackingOptionsRequest &request);
    PutDedicatedIpInPoolResponse * putDedicatedIpInPool(const PutDedicatedIpInPoolRequest &request);
    PutDedicatedIpWarmupAttributesResponse * putDedicatedIpWarmupAttributes(const PutDedicatedIpWarmupAttributesRequest &request);
    PutDeliverabilityDashboardOptionResponse * putDeliverabilityDashboardOption(const PutDeliverabilityDashboardOptionRequest &request);
    PutEmailIdentityConfigurationSetAttributesResponse * putEmailIdentityConfigurationSetAttributes(const PutEmailIdentityConfigurationSetAttributesRequest &request);
    PutEmailIdentityDkimAttributesResponse * putEmailIdentityDkimAttributes(const PutEmailIdentityDkimAttributesRequest &request);
    PutEmailIdentityDkimSigningAttributesResponse * putEmailIdentityDkimSigningAttributes(const PutEmailIdentityDkimSigningAttributesRequest &request);
    PutEmailIdentityFeedbackAttributesResponse * putEmailIdentityFeedbackAttributes(const PutEmailIdentityFeedbackAttributesRequest &request);
    PutEmailIdentityMailFromAttributesResponse * putEmailIdentityMailFromAttributes(const PutEmailIdentityMailFromAttributesRequest &request);
    PutSuppressedDestinationResponse * putSuppressedDestination(const PutSuppressedDestinationRequest &request);
    SendBulkEmailResponse * sendBulkEmail(const SendBulkEmailRequest &request);
    SendCustomVerificationEmailResponse * sendCustomVerificationEmail(const SendCustomVerificationEmailRequest &request);
    SendEmailResponse * sendEmail(const SendEmailRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestRenderEmailTemplateResponse * testRenderEmailTemplate(const TestRenderEmailTemplateRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConfigurationSetEventDestinationResponse * updateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest &request);
    UpdateContactResponse * updateContact(const UpdateContactRequest &request);
    UpdateContactListResponse * updateContactList(const UpdateContactListRequest &request);
    UpdateCustomVerificationEmailTemplateResponse * updateCustomVerificationEmailTemplate(const UpdateCustomVerificationEmailTemplateRequest &request);
    UpdateEmailIdentityPolicyResponse * updateEmailIdentityPolicy(const UpdateEmailIdentityPolicyRequest &request);
    UpdateEmailTemplateResponse * updateEmailTemplate(const UpdateEmailTemplateRequest &request);

protected:
    /// @cond internal
    Sesv2ClientPrivate * const d_ptr; ///< Internal d-pointer.
    Sesv2Client(Sesv2ClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(Sesv2Client)
    Q_DISABLE_COPY(Sesv2Client)

};

} // namespace SESV2
} // namespace QtAws

#endif
