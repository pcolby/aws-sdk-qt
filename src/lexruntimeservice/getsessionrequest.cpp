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
#include "lexruntimeservicerequest_p.h"

namespace QtAws {
namespace LexRuntimeService {

/*!
 * \class QtAws::LexRuntimeService::GetSessionRequest
 * \brief The GetSessionRequest class provides an interface for LexRuntimeService GetSession requests.
 *
 * \inmodule QtAwsLexRuntimeService
 *
 *  Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 *  conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 *  user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 *  user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 *  conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 *  then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 *  and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 *
 * \sa LexRuntimeServiceClient::getSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetSessionRequest::GetSessionRequest(const GetSessionRequest &other)
    : LexRuntimeServiceRequest(new GetSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSessionRequest object.
 */
GetSessionRequest::GetSessionRequest()
    : LexRuntimeServiceRequest(new GetSessionRequestPrivate(LexRuntimeServiceRequest::GetSessionAction, this))
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
 * \class QtAws::LexRuntimeService::GetSessionRequestPrivate
 * \brief The GetSessionRequestPrivate class provides private implementation for GetSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeService
 */

/*!
 * Constructs a GetSessionRequestPrivate object for LexRuntimeService \a action,
 * with public implementation \a q.
 */
GetSessionRequestPrivate::GetSessionRequestPrivate(
    const LexRuntimeServiceRequest::Action action, GetSessionRequest * const q)
    : LexRuntimeServiceRequestPrivate(action, q)
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
    : LexRuntimeServiceRequestPrivate(other, q)
{

}

} // namespace LexRuntimeService
} // namespace QtAws
