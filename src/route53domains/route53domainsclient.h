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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    Route53DomainsCheckDomainAvailabilityResponse * checkDomainAvailability(const Route53DomainsCheckDomainAvailabilityRequest &request);
    Route53DomainsDeleteTagsForDomainResponse * deleteTagsForDomain(const Route53DomainsDeleteTagsForDomainRequest &request);
    Route53DomainsDisableDomainAutoRenewResponse * disableDomainAutoRenew(const Route53DomainsDisableDomainAutoRenewRequest &request);
    Route53DomainsDisableDomainTransferLockResponse * disableDomainTransferLock(const Route53DomainsDisableDomainTransferLockRequest &request);
    Route53DomainsEnableDomainAutoRenewResponse * enableDomainAutoRenew(const Route53DomainsEnableDomainAutoRenewRequest &request);
    Route53DomainsEnableDomainTransferLockResponse * enableDomainTransferLock(const Route53DomainsEnableDomainTransferLockRequest &request);
    Route53DomainsGetContactReachabilityStatusResponse * getContactReachabilityStatus(const Route53DomainsGetContactReachabilityStatusRequest &request);
    Route53DomainsGetDomainDetailResponse * getDomainDetail(const Route53DomainsGetDomainDetailRequest &request);
    Route53DomainsGetDomainSuggestionsResponse * getDomainSuggestions(const Route53DomainsGetDomainSuggestionsRequest &request);
    Route53DomainsGetOperationDetailResponse * getOperationDetail(const Route53DomainsGetOperationDetailRequest &request);
    Route53DomainsListDomainsResponse * listDomains(const Route53DomainsListDomainsRequest &request);
    Route53DomainsListOperationsResponse * listOperations(const Route53DomainsListOperationsRequest &request);
    Route53DomainsListTagsForDomainResponse * listTagsForDomain(const Route53DomainsListTagsForDomainRequest &request);
    Route53DomainsRegisterDomainResponse * registerDomain(const Route53DomainsRegisterDomainRequest &request);
    Route53DomainsRenewDomainResponse * renewDomain(const Route53DomainsRenewDomainRequest &request);
    Route53DomainsResendContactReachabilityEmailResponse * resendContactReachabilityEmail(const Route53DomainsResendContactReachabilityEmailRequest &request);
    Route53DomainsRetrieveDomainAuthCodeResponse * retrieveDomainAuthCode(const Route53DomainsRetrieveDomainAuthCodeRequest &request);
    Route53DomainsTransferDomainResponse * transferDomain(const Route53DomainsTransferDomainRequest &request);
    Route53DomainsUpdateDomainContactResponse * updateDomainContact(const Route53DomainsUpdateDomainContactRequest &request);
    Route53DomainsUpdateDomainContactPrivacyResponse * updateDomainContactPrivacy(const Route53DomainsUpdateDomainContactPrivacyRequest &request);
    Route53DomainsUpdateDomainNameserversResponse * updateDomainNameservers(const Route53DomainsUpdateDomainNameserversRequest &request);
    Route53DomainsUpdateTagsForDomainResponse * updateTagsForDomain(const Route53DomainsUpdateTagsForDomainRequest &request);
    Route53DomainsViewBillingResponse * viewBilling(const Route53DomainsViewBillingRequest &request);

private:
    Q_DECLARE_PRIVATE(Route53DomainsClient)
    Q_DISABLE_COPY(Route53DomainsClient)

};

QTAWS_END_NAMESPACE

#endif
