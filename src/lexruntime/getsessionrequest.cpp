// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessionrequest.h"
#include "getsessionrequest_p.h"
#include "getsessionresponse.h"
#include "lexruntimerequest_p.h"

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::GetSessionRequest
 * \brief The GetSessionRequest class provides an interface for LexRuntime GetSession requests.
 *
 * \inmodule QtAwsLexRuntime
 *
 *  Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 *  conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 *  user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 *  user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 *  conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 *  then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 *  and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 *
 * \sa LexRuntimeClient::getSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetSessionRequest::GetSessionRequest(const GetSessionRequest &other)
    : LexRuntimeRequest(new GetSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSessionRequest object.
 */
GetSessionRequest::GetSessionRequest()
    : LexRuntimeRequest(new GetSessionRequestPrivate(LexRuntimeRequest::GetSessionAction, this))
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
 * \class QtAws::LexRuntime::GetSessionRequestPrivate
 * \brief The GetSessionRequestPrivate class provides private implementation for GetSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a GetSessionRequestPrivate object for LexRuntime \a action,
 * with public implementation \a q.
 */
GetSessionRequestPrivate::GetSessionRequestPrivate(
    const LexRuntimeRequest::Action action, GetSessionRequest * const q)
    : LexRuntimeRequestPrivate(action, q)
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
    : LexRuntimeRequestPrivate(other, q)
{

}

} // namespace LexRuntime
} // namespace QtAws
