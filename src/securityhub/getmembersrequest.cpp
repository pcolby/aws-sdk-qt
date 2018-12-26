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

#include "getmembersrequest.h"
#include "getmembersrequest_p.h"
#include "getmembersresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::GetMembersRequest
 * \brief The GetMembersRequest class provides an interface for SecurityHub GetMembers requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::getMembers
 */

/*!
 * Constructs a copy of \a other.
 */
GetMembersRequest::GetMembersRequest(const GetMembersRequest &other)
    : SecurityHubRequest(new GetMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMembersRequest object.
 */
GetMembersRequest::GetMembersRequest()
    : SecurityHubRequest(new GetMembersRequestPrivate(SecurityHubRequest::GetMembersAction, this))
{

}

/*!
 * \reimp
 */
bool GetMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMembersRequest::response(QNetworkReply * const reply) const
{
    return new GetMembersResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::GetMembersRequestPrivate
 * \brief The GetMembersRequestPrivate class provides private implementation for GetMembersRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a GetMembersRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
GetMembersRequestPrivate::GetMembersRequestPrivate(
    const SecurityHubRequest::Action action, GetMembersRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMembersRequest
 * class' copy constructor.
 */
GetMembersRequestPrivate::GetMembersRequestPrivate(
    const GetMembersRequestPrivate &other, GetMembersRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
