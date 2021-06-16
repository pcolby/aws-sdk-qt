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

#include "batchupserttablerowsrequest.h"
#include "batchupserttablerowsrequest_p.h"
#include "batchupserttablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchUpsertTableRowsRequest
 * \brief The BatchUpsertTableRowsRequest class provides an interface for Honeycode BatchUpsertTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchUpsertTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpsertTableRowsRequest::BatchUpsertTableRowsRequest(const BatchUpsertTableRowsRequest &other)
    : HoneycodeRequest(new BatchUpsertTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpsertTableRowsRequest object.
 */
BatchUpsertTableRowsRequest::BatchUpsertTableRowsRequest()
    : HoneycodeRequest(new BatchUpsertTableRowsRequestPrivate(HoneycodeRequest::BatchUpsertTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpsertTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpsertTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpsertTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpsertTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::BatchUpsertTableRowsRequestPrivate
 * \brief The BatchUpsertTableRowsRequestPrivate class provides private implementation for BatchUpsertTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchUpsertTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
BatchUpsertTableRowsRequestPrivate::BatchUpsertTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, BatchUpsertTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpsertTableRowsRequest
 * class' copy constructor.
 */
BatchUpsertTableRowsRequestPrivate::BatchUpsertTableRowsRequestPrivate(
    const BatchUpsertTableRowsRequestPrivate &other, BatchUpsertTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
