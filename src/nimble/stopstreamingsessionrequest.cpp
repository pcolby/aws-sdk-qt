// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopstreamingsessionrequest.h"
#include "stopstreamingsessionrequest_p.h"
#include "stopstreamingsessionresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::StopStreamingSessionRequest
 * \brief The StopStreamingSessionRequest class provides an interface for Nimble StopStreamingSession requests.
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
 * \sa NimbleClient::stopStreamingSession
 */

/*!
 * Constructs a copy of \a other.
 */
StopStreamingSessionRequest::StopStreamingSessionRequest(const StopStreamingSessionRequest &other)
    : NimbleRequest(new StopStreamingSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopStreamingSessionRequest object.
 */
StopStreamingSessionRequest::StopStreamingSessionRequest()
    : NimbleRequest(new StopStreamingSessionRequestPrivate(NimbleRequest::StopStreamingSessionAction, this))
{

}

/*!
 * \reimp
 */
bool StopStreamingSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopStreamingSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopStreamingSessionRequest::response(QNetworkReply * const reply) const
{
    return new StopStreamingSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::StopStreamingSessionRequestPrivate
 * \brief The StopStreamingSessionRequestPrivate class provides private implementation for StopStreamingSessionRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a StopStreamingSessionRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
StopStreamingSessionRequestPrivate::StopStreamingSessionRequestPrivate(
    const NimbleRequest::Action action, StopStreamingSessionRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopStreamingSessionRequest
 * class' copy constructor.
 */
StopStreamingSessionRequestPrivate::StopStreamingSessionRequestPrivate(
    const StopStreamingSessionRequestPrivate &other, StopStreamingSessionRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
