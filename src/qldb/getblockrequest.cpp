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

#include "getblockrequest.h"
#include "getblockrequest_p.h"
#include "getblockresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::GetBlockRequest
 * \brief The GetBlockRequest class provides an interface for Qldb GetBlock requests.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::getBlock
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlockRequest::GetBlockRequest(const GetBlockRequest &other)
    : QldbRequest(new GetBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlockRequest object.
 */
GetBlockRequest::GetBlockRequest()
    : QldbRequest(new GetBlockRequestPrivate(QldbRequest::GetBlockAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlockRequest::response(QNetworkReply * const reply) const
{
    return new GetBlockResponse(*this, reply);
}

/*!
 * \class QtAws::Qldb::GetBlockRequestPrivate
 * \brief The GetBlockRequestPrivate class provides private implementation for GetBlockRequest.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a GetBlockRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
GetBlockRequestPrivate::GetBlockRequestPrivate(
    const QldbRequest::Action action, GetBlockRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlockRequest
 * class' copy constructor.
 */
GetBlockRequestPrivate::GetBlockRequestPrivate(
    const GetBlockRequestPrivate &other, GetBlockRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace Qldb
} // namespace QtAws
