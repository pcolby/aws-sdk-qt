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

#include "listbonuspaymentsrequest.h"
#include "listbonuspaymentsrequest_p.h"
#include "listbonuspaymentsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListBonusPaymentsRequest
 * \brief The ListBonusPaymentsRequest class provides an interface for MTurk ListBonusPayments requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listBonusPayments
 */

/*!
 * Constructs a copy of \a other.
 */
ListBonusPaymentsRequest::ListBonusPaymentsRequest(const ListBonusPaymentsRequest &other)
    : MTurkRequest(new ListBonusPaymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBonusPaymentsRequest object.
 */
ListBonusPaymentsRequest::ListBonusPaymentsRequest()
    : MTurkRequest(new ListBonusPaymentsRequestPrivate(MTurkRequest::ListBonusPaymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBonusPaymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBonusPaymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBonusPaymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListBonusPaymentsResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListBonusPaymentsRequestPrivate
 * \brief The ListBonusPaymentsRequestPrivate class provides private implementation for ListBonusPaymentsRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListBonusPaymentsRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListBonusPaymentsRequestPrivate::ListBonusPaymentsRequestPrivate(
    const MTurkRequest::Action action, ListBonusPaymentsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBonusPaymentsRequest
 * class' copy constructor.
 */
ListBonusPaymentsRequestPrivate::ListBonusPaymentsRequestPrivate(
    const ListBonusPaymentsRequestPrivate &other, ListBonusPaymentsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
