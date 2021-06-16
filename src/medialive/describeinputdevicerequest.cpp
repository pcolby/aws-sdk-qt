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

#include "describeinputdevicerequest.h"
#include "describeinputdevicerequest_p.h"
#include "describeinputdeviceresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceRequest
 * \brief The DescribeInputDeviceRequest class provides an interface for MediaLive DescribeInputDevice requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeInputDevice
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInputDeviceRequest::DescribeInputDeviceRequest(const DescribeInputDeviceRequest &other)
    : MediaLiveRequest(new DescribeInputDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInputDeviceRequest object.
 */
DescribeInputDeviceRequest::DescribeInputDeviceRequest()
    : MediaLiveRequest(new DescribeInputDeviceRequestPrivate(MediaLiveRequest::DescribeInputDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInputDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInputDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInputDeviceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInputDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeInputDeviceRequestPrivate
 * \brief The DescribeInputDeviceRequestPrivate class provides private implementation for DescribeInputDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeInputDeviceRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeInputDeviceRequestPrivate::DescribeInputDeviceRequestPrivate(
    const MediaLiveRequest::Action action, DescribeInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInputDeviceRequest
 * class' copy constructor.
 */
DescribeInputDeviceRequestPrivate::DescribeInputDeviceRequestPrivate(
    const DescribeInputDeviceRequestPrivate &other, DescribeInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
