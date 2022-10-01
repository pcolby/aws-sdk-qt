// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevoicechannelrequest.h"
#include "updatevoicechannelrequest_p.h"
#include "updatevoicechannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateVoiceChannelRequest
 * \brief The UpdateVoiceChannelRequest class provides an interface for Pinpoint UpdateVoiceChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateVoiceChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVoiceChannelRequest::UpdateVoiceChannelRequest(const UpdateVoiceChannelRequest &other)
    : PinpointRequest(new UpdateVoiceChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVoiceChannelRequest object.
 */
UpdateVoiceChannelRequest::UpdateVoiceChannelRequest()
    : PinpointRequest(new UpdateVoiceChannelRequestPrivate(PinpointRequest::UpdateVoiceChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVoiceChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVoiceChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVoiceChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVoiceChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateVoiceChannelRequestPrivate
 * \brief The UpdateVoiceChannelRequestPrivate class provides private implementation for UpdateVoiceChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateVoiceChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateVoiceChannelRequestPrivate::UpdateVoiceChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateVoiceChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVoiceChannelRequest
 * class' copy constructor.
 */
UpdateVoiceChannelRequestPrivate::UpdateVoiceChannelRequestPrivate(
    const UpdateVoiceChannelRequestPrivate &other, UpdateVoiceChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
