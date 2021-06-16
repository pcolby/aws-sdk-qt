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

#include "createdeviceprofilerequest.h"
#include "createdeviceprofilerequest_p.h"
#include "createdeviceprofileresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateDeviceProfileRequest
 * \brief The CreateDeviceProfileRequest class provides an interface for IoTWireless CreateDeviceProfile requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createDeviceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDeviceProfileRequest::CreateDeviceProfileRequest(const CreateDeviceProfileRequest &other)
    : IoTWirelessRequest(new CreateDeviceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDeviceProfileRequest object.
 */
CreateDeviceProfileRequest::CreateDeviceProfileRequest()
    : IoTWirelessRequest(new CreateDeviceProfileRequestPrivate(IoTWirelessRequest::CreateDeviceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDeviceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDeviceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeviceProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeviceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateDeviceProfileRequestPrivate
 * \brief The CreateDeviceProfileRequestPrivate class provides private implementation for CreateDeviceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateDeviceProfileRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateDeviceProfileRequestPrivate::CreateDeviceProfileRequestPrivate(
    const IoTWirelessRequest::Action action, CreateDeviceProfileRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDeviceProfileRequest
 * class' copy constructor.
 */
CreateDeviceProfileRequestPrivate::CreateDeviceProfileRequestPrivate(
    const CreateDeviceProfileRequestPrivate &other, CreateDeviceProfileRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
