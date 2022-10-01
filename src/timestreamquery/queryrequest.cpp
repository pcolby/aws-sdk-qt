// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryrequest.h"
#include "queryrequest_p.h"
#include "queryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::QueryRequest
 * \brief The QueryRequest class provides an interface for TimestreamQuery Query requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::query
 */

/*!
 * Constructs a copy of \a other.
 */
QueryRequest::QueryRequest(const QueryRequest &other)
    : TimestreamQueryRequest(new QueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryRequest object.
 */
QueryRequest::QueryRequest()
    : TimestreamQueryRequest(new QueryRequestPrivate(TimestreamQueryRequest::QueryAction, this))
{

}

/*!
 * \reimp
 */
bool QueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryRequest::response(QNetworkReply * const reply) const
{
    return new QueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::QueryRequestPrivate
 * \brief The QueryRequestPrivate class provides private implementation for QueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a QueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
QueryRequestPrivate::QueryRequestPrivate(
    const TimestreamQueryRequest::Action action, QueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QueryRequest
 * class' copy constructor.
 */
QueryRequestPrivate::QueryRequestPrivate(
    const QueryRequestPrivate &other, QueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
