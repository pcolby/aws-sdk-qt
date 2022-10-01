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

#include "deleteentityrequest.h"
#include "deleteentityrequest_p.h"
#include "deleteentityresponse.h"
#include "iottwinmakerrequest_p.h"

namespace QtAws {
namespace IoTTwinMaker {

/*!
 * \class QtAws::IoTTwinMaker::DeleteEntityRequest
 * \brief The DeleteEntityRequest class provides an interface for IoTTwinMaker DeleteEntity requests.
 *
 * \inmodule QtAwsIoTTwinMaker
 *
 *  IoT TwinMaker is a service that enables you to build operational digital twins of physical systems. IoT TwinMaker
 *  overlays measurements and analysis from real-world sensors, cameras, and enterprise applications so you can create data
 *  visualizations to monitor your physical factory, building, or industrial plant. You can use this real-world data to
 *  monitor operations and diagnose and repair
 *
 * \sa IoTTwinMakerClient::deleteEntity
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEntityRequest::DeleteEntityRequest(const DeleteEntityRequest &other)
    : IoTTwinMakerRequest(new DeleteEntityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEntityRequest object.
 */
DeleteEntityRequest::DeleteEntityRequest()
    : IoTTwinMakerRequest(new DeleteEntityRequestPrivate(IoTTwinMakerRequest::DeleteEntityAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEntityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEntityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEntityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEntityResponse(*this, reply);
}

/*!
 * \class QtAws::IoTTwinMaker::DeleteEntityRequestPrivate
 * \brief The DeleteEntityRequestPrivate class provides private implementation for DeleteEntityRequest.
 * \internal
 *
 * \inmodule QtAwsIoTTwinMaker
 */

/*!
 * Constructs a DeleteEntityRequestPrivate object for IoTTwinMaker \a action,
 * with public implementation \a q.
 */
DeleteEntityRequestPrivate::DeleteEntityRequestPrivate(
    const IoTTwinMakerRequest::Action action, DeleteEntityRequest * const q)
    : IoTTwinMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEntityRequest
 * class' copy constructor.
 */
DeleteEntityRequestPrivate::DeleteEntityRequestPrivate(
    const DeleteEntityRequestPrivate &other, DeleteEntityRequest * const q)
    : IoTTwinMakerRequestPrivate(other, q)
{

}

} // namespace IoTTwinMaker
} // namespace QtAws
