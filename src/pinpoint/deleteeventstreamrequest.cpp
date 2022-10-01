// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventstreamrequest.h"
#include "deleteeventstreamrequest_p.h"
#include "deleteeventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamRequest
 * \brief The DeleteEventStreamRequest class provides an interface for Pinpoint DeleteEventStream requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEventStream
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventStreamRequest::DeleteEventStreamRequest(const DeleteEventStreamRequest &other)
    : PinpointRequest(new DeleteEventStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventStreamRequest object.
 */
DeleteEventStreamRequest::DeleteEventStreamRequest()
    : PinpointRequest(new DeleteEventStreamRequestPrivate(PinpointRequest::DeleteEventStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamRequestPrivate
 * \brief The DeleteEventStreamRequestPrivate class provides private implementation for DeleteEventStreamRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEventStreamRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteEventStreamRequestPrivate::DeleteEventStreamRequestPrivate(
    const PinpointRequest::Action action, DeleteEventStreamRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventStreamRequest
 * class' copy constructor.
 */
DeleteEventStreamRequestPrivate::DeleteEventStreamRequestPrivate(
    const DeleteEventStreamRequestPrivate &other, DeleteEventStreamRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
