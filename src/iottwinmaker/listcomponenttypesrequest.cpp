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

#include "listcomponenttypesrequest.h"
#include "listcomponenttypesrequest_p.h"
#include "listcomponenttypesresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListComponentTypesRequest
 * \brief The ListComponentTypesRequest class provides an interface for IoTTwinMaker ListComponentTypes requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listComponentTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentTypesRequest::ListComponentTypesRequest(const ListComponentTypesRequest &other)
    : IoTTwinMakerRequest(new ListComponentTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentTypesRequest object.
 */
ListComponentTypesRequest::ListComponentTypesRequest()
    : IoTTwinMakerRequest(new ListComponentTypesRequestPrivate(IoTTwinMakerRequest::ListComponentTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentTypesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::ListComponentTypesRequestPrivate
 * \brief The ListComponentTypesRequestPrivate class provides private implementation for ListComponentTypesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListComponentTypesRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
ListComponentTypesRequestPrivate::ListComponentTypesRequestPrivate(
    const IoTTwinMakerRequest::Action action, ListComponentTypesRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentTypesRequest
 * class' copy constructor.
 */
ListComponentTypesRequestPrivate::ListComponentTypesRequestPrivate(
    const ListComponentTypesRequestPrivate &other, ListComponentTypesRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
