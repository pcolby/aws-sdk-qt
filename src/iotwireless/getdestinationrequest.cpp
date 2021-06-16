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

#include "getdestinationrequest.h"
#include "getdestinationrequest_p.h"
#include "getdestinationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetDestinationRequest
 * \brief The GetDestinationRequest class provides an interface for IoTWireless GetDestination requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getDestination
 */

/*!
 * Constructs a copy of \a other.
 */
GetDestinationRequest::GetDestinationRequest(const GetDestinationRequest &other)
    : IoTWirelessRequest(new GetDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDestinationRequest object.
 */
GetDestinationRequest::GetDestinationRequest()
    : IoTWirelessRequest(new GetDestinationRequestPrivate(IoTWirelessRequest::GetDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool GetDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDestinationRequest::response(QNetworkReply * const reply) const
{
    return new GetDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetDestinationRequestPrivate
 * \brief The GetDestinationRequestPrivate class provides private implementation for GetDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetDestinationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetDestinationRequestPrivate::GetDestinationRequestPrivate(
    const IoTWirelessRequest::Action action, GetDestinationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDestinationRequest
 * class' copy constructor.
 */
GetDestinationRequestPrivate::GetDestinationRequestPrivate(
    const GetDestinationRequestPrivate &other, GetDestinationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
