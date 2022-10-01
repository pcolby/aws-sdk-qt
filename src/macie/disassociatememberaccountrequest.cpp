// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
