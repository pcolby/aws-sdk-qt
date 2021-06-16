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

#include "createdestinationrequest.h"
#include "createdestinationrequest_p.h"
#include "createdestinationresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateDestinationRequest
 * \brief The CreateDestinationRequest class provides an interface for IoTWireless CreateDestination requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createDestination
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDestinationRequest::CreateDestinationRequest(const CreateDestinationRequest &other)
    : IoTWirelessRequest(new CreateDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDestinationRequest object.
 */
CreateDestinationRequest::CreateDestinationRequest()
    : IoTWirelessRequest(new CreateDestinationRequestPrivate(IoTWirelessRequest::CreateDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDestinationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateDestinationRequestPrivate
 * \brief The CreateDestinationRequestPrivate class provides private implementation for CreateDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateDestinationRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateDestinationRequestPrivate::CreateDestinationRequestPrivate(
    const IoTWirelessRequest::Action action, CreateDestinationRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDestinationRequest
 * class' copy constructor.
 */
CreateDestinationRequestPrivate::CreateDestinationRequestPrivate(
    const CreateDestinationRequestPrivate &other, CreateDestinationRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
