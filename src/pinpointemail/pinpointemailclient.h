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

#ifndef QTAWS_PINPOINTEMAILCLIENT_H
#define QTAWS_PINPOINTEMAILCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace PinpointEmail {

class PinpointEmailClientPrivate;
class CreateConfigurationSetRequest;
class CreateConfigurationSetResponse;
class CreateConfigurationSetEventDestinationRequest;
class CreateConfigurationSetEventDestinationResponse;
class CreateDedicatedIpPoolRequest;
class CreateDedicatedIpPoolResponse;
class CreateDeliverabilityTestReportRequest;
class CreateDeliverabilityTestReportResponse;
class CreateEmailIdentityRequest;
class CreateEmailIdentityResponse;
class DeleteConfigurationSetRequest;
class DeleteConfigurationSetResponse;
class DeleteConfigurationSetEventDestinationRequest;
class DeleteConfigurationSetEventDestinationResponse;
class DeleteDedicatedIpPoolRequest;
class DeleteDedicatedIpPoolResponse;
class DeleteEmailIdentityRequest;
class DeleteEmailIdentityResponse;
class GetAccountRequest;
class GetAccountResponse;
class GetBlacklistReportsRequest;
class GetBlacklistReportsResponse;
class GetConfigurationSetRequest;
class GetConfigurationSetResponse;
class GetConfigurationSetEventDestinationsRequest;
class GetConfigurationSetEventDestinationsResponse;
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
class ListConfigurationSetsRequest;
class ListConfigurationSetsResponse;
class ListDedicatedIpPoolsRequest;
class ListDedicatedIpPoolsResponse;
class ListDeliverabilityTestReportsRequest;
class ListDeliverabilityTestReportsResponse;
class ListDomainDeliverabilityCampaignsRequest;
class ListDomainDeliverabilityCampaignsResponse;
class ListEmailIdentitiesRequest;
class ListEmailIdentitiesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutAccountDedicatedIpWarmupAttributesRequest;
class PutAccountDedicatedIpWarmupAttributesResponse;
class PutAccountSendingAttributesRequest;
class PutAccountSendingAttributesResponse;
class PutConfigurationSetDeliveryOptionsRequest;
class PutConfigurationSetDeliveryOptionsResponse;
class PutConfigurationSetReputationOptionsRequest;
class PutConfigurationSetReputationOptionsResponse;
class PutConfigurationSetSendingOptionsRequest;
class PutConfigurationSetSendingOptionsResponse;
class PutConfigurationSetTrackingOptionsRequest;
class PutConfigurationSetTrackingOptionsResponse;
class PutDedicatedIpInPoolRequest;
class PutDedicatedIpInPoolResponse;
class PutDedicatedIpWarmupAttributesRequest;
class PutDedicatedIpWarmupAttributesResponse;
class PutDeliverabilityDashboardOptionRequest;
class PutDeliverabilityDashboardOptionResponse;
class PutEmailIdentityDkimAttributesRequest;
class PutEmailIdentityDkimAttributesResponse;
class PutEmailIdentityFeedbackAttributesRequest;
class PutEmailIdentityFeedbackAttributesResponse;
class PutEmailIdentityMailFromAttributesRequest;
class PutEmailIdentityMailFromAttributesResponse;
class SendEmailRequest;
class SendEmailResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConfigurationSetEventDestinationRequest;
class UpdateConfigurationSetEventDestinationResponse;

class QTAWS_EXPORT PinpointEmailClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PinpointEmailClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    PinpointEmailClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateConfigurationSetResponse * createConfigurationSet(const CreateConfigurationSetRequest &request);
    CreateConfigurationSetEventDestinationResponse * createConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest &request);
    CreateDedicatedIpPoolResponse * createDedicatedIpPool(const CreateDedicatedIpPoolRequest &request);
    CreateDeliverabilityTestReportResponse * createDeliverabilityTestReport(const CreateDeliverabilityTestReportRequest &request);
    CreateEmailIdentityResponse * createEmailIdentity(const CreateEmailIdentityRequest &request);
    DeleteConfigurationSetResponse * deleteConfigurationSet(const DeleteConfigurationSetRequest &request);
    DeleteConfigurationSetEventDestinationResponse * deleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest &request);
    DeleteDedicatedIpPoolResponse * deleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest &request);
    DeleteEmailIdentityResponse * deleteEmailIdentity(const DeleteEmailIdentityRequest &request);
    GetAccountResponse * getAccount(const GetAccountRequest &request);
    GetBlacklistReportsResponse * getBlacklistReports(const GetBlacklistReportsRequest &request);
    GetConfigurationSetResponse * getConfigurationSet(const GetConfigurationSetRequest &request);
    GetConfigurationSetEventDestinationsResponse * getConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest &request);
    GetDedicatedIpResponse * getDedicatedIp(const GetDedicatedIpRequest &request);
    GetDedicatedIpsResponse * getDedicatedIps(const GetDedicatedIpsRequest &request);
    GetDeliverabilityDashboardOptionsResponse * getDeliverabilityDashboardOptions(const GetDeliverabilityDashboardOptionsRequest &request);
    GetDeliverabilityTestReportResponse * getDeliverabilityTestReport(const GetDeliverabilityTestReportRequest &request);
    GetDomainDeliverabilityCampaignResponse * getDomainDeliverabilityCampaign(const GetDomainDeliverabilityCampaignRequest &request);
    GetDomainStatisticsReportResponse * getDomainStatisticsReport(const GetDomainStatisticsReportRequest &request);
    GetEmailIdentityResponse * getEmailIdentity(const GetEmailIdentityRequest &request);
    ListConfigurationSetsResponse * listConfigurationSets(const ListConfigurationSetsRequest &request);
    ListDedicatedIpPoolsResponse * listDedicatedIpPools(const ListDedicatedIpPoolsRequest &request);
    ListDeliverabilityTestReportsResponse * listDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest &request);
    ListDomainDeliverabilityCampaignsResponse * listDomainDeliverabilityCampaigns(const ListDomainDeliverabilityCampaignsRequest &request);
    ListEmailIdentitiesResponse * listEmailIdentities(const ListEmailIdentitiesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutAccountDedicatedIpWarmupAttributesResponse * putAccountDedicatedIpWarmupAttributes(const PutAccountDedicatedIpWarmupAttributesRequest &request);
    PutAccountSendingAttributesResponse * putAccountSendingAttributes(const PutAccountSendingAttributesRequest &request);
    PutConfigurationSetDeliveryOptionsResponse * putConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest &request);
    PutConfigurationSetReputationOptionsResponse * putConfigurationSetReputationOptions(const PutConfigurationSetReputationOptionsRequest &request);
    PutConfigurationSetSendingOptionsResponse * putConfigurationSetSendingOptions(const PutConfigurationSetSendingOptionsRequest &request);
    PutConfigurationSetTrackingOptionsResponse * putConfigurationSetTrackingOptions(const PutConfigurationSetTrackingOptionsRequest &request);
    PutDedicatedIpInPoolResponse * putDedicatedIpInPool(const PutDedicatedIpInPoolRequest &request);
    PutDedicatedIpWarmupAttributesResponse * putDedicatedIpWarmupAttributes(const PutDedicatedIpWarmupAttributesRequest &request);
    PutDeliverabilityDashboardOptionResponse * putDeliverabilityDashboardOption(const PutDeliverabilityDashboardOptionRequest &request);
    PutEmailIdentityDkimAttributesResponse * putEmailIdentityDkimAttributes(const PutEmailIdentityDkimAttributesRequest &request);
    PutEmailIdentityFeedbackAttributesResponse * putEmailIdentityFeedbackAttributes(const PutEmailIdentityFeedbackAttributesRequest &request);
    PutEmailIdentityMailFromAttributesResponse * putEmailIdentityMailFromAttributes(const PutEmailIdentityMailFromAttributesRequest &request);
    SendEmailResponse * sendEmail(const SendEmailRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConfigurationSetEventDestinationResponse * updateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest &request);

protected:
    /// @cond internal
    PinpointEmailClientPrivate * const d_ptr; ///< Internal d-pointer.
    PinpointEmailClient(PinpointEmailClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(PinpointEmailClient)
    Q_DISABLE_COPY(PinpointEmailClient)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
