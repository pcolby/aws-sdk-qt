// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstreamingsessionrequest.h"
#include "getstreamingsessionrequest_p.h"
#include "getstreamingsessionresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetStreamingSessionRequest
 * \brief The GetStreamingSessionRequest class provides an interface for Nimble GetStreamingSession requests.
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
 * \sa NimbleClient::getStreamingSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingSessionRequest::GetStreamingSessionRequest(const GetStreamingSessionRequest &other)
    : NimbleRequest(new GetStreamingSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingSessionRequest object.
 */
GetStreamingSessionRequest::GetStreamingSessionRequest()
    : NimbleRequest(new GetStreamingSessionRequestPrivate(NimbleRequest::GetStreamingSessionAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingSessionRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::GetStreamingSessionRequestPrivate
 * \brief The GetStreamingSessionRequestPrivate class provides private implementation for GetStreamingSessionRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetStreamingSessionRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
GetStreamingSessionRequestPrivate::GetStreamingSessionRequestPrivate(
    const NimbleRequest::Action action, GetStreamingSessionRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingSessionRequest
 * class' copy constructor.
 */
GetStreamingSessionRequestPrivate::GetStreamingSessionRequestPrivate(
    const GetStreamingSessionRequestPrivate &other, GetStreamingSessionRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
