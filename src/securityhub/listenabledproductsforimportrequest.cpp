// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listenabledproductsforimportrequest.h"
#include "listenabledproductsforimportrequest_p.h"
#include "listenabledproductsforimportresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::ListEnabledProductsForImportRequest
 * \brief The ListEnabledProductsForImportRequest class provides an interface for SecurityHub ListEnabledProductsForImport requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your Amazon Web Services environment and
 *  resources. It also provides you with the readiness status of your environment based on controls from supported security
 *  standards. Security Hub collects security data from Amazon Web Services accounts, services, and integrated third-party
 *  products and helps you analyze security trends in your environment to identify the highest priority security issues. For
 *  more information about Security Hub, see the <a
 *  href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html"> <i>Security HubUser Guide</i>
 * 
 *  </a>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the Amazon Web Services Region that
 *  is currently active or in the specific Amazon Web Services Region that you specify in your request. Any configuration or
 *  settings change that results from the operation is applied only to that Region. To make the same change in other
 *  Regions, execute the same command for each Region to apply the change
 * 
 *  to>
 * 
 *  For example, if your Region is set to <code>us-west-2</code>, when you use <code>CreateMembers</code> to add a member
 *  account to Security Hub, the association of the member account with the administrator account is created only in the
 *  <code>us-west-2</code> Region. Security Hub must be enabled for the member account in the same Region that the
 *  invitation was sent
 * 
 *  from>
 * 
 *  The following throttling limits apply to using Security Hub API
 * 
 *  operations> <ul> <li>
 * 
 *  <code>BatchEnableStandards</code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of 1 request
 *  per
 * 
 *  second> </li> <li>
 * 
 *  <code>GetFindings</code> - <code>RateLimit</code> of 3 requests per second. <code>BurstLimit</code> of 6 requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>BatchImportFindings</code> - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>BatchUpdateFindings</code> - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>UpdateStandardsControl</code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of 5
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  All other operations - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30 requests per
 *
 * \sa SecurityHubClient::listEnabledProductsForImport
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnabledProductsForImportRequest::ListEnabledProductsForImportRequest(const ListEnabledProductsForImportRequest &other)
    : SecurityHubRequest(new ListEnabledProductsForImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnabledProductsForImportRequest object.
 */
ListEnabledProductsForImportRequest::ListEnabledProductsForImportRequest()
    : SecurityHubRequest(new ListEnabledProductsForImportRequestPrivate(SecurityHubRequest::ListEnabledProductsForImportAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnabledProductsForImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnabledProductsForImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnabledProductsForImportRequest::response(QNetworkReply * const reply) const
{
    return new ListEnabledProductsForImportResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::ListEnabledProductsForImportRequestPrivate
 * \brief The ListEnabledProductsForImportRequestPrivate class provides private implementation for ListEnabledProductsForImportRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a ListEnabledProductsForImportRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
ListEnabledProductsForImportRequestPrivate::ListEnabledProductsForImportRequestPrivate(
    const SecurityHubRequest::Action action, ListEnabledProductsForImportRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnabledProductsForImportRequest
 * class' copy constructor.
 */
ListEnabledProductsForImportRequestPrivate::ListEnabledProductsForImportRequestPrivate(
    const ListEnabledProductsForImportRequestPrivate &other, ListEnabledProductsForImportRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
