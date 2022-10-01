// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapnssandboxchannelrequest.h"
#include "getapnssandboxchannelrequest_p.h"
#include "getapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelRequest
 * \brief The GetApnsSandboxChannelRequest class provides an interface for Pinpoint GetApnsSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetApnsSandboxChannelRequest::GetApnsSandboxChannelRequest(const GetApnsSandboxChannelRequest &other)
    : PinpointRequest(new GetApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApnsSandboxChannelRequest object.
 */
GetApnsSandboxChannelRequest::GetApnsSandboxChannelRequest()
    : PinpointRequest(new GetApnsSandboxChannelRequestPrivate(PinpointRequest::GetApnsSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApnsSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelRequestPrivate
 * \brief The GetApnsSandboxChannelRequestPrivate class provides private implementation for GetApnsSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetApnsSandboxChannelRequestPrivate::GetApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApnsSandboxChannelRequest
 * class' copy constructor.
 */
GetApnsSandboxChannelRequestPrivate::GetApnsSandboxChannelRequestPrivate(
    const GetApnsSandboxChannelRequestPrivate &other, GetApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
