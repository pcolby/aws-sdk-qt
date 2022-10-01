/*
    Copyright 2013-2021 Paul Colby

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
