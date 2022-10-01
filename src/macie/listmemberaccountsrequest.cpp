// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmemberaccountsrequest.h"
#include "listmemberaccountsrequest_p.h"
#include "listmemberaccountsresponse.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::ListMemberAccountsRequest
 * \brief The ListMemberAccountsRequest class provides an interface for Macie ListMemberAccounts requests.
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
 * \sa MacieClient::listMemberAccounts
 */

/*!
 * Constructs a copy of \a other.
 */
ListMemberAccountsRequest::ListMemberAccountsRequest(const ListMemberAccountsRequest &other)
    : MacieRequest(new ListMemberAccountsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMemberAccountsRequest object.
 */
ListMemberAccountsRequest::ListMemberAccountsRequest()
    : MacieRequest(new ListMemberAccountsRequestPrivate(MacieRequest::ListMemberAccountsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMemberAccountsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMemberAccountsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMemberAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListMemberAccountsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie::ListMemberAccountsRequestPrivate
 * \brief The ListMemberAccountsRequestPrivate class provides private implementation for ListMemberAccountsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a ListMemberAccountsRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
ListMemberAccountsRequestPrivate::ListMemberAccountsRequestPrivate(
    const MacieRequest::Action action, ListMemberAccountsRequest * const q)
    : MacieRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMemberAccountsRequest
 * class' copy constructor.
 */
ListMemberAccountsRequestPrivate::ListMemberAccountsRequestPrivate(
    const ListMemberAccountsRequestPrivate &other, ListMemberAccountsRequest * const q)
    : MacieRequestPrivate(other, q)
{

}

} // namespace Macie
} // namespace QtAws
