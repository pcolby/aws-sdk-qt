// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
