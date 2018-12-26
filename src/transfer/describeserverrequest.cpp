/*
    Copyright 2013-2018 Paul Colby

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

#include "describeserverrequest.h"
#include "describeserverrequest_p.h"
#include "describeserverresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeServerRequest
 * \brief The DescribeServerRequest class provides an interface for Transfer DescribeServer requests.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::describeServer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServerRequest::DescribeServerRequest(const DescribeServerRequest &other)
    : TransferRequest(new DescribeServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServerRequest object.
 */
DescribeServerRequest::DescribeServerRequest()
    : TransferRequest(new DescribeServerRequestPrivate(TransferRequest::DescribeServerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServerResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DescribeServerRequestPrivate
 * \brief The DescribeServerRequestPrivate class provides private implementation for DescribeServerRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeServerRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DescribeServerRequestPrivate::DescribeServerRequestPrivate(
    const TransferRequest::Action action, DescribeServerRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServerRequest
 * class' copy constructor.
 */
DescribeServerRequestPrivate::DescribeServerRequestPrivate(
    const DescribeServerRequestPrivate &other, DescribeServerRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
