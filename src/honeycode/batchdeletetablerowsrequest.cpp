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

#include "batchdeletetablerowsrequest.h"
#include "batchdeletetablerowsrequest_p.h"
#include "batchdeletetablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchDeleteTableRowsRequest
 * \brief The BatchDeleteTableRowsRequest class provides an interface for Honeycode BatchDeleteTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchDeleteTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteTableRowsRequest::BatchDeleteTableRowsRequest(const BatchDeleteTableRowsRequest &other)
    : HoneycodeRequest(new BatchDeleteTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteTableRowsRequest object.
 */
BatchDeleteTableRowsRequest::BatchDeleteTableRowsRequest()
    : HoneycodeRequest(new BatchDeleteTableRowsRequestPrivate(HoneycodeRequest::BatchDeleteTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::BatchDeleteTableRowsRequestPrivate
 * \brief The BatchDeleteTableRowsRequestPrivate class provides private implementation for BatchDeleteTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchDeleteTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
BatchDeleteTableRowsRequestPrivate::BatchDeleteTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, BatchDeleteTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteTableRowsRequest
 * class' copy constructor.
 */
BatchDeleteTableRowsRequestPrivate::BatchDeleteTableRowsRequestPrivate(
    const BatchDeleteTableRowsRequestPrivate &other, BatchDeleteTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
