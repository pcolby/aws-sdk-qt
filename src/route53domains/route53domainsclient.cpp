/*
    Copyright 2013-2018 Paul Colby

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

#include "route53domainsclient.h"
#include "route53domainsclient_p.h"

#include "core/awssignaturev4.h"
#include "checkdomainavailabilityrequest.h"
#include "checkdomainavailabilityresponse.h"
#include "checkdomaintransferabilityrequest.h"
#include "checkdomaintransferabilityresponse.h"
#include "deletetagsfordomainrequest.h"
#include "deletetagsfordomainresponse.h"
#include "disabledomainautorenewrequest.h"
#include "disabledomainautorenewresponse.h"
#include "disabledomaintransferlockrequest.h"
#include "disabledomaintransferlockresponse.h"
#include "enabledomainautorenewrequest.h"
#include "enabledomainautorenewresponse.h"
#include "enabledomaintransferlockrequest.h"
#include "enabledomaintransferlockresponse.h"
#include "getcontactreachabilitystatusrequest.h"
#include "getcontactreachabilitystatusresponse.h"
#include "getdomaindetailrequest.h"
#include "getdomaindetailresponse.h"
#include "getdomainsuggestionsrequest.h"
#include "getdomainsuggestionsresponse.h"
#include "getoperationdetailrequest.h"
#include "getoperationdetailresponse.h"
#include "listdomainsrequest.h"
#include "listdomainsresponse.h"
#include "listoperationsrequest.h"
#include "listoperationsresponse.h"
#include "listtagsfordomainrequest.h"
#include "listtagsfordomainresponse.h"
#include "registerdomainrequest.h"
#include "registerdomainresponse.h"
#include "renewdomainrequest.h"
#include "renewdomainresponse.h"
#include "resendcontactreachabilityemailrequest.h"
#include "resendcontactreachabilityemailresponse.h"
#include "retrievedomainauthcoderequest.h"
#include "retrievedomainauthcoderesponse.h"
#include "transferdomainrequest.h"
#include "transferdomainresponse.h"
#include "updatedomaincontactrequest.h"
#include "updatedomaincontactresponse.h"
#include "updatedomaincontactprivacyrequest.h"
#include "updatedomaincontactprivacyresponse.h"
#include "updatedomainnameserversrequest.h"
#include "updatedomainnameserversresponse.h"
#include "updatetagsfordomainrequest.h"
#include "updatetagsfordomainresponse.h"
#include "viewbillingrequest.h"
#include "viewbillingresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Route53Domains
 * \brief The QtAws::Route53Domains contains stuff...
 *
 * \inmodule QtAwsRoute53Domains
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::Route53DomainsClient
 * \brief The Route53DomainsClient class provides access to the Amazon Route 53 Domains service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 */

/*!
 * \brief Constructs a Route53DomainsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Route53DomainsClient::Route53DomainsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53DomainsClientPrivate(this), parent)
{
    Q_D(Route53DomainsClient);
    d->apiVersion = QStringLiteral("2014-05-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("route53domains");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Route 53 Domains");
    d->serviceName = QStringLiteral("route53domains");
}

/*!
 * \overload Route53DomainsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Route53DomainsClient::Route53DomainsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Route53DomainsClientPrivate(this), parent)
{
    Q_D(Route53DomainsClient);
    d->apiVersion = QStringLiteral("2014-05-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("route53domains");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Route 53 Domains");
    d->serviceName = QStringLiteral("route53domains");
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * CheckDomainAvailabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation checks the availability of one domain name. Note that if the availability status of a domain is pending,
 * you must submit another request to determine the availability of the domain
 */
CheckDomainAvailabilityResponse * Route53DomainsClient::checkDomainAvailability(const CheckDomainAvailabilityRequest &request)
{
    return qobject_cast<CheckDomainAvailabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * CheckDomainTransferabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks whether a domain name can be transferred to Amazon Route 53.
 */
CheckDomainTransferabilityResponse * Route53DomainsClient::checkDomainTransferability(const CheckDomainTransferabilityRequest &request)
{
    return qobject_cast<CheckDomainTransferabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * DeleteTagsForDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation deletes the specified tags for a
 *
 * domain>
 *
 * All tag operations are eventually consistent; subsequent operations might not immediately represent all issued
 */
DeleteTagsForDomainResponse * Route53DomainsClient::deleteTagsForDomain(const DeleteTagsForDomainRequest &request)
{
    return qobject_cast<DeleteTagsForDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * DisableDomainAutoRenewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation disables automatic renewal of domain registration for the specified
 */
DisableDomainAutoRenewResponse * Route53DomainsClient::disableDomainAutoRenew(const DisableDomainAutoRenewRequest &request)
{
    return qobject_cast<DisableDomainAutoRenewResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * DisableDomainTransferLockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation removes the transfer lock on the domain (specifically the <code>clientTransferProhibited</code> status)
 * to allow domain transfers. We recommend you refrain from performing this action unless you intend to transfer the domain
 * to a different registrar. Successful submission returns an operation ID that you can use to track the progress and
 * completion of the action. If the request is not completed successfully, the domain registrant will be notified by
 */
DisableDomainTransferLockResponse * Route53DomainsClient::disableDomainTransferLock(const DisableDomainTransferLockRequest &request)
{
    return qobject_cast<DisableDomainTransferLockResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * EnableDomainAutoRenewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation configures Amazon Route 53 to automatically renew the specified domain before the domain registration
 * expires. The cost of renewing your domain registration is billed to your AWS
 *
 * account>
 *
 * The period during which you can renew a domain name varies by TLD. For a list of TLDs and their renewal policies, see <a
 * href="http://wiki.gandi.net/en/domains/renew#renewal_restoration_and_deletion_times">"Renewal, restoration, and deletion
 * times"</a> on the website for our registrar partner, Gandi. Route 53 requires that you renew before the end of the
 * renewal period that is listed on the Gandi website so we can complete processing before the
 */
EnableDomainAutoRenewResponse * Route53DomainsClient::enableDomainAutoRenew(const EnableDomainAutoRenewRequest &request)
{
    return qobject_cast<EnableDomainAutoRenewResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * EnableDomainTransferLockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation sets the transfer lock on the domain (specifically the <code>clientTransferProhibited</code> status) to
 * prevent domain transfers. Successful submission returns an operation ID that you can use to track the progress and
 * completion of the action. If the request is not completed successfully, the domain registrant will be notified by
 */
EnableDomainTransferLockResponse * Route53DomainsClient::enableDomainTransferLock(const EnableDomainTransferLockRequest &request)
{
    return qobject_cast<EnableDomainTransferLockResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * GetContactReachabilityStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For operations that require confirmation that the email address for the registrant contact is valid, such as registering
 * a new domain, this operation returns information about whether the registrant contact has
 *
 * responded>
 *
 * If you want us to resend the email, use the <code>ResendContactReachabilityEmail</code>
 */
GetContactReachabilityStatusResponse * Route53DomainsClient::getContactReachabilityStatus(const GetContactReachabilityStatusRequest &request)
{
    return qobject_cast<GetContactReachabilityStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * GetDomainDetailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns detailed information about a specified domain that is associated with the current AWS account.
 * Contact information for the domain is also returned as part of the
 */
GetDomainDetailResponse * Route53DomainsClient::getDomainDetail(const GetDomainDetailRequest &request)
{
    return qobject_cast<GetDomainDetailResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * GetDomainSuggestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The GetDomainSuggestions operation returns a list of suggested domain names given a string, which can either be a domain
 * name or simply a word or phrase (without
 */
GetDomainSuggestionsResponse * Route53DomainsClient::getDomainSuggestions(const GetDomainSuggestionsRequest &request)
{
    return qobject_cast<GetDomainSuggestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * GetOperationDetailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns the current status of an operation that is not
 */
GetOperationDetailResponse * Route53DomainsClient::getOperationDetail(const GetOperationDetailRequest &request)
{
    return qobject_cast<GetOperationDetailResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * ListDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns all the domain names registered with Amazon Route 53 for the current AWS
 */
ListDomainsResponse * Route53DomainsClient::listDomains(const ListDomainsRequest &request)
{
    return qobject_cast<ListDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * ListOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns the operation IDs of operations that are not yet
 */
ListOperationsResponse * Route53DomainsClient::listOperations(const ListOperationsRequest &request)
{
    return qobject_cast<ListOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * ListTagsForDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns all of the tags that are associated with the specified
 *
 * domain>
 *
 * All tag operations are eventually consistent; subsequent operations might not immediately represent all issued
 */
ListTagsForDomainResponse * Route53DomainsClient::listTagsForDomain(const ListTagsForDomainRequest &request)
{
    return qobject_cast<ListTagsForDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * RegisterDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation registers a domain. Domains are registered by the AWS registrar partner, Gandi. For some top-level
 * domains (TLDs), this operation requires extra
 *
 * parameters>
 *
 * When you register a domain, Amazon Route 53 does the
 *
 * following> <ul> <li>
 *
 * Creates a Amazon Route 53 hosted zone that has the same name as the domain. Amazon Route 53 assigns four name servers to
 * your hosted zone and automatically updates your domain registration with the names of these name
 *
 * servers> </li> <li>
 *
 * Enables autorenew, so your domain registration will renew automatically each year. We'll notify you in advance of the
 * renewal date so you can choose whether to renew the
 *
 * registration> </li> <li>
 *
 * Optionally enables privacy protection, so WHOIS queries return contact information for our registrar partner, Gandi,
 * instead of the information you entered for registrant, admin, and tech
 *
 * contacts> </li> <li>
 *
 * If registration is successful, returns an operation ID that you can use to track the progress and completion of the
 * action. If the request is not completed successfully, the domain registrant is notified by
 *
 * email> </li> <li>
 *
 * Charges your AWS account an amount based on the top-level domain. For more information, see <a
 * href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
 */
RegisterDomainResponse * Route53DomainsClient::registerDomain(const RegisterDomainRequest &request)
{
    return qobject_cast<RegisterDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * RenewDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation renews a domain for the specified number of years. The cost of renewing your domain is billed to your AWS
 *
 * account>
 *
 * We recommend that you renew your domain several weeks before the expiration date. Some TLD registries delete domains
 * before the expiration date if you haven't renewed far enough in advance. For more information about renewing domain
 * registration, see <a href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-renew.html">Renewing
 * Registration for a Domain</a> in the Amazon Route 53 Developer
 */
RenewDomainResponse * Route53DomainsClient::renewDomain(const RenewDomainRequest &request)
{
    return qobject_cast<RenewDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * ResendContactReachabilityEmailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For operations that require confirmation that the email address for the registrant contact is valid, such as registering
 * a new domain, this operation resends the confirmation email to the current email address for the registrant
 */
ResendContactReachabilityEmailResponse * Route53DomainsClient::resendContactReachabilityEmail(const ResendContactReachabilityEmailRequest &request)
{
    return qobject_cast<ResendContactReachabilityEmailResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * RetrieveDomainAuthCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns the AuthCode for the domain. To transfer a domain to another registrar, you provide this value to
 * the new
 */
RetrieveDomainAuthCodeResponse * Route53DomainsClient::retrieveDomainAuthCode(const RetrieveDomainAuthCodeRequest &request)
{
    return qobject_cast<RetrieveDomainAuthCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * TransferDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation transfers a domain from another registrar to Amazon Route 53. When the transfer is complete, the domain
 * is registered with the AWS registrar partner,
 *
 * Gandi>
 *
 * For transfer requirements, a detailed procedure, and information about viewing the status of a domain transfer, see <a
 * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
 * Registration for a Domain to Amazon Route 53</a> in the <i>Amazon Route 53 Developer
 *
 * Guide</i>>
 *
 * If the registrar for your domain is also the DNS service provider for the domain, we highly recommend that you consider
 * transferring your DNS service to Amazon Route 53 or to another DNS service provider before you transfer your
 * registration. Some registrars provide free DNS service when you purchase a domain registration. When you transfer the
 * registration, the previous registrar will not renew your domain registration and could end your DNS service at any
 *
 * time> <b>
 *
 * If the registrar for your domain is also the DNS service provider for the domain and you don't transfer DNS service to
 * another provider, your website, email, and the web applications associated with the domain might become
 *
 * unavailable> </b>
 *
 * If the transfer is successful, this method returns an operation ID that you can use to track the progress and completion
 * of the action. If the transfer doesn't complete successfully, the domain registrant will be notified by
 */
TransferDomainResponse * Route53DomainsClient::transferDomain(const TransferDomainRequest &request)
{
    return qobject_cast<TransferDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * UpdateDomainContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation updates the contact information for a particular domain. Information for at least one contact
 * (registrant, administrator, or technical) must be supplied for
 *
 * update>
 *
 * If the update is successful, this method returns an operation ID that you can use to track the progress and completion
 * of the action. If the request is not completed successfully, the domain registrant will be notified by
 */
UpdateDomainContactResponse * Route53DomainsClient::updateDomainContact(const UpdateDomainContactRequest &request)
{
    return qobject_cast<UpdateDomainContactResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * UpdateDomainContactPrivacyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation updates the specified domain contact's privacy setting. When the privacy option is enabled, personal
 * information such as postal or email address is hidden from the results of a public WHOIS query. The privacy services are
 * provided by the AWS registrar, Gandi. For more information, see the <a
 * href="http://www.gandi.net/domain/whois/?currency=USD&amp;amp;lang=en">Gandi privacy
 *
 * features</a>>
 *
 * This operation only affects the privacy of the specified contact type (registrant, administrator, or tech). Successful
 * acceptance returns an operation ID that you can use with <a>GetOperationDetail</a> to track the progress and completion
 * of the action. If the request is not completed successfully, the domain registrant will be notified by
 */
UpdateDomainContactPrivacyResponse * Route53DomainsClient::updateDomainContactPrivacy(const UpdateDomainContactPrivacyRequest &request)
{
    return qobject_cast<UpdateDomainContactPrivacyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * UpdateDomainNameserversResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation replaces the current set of name servers for the domain with the specified set of name servers. If you
 * use Amazon Route 53 as your DNS service, specify the four name servers in the delegation set for the hosted zone for the
 *
 * domain>
 *
 * If successful, this operation returns an operation ID that you can use to track the progress and completion of the
 * action. If the request is not completed successfully, the domain registrant will be notified by
 */
UpdateDomainNameserversResponse * Route53DomainsClient::updateDomainNameservers(const UpdateDomainNameserversRequest &request)
{
    return qobject_cast<UpdateDomainNameserversResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * UpdateTagsForDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation adds or updates tags for a specified
 *
 * domain>
 *
 * All tag operations are eventually consistent; subsequent operations might not immediately represent all issued
 */
UpdateTagsForDomainResponse * Route53DomainsClient::updateTagsForDomain(const UpdateTagsForDomainRequest &request)
{
    return qobject_cast<UpdateTagsForDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * ViewBillingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all the domain-related billing records for the current AWS account for a specified
 */
ViewBillingResponse * Route53DomainsClient::viewBilling(const ViewBillingRequest &request)
{
    return qobject_cast<ViewBillingResponse *>(send(request));
}

/*!
 * \class QtAws::Route53Domains::Route53DomainsClientPrivate
 * \brief The Route53DomainsClientPrivate class provides private implementation for Route53DomainsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a Route53DomainsClientPrivate object with public implementation \a q.
 */
Route53DomainsClientPrivate::Route53DomainsClientPrivate(Route53DomainsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Route53Domains
} // namespace QtAws
