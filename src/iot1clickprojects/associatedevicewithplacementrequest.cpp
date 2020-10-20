/*
    Copyright 2013-2020 Paul Colby

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

#include "associatedevicewithplacementrequest.h"
#include "associatedevicewithplacementrequest_p.h"
#include "associatedevicewithplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::AssociateDeviceWithPlacementRequest
 * \brief The AssociateDeviceWithPlacementRequest class provides an interface for IoT1ClickProjects AssociateDeviceWithPlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::associateDeviceWithPlacement
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDeviceWithPlacementRequest::AssociateDeviceWithPlacementRequest(const AssociateDeviceWithPlacementRequest &other)
    : IoT1ClickProjectsRequest(new AssociateDeviceWithPlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDeviceWithPlacementRequest object.
 */
AssociateDeviceWithPlacementRequest::AssociateDeviceWithPlacementRequest()
    : IoT1ClickProjectsRequest(new AssociateDeviceWithPlacementRequestPrivate(IoT1ClickProjectsRequest::AssociateDeviceWithPlacementAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDeviceWithPlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDeviceWithPlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDeviceWithPlacementRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDeviceWithPlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::AssociateDeviceWithPlacementRequestPrivate
 * \brief The AssociateDeviceWithPlacementRequestPrivate class provides private implementation for AssociateDeviceWithPlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a AssociateDeviceWithPlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
AssociateDeviceWithPlacementRequestPrivate::AssociateDeviceWithPlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, AssociateDeviceWithPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDeviceWithPlacementRequest
 * class' copy constructor.
 */
AssociateDeviceWithPlacementRequestPrivate::AssociateDeviceWithPlacementRequestPrivate(
    const AssociateDeviceWithPlacementRequestPrivate &other, AssociateDeviceWithPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
