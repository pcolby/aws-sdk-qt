// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "posttextrequest.h"
#include "posttextrequest_p.h"
#include "posttextresponse.h"
#include "lexruntimerequest_p.h"

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::PostTextRequest
 * \brief The PostTextRequest class provides an interface for LexRuntime PostText requests.
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
 * \sa LexRuntimeClient::postText
 */

/*!
 * Constructs a copy of \a other.
 */
PostTextRequest::PostTextRequest(const PostTextRequest &other)
    : LexRuntimeRequest(new PostTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PostTextRequest object.
 */
PostTextRequest::PostTextRequest()
    : LexRuntimeRequest(new PostTextRequestPrivate(LexRuntimeRequest::PostTextAction, this))
{

}

/*!
 * \reimp
 */
bool PostTextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PostTextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PostTextRequest::response(QNetworkReply * const reply) const
{
    return new PostTextResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntime::PostTextRequestPrivate
 * \brief The PostTextRequestPrivate class provides private implementation for PostTextRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a PostTextRequestPrivate object for LexRuntime \a action,
 * with public implementation \a q.
 */
PostTextRequestPrivate::PostTextRequestPrivate(
    const LexRuntimeRequest::Action action, PostTextRequest * const q)
    : LexRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PostTextRequest
 * class' copy constructor.
 */
PostTextRequestPrivate::PostTextRequestPrivate(
    const PostTextRequestPrivate &other, PostTextRequest * const q)
    : LexRuntimeRequestPrivate(other, q)
{

}

} // namespace LexRuntime
} // namespace QtAws
