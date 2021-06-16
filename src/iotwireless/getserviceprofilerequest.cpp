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

#include "getserviceprofilerequest.h"
#include "getserviceprofilerequest_p.h"
#include "getserviceprofileresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetServiceProfileRequest
 * \brief The GetServiceProfileRequest class provides an interface for IoTWireless GetServiceProfile requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getServiceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceProfileRequest::GetServiceProfileRequest(const GetServiceProfileRequest &other)
    : IoTWirelessRequest(new GetServiceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceProfileRequest object.
 */
GetServiceProfileRequest::GetServiceProfileRequest()
    : IoTWirelessRequest(new GetServiceProfileRequestPrivate(IoTWirelessRequest::GetServiceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetServiceProfileRequestPrivate
 * \brief The GetServiceProfileRequestPrivate class provides private implementation for GetServiceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetServiceProfileRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetServiceProfileRequestPrivate::GetServiceProfileRequestPrivate(
    const IoTWirelessRequest::Action action, GetServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceProfileRequest
 * class' copy constructor.
 */
GetServiceProfileRequestPrivate::GetServiceProfileRequestPrivate(
    const GetServiceProfileRequestPrivate &other, GetServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
