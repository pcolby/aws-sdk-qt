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

#include "getsessionrequest.h"
#include "getsessionrequest_p.h"
#include "getsessionresponse.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::GetSessionRequest
 * \brief The GetSessionRequest class provides an interface for LexRuntimeV2 GetSession requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::getSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetSessionRequest::GetSessionRequest(const GetSessionRequest &other)
    : LexRuntimeV2Request(new GetSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSessionRequest object.
 */
GetSessionRequest::GetSessionRequest()
    : LexRuntimeV2Request(new GetSessionRequestPrivate(LexRuntimeV2Request::GetSessionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSessionRequest::response(QNetworkReply * const reply) const
{
    return new GetSessionResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntimeV2::GetSessionRequestPrivate
 * \brief The GetSessionRequestPrivate class provides private implementation for GetSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a GetSessionRequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
GetSessionRequestPrivate::GetSessionRequestPrivate(
    const LexRuntimeV2Request::Action action, GetSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSessionRequest
 * class' copy constructor.
 */
GetSessionRequestPrivate::GetSessionRequestPrivate(
    const GetSessionRequestPrivate &other, GetSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(other, q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
