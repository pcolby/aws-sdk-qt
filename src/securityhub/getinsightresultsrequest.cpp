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

#include "getinsightresultsrequest.h"
#include "getinsightresultsrequest_p.h"
#include "getinsightresultsresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetInsightResultsRequest
 * \brief The GetInsightResultsRequest class provides an interface for SecurityHub GetInsightResults requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getInsightResults
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightResultsRequest::GetInsightResultsRequest(const GetInsightResultsRequest &other)
    : SecurityHubRequest(new GetInsightResultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightResultsRequest object.
 */
GetInsightResultsRequest::GetInsightResultsRequest()
    : SecurityHubRequest(new GetInsightResultsRequestPrivate(SecurityHubRequest::GetInsightResultsAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightResultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightResultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightResultsRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightResultsResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::GetInsightResultsRequestPrivate
 * \brief The GetInsightResultsRequestPrivate class provides private implementation for GetInsightResultsRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetInsightResultsRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
GetInsightResultsRequestPrivate::GetInsightResultsRequestPrivate(
    const SecurityHubRequest::Action action, GetInsightResultsRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightResultsRequest
 * class' copy constructor.
 */
GetInsightResultsRequestPrivate::GetInsightResultsRequestPrivate(
    const GetInsightResultsRequestPrivate &other, GetInsightResultsRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
