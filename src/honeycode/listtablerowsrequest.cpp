// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablerowsrequest.h"
#include "listtablerowsrequest_p.h"
#include "listtablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTableRowsRequest
 * \brief The ListTableRowsRequest class provides an interface for Honeycode ListTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
ListTableRowsRequest::ListTableRowsRequest(const ListTableRowsRequest &other)
    : HoneycodeRequest(new ListTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTableRowsRequest object.
 */
ListTableRowsRequest::ListTableRowsRequest()
    : HoneycodeRequest(new ListTableRowsRequestPrivate(HoneycodeRequest::ListTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new ListTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::ListTableRowsRequestPrivate
 * \brief The ListTableRowsRequestPrivate class provides private implementation for ListTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
ListTableRowsRequestPrivate::ListTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, ListTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTableRowsRequest
 * class' copy constructor.
 */
ListTableRowsRequestPrivate::ListTableRowsRequestPrivate(
    const ListTableRowsRequestPrivate &other, ListTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
