// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteventstreamrequest.h"
#include "geteventstreamrequest_p.h"
#include "geteventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEventStreamRequest
 * \brief The GetEventStreamRequest class provides an interface for Pinpoint GetEventStream requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEventStream
 */

/*!
 * Constructs a copy of \a other.
 */
GetEventStreamRequest::GetEventStreamRequest(const GetEventStreamRequest &other)
    : PinpointRequest(new GetEventStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEventStreamRequest object.
 */
GetEventStreamRequest::GetEventStreamRequest()
    : PinpointRequest(new GetEventStreamRequestPrivate(PinpointRequest::GetEventStreamAction, this))
{

}

/*!
 * \reimp
 */
bool GetEventStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEventStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new GetEventStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetEventStreamRequestPrivate
 * \brief The GetEventStreamRequestPrivate class provides private implementation for GetEventStreamRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEventStreamRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetEventStreamRequestPrivate::GetEventStreamRequestPrivate(
    const PinpointRequest::Action action, GetEventStreamRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEventStreamRequest
 * class' copy constructor.
 */
GetEventStreamRequestPrivate::GetEventStreamRequestPrivate(
    const GetEventStreamRequestPrivate &other, GetEventStreamRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
