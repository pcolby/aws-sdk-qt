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

#include "createcomponenttyperequest.h"
#include "createcomponenttyperequest_p.h"
#include "createcomponenttyperesponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateComponentTypeRequest
 * \brief The CreateComponentTypeRequest class provides an interface for IoTTwinMaker CreateComponentType requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createComponentType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateComponentTypeRequest::CreateComponentTypeRequest(const CreateComponentTypeRequest &other)
    : IoTTwinMakerRequest(new CreateComponentTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateComponentTypeRequest object.
 */
CreateComponentTypeRequest::CreateComponentTypeRequest()
    : IoTTwinMakerRequest(new CreateComponentTypeRequestPrivate(IoTTwinMakerRequest::CreateComponentTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateComponentTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateComponentTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateComponentTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateComponentTypeResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::CreateComponentTypeRequestPrivate
 * \brief The CreateComponentTypeRequestPrivate class provides private implementation for CreateComponentTypeRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateComponentTypeRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
CreateComponentTypeRequestPrivate::CreateComponentTypeRequestPrivate(
    const IoTTwinMakerRequest::Action action, CreateComponentTypeRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateComponentTypeRequest
 * class' copy constructor.
 */
CreateComponentTypeRequestPrivate::CreateComponentTypeRequestPrivate(
    const CreateComponentTypeRequestPrivate &other, CreateComponentTypeRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
