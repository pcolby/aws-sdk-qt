// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapnsvoipchannelrequest.h"
#include "updateapnsvoipchannelrequest_p.h"
#include "updateapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipChannelRequest
 * \brief The UpdateApnsVoipChannelRequest class provides an interface for Pinpoint UpdateApnsVoipChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsVoipChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApnsVoipChannelRequest::UpdateApnsVoipChannelRequest(const UpdateApnsVoipChannelRequest &other)
    : PinpointRequest(new UpdateApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApnsVoipChannelRequest object.
 */
UpdateApnsVoipChannelRequest::UpdateApnsVoipChannelRequest()
    : PinpointRequest(new UpdateApnsVoipChannelRequestPrivate(PinpointRequest::UpdateApnsVoipChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsVoipChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApnsVoipChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsVoipChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipChannelRequestPrivate
 * \brief The UpdateApnsVoipChannelRequestPrivate class provides private implementation for UpdateApnsVoipChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsVoipChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApnsVoipChannelRequestPrivate::UpdateApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsVoipChannelRequest
 * class' copy constructor.
 */
UpdateApnsVoipChannelRequestPrivate::UpdateApnsVoipChannelRequestPrivate(
    const UpdateApnsVoipChannelRequestPrivate &other, UpdateApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
