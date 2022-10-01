// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapnsvoipchannelrequest.h"
#include "getapnsvoipchannelrequest_p.h"
#include "getapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelRequest
 * \brief The GetApnsVoipChannelRequest class provides an interface for Pinpoint GetApnsVoipChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsVoipChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetApnsVoipChannelRequest::GetApnsVoipChannelRequest(const GetApnsVoipChannelRequest &other)
    : PinpointRequest(new GetApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApnsVoipChannelRequest object.
 */
GetApnsVoipChannelRequest::GetApnsVoipChannelRequest()
    : PinpointRequest(new GetApnsVoipChannelRequestPrivate(PinpointRequest::GetApnsVoipChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetApnsVoipChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApnsVoipChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsVoipChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelRequestPrivate
 * \brief The GetApnsVoipChannelRequestPrivate class provides private implementation for GetApnsVoipChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsVoipChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetApnsVoipChannelRequestPrivate::GetApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApnsVoipChannelRequest
 * class' copy constructor.
 */
GetApnsVoipChannelRequestPrivate::GetApnsVoipChannelRequestPrivate(
    const GetApnsVoipChannelRequestPrivate &other, GetApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
