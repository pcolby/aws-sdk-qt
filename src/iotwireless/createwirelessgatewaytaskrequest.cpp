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

#include "createwirelessgatewaytaskrequest.h"
#include "createwirelessgatewaytaskrequest_p.h"
#include "createwirelessgatewaytaskresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskRequest
 * \brief The CreateWirelessGatewayTaskRequest class provides an interface for IoTWireless CreateWirelessGatewayTask requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createWirelessGatewayTask
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWirelessGatewayTaskRequest::CreateWirelessGatewayTaskRequest(const CreateWirelessGatewayTaskRequest &other)
    : IoTWirelessRequest(new CreateWirelessGatewayTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWirelessGatewayTaskRequest object.
 */
CreateWirelessGatewayTaskRequest::CreateWirelessGatewayTaskRequest()
    : IoTWirelessRequest(new CreateWirelessGatewayTaskRequestPrivate(IoTWirelessRequest::CreateWirelessGatewayTaskAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWirelessGatewayTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWirelessGatewayTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWirelessGatewayTaskRequest::response(QNetworkReply * const reply) const
{
    return new CreateWirelessGatewayTaskResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayTaskRequestPrivate
 * \brief The CreateWirelessGatewayTaskRequestPrivate class provides private implementation for CreateWirelessGatewayTaskRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessGatewayTaskRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
CreateWirelessGatewayTaskRequestPrivate::CreateWirelessGatewayTaskRequestPrivate(
    const IoTWirelessRequest::Action action, CreateWirelessGatewayTaskRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWirelessGatewayTaskRequest
 * class' copy constructor.
 */
CreateWirelessGatewayTaskRequestPrivate::CreateWirelessGatewayTaskRequestPrivate(
    const CreateWirelessGatewayTaskRequestPrivate &other, CreateWirelessGatewayTaskRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
