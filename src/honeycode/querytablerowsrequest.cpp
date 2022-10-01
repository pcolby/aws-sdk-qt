// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "querytablerowsrequest.h"
#include "querytablerowsrequest_p.h"
#include "querytablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::QueryTableRowsRequest
 * \brief The QueryTableRowsRequest class provides an interface for Honeycode QueryTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::queryTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
QueryTableRowsRequest::QueryTableRowsRequest(const QueryTableRowsRequest &other)
    : HoneycodeRequest(new QueryTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryTableRowsRequest object.
 */
QueryTableRowsRequest::QueryTableRowsRequest()
    : HoneycodeRequest(new QueryTableRowsRequestPrivate(HoneycodeRequest::QueryTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool QueryTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QueryTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new QueryTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::QueryTableRowsRequestPrivate
 * \brief The QueryTableRowsRequestPrivate class provides private implementation for QueryTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a QueryTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
QueryTableRowsRequestPrivate::QueryTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, QueryTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QueryTableRowsRequest
 * class' copy constructor.
 */
QueryTableRowsRequestPrivate::QueryTableRowsRequestPrivate(
    const QueryTableRowsRequestPrivate &other, QueryTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
