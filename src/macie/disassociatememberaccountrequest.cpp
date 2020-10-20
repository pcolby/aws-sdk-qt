/*
    Copyright 2013-2020 Paul Colby

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

#include "disassociatememberaccountrequest.h"
#include "disassociatememberaccountrequest_p.h"
#include "disassociatememberaccountresponse.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::DisassociateMemberAccountRequest
 * \brief The DisassociateMemberAccountRequest class provides an interface for Macie DisassociateMemberAccount requests.
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
 * \sa MacieClient::disassociateMemberAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateMemberAccountRequest::DisassociateMemberAccountRequest(const DisassociateMemberAccountRequest &other)
    : MacieRequest(new DisassociateMemberAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateMemberAccountRequest object.
 */
DisassociateMemberAccountRequest::DisassociateMemberAccountRequest()
    : MacieRequest(new DisassociateMemberAccountRequestPrivate(MacieRequest::DisassociateMemberAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateMemberAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateMemberAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateMemberAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateMemberAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Macie::DisassociateMemberAccountRequestPrivate
 * \brief The DisassociateMemberAccountRequestPrivate class provides private implementation for DisassociateMemberAccountRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a DisassociateMemberAccountRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
DisassociateMemberAccountRequestPrivate::DisassociateMemberAccountRequestPrivate(
    const MacieRequest::Action action, DisassociateMemberAccountRequest * const q)
    : MacieRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateMemberAccountRequest
 * class' copy constructor.
 */
DisassociateMemberAccountRequestPrivate::DisassociateMemberAccountRequestPrivate(
    const DisassociateMemberAccountRequestPrivate &other, DisassociateMemberAccountRequest * const q)
    : MacieRequestPrivate(other, q)
{

}

} // namespace Macie
} // namespace QtAws
