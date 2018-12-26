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

#include "getfindingsrequest.h"
#include "getfindingsrequest_p.h"
#include "getfindingsresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetFindingsRequest
 * \brief The GetFindingsRequest class provides an interface for SecurityHub GetFindings requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getFindings
 */

/*!
 * Constructs a copy of \a other.
 */
GetFindingsRequest::GetFindingsRequest(const GetFindingsRequest &other)
    : SecurityHubRequest(new GetFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFindingsRequest object.
 */
GetFindingsRequest::GetFindingsRequest()
    : SecurityHubRequest(new GetFindingsRequestPrivate(SecurityHubRequest::GetFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingsRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::GetFindingsRequestPrivate
 * \brief The GetFindingsRequestPrivate class provides private implementation for GetFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetFindingsRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
GetFindingsRequestPrivate::GetFindingsRequestPrivate(
    const SecurityHubRequest::Action action, GetFindingsRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFindingsRequest
 * class' copy constructor.
 */
GetFindingsRequestPrivate::GetFindingsRequestPrivate(
    const GetFindingsRequestPrivate &other, GetFindingsRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
