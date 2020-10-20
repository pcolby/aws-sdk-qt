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
 *  <fullname>Amazon Macie</fullname>
 * 
 *  Amazon Macie is a security service that uses machine learning to automatically discover, classify, and protect sensitive
 *  data in AWS. Macie recognizes sensitive data such as personally identifiable information (PII) or intellectual property,
 *  and provides you with dashboards and alerts that give visibility into how this data is being accessed or moved. For more
 *  information, see the <a href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Macie User
 *  Guide</a>.
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
