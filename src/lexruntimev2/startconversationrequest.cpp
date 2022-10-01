// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
