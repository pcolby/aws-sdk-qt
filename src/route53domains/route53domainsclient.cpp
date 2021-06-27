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

#include "route53domainsclient.h"
#include "route53domainsclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptdomaintransferfromanotherawsaccountrequest.h"
#include "acceptdomaintransferfromanotherawsaccountresponse.h"
#include "canceldomaintransfertoanotherawsaccountrequest.h"
#include "canceldomaintransfertoanotherawsaccountresponse.h"
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
#include "rejectdomaintransferfromanotherawsaccountrequest.h"
#include "rejectdomaintransferfromanotherawsaccountresponse.h"
#include "renewdomainrequest.h"
#include "renewdomainresponse.h"
#include "resendcontactreachabilityemailrequest.h"
#include "resendcontactreachabilityemailresponse.h"
#include "retrievedomainauthcoderequest.h"
#include "retrievedomainauthcoderesponse.h"
#include "transferdomainrequest.h"
#include "transferdomainresponse.h"
#include "transferdomaintoanotherawsaccountrequest.h"
#include "transferdomaintoanotherawsaccountresponse.h"
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
 * \brief Contains classess for accessing Amazon Route 53 Domains.
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2014-05-15"),
    QStringLiteral("route53domains"),
    QStringLiteral("Amazon Route 53 Domains"),
    QStringLiteral("route53domains"),
    parent), d_ptr(new Route53DomainsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2014-05-15"),
    QStringLiteral("route53domains"),
    QStringLiteral("Amazon Route 53 Domains"),
    QStringLiteral("route53domains"),
    parent), d_ptr(new Route53DomainsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * AcceptDomainTransferFromAnotherAwsAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts the transfer of a domain from another AWS account to the current AWS account. You initiate a transfer between
 * AWS accounts using <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
 *
 * </p
 *
 * Use either <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a> or <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * to determine whether the operation succeeded. <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * provides additional information, for example, <code>Domain Transfer from Aws Account 111122223333 has been
 * cancelled</code>.
 */
AcceptDomainTransferFromAnotherAwsAccountResponse * Route53DomainsClient::acceptDomainTransferFromAnotherAwsAccount(const AcceptDomainTransferFromAnotherAwsAccountRequest &request)
{
    return qobject_cast<AcceptDomainTransferFromAnotherAwsAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * CancelDomainTransferToAnotherAwsAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the transfer of a domain from the current AWS account to another AWS account. You initiate a transfer between
 * AWS accounts using <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
 *
 * </p <b>
 *
 * You must cancel the transfer before the other AWS account accepts the transfer using <a
 *
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>>
 * </b>
 *
 * Use either <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a> or <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * to determine whether the operation succeeded. <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * provides additional information, for example, <code>Domain Transfer from Aws Account 111122223333 has been
 * cancelled</code>.
 */
CancelDomainTransferToAnotherAwsAccountResponse * Route53DomainsClient::cancelDomainTransferToAnotherAwsAccount(const CancelDomainTransferToAnotherAwsAccountRequest &request)
{
    return qobject_cast<CancelDomainTransferToAnotherAwsAccountResponse *>(send(request));
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
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains That You Can Register
 * with Amazon Route 53</a> in the <i>Amazon Route 53 Developer Guide</i>. Route 53 requires that you renew before the end
 * of the renewal period so we can complete processing before the
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
 * The GetDomainSuggestions operation returns a list of suggested domain
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
 * Returns information about all of the operations that return an operation ID and that have ever been performed on domains
 * that were registered by the current account.
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
 * This operation registers a domain. Domains are registered either by Amazon Registrar (for .com, .net, and .org domains)
 * or by our registrar associate, Gandi (for all other domains). For some top-level domains (TLDs), this operation requires
 * extra
 *
 * parameters>
 *
 * When you register a domain, Amazon Route 53 does the
 *
 * following> <ul> <li>
 *
 * Creates a Route 53 hosted zone that has the same name as the domain. Route 53 assigns four name servers to your hosted
 * zone and automatically updates your domain registration with the names of these name
 *
 * servers> </li> <li>
 *
 * Enables autorenew, so your domain registration will renew automatically each year. We'll notify you in advance of the
 * renewal date so you can choose whether to renew the
 *
 * registration> </li> <li>
 *
 * Optionally enables privacy protection, so WHOIS queries return contact information either for Amazon Registrar (for
 * .com, .net, and .org domains) or for our registrar associate, Gandi (for all other TLDs). If you don't enable privacy
 * protection, WHOIS queries return the information that you entered for the registrant, admin, and tech
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
 * RejectDomainTransferFromAnotherAwsAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects the transfer of a domain from another AWS account to the current AWS account. You initiate a transfer between
 * AWS accounts using <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
 *
 * </p
 *
 * Use either <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a> or <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * to determine whether the operation succeeded. <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * provides additional information, for example, <code>Domain Transfer from Aws Account 111122223333 has been
 * cancelled</code>.
 */
RejectDomainTransferFromAnotherAwsAccountResponse * Route53DomainsClient::rejectDomainTransferFromAnotherAwsAccount(const RejectDomainTransferFromAnotherAwsAccountRequest &request)
{
    return qobject_cast<RejectDomainTransferFromAnotherAwsAccountResponse *>(send(request));
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
 * registration, see <a href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-renew.html">Renewing
 * Registration for a Domain</a> in the <i>Amazon Route 53 Developer
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
 * Transfers a domain from another registrar to Amazon Route 53. When the transfer is complete, the domain is registered
 * either with Amazon Registrar (for .com, .net, and .org domains) or with our registrar associate, Gandi (for all other
 *
 * TLDs)>
 *
 * For more information about transferring domains, see the following
 *
 * topics> <ul> <li>
 *
 * For transfer requirements, a detailed procedure, and information about viewing the status of a domain that you're
 * transferring to Route 53, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-to-route-53.html">Transferring
 * Registration for a Domain to Amazon Route 53</a> in the <i>Amazon Route 53 Developer
 *
 * Guide</i>> </li> <li>
 *
 * For information about how to transfer a domain from one AWS account to another, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>.
 *
 * </p </li> <li>
 *
 * For information about how to transfer a domain to another domain registrar, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/domain-transfer-from-route-53.html">Transferring a
 * Domain from Amazon Route 53 to Another Registrar</a> in the <i>Amazon Route 53 Developer
 *
 * Guide</i>> </li> </ul>
 *
 * If the registrar for your domain is also the DNS service provider for the domain, we highly recommend that you transfer
 * your DNS service to Route 53 or to another DNS service provider before you transfer your registration. Some registrars
 * provide free DNS service when you purchase a domain registration. When you transfer the registration, the previous
 * registrar will not renew your domain registration and could end your DNS service at any
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
 * TransferDomainToAnotherAwsAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transfers a domain from the current AWS account to another AWS account. Note the
 *
 * following> <ul> <li>
 *
 * The AWS account that you're transferring the domain to must accept the transfer. If the other account doesn't accept the
 * transfer within 3 days, we cancel the transfer. See <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AcceptDomainTransferFromAnotherAwsAccount.html">AcceptDomainTransferFromAnotherAwsAccount</a>.
 *
 * </p </li> <li>
 *
 * You can cancel the transfer before the other account accepts it. See <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_CancelDomainTransferToAnotherAwsAccount.html">CancelDomainTransferToAnotherAwsAccount</a>.
 *
 * </p </li> <li>
 *
 * The other account can reject the transfer. See <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_RejectDomainTransferFromAnotherAwsAccount.html">RejectDomainTransferFromAnotherAwsAccount</a>.
 *
 * </p </li> </ul> <b>
 *
 * When you transfer a domain from one AWS account to another, Route 53 doesn't transfer the hosted zone that is associated
 * with the domain. DNS resolution isn't affected if the domain and the hosted zone are owned by separate accounts, so
 * transferring the hosted zone is optional. For information about transferring the hosted zone to another AWS account, see
 * <a href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/hosted-zones-migrating.html">Migrating a Hosted Zone
 * to a Different AWS Account</a> in the <i>Amazon Route 53 Developer
 *
 * Guide</i>> </b>
 *
 * Use either <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ListOperations.html">ListOperations</a> or <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * to determine whether the operation succeeded. <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * provides additional information, for example, <code>Domain Transfer from Aws Account 111122223333 has been
 * cancelled</code>.
 */
TransferDomainToAnotherAwsAccountResponse * Route53DomainsClient::transferDomainToAnotherAwsAccount(const TransferDomainToAnotherAwsAccountRequest &request)
{
    return qobject_cast<TransferDomainToAnotherAwsAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53DomainsClient service, and returns a pointer to an
 * UpdateDomainContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation updates the contact information for a particular domain. You must specify information for at least one
 * contact: registrant, administrator, or
 *
 * technical>
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
 * This operation updates the specified domain contact's privacy setting. When privacy protection is enabled, contact
 * information such as email address is replaced either with contact information for Amazon Registrar (for .com, .net, and
 * .org domains) or with contact information for our registrar associate,
 *
 * Gandi>
 *
 * This operation affects only the contact information for the specified contact type (registrant, administrator, or tech).
 * If the request succeeds, Amazon Route 53 returns an operation ID that you can use with <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetOperationDetail.html">GetOperationDetail</a>
 * to track the progress and completion of the action. If the request doesn't complete successfully, the domain registrant
 * will be notified by
 *
 * email> <b>
 *
 * By disabling the privacy service via API, you consent to the publication of the contact information provided for this
 * domain via the public WHOIS database. You certify that you are the registrant of this domain name and have the authority
 * to make this decision. You may withdraw your consent at any time by enabling privacy protection using either
 * <code>UpdateDomainContactPrivacy</code> or the Route 53 console. Enabling privacy protection removes the contact
 * information provided for this domain from the WHOIS database. For more information on our privacy practices, see <a
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
Route53DomainsClientPrivate::Route53DomainsClientPrivate(Route53DomainsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Route53Domains
} // namespace QtAws
