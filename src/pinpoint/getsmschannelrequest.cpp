// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsmschannelrequest.h"
#include "getsmschannelrequest_p.h"
#include "getsmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSmsChannelRequest
 * \brief The GetSmsChannelRequest class provides an interface for Pinpoint GetSmsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSmsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetSmsChannelRequest::GetSmsChannelRequest(const GetSmsChannelRequest &other)
    : PinpointRequest(new GetSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSmsChannelRequest object.
 */
GetSmsChannelRequest::GetSmsChannelRequest()
    : PinpointRequest(new GetSmsChannelRequestPrivate(PinpointRequest::GetSmsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetSmsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSmsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetSmsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSmsChannelRequestPrivate
 * \brief The GetSmsChannelRequestPrivate class provides private implementation for GetSmsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSmsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSmsChannelRequestPrivate::GetSmsChannelRequestPrivate(
    const PinpointRequest::Action action, GetSmsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSmsChannelRequest
 * class' copy constructor.
 */
GetSmsChannelRequestPrivate::GetSmsChannelRequestPrivate(
    const GetSmsChannelRequestPrivate &other, GetSmsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
