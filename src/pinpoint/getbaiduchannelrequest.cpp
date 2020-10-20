/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbaiduchannelrequest.h"
#include "getbaiduchannelrequest_p.h"
#include "getbaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetBaiduChannelRequest
 * \brief The GetBaiduChannelRequest class provides an interface for Pinpoint GetBaiduChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getBaiduChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetBaiduChannelRequest::GetBaiduChannelRequest(const GetBaiduChannelRequest &other)
    : PinpointRequest(new GetBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBaiduChannelRequest object.
 */
GetBaiduChannelRequest::GetBaiduChannelRequest()
    : PinpointRequest(new GetBaiduChannelRequestPrivate(PinpointRequest::GetBaiduChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetBaiduChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBaiduChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetBaiduChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetBaiduChannelRequestPrivate
 * \brief The GetBaiduChannelRequestPrivate class provides private implementation for GetBaiduChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetBaiduChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetBaiduChannelRequestPrivate::GetBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, GetBaiduChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBaiduChannelRequest
 * class' copy constructor.
 */
GetBaiduChannelRequestPrivate::GetBaiduChannelRequestPrivate(
    const GetBaiduChannelRequestPrivate &other, GetBaiduChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
