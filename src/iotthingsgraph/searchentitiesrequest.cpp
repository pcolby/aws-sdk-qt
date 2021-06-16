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

#include "searchentitiesrequest.h"
#include "searchentitiesrequest_p.h"
#include "searchentitiesresponse.h"
#include "iotthingsgraphrequest_p.h"

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::SearchEntitiesRequest
 * \brief The SearchEntitiesRequest class provides an interface for IoTThingsGraph SearchEntities requests.
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
 * \sa IoTThingsGraphClient::searchEntities
 */

/*!
 * Constructs a copy of \a other.
 */
SearchEntitiesRequest::SearchEntitiesRequest(const SearchEntitiesRequest &other)
    : IoTThingsGraphRequest(new SearchEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchEntitiesRequest object.
 */
SearchEntitiesRequest::SearchEntitiesRequest()
    : IoTThingsGraphRequest(new SearchEntitiesRequestPrivate(IoTThingsGraphRequest::SearchEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new SearchEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTThingsGraph::SearchEntitiesRequestPrivate
 * \brief The SearchEntitiesRequestPrivate class provides private implementation for SearchEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a SearchEntitiesRequestPrivate object for IoTThingsGraph \a action,
 * with public implementation \a q.
 */
SearchEntitiesRequestPrivate::SearchEntitiesRequestPrivate(
    const IoTThingsGraphRequest::Action action, SearchEntitiesRequest * const q)
    : IoTThingsGraphRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchEntitiesRequest
 * class' copy constructor.
 */
SearchEntitiesRequestPrivate::SearchEntitiesRequestPrivate(
    const SearchEntitiesRequestPrivate &other, SearchEntitiesRequest * const q)
    : IoTThingsGraphRequestPrivate(other, q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
