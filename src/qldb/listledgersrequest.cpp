// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listledgersrequest.h"
#include "listledgersrequest_p.h"
#include "listledgersresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListLedgersRequest
 * \brief The ListLedgersRequest class provides an interface for Qldb ListLedgers requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listLedgers
 */

/*!
 * Constructs a copy of \a other.
 */
ListLedgersRequest::ListLedgersRequest(const ListLedgersRequest &other)
    : QldbRequest(new ListLedgersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLedgersRequest object.
 */
ListLedgersRequest::ListLedgersRequest()
    : QldbRequest(new ListLedgersRequestPrivate(QldbRequest::ListLedgersAction, this))
{

}

/*!
 * \reimp
 */
bool ListLedgersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLedgersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLedgersRequest::response(QNetworkReply * const reply) const
{
    return new ListLedgersResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::ListLedgersRequestPrivate
 * \brief The ListLedgersRequestPrivate class provides private implementation for ListLedgersRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListLedgersRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
ListLedgersRequestPrivate::ListLedgersRequestPrivate(
    const QldbRequest::Action action, ListLedgersRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLedgersRequest
 * class' copy constructor.
 */
ListLedgersRequestPrivate::ListLedgersRequestPrivate(
    const ListLedgersRequestPrivate &other, ListLedgersRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
