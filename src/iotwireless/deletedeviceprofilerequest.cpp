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

#include "deletedeviceprofilerequest.h"
#include "deletedeviceprofilerequest_p.h"
#include "deletedeviceprofileresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteDeviceProfileRequest
 * \brief The DeleteDeviceProfileRequest class provides an interface for IoTWireless DeleteDeviceProfile requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteDeviceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeviceProfileRequest::DeleteDeviceProfileRequest(const DeleteDeviceProfileRequest &other)
    : IoTWirelessRequest(new DeleteDeviceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeviceProfileRequest object.
 */
DeleteDeviceProfileRequest::DeleteDeviceProfileRequest()
    : IoTWirelessRequest(new DeleteDeviceProfileRequestPrivate(IoTWirelessRequest::DeleteDeviceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeviceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeviceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeviceProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeviceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DeleteDeviceProfileRequestPrivate
 * \brief The DeleteDeviceProfileRequestPrivate class provides private implementation for DeleteDeviceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteDeviceProfileRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DeleteDeviceProfileRequestPrivate::DeleteDeviceProfileRequestPrivate(
    const IoTWirelessRequest::Action action, DeleteDeviceProfileRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeviceProfileRequest
 * class' copy constructor.
 */
DeleteDeviceProfileRequestPrivate::DeleteDeviceProfileRequestPrivate(
    const DeleteDeviceProfileRequestPrivate &other, DeleteDeviceProfileRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
