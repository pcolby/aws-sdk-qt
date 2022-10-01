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

#include "startinputdevicemaintenancewindowrequest.h"
#include "startinputdevicemaintenancewindowrequest_p.h"
#include "startinputdevicemaintenancewindowresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartInputDeviceMaintenanceWindowRequest
 * \brief The StartInputDeviceMaintenanceWindowRequest class provides an interface for MediaLive StartInputDeviceMaintenanceWindow requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::startInputDeviceMaintenanceWindow
 */

/*!
 * Constructs a copy of \a other.
 */
StartInputDeviceMaintenanceWindowRequest::StartInputDeviceMaintenanceWindowRequest(const StartInputDeviceMaintenanceWindowRequest &other)
    : MediaLiveRequest(new StartInputDeviceMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartInputDeviceMaintenanceWindowRequest object.
 */
StartInputDeviceMaintenanceWindowRequest::StartInputDeviceMaintenanceWindowRequest()
    : MediaLiveRequest(new StartInputDeviceMaintenanceWindowRequestPrivate(MediaLiveRequest::StartInputDeviceMaintenanceWindowAction, this))
{

}

/*!
 * \reimp
 */
bool StartInputDeviceMaintenanceWindowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartInputDeviceMaintenanceWindowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartInputDeviceMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new StartInputDeviceMaintenanceWindowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::StartInputDeviceMaintenanceWindowRequestPrivate
 * \brief The StartInputDeviceMaintenanceWindowRequestPrivate class provides private implementation for StartInputDeviceMaintenanceWindowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a StartInputDeviceMaintenanceWindowRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
StartInputDeviceMaintenanceWindowRequestPrivate::StartInputDeviceMaintenanceWindowRequestPrivate(
    const MediaLiveRequest::Action action, StartInputDeviceMaintenanceWindowRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartInputDeviceMaintenanceWindowRequest
 * class' copy constructor.
 */
StartInputDeviceMaintenanceWindowRequestPrivate::StartInputDeviceMaintenanceWindowRequestPrivate(
    const StartInputDeviceMaintenanceWindowRequestPrivate &other, StartInputDeviceMaintenanceWindowRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
