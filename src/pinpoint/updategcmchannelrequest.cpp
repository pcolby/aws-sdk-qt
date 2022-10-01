// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategcmchannelrequest.h"
#include "updategcmchannelrequest_p.h"
#include "updategcmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateGcmChannelRequest
 * \brief The UpdateGcmChannelRequest class provides an interface for Pinpoint UpdateGcmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateGcmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGcmChannelRequest::UpdateGcmChannelRequest(const UpdateGcmChannelRequest &other)
    : PinpointRequest(new UpdateGcmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGcmChannelRequest object.
 */
UpdateGcmChannelRequest::UpdateGcmChannelRequest()
    : PinpointRequest(new UpdateGcmChannelRequestPrivate(PinpointRequest::UpdateGcmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGcmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGcmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGcmChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGcmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateGcmChannelRequestPrivate
 * \brief The UpdateGcmChannelRequestPrivate class provides private implementation for UpdateGcmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateGcmChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateGcmChannelRequestPrivate::UpdateGcmChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateGcmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGcmChannelRequest
 * class' copy constructor.
 */
UpdateGcmChannelRequestPrivate::UpdateGcmChannelRequestPrivate(
    const UpdateGcmChannelRequestPrivate &other, UpdateGcmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
