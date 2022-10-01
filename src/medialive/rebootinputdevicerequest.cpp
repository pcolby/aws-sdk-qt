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

#include "rebootinputdevicerequest.h"
#include "rebootinputdevicerequest_p.h"
#include "rebootinputdeviceresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::RebootInputDeviceRequest
 * \brief The RebootInputDeviceRequest class provides an interface for MediaLive RebootInputDevice requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::rebootInputDevice
 */

/*!
 * Constructs a copy of \a other.
 */
RebootInputDeviceRequest::RebootInputDeviceRequest(const RebootInputDeviceRequest &other)
    : MediaLiveRequest(new RebootInputDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootInputDeviceRequest object.
 */
RebootInputDeviceRequest::RebootInputDeviceRequest()
    : MediaLiveRequest(new RebootInputDeviceRequestPrivate(MediaLiveRequest::RebootInputDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool RebootInputDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootInputDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootInputDeviceRequest::response(QNetworkReply * const reply) const
{
    return new RebootInputDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::RebootInputDeviceRequestPrivate
 * \brief The RebootInputDeviceRequestPrivate class provides private implementation for RebootInputDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a RebootInputDeviceRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
RebootInputDeviceRequestPrivate::RebootInputDeviceRequestPrivate(
    const MediaLiveRequest::Action action, RebootInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootInputDeviceRequest
 * class' copy constructor.
 */
RebootInputDeviceRequestPrivate::RebootInputDeviceRequestPrivate(
    const RebootInputDeviceRequestPrivate &other, RebootInputDeviceRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
