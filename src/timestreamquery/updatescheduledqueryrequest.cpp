// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatescheduledqueryrequest.h"
#include "updatescheduledqueryrequest_p.h"
#include "updatescheduledqueryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::UpdateScheduledQueryRequest
 * \brief The UpdateScheduledQueryRequest class provides an interface for TimestreamQuery UpdateScheduledQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::updateScheduledQuery
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateScheduledQueryRequest::UpdateScheduledQueryRequest(const UpdateScheduledQueryRequest &other)
    : TimestreamQueryRequest(new UpdateScheduledQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateScheduledQueryRequest object.
 */
UpdateScheduledQueryRequest::UpdateScheduledQueryRequest()
    : TimestreamQueryRequest(new UpdateScheduledQueryRequestPrivate(TimestreamQueryRequest::UpdateScheduledQueryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateScheduledQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateScheduledQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateScheduledQueryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateScheduledQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::UpdateScheduledQueryRequestPrivate
 * \brief The UpdateScheduledQueryRequestPrivate class provides private implementation for UpdateScheduledQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a UpdateScheduledQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
UpdateScheduledQueryRequestPrivate::UpdateScheduledQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, UpdateScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateScheduledQueryRequest
 * class' copy constructor.
 */
UpdateScheduledQueryRequestPrivate::UpdateScheduledQueryRequestPrivate(
    const UpdateScheduledQueryRequestPrivate &other, UpdateScheduledQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
