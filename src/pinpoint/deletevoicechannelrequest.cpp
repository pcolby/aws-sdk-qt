// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevoicechannelrequest.h"
#include "deletevoicechannelrequest_p.h"
#include "deletevoicechannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteVoiceChannelRequest
 * \brief The DeleteVoiceChannelRequest class provides an interface for Pinpoint DeleteVoiceChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteVoiceChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVoiceChannelRequest::DeleteVoiceChannelRequest(const DeleteVoiceChannelRequest &other)
    : PinpointRequest(new DeleteVoiceChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVoiceChannelRequest object.
 */
DeleteVoiceChannelRequest::DeleteVoiceChannelRequest()
    : PinpointRequest(new DeleteVoiceChannelRequestPrivate(PinpointRequest::DeleteVoiceChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVoiceChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVoiceChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVoiceChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVoiceChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteVoiceChannelRequestPrivate
 * \brief The DeleteVoiceChannelRequestPrivate class provides private implementation for DeleteVoiceChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteVoiceChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteVoiceChannelRequestPrivate::DeleteVoiceChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteVoiceChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVoiceChannelRequest
 * class' copy constructor.
 */
DeleteVoiceChannelRequestPrivate::DeleteVoiceChannelRequestPrivate(
    const DeleteVoiceChannelRequestPrivate &other, DeleteVoiceChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
