// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startstreamingsessionrequest.h"
#include "startstreamingsessionrequest_p.h"
#include "startstreamingsessionresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::StartStreamingSessionRequest
 * \brief The StartStreamingSessionRequest class provides an interface for Nimble StartStreamingSession requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::startStreamingSession
 */

/*!
 * Constructs a copy of \a other.
 */
StartStreamingSessionRequest::StartStreamingSessionRequest(const StartStreamingSessionRequest &other)
    : NimbleRequest(new StartStreamingSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStreamingSessionRequest object.
 */
StartStreamingSessionRequest::StartStreamingSessionRequest()
    : NimbleRequest(new StartStreamingSessionRequestPrivate(NimbleRequest::StartStreamingSessionAction, this))
{

}

/*!
 * \reimp
 */
bool StartStreamingSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStreamingSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStreamingSessionRequest::response(QNetworkReply * const reply) const
{
    return new StartStreamingSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::StartStreamingSessionRequestPrivate
 * \brief The StartStreamingSessionRequestPrivate class provides private implementation for StartStreamingSessionRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a StartStreamingSessionRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
StartStreamingSessionRequestPrivate::StartStreamingSessionRequestPrivate(
    const NimbleRequest::Action action, StartStreamingSessionRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStreamingSessionRequest
 * class' copy constructor.
 */
StartStreamingSessionRequestPrivate::StartStreamingSessionRequestPrivate(
    const StartStreamingSessionRequestPrivate &other, StartStreamingSessionRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
