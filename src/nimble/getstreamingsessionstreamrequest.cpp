// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstreamingsessionstreamrequest.h"
#include "getstreamingsessionstreamrequest_p.h"
#include "getstreamingsessionstreamresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStreamingSessionStreamRequest
 * \brief The GetStreamingSessionStreamRequest class provides an interface for Nimble GetStreamingSessionStream requests.
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
 * \sa NimbleClient::getStreamingSessionStream
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingSessionStreamRequest::GetStreamingSessionStreamRequest(const GetStreamingSessionStreamRequest &other)
    : NimbleRequest(new GetStreamingSessionStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingSessionStreamRequest object.
 */
GetStreamingSessionStreamRequest::GetStreamingSessionStreamRequest()
    : NimbleRequest(new GetStreamingSessionStreamRequestPrivate(NimbleRequest::GetStreamingSessionStreamAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingSessionStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingSessionStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingSessionStreamRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingSessionStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetStreamingSessionStreamRequestPrivate
 * \brief The GetStreamingSessionStreamRequestPrivate class provides private implementation for GetStreamingSessionStreamRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStreamingSessionStreamRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetStreamingSessionStreamRequestPrivate::GetStreamingSessionStreamRequestPrivate(
    const NimbleRequest::Action action, GetStreamingSessionStreamRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingSessionStreamRequest
 * class' copy constructor.
 */
GetStreamingSessionStreamRequestPrivate::GetStreamingSessionStreamRequestPrivate(
    const GetStreamingSessionStreamRequestPrivate &other, GetStreamingSessionStreamRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
