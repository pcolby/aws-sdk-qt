// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Amazon Timestream Query </fullname>
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
