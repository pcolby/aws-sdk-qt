/*
    Copyright 2013-2018 Paul Colby

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

#include "updatebaiduchannelrequest.h"
#include "updatebaiduchannelrequest_p.h"
#include "updatebaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelRequest
 * \brief The UpdateBaiduChannelRequest class provides an interface for Pinpoint UpdateBaiduChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateBaiduChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBaiduChannelRequest::UpdateBaiduChannelRequest(const UpdateBaiduChannelRequest &other)
    : PinpointRequest(new UpdateBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBaiduChannelRequest object.
 */
UpdateBaiduChannelRequest::UpdateBaiduChannelRequest()
    : PinpointRequest(new UpdateBaiduChannelRequestPrivate(PinpointRequest::UpdateBaiduChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBaiduChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBaiduChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBaiduChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelRequestPrivate
 * \brief The UpdateBaiduChannelRequestPrivate class provides private implementation for UpdateBaiduChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateBaiduChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateBaiduChannelRequestPrivate::UpdateBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateBaiduChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBaiduChannelRequest
 * class' copy constructor.
 */
UpdateBaiduChannelRequestPrivate::UpdateBaiduChannelRequestPrivate(
    const UpdateBaiduChannelRequestPrivate &other, UpdateBaiduChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
