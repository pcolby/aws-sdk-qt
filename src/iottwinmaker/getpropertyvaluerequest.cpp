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

#include "getpropertyvaluerequest.h"
#include "getpropertyvaluerequest_p.h"
#include "getpropertyvalueresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::GetPropertyValueRequest
 * \brief The GetPropertyValueRequest class provides an interface for IoTTwinMaker GetPropertyValue requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::getPropertyValue
 */

/*!
 * Constructs a copy of \a other.
 */
GetPropertyValueRequest::GetPropertyValueRequest(const GetPropertyValueRequest &other)
    : IoTTwinMakerRequest(new GetPropertyValueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPropertyValueRequest object.
 */
GetPropertyValueRequest::GetPropertyValueRequest()
    : IoTTwinMakerRequest(new GetPropertyValueRequestPrivate(IoTTwinMakerRequest::GetPropertyValueAction, this))
{

}

/*!
 * \reimp
 */
bool GetPropertyValueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPropertyValueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPropertyValueRequest::response(QNetworkReply * const reply) const
{
    return new GetPropertyValueResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::GetPropertyValueRequestPrivate
 * \brief The GetPropertyValueRequestPrivate class provides private implementation for GetPropertyValueRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a GetPropertyValueRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
GetPropertyValueRequestPrivate::GetPropertyValueRequestPrivate(
    const IoTTwinMakerRequest::Action action, GetPropertyValueRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPropertyValueRequest
 * class' copy constructor.
 */
GetPropertyValueRequestPrivate::GetPropertyValueRequestPrivate(
    const GetPropertyValueRequestPrivate &other, GetPropertyValueRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
