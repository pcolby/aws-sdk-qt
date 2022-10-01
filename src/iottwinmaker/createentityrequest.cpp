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

#include "createentityrequest.h"
#include "createentityrequest_p.h"
#include "createentityresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::CreateEntityRequest
 * \brief The CreateEntityRequest class provides an interface for IoTTwinMaker CreateEntity requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::createEntity
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEntityRequest::CreateEntityRequest(const CreateEntityRequest &other)
    : IoTTwinMakerRequest(new CreateEntityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEntityRequest object.
 */
CreateEntityRequest::CreateEntityRequest()
    : IoTTwinMakerRequest(new CreateEntityRequestPrivate(IoTTwinMakerRequest::CreateEntityAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEntityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEntityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEntityRequest::response(QNetworkReply * const reply) const
{
    return new CreateEntityResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::CreateEntityRequestPrivate
 * \brief The CreateEntityRequestPrivate class provides private implementation for CreateEntityRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a CreateEntityRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
CreateEntityRequestPrivate::CreateEntityRequestPrivate(
    const IoTTwinMakerRequest::Action action, CreateEntityRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEntityRequest
 * class' copy constructor.
 */
CreateEntityRequestPrivate::CreateEntityRequestPrivate(
    const CreateEntityRequestPrivate &other, CreateEntityRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
