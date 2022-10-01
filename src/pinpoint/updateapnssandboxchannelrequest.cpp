// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapnssandboxchannelrequest.h"
#include "updateapnssandboxchannelrequest_p.h"
#include "updateapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsSandboxChannelRequest
 * \brief The UpdateApnsSandboxChannelRequest class provides an interface for Pinpoint UpdateApnsSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApnsSandboxChannelRequest::UpdateApnsSandboxChannelRequest(const UpdateApnsSandboxChannelRequest &other)
    : PinpointRequest(new UpdateApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApnsSandboxChannelRequest object.
 */
UpdateApnsSandboxChannelRequest::UpdateApnsSandboxChannelRequest()
    : PinpointRequest(new UpdateApnsSandboxChannelRequestPrivate(PinpointRequest::UpdateApnsSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApnsSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsSandboxChannelRequestPrivate
 * \brief The UpdateApnsSandboxChannelRequestPrivate class provides private implementation for UpdateApnsSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApnsSandboxChannelRequestPrivate::UpdateApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsSandboxChannelRequest
 * class' copy constructor.
 */
UpdateApnsSandboxChannelRequestPrivate::UpdateApnsSandboxChannelRequestPrivate(
    const UpdateApnsSandboxChannelRequestPrivate &other, UpdateApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
