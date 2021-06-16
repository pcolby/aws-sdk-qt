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

#include "cancelqueryrequest.h"
#include "cancelqueryrequest_p.h"
#include "cancelqueryresponse.h"
#include "timestreamqueryrequest_p.h"

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::CancelQueryRequest
 * \brief The CancelQueryRequest class provides an interface for TimestreamQuery CancelQuery requests.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *
 * \sa TimestreamQueryClient::cancelQuery
 */

/*!
 * Constructs a copy of \a other.
 */
CancelQueryRequest::CancelQueryRequest(const CancelQueryRequest &other)
    : TimestreamQueryRequest(new CancelQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelQueryRequest object.
 */
CancelQueryRequest::CancelQueryRequest()
    : TimestreamQueryRequest(new CancelQueryRequestPrivate(TimestreamQueryRequest::CancelQueryAction, this))
{

}

/*!
 * \reimp
 */
bool CancelQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelQueryRequest::response(QNetworkReply * const reply) const
{
    return new CancelQueryResponse(*this, reply);
}

/*!
 * \class QtAws::TimestreamQuery::CancelQueryRequestPrivate
 * \brief The CancelQueryRequestPrivate class provides private implementation for CancelQueryRequest.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a CancelQueryRequestPrivate object for TimestreamQuery \a action,
 * with public implementation \a q.
 */
CancelQueryRequestPrivate::CancelQueryRequestPrivate(
    const TimestreamQueryRequest::Action action, CancelQueryRequest * const q)
    : TimestreamQueryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelQueryRequest
 * class' copy constructor.
 */
CancelQueryRequestPrivate::CancelQueryRequestPrivate(
    const CancelQueryRequestPrivate &other, CancelQueryRequest * const q)
    : TimestreamQueryRequestPrivate(other, q)
{

}

} // namespace TimestreamQuery
} // namespace QtAws
