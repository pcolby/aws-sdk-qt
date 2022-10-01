// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapnschannelrequest.h"
#include "deleteapnschannelrequest_p.h"
#include "deleteapnschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelRequest
 * \brief The DeleteApnsChannelRequest class provides an interface for Pinpoint DeleteApnsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApnsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApnsChannelRequest::DeleteApnsChannelRequest(const DeleteApnsChannelRequest &other)
    : PinpointRequest(new DeleteApnsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApnsChannelRequest object.
 */
DeleteApnsChannelRequest::DeleteApnsChannelRequest()
    : PinpointRequest(new DeleteApnsChannelRequestPrivate(PinpointRequest::DeleteApnsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApnsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelRequestPrivate
 * \brief The DeleteApnsChannelRequestPrivate class provides private implementation for DeleteApnsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteApnsChannelRequestPrivate::DeleteApnsChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsChannelRequest
 * class' copy constructor.
 */
DeleteApnsChannelRequestPrivate::DeleteApnsChannelRequestPrivate(
    const DeleteApnsChannelRequestPrivate &other, DeleteApnsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
