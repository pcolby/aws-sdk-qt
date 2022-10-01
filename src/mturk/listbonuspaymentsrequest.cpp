// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
