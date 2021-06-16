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

#include "batchcreatetablerowsrequest.h"
#include "batchcreatetablerowsrequest_p.h"
#include "batchcreatetablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::BatchCreateTableRowsRequest
 * \brief The BatchCreateTableRowsRequest class provides an interface for Honeycode BatchCreateTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::batchCreateTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
BatchCreateTableRowsRequest::BatchCreateTableRowsRequest(const BatchCreateTableRowsRequest &other)
    : HoneycodeRequest(new BatchCreateTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchCreateTableRowsRequest object.
 */
BatchCreateTableRowsRequest::BatchCreateTableRowsRequest()
    : HoneycodeRequest(new BatchCreateTableRowsRequestPrivate(HoneycodeRequest::BatchCreateTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchCreateTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchCreateTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchCreateTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new BatchCreateTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::BatchCreateTableRowsRequestPrivate
 * \brief The BatchCreateTableRowsRequestPrivate class provides private implementation for BatchCreateTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a BatchCreateTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
BatchCreateTableRowsRequestPrivate::BatchCreateTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, BatchCreateTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchCreateTableRowsRequest
 * class' copy constructor.
 */
BatchCreateTableRowsRequestPrivate::BatchCreateTableRowsRequestPrivate(
    const BatchCreateTableRowsRequestPrivate &other, BatchCreateTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
