/*
    Copyright 2013-2019 Paul Colby

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

#include "getinsightsrequest.h"
#include "getinsightsrequest_p.h"
#include "getinsightsresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetInsightsRequest
 * \brief The GetInsightsRequest class provides an interface for SecurityHub GetInsights requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your AWS environment and resources. It also
 *  provides you with the compliance status of your environment based on CIS AWS Foundations compliance checks. Security Hub
 *  collects security data from AWS accounts, services, and integrated third-party products and helps you analyze security
 *  trends in your environment to identify the highest priority security issues. For more information about Security Hub,
 *  see the <i> <a href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS Security Hub
 *  User Guide</a>
 * 
 *  </i>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the AWS Region that is currently
 *  active or in the specific AWS Region that you specify in your request. Any configuration or settings change that results
 *  from the operation is applied only to that Region. To make the same change in other Regions, execute the same command
 *  for each Region to apply the change to. For example, if your Region is set to <code>us-west-2</code>, when you use
 *  <code>CreateMembers</code> to add a member account to Security Hub, the association of the member account with the
 *  master account is created only in the us-west-2 Region. Security Hub must be enabled for the member account in the same
 *  Region that the invite was sent
 *
 * \sa SecurityHubClient::getInsights
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightsRequest::GetInsightsRequest(const GetInsightsRequest &other)
    : SecurityHubRequest(new GetInsightsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightsRequest object.
 */
GetInsightsRequest::GetInsightsRequest()
    : SecurityHubRequest(new GetInsightsRequestPrivate(SecurityHubRequest::GetInsightsAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightsRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightsResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::GetInsightsRequestPrivate
 * \brief The GetInsightsRequestPrivate class provides private implementation for GetInsightsRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetInsightsRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
GetInsightsRequestPrivate::GetInsightsRequestPrivate(
    const SecurityHubRequest::Action action, GetInsightsRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightsRequest
 * class' copy constructor.
 */
GetInsightsRequestPrivate::GetInsightsRequestPrivate(
    const GetInsightsRequestPrivate &other, GetInsightsRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
