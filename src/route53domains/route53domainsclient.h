// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53DOMAINSCLIENT_H
#define QTAWS_ROUTE53DOMAINSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsroute53domainsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Route53Domains {

class Route53DomainsClientPrivate;
class AcceptDomainTransferFromAnotherAwsAccountRequest;
class AcceptDomainTransferFromAnotherAwsAccountResponse;
class CancelDomainTransferToAnotherAwsAccountRequest;
class CancelDomainTransferToAnotherAwsAccountResponse;
class CheckDomainAvailabilityRequest;
class CheckDomainAvailabilityResponse;
class CheckDomainTransferabilityRequest;
class CheckDomainTransferabilityResponse;
class DeleteDomainRequest;
class DeleteDomainResponse;
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
class ListPricesRequest;
class ListPricesResponse;
class ListTagsForDomainRequest;
class ListTagsForDomainResponse;
class RegisterDomainRequest;
class RegisterDomainResponse;
class RejectDomainTransferFromAnotherAwsAccountRequest;
class RejectDomainTransferFromAnotherAwsAccountResponse;
class RenewDomainRequest;
class RenewDomainResponse;
class ResendContactReachabilityEmailRequest;
class ResendContactReachabilityEmailResponse;
class RetrieveDomainAuthCodeRequest;
class RetrieveDomainAuthCodeResponse;
class TransferDomainRequest;
class TransferDomainResponse;
class TransferDomainToAnotherAwsAccountRequest;
class TransferDomainToAnotherAwsAccountResponse;
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

class QTAWSROUTE53DOMAINS_EXPORT Route53DomainsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Route53DomainsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Route53DomainsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptDomainTransferFromAnotherAwsAccountResponse * acceptDomainTransferFromAnotherAwsAccount(const AcceptDomainTransferFromAnotherAwsAccountRequest &request);
    CancelDomainTransferToAnotherAwsAccountResponse * cancelDomainTransferToAnotherAwsAccount(const CancelDomainTransferToAnotherAwsAccountRequest &request);
    CheckDomainAvailabilityResponse * checkDomainAvailability(const CheckDomainAvailabilityRequest &request);
    CheckDomainTransferabilityResponse * checkDomainTransferability(const CheckDomainTransferabilityRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
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
    ListPricesResponse * listPrices(const ListPricesRequest &request);
    ListTagsForDomainResponse * listTagsForDomain(const ListTagsForDomainRequest &request);
    RegisterDomainResponse * registerDomain(const RegisterDomainRequest &request);
    RejectDomainTransferFromAnotherAwsAccountResponse * rejectDomainTransferFromAnotherAwsAccount(const RejectDomainTransferFromAnotherAwsAccountRequest &request);
    RenewDomainResponse * renewDomain(const RenewDomainRequest &request);
    ResendContactReachabilityEmailResponse * resendContactReachabilityEmail(const ResendContactReachabilityEmailRequest &request);
    RetrieveDomainAuthCodeResponse * retrieveDomainAuthCode(const RetrieveDomainAuthCodeRequest &request);
    TransferDomainResponse * transferDomain(const TransferDomainRequest &request);
    TransferDomainToAnotherAwsAccountResponse * transferDomainToAnotherAwsAccount(const TransferDomainToAnotherAwsAccountRequest &request);
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
