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

#include "associatememberaccountrequest.h"
#include "associatememberaccountrequest_p.h"
#include "associatememberaccountresponse.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::AssociateMemberAccountRequest
 * \brief The AssociateMemberAccountRequest class provides an interface for Macie AssociateMemberAccount requests.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
 *
 * \sa MacieClient::associateMemberAccount
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateMemberAccountRequest::AssociateMemberAccountRequest(const AssociateMemberAccountRequest &other)
    : MacieRequest(new AssociateMemberAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateMemberAccountRequest object.
 */
AssociateMemberAccountRequest::AssociateMemberAccountRequest()
    : MacieRequest(new AssociateMemberAccountRequestPrivate(MacieRequest::AssociateMemberAccountAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateMemberAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateMemberAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateMemberAccountRequest::response(QNetworkReply * const reply) const
{
    return new AssociateMemberAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Macie::AssociateMemberAccountRequestPrivate
 * \brief The AssociateMemberAccountRequestPrivate class provides private implementation for AssociateMemberAccountRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a AssociateMemberAccountRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
AssociateMemberAccountRequestPrivate::AssociateMemberAccountRequestPrivate(
    const MacieRequest::Action action, AssociateMemberAccountRequest * const q)
    : MacieRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateMemberAccountRequest
 * class' copy constructor.
 */
AssociateMemberAccountRequestPrivate::AssociateMemberAccountRequestPrivate(
    const AssociateMemberAccountRequestPrivate &other, AssociateMemberAccountRequest * const q)
    : MacieRequestPrivate(other, q)
{

}

} // namespace Macie
} // namespace QtAws
