/*
    Copyright 2013-2021 Paul Colby

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

#include "claimdevicerequest.h"
#include "claimdevicerequest_p.h"
#include "claimdeviceresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ClaimDeviceRequest
 * \brief The ClaimDeviceRequest class provides an interface for MediaLive ClaimDevice requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::claimDevice
 */

/*!
 * Constructs a copy of \a other.
 */
ClaimDeviceRequest::ClaimDeviceRequest(const ClaimDeviceRequest &other)
    : MediaLiveRequest(new ClaimDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ClaimDeviceRequest object.
 */
ClaimDeviceRequest::ClaimDeviceRequest()
    : MediaLiveRequest(new ClaimDeviceRequestPrivate(MediaLiveRequest::ClaimDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool ClaimDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ClaimDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ClaimDeviceRequest::response(QNetworkReply * const reply) const
{
    return new ClaimDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ClaimDeviceRequestPrivate
 * \brief The ClaimDeviceRequestPrivate class provides private implementation for ClaimDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ClaimDeviceRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ClaimDeviceRequestPrivate::ClaimDeviceRequestPrivate(
    const MediaLiveRequest::Action action, ClaimDeviceRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ClaimDeviceRequest
 * class' copy constructor.
 */
ClaimDeviceRequestPrivate::ClaimDeviceRequestPrivate(
    const ClaimDeviceRequestPrivate &other, ClaimDeviceRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
