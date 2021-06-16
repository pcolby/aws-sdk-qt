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

#include "getserviceendpointrequest.h"
#include "getserviceendpointrequest_p.h"
#include "getserviceendpointresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetServiceEndpointRequest
 * \brief The GetServiceEndpointRequest class provides an interface for IoTWireless GetServiceEndpoint requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getServiceEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceEndpointRequest::GetServiceEndpointRequest(const GetServiceEndpointRequest &other)
    : IoTWirelessRequest(new GetServiceEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceEndpointRequest object.
 */
GetServiceEndpointRequest::GetServiceEndpointRequest()
    : IoTWirelessRequest(new GetServiceEndpointRequestPrivate(IoTWirelessRequest::GetServiceEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetServiceEndpointRequestPrivate
 * \brief The GetServiceEndpointRequestPrivate class provides private implementation for GetServiceEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetServiceEndpointRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetServiceEndpointRequestPrivate::GetServiceEndpointRequestPrivate(
    const IoTWirelessRequest::Action action, GetServiceEndpointRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceEndpointRequest
 * class' copy constructor.
 */
GetServiceEndpointRequestPrivate::GetServiceEndpointRequestPrivate(
    const GetServiceEndpointRequestPrivate &other, GetServiceEndpointRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
