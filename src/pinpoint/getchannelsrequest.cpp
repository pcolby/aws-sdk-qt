// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelsrequest.h"
#include "getchannelsrequest_p.h"
#include "getchannelsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetChannelsRequest
 * \brief The GetChannelsRequest class provides an interface for Pinpoint GetChannels requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getChannels
 */

/*!
 * Constructs a copy of \a other.
 */
GetChannelsRequest::GetChannelsRequest(const GetChannelsRequest &other)
    : PinpointRequest(new GetChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChannelsRequest object.
 */
GetChannelsRequest::GetChannelsRequest()
    : PinpointRequest(new GetChannelsRequestPrivate(PinpointRequest::GetChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChannelsRequest::response(QNetworkReply * const reply) const
{
    return new GetChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetChannelsRequestPrivate
 * \brief The GetChannelsRequestPrivate class provides private implementation for GetChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetChannelsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetChannelsRequestPrivate::GetChannelsRequestPrivate(
    const PinpointRequest::Action action, GetChannelsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChannelsRequest
 * class' copy constructor.
 */
GetChannelsRequestPrivate::GetChannelsRequestPrivate(
    const GetChannelsRequestPrivate &other, GetChannelsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
