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

#include "deletedestinationrequest.h"
#include "deletedestinationrequest_p.h"
#include "deletedestinationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteDestinationRequest
 * \brief The DeleteDestinationRequest class provides an interface for IoTWireless DeleteDestination requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteDestination
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDestinationRequest::DeleteDestinationRequest(const DeleteDestinationRequest &other)
    : IoTWirelessRequest(new DeleteDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDestinationRequest object.
 */
DeleteDestinationRequest::DeleteDestinationRequest()
    : IoTWirelessRequest(new DeleteDestinationRequestPrivate(IoTWirelessRequest::DeleteDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDestinationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DeleteDestinationRequestPrivate
 * \brief The DeleteDestinationRequestPrivate class provides private implementation for DeleteDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteDestinationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DeleteDestinationRequestPrivate::DeleteDestinationRequestPrivate(
    const IoTWirelessRequest::Action action, DeleteDestinationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDestinationRequest
 * class' copy constructor.
 */
DeleteDestinationRequestPrivate::DeleteDestinationRequestPrivate(
    const DeleteDestinationRequestPrivate &other, DeleteDestinationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
