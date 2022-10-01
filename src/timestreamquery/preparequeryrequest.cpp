// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "preparequeryrequest.h"
#include "preparequeryrequest_p.h"
#include "preparequeryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::PrepareQueryRequest
 * \brief The PrepareQueryRequest class provides an interface for TimestreamQuery PrepareQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::prepareQuery
 */

/*!
 * Constructs a copy of \a other.
 */
PrepareQueryRequest::PrepareQueryRequest(const PrepareQueryRequest &other)
    : TimestreamQueryRequest(new PrepareQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PrepareQueryRequest object.
 */
PrepareQueryRequest::PrepareQueryRequest()
    : TimestreamQueryRequest(new PrepareQueryRequestPrivate(TimestreamQueryRequest::PrepareQueryAction, this))
{

}

/*!
 * \reimp
 */
bool PrepareQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PrepareQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PrepareQueryRequest::response(QNetworkReply * const reply) const
{
    return new PrepareQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::PrepareQueryRequestPrivate
 * \brief The PrepareQueryRequestPrivate class provides private implementation for PrepareQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a PrepareQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
PrepareQueryRequestPrivate::PrepareQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, PrepareQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PrepareQueryRequest
 * class' copy constructor.
 */
PrepareQueryRequestPrivate::PrepareQueryRequestPrivate(
    const PrepareQueryRequestPrivate &other, PrepareQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
