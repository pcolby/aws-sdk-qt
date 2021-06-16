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

#include "startconversationrequest.h"
#include "startconversationrequest_p.h"
#include "startconversationresponse.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::StartConversationRequest
 * \brief The StartConversationRequest class provides an interface for LexRuntimeV2 StartConversation requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::startConversation
 */

/*!
 * Constructs a copy of \a other.
 */
StartConversationRequest::StartConversationRequest(const StartConversationRequest &other)
    : LexRuntimeV2Request(new StartConversationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartConversationRequest object.
 */
StartConversationRequest::StartConversationRequest()
    : LexRuntimeV2Request(new StartConversationRequestPrivate(LexRuntimeV2Request::StartConversationAction, this))
{

}

/*!
 * \reimp
 */
bool StartConversationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartConversationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartConversationRequest::response(QNetworkReply * const reply) const
{
    return new StartConversationResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntimeV2::StartConversationRequestPrivate
 * \brief The StartConversationRequestPrivate class provides private implementation for StartConversationRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a StartConversationRequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
StartConversationRequestPrivate::StartConversationRequestPrivate(
    const LexRuntimeV2Request::Action action, StartConversationRequest * const q)
    : LexRuntimeV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartConversationRequest
 * class' copy constructor.
 */
StartConversationRequestPrivate::StartConversationRequestPrivate(
    const StartConversationRequestPrivate &other, StartConversationRequest * const q)
    : LexRuntimeV2RequestPrivate(other, q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
