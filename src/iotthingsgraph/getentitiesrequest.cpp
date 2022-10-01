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

#include "getentitiesrequest.h"
#include "getentitiesrequest_p.h"
#include "getentitiesresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::GetEntitiesRequest
 * \brief The GetEntitiesRequest class provides an interface for IoTThingsGraph GetEntities requests.
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
 *  Guide</a>>
 * 
 *  The AWS IoT Things Graph service is
 *
 * \sa IoTThingsGraphClient::getEntities
 */

/*!
 * Constructs a copy of \a other.
 */
GetEntitiesRequest::GetEntitiesRequest(const GetEntitiesRequest &other)
    : IoTThingsGraphRequest(new GetEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEntitiesRequest object.
 */
GetEntitiesRequest::GetEntitiesRequest()
    : IoTThingsGraphRequest(new GetEntitiesRequestPrivate(IoTThingsGraphRequest::GetEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool GetEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new GetEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::GetEntitiesRequestPrivate
 * \brief The GetEntitiesRequestPrivate class provides private implementation for GetEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a GetEntitiesRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
GetEntitiesRequestPrivate::GetEntitiesRequestPrivate(
    const IoTThingsGraphRequest::Action action, GetEntitiesRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEntitiesRequest
 * class' copy constructor.
 */
GetEntitiesRequestPrivate::GetEntitiesRequestPrivate(
    const GetEntitiesRequestPrivate &other, GetEntitiesRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
