// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapnsvoipsandboxchannelrequest.h"
#include "getapnsvoipsandboxchannelrequest_p.h"
#include "getapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipSandboxChannelRequest
 * \brief The GetApnsVoipSandboxChannelRequest class provides an interface for Pinpoint GetApnsVoipSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsVoipSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetApnsVoipSandboxChannelRequest::GetApnsVoipSandboxChannelRequest(const GetApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new GetApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApnsVoipSandboxChannelRequest object.
 */
GetApnsVoipSandboxChannelRequest::GetApnsVoipSandboxChannelRequest()
    : PinpointRequest(new GetApnsVoipSandboxChannelRequestPrivate(PinpointRequest::GetApnsVoipSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApnsVoipSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsVoipSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApnsVoipSandboxChannelRequestPrivate
 * \brief The GetApnsVoipSandboxChannelRequestPrivate class provides private implementation for GetApnsVoipSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsVoipSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetApnsVoipSandboxChannelRequestPrivate::GetApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApnsVoipSandboxChannelRequest
 * class' copy constructor.
 */
GetApnsVoipSandboxChannelRequestPrivate::GetApnsVoipSandboxChannelRequestPrivate(
    const GetApnsVoipSandboxChannelRequestPrivate &other, GetApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
