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

#ifndef QTAWS_ROUTE53DOMAINSCLIENT_H
#define QTAWS_ROUTE53DOMAINSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Route53Domains {

class Route53DomainsClientPrivate;

class QTAWS_EXPORT Route53DomainsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    Route53DomainsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Route53DomainsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CheckDomainAvailabilityResponse * checkDomainAvailability(const CheckDomainAvailabilityRequest &request);
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
} // namespace AWS

#endif
