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

#include "listorganizationadminaccountsrequest.h"
#include "listorganizationadminaccountsrequest_p.h"
#include "listorganizationadminaccountsresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::ListOrganizationAdminAccountsRequest
 * \brief The ListOrganizationAdminAccountsRequest class provides an interface for SecurityHub ListOrganizationAdminAccounts requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your AWS environment and resources. It also
 *  provides you with the readiness status of your environment based on controls from supported security standards. Security
 *  Hub collects security data from AWS accounts, services, and integrated third-party products and helps you analyze
 *  security trends in your environment to identify the highest priority security issues. For more information about
 *  Security Hub, see the <i> <a
 *  href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS Security Hub User Guide</a>
 * 
 *  </i>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the AWS Region that is currently
 *  active or in the specific AWS Region that you specify in your request. Any configuration or settings change that results
 *  from the operation is applied only to that Region. To make the same change in other Regions, execute the same command
 *  for each Region to apply the change
 * 
 *  to>
 * 
 *  For example, if your Region is set to <code>us-west-2</code>, when you use <code> <a>CreateMembers</a> </code> to add a
 *  member account to Security Hub, the association of the member account with the administrator account is created only in
 *  the <code>us-west-2</code> Region. Security Hub must be enabled for the member account in the same Region that the
 *  invitation was sent
 * 
 *  from>
 * 
 *  The following throttling limits apply to using Security Hub API
 * 
 *  operations> <ul> <li>
 * 
 *  <code> <a>BatchEnableStandards</a> </code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of
 *  1 request per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>GetFindings</a> </code> - <code>RateLimit</code> of 3 requests per second. <code>BurstLimit</code> of 6
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>UpdateFindings</a> </code> - <code>RateLimit</code> of 1 request per second. <code>BurstLimit</code> of 5
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>UpdateStandardsControl</a> </code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code>
 *  of 5 requests per
 * 
 *  second> </li> <li>
 * 
 *  All other operations - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30 requests per
 *
 * \sa SecurityHubClient::listOrganizationAdminAccounts
 */

/*!
 * Constructs a copy of \a other.
 */
ListOrganizationAdminAccountsRequest::ListOrganizationAdminAccountsRequest(const ListOrganizationAdminAccountsRequest &other)
    : SecurityHubRequest(new ListOrganizationAdminAccountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOrganizationAdminAccountsRequest object.
 */
ListOrganizationAdminAccountsRequest::ListOrganizationAdminAccountsRequest()
    : SecurityHubRequest(new ListOrganizationAdminAccountsRequestPrivate(SecurityHubRequest::ListOrganizationAdminAccountsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOrganizationAdminAccountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOrganizationAdminAccountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOrganizationAdminAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListOrganizationAdminAccountsResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::ListOrganizationAdminAccountsRequestPrivate
 * \brief The ListOrganizationAdminAccountsRequestPrivate class provides private implementation for ListOrganizationAdminAccountsRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a ListOrganizationAdminAccountsRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
ListOrganizationAdminAccountsRequestPrivate::ListOrganizationAdminAccountsRequestPrivate(
    const SecurityHubRequest::Action action, ListOrganizationAdminAccountsRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOrganizationAdminAccountsRequest
 * class' copy constructor.
 */
ListOrganizationAdminAccountsRequestPrivate::ListOrganizationAdminAccountsRequestPrivate(
    const ListOrganizationAdminAccountsRequestPrivate &other, ListOrganizationAdminAccountsRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
