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

#include "disassociatemembersrequest.h"
#include "disassociatemembersrequest_p.h"
#include "disassociatemembersresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::DisassociateMembersRequest
 * \brief The DisassociateMembersRequest class provides an interface for SecurityHub DisassociateMembers requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::disassociateMembers
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateMembersRequest::DisassociateMembersRequest(const DisassociateMembersRequest &other)
    : SecurityHubRequest(new DisassociateMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateMembersRequest object.
 */
DisassociateMembersRequest::DisassociateMembersRequest()
    : SecurityHubRequest(new DisassociateMembersRequestPrivate(SecurityHubRequest::DisassociateMembersAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateMembersRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateMembersResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::DisassociateMembersRequestPrivate
 * \brief The DisassociateMembersRequestPrivate class provides private implementation for DisassociateMembersRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a DisassociateMembersRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
DisassociateMembersRequestPrivate::DisassociateMembersRequestPrivate(
    const SecurityHubRequest::Action action, DisassociateMembersRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateMembersRequest
 * class' copy constructor.
 */
DisassociateMembersRequestPrivate::DisassociateMembersRequestPrivate(
    const DisassociateMembersRequestPrivate &other, DisassociateMembersRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
