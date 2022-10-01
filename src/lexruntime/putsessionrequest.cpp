// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putsessionrequest.h"
#include "putsessionrequest_p.h"
#include "putsessionresponse.h"
#include "lexruntimerequest_p.h"

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::PutSessionRequest
 * \brief The PutSessionRequest class provides an interface for LexRuntime PutSession requests.
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
 * \sa LexRuntimeClient::putSession
 */

/*!
 * Constructs a copy of \a other.
 */
PutSessionRequest::PutSessionRequest(const PutSessionRequest &other)
    : LexRuntimeRequest(new PutSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSessionRequest object.
 */
PutSessionRequest::PutSessionRequest()
    : LexRuntimeRequest(new PutSessionRequestPrivate(LexRuntimeRequest::PutSessionAction, this))
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
 * \class QtAws::LexRuntime::PutSessionRequestPrivate
 * \brief The PutSessionRequestPrivate class provides private implementation for PutSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a PutSessionRequestPrivate object for LexRuntime \a action,
 * with public implementation \a q.
 */
PutSessionRequestPrivate::PutSessionRequestPrivate(
    const LexRuntimeRequest::Action action, PutSessionRequest * const q)
    : LexRuntimeRequestPrivate(action, q)
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
    : LexRuntimeRequestPrivate(other, q)
{

}

} // namespace LexRuntime
} // namespace QtAws
