// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapnssandboxchannelrequest.h"
#include "deleteapnssandboxchannelrequest_p.h"
#include "deleteapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelRequest
 * \brief The DeleteApnsSandboxChannelRequest class provides an interface for Pinpoint DeleteApnsSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApnsSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApnsSandboxChannelRequest::DeleteApnsSandboxChannelRequest(const DeleteApnsSandboxChannelRequest &other)
    : PinpointRequest(new DeleteApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApnsSandboxChannelRequest object.
 */
DeleteApnsSandboxChannelRequest::DeleteApnsSandboxChannelRequest()
    : PinpointRequest(new DeleteApnsSandboxChannelRequestPrivate(PinpointRequest::DeleteApnsSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApnsSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelRequestPrivate
 * \brief The DeleteApnsSandboxChannelRequestPrivate class provides private implementation for DeleteApnsSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteApnsSandboxChannelRequestPrivate::DeleteApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsSandboxChannelRequest
 * class' copy constructor.
 */
DeleteApnsSandboxChannelRequestPrivate::DeleteApnsSandboxChannelRequestPrivate(
    const DeleteApnsSandboxChannelRequestPrivate &other, DeleteApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
