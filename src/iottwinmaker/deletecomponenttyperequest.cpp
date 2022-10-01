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

#include "deletecomponenttyperequest.h"
#include "deletecomponenttyperequest_p.h"
#include "deletecomponenttyperesponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::DeleteComponentTypeRequest
 * \brief The DeleteComponentTypeRequest class provides an interface for IoTTwinMaker DeleteComponentType requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::deleteComponentType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteComponentTypeRequest::DeleteComponentTypeRequest(const DeleteComponentTypeRequest &other)
    : IoTTwinMakerRequest(new DeleteComponentTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteComponentTypeRequest object.
 */
DeleteComponentTypeRequest::DeleteComponentTypeRequest()
    : IoTTwinMakerRequest(new DeleteComponentTypeRequestPrivate(IoTTwinMakerRequest::DeleteComponentTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteComponentTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteComponentTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteComponentTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteComponentTypeResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::DeleteComponentTypeRequestPrivate
 * \brief The DeleteComponentTypeRequestPrivate class provides private implementation for DeleteComponentTypeRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a DeleteComponentTypeRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
DeleteComponentTypeRequestPrivate::DeleteComponentTypeRequestPrivate(
    const IoTTwinMakerRequest::Action action, DeleteComponentTypeRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteComponentTypeRequest
 * class' copy constructor.
 */
DeleteComponentTypeRequestPrivate::DeleteComponentTypeRequestPrivate(
    const DeleteComponentTypeRequestPrivate &other, DeleteComponentTypeRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
