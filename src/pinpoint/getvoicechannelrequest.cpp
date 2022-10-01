// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getvoicechannelrequest.h"
#include "getvoicechannelrequest_p.h"
#include "getvoicechannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetVoiceChannelRequest
 * \brief The GetVoiceChannelRequest class provides an interface for Pinpoint GetVoiceChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getVoiceChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetVoiceChannelRequest::GetVoiceChannelRequest(const GetVoiceChannelRequest &other)
    : PinpointRequest(new GetVoiceChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVoiceChannelRequest object.
 */
GetVoiceChannelRequest::GetVoiceChannelRequest()
    : PinpointRequest(new GetVoiceChannelRequestPrivate(PinpointRequest::GetVoiceChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetVoiceChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVoiceChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVoiceChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetVoiceChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetVoiceChannelRequestPrivate
 * \brief The GetVoiceChannelRequestPrivate class provides private implementation for GetVoiceChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetVoiceChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetVoiceChannelRequestPrivate::GetVoiceChannelRequestPrivate(
    const PinpointRequest::Action action, GetVoiceChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVoiceChannelRequest
 * class' copy constructor.
 */
GetVoiceChannelRequestPrivate::GetVoiceChannelRequestPrivate(
    const GetVoiceChannelRequestPrivate &other, GetVoiceChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
