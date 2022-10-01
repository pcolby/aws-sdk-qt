// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesessionrequest.h"
#include "deletesessionrequest_p.h"
#include "deletesessionresponse.h"
#include "lexruntimerequest_p.h"

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::DeleteSessionRequest
 * \brief The DeleteSessionRequest class provides an interface for LexRuntime DeleteSession requests.
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
 * \sa LexRuntimeClient::deleteSession
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSessionRequest::DeleteSessionRequest(const DeleteSessionRequest &other)
    : LexRuntimeRequest(new DeleteSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSessionRequest object.
 */
DeleteSessionRequest::DeleteSessionRequest()
    : LexRuntimeRequest(new DeleteSessionRequestPrivate(LexRuntimeRequest::DeleteSessionAction, this))
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
 * \class QtAws::LexRuntime::DeleteSessionRequestPrivate
 * \brief The DeleteSessionRequestPrivate class provides private implementation for DeleteSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a DeleteSessionRequestPrivate object for LexRuntime \a action,
 * with public implementation \a q.
 */
DeleteSessionRequestPrivate::DeleteSessionRequestPrivate(
    const LexRuntimeRequest::Action action, DeleteSessionRequest * const q)
    : LexRuntimeRequestPrivate(action, q)
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
    : LexRuntimeRequestPrivate(other, q)
{

}

} // namespace LexRuntime
} // namespace QtAws
