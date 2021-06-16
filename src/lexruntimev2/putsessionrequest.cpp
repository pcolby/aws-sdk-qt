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

#include "putsessionrequest.h"
#include "putsessionrequest_p.h"
#include "putsessionresponse.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::PutSessionRequest
 * \brief The PutSessionRequest class provides an interface for LexRuntimeV2 PutSession requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::putSession
 */

/*!
 * Constructs a copy of \a other.
 */
PutSessionRequest::PutSessionRequest(const PutSessionRequest &other)
    : LexRuntimeV2Request(new PutSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSessionRequest object.
 */
PutSessionRequest::PutSessionRequest()
    : LexRuntimeV2Request(new PutSessionRequestPrivate(LexRuntimeV2Request::PutSessionAction, this))
{

}

/*!
 * \reimp
 */
bool PutSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSessionRequest::response(QNetworkReply * const reply) const
{
    return new PutSessionResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntimeV2::PutSessionRequestPrivate
 * \brief The PutSessionRequestPrivate class provides private implementation for PutSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a PutSessionRequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
PutSessionRequestPrivate::PutSessionRequestPrivate(
    const LexRuntimeV2Request::Action action, PutSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutSessionRequest
 * class' copy constructor.
 */
PutSessionRequestPrivate::PutSessionRequestPrivate(
    const PutSessionRequestPrivate &other, PutSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(other, q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
