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
 *  <fullname>Amazon Macie</fullname>
 * 
 *  Amazon Macie is a security service that uses machine learning to automatically discover, classify, and protect sensitive
 *  data in AWS. Macie recognizes sensitive data such as personally identifiable information (PII) or intellectual property,
 *  and provides you with dashboards and alerts that give visibility into how this data is being accessed or moved. For more
 *  information, see the <a href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Macie User
 *  Guide</a>.
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
