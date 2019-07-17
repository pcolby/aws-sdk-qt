/*
    Copyright 2013-2019 Paul Colby

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

#include "associateentitytothingrequest.h"
#include "associateentitytothingrequest_p.h"
#include "associateentitytothingresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::AssociateEntityToThingRequest
 * \brief The AssociateEntityToThingRequest class provides an interface for IoTThingsGraph AssociateEntityToThing requests.
 *
 * \inmodule QtAwsIoTThingsGraph
 *
 *  <fullname>AWS IoT Things Graph</fullname>
 * 
 *  AWS IoT Things Graph provides an integrated set of tools that enable developers to connect devices and services that use
 *  different standards, such as units of measure and communication protocols. AWS IoT Things Graph makes it possible to
 *  build IoT applications with little to no code by connecting devices and services and defining how they interact at an
 *  abstract
 * 
 *  level>
 * 
 *  For more information about how AWS IoT Things Graph works, see the <a
 *  href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
 *
 * \sa IoTThingsGraphClient::associateEntityToThing
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateEntityToThingRequest::AssociateEntityToThingRequest(const AssociateEntityToThingRequest &other)
    : IoTThingsGraphRequest(new AssociateEntityToThingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateEntityToThingRequest object.
 */
AssociateEntityToThingRequest::AssociateEntityToThingRequest()
    : IoTThingsGraphRequest(new AssociateEntityToThingRequestPrivate(IoTThingsGraphRequest::AssociateEntityToThingAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateEntityToThingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateEntityToThingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateEntityToThingRequest::response(QNetworkReply * const reply) const
{
    return new AssociateEntityToThingResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::AssociateEntityToThingRequestPrivate
 * \brief The AssociateEntityToThingRequestPrivate class provides private implementation for AssociateEntityToThingRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a AssociateEntityToThingRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
AssociateEntityToThingRequestPrivate::AssociateEntityToThingRequestPrivate(
    const IoTThingsGraphRequest::Action action, AssociateEntityToThingRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateEntityToThingRequest
 * class' copy constructor.
 */
AssociateEntityToThingRequestPrivate::AssociateEntityToThingRequestPrivate(
    const AssociateEntityToThingRequestPrivate &other, AssociateEntityToThingRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
