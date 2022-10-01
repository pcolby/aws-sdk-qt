// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgcmchannelrequest.h"
#include "getgcmchannelrequest_p.h"
#include "getgcmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetGcmChannelRequest
 * \brief The GetGcmChannelRequest class provides an interface for Pinpoint GetGcmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getGcmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetGcmChannelRequest::GetGcmChannelRequest(const GetGcmChannelRequest &other)
    : PinpointRequest(new GetGcmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGcmChannelRequest object.
 */
GetGcmChannelRequest::GetGcmChannelRequest()
    : PinpointRequest(new GetGcmChannelRequestPrivate(PinpointRequest::GetGcmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetGcmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGcmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGcmChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetGcmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetGcmChannelRequestPrivate
 * \brief The GetGcmChannelRequestPrivate class provides private implementation for GetGcmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetGcmChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetGcmChannelRequestPrivate::GetGcmChannelRequestPrivate(
    const PinpointRequest::Action action, GetGcmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGcmChannelRequest
 * class' copy constructor.
 */
GetGcmChannelRequestPrivate::GetGcmChannelRequestPrivate(
    const GetGcmChannelRequestPrivate &other, GetGcmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
