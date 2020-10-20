/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_ROUTE53DOMAINSCLIENT_H
#define QTAWS_ROUTE53DOMAINSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Route53Domains {

class Route53DomainsClientPrivate;
class CheckDomainAvailabilityRequest;
class CheckDomainAvailabilityResponse;
class CheckDomainTransferabilityRequest;
class CheckDomainTransferabilityResponse;
class DeleteTagsForDomainRequest;
class DeleteTagsForDomainResponse;
class DisableDomainAutoRenewRequest;
class DisableDomainAutoRenewResponse;
class DisableDomainTransferLockRequest;
class DisableDomainTransferLockResponse;
class EnableDomainAutoRenewRequest;
class EnableDomainAutoRenewResponse;
class EnableDomainTransferLockRequest;
class EnableDomainTransferLockResponse;
class GetContactReachabilityStatusRequest;
class GetContactReachabilityStatusResponse;
class GetDomainDetailRequest;
class GetDomainDetailResponse;
class GetDomainSuggestionsRequest;
class GetDomainSuggestionsResponse;
class GetOperationDetailRequest;
class GetOperationDetailResponse;
class ListDomainsRequest;
class ListDomainsResponse;
class ListOperationsRequest;
class ListOperationsResponse;
class ListTagsForDomainRequest;
class ListTagsForDomainResponse;
class RegisterDomainRequest;
class RegisterDomainResponse;
class RenewDomainRequest;
class RenewDomainResponse;
class ResendContactReachabilityEmailRequest;
class ResendContactReachabilityEmailResponse;
class RetrieveDomainAuthCodeRequest;
class RetrieveDomainAuthCodeResponse;
class TransferDomainRequest;
class TransferDomainResponse;
class UpdateDomainContactRequest;
class UpdateDomainContactResponse;
class UpdateDomainContactPrivacyRequest;
class UpdateDomainContactPrivacyResponse;
class UpdateDomainNameserversRequest;
class UpdateDomainNameserversResponse;
class UpdateTagsForDomainRequest;
class UpdateTagsForDomainResponse;
class ViewBillingRequest;
class ViewBillingResponse;

class QTAWS_EXPORT Route53DomainsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Route53DomainsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Route53DomainsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CheckDomainAvailabilityResponse * checkDomainAvailability(const CheckDomainAvailabilityRequest &request);
    CheckDomainTransferabilityResponse * checkDomainTransferability(const CheckDomainTransferabilityRequest &request);
    DeleteTagsForDomainResponse * deleteTagsForDomain(const DeleteTagsForDomainRequest &request);
    DisableDomainAutoRenewResponse * disableDomainAutoRenew(const DisableDomainAutoRenewRequest &request);
    DisableDomainTransferLockResponse * disableDomainTransferLock(const DisableDomainTransferLockRequest &request);
    EnableDomainAutoRenewResponse * enableDomainAutoRenew(const EnableDomainAutoRenewRequest &request);
    EnableDomainTransferLockResponse * enableDomainTransferLock(const EnableDomainTransferLockRequest &request);
    GetContactReachabilityStatusResponse * getContactReachabilityStatus(const GetContactReachabilityStatusRequest &request);
    GetDomainDetailResponse * getDomainDetail(const GetDomainDetailRequest &request);
    GetDomainSuggestionsResponse * getDomainSuggestions(const GetDomainSuggestionsRequest &request);
    GetOperationDetailResponse * getOperationDetail(const GetOperationDetailRequest &request);
    ListDomainsResponse * listDomains(const ListDomainsRequest &request);
    ListOperationsResponse * listOperations(const ListOperationsRequest &request);
    ListTagsForDomainResponse * listTagsForDomain(const ListTagsForDomainRequest &request);
    RegisterDomainResponse * registerDomain(const RegisterDomainRequest &request);
    RenewDomainResponse * renewDomain(const RenewDomainRequest &request);
    ResendContactReachabilityEmailResponse * resendContactReachabilityEmail(const ResendContactReachabilityEmailRequest &request);
    RetrieveDomainAuthCodeResponse * retrieveDomainAuthCode(const RetrieveDomainAuthCodeRequest &request);
    TransferDomainResponse * transferDomain(const TransferDomainRequest &request);
    UpdateDomainContactResponse * updateDomainContact(const UpdateDomainContactRequest &request);
    UpdateDomainContactPrivacyResponse * updateDomainContactPrivacy(const UpdateDomainContactPrivacyRequest &request);
    UpdateDomainNameserversResponse * updateDomainNameservers(const UpdateDomainNameserversRequest &request);
    UpdateTagsForDomainResponse * updateTagsForDomain(const UpdateTagsForDomainRequest &request);
    ViewBillingResponse * viewBilling(const ViewBillingRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53DomainsClient)
    Q_DISABLE_COPY(Route53DomainsClient)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
