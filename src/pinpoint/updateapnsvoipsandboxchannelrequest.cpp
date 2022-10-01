// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapnsvoipsandboxchannelrequest.h"
#include "updateapnsvoipsandboxchannelrequest_p.h"
#include "updateapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelRequest
 * \brief The UpdateApnsVoipSandboxChannelRequest class provides an interface for Pinpoint UpdateApnsVoipSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsVoipSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApnsVoipSandboxChannelRequest::UpdateApnsVoipSandboxChannelRequest(const UpdateApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new UpdateApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApnsVoipSandboxChannelRequest object.
 */
UpdateApnsVoipSandboxChannelRequest::UpdateApnsVoipSandboxChannelRequest()
    : PinpointRequest(new UpdateApnsVoipSandboxChannelRequestPrivate(PinpointRequest::UpdateApnsVoipSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApnsVoipSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsVoipSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelRequestPrivate
 * \brief The UpdateApnsVoipSandboxChannelRequestPrivate class provides private implementation for UpdateApnsVoipSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsVoipSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApnsVoipSandboxChannelRequestPrivate::UpdateApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsVoipSandboxChannelRequest
 * class' copy constructor.
 */
UpdateApnsVoipSandboxChannelRequestPrivate::UpdateApnsVoipSandboxChannelRequestPrivate(
    const UpdateApnsVoipSandboxChannelRequestPrivate &other, UpdateApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
