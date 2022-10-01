// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletescheduledqueryrequest.h"
#include "deletescheduledqueryrequest_p.h"
#include "deletescheduledqueryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::DeleteScheduledQueryRequest
 * \brief The DeleteScheduledQueryRequest class provides an interface for TimestreamQuery DeleteScheduledQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::deleteScheduledQuery
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteScheduledQueryRequest::DeleteScheduledQueryRequest(const DeleteScheduledQueryRequest &other)
    : TimestreamQueryRequest(new DeleteScheduledQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteScheduledQueryRequest object.
 */
DeleteScheduledQueryRequest::DeleteScheduledQueryRequest()
    : TimestreamQueryRequest(new DeleteScheduledQueryRequestPrivate(TimestreamQueryRequest::DeleteScheduledQueryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteScheduledQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteScheduledQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteScheduledQueryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScheduledQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::DeleteScheduledQueryRequestPrivate
 * \brief The DeleteScheduledQueryRequestPrivate class provides private implementation for DeleteScheduledQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a DeleteScheduledQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
DeleteScheduledQueryRequestPrivate::DeleteScheduledQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, DeleteScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteScheduledQueryRequest
 * class' copy constructor.
 */
DeleteScheduledQueryRequestPrivate::DeleteScheduledQueryRequestPrivate(
    const DeleteScheduledQueryRequestPrivate &other, DeleteScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
