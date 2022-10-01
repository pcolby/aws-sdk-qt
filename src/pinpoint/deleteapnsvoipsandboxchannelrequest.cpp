// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapnsvoipsandboxchannelrequest.h"
#include "deleteapnsvoipsandboxchannelrequest_p.h"
#include "deleteapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipSandboxChannelRequest
 * \brief The DeleteApnsVoipSandboxChannelRequest class provides an interface for Pinpoint DeleteApnsVoipSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApnsVoipSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApnsVoipSandboxChannelRequest::DeleteApnsVoipSandboxChannelRequest(const DeleteApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new DeleteApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApnsVoipSandboxChannelRequest object.
 */
DeleteApnsVoipSandboxChannelRequest::DeleteApnsVoipSandboxChannelRequest()
    : PinpointRequest(new DeleteApnsVoipSandboxChannelRequestPrivate(PinpointRequest::DeleteApnsVoipSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApnsVoipSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsVoipSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipSandboxChannelRequestPrivate
 * \brief The DeleteApnsVoipSandboxChannelRequestPrivate class provides private implementation for DeleteApnsVoipSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsVoipSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteApnsVoipSandboxChannelRequestPrivate::DeleteApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsVoipSandboxChannelRequest
 * class' copy constructor.
 */
DeleteApnsVoipSandboxChannelRequestPrivate::DeleteApnsVoipSandboxChannelRequestPrivate(
    const DeleteApnsVoipSandboxChannelRequestPrivate &other, DeleteApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
