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

#include "deletesessionrequest.h"
#include "deletesessionrequest_p.h"
#include "deletesessionresponse.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::DeleteSessionRequest
 * \brief The DeleteSessionRequest class provides an interface for LexRuntimeV2 DeleteSession requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::deleteSession
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSessionRequest::DeleteSessionRequest(const DeleteSessionRequest &other)
    : LexRuntimeV2Request(new DeleteSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSessionRequest object.
 */
DeleteSessionRequest::DeleteSessionRequest()
    : LexRuntimeV2Request(new DeleteSessionRequestPrivate(LexRuntimeV2Request::DeleteSessionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSessionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSessionResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntimeV2::DeleteSessionRequestPrivate
 * \brief The DeleteSessionRequestPrivate class provides private implementation for DeleteSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a DeleteSessionRequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
DeleteSessionRequestPrivate::DeleteSessionRequestPrivate(
    const LexRuntimeV2Request::Action action, DeleteSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSessionRequest
 * class' copy constructor.
 */
DeleteSessionRequestPrivate::DeleteSessionRequestPrivate(
    const DeleteSessionRequestPrivate &other, DeleteSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(other, q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
