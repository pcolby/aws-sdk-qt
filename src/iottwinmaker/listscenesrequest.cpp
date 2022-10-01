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

#include "listscenesrequest.h"
#include "listscenesrequest_p.h"
#include "listscenesresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::ListScenesRequest
 * \brief The ListScenesRequest class provides an interface for IoTTwinMaker ListScenes requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::listScenes
 */

/*!
 * Constructs a copy of \a other.
 */
ListScenesRequest::ListScenesRequest(const ListScenesRequest &other)
    : IoTTwinMakerRequest(new ListScenesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListScenesRequest object.
 */
ListScenesRequest::ListScenesRequest()
    : IoTTwinMakerRequest(new ListScenesRequestPrivate(IoTTwinMakerRequest::ListScenesAction, this))
{

}

/*!
 * \reimp
 */
bool ListScenesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListScenesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListScenesRequest::response(QNetworkReply * const reply) const
{
    return new ListScenesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::ListScenesRequestPrivate
 * \brief The ListScenesRequestPrivate class provides private implementation for ListScenesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a ListScenesRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
ListScenesRequestPrivate::ListScenesRequestPrivate(
    const IoTTwinMakerRequest::Action action, ListScenesRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListScenesRequest
 * class' copy constructor.
 */
ListScenesRequestPrivate::ListScenesRequestPrivate(
    const ListScenesRequestPrivate &other, ListScenesRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
