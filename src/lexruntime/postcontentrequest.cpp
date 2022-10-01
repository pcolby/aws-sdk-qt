// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "postcontentrequest.h"
#include "postcontentrequest_p.h"
#include "postcontentresponse.h"
#include "lexruntimerequest_p.h"

namespace QtAws {
namespace LexRuntime {

/*!
 * \class QtAws::LexRuntime::PostContentRequest
 * \brief The PostContentRequest class provides an interface for LexRuntime PostContent requests.
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
 * \sa LexRuntimeClient::postContent
 */

/*!
 * Constructs a copy of \a other.
 */
PostContentRequest::PostContentRequest(const PostContentRequest &other)
    : LexRuntimeRequest(new PostContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PostContentRequest object.
 */
PostContentRequest::PostContentRequest()
    : LexRuntimeRequest(new PostContentRequestPrivate(LexRuntimeRequest::PostContentAction, this))
{

}

/*!
 * \reimp
 */
bool PostContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PostContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PostContentRequest::response(QNetworkReply * const reply) const
{
    return new PostContentResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntime::PostContentRequestPrivate
 * \brief The PostContentRequestPrivate class provides private implementation for PostContentRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntime
 */

/*!
 * Constructs a PostContentRequestPrivate object for LexRuntime \a action,
 * with public implementation \a q.
 */
PostContentRequestPrivate::PostContentRequestPrivate(
    const LexRuntimeRequest::Action action, PostContentRequest * const q)
    : LexRuntimeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PostContentRequest
 * class' copy constructor.
 */
PostContentRequestPrivate::PostContentRequestPrivate(
    const PostContentRequestPrivate &other, PostContentRequest * const q)
    : LexRuntimeRequestPrivate(other, q)
{

}

} // namespace LexRuntime
} // namespace QtAws
