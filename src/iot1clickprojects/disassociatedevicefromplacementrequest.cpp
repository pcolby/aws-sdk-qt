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

#include "disassociatedevicefromplacementrequest.h"
#include "disassociatedevicefromplacementrequest_p.h"
#include "disassociatedevicefromplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DisassociateDeviceFromPlacementRequest
 * \brief The DisassociateDeviceFromPlacementRequest class provides an interface for IoT1ClickProjects DisassociateDeviceFromPlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::disassociateDeviceFromPlacement
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateDeviceFromPlacementRequest::DisassociateDeviceFromPlacementRequest(const DisassociateDeviceFromPlacementRequest &other)
    : IoT1ClickProjectsRequest(new DisassociateDeviceFromPlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateDeviceFromPlacementRequest object.
 */
DisassociateDeviceFromPlacementRequest::DisassociateDeviceFromPlacementRequest()
    : IoT1ClickProjectsRequest(new DisassociateDeviceFromPlacementRequestPrivate(IoT1ClickProjectsRequest::DisassociateDeviceFromPlacementAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateDeviceFromPlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateDeviceFromPlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDeviceFromPlacementRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDeviceFromPlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::DisassociateDeviceFromPlacementRequestPrivate
 * \brief The DisassociateDeviceFromPlacementRequestPrivate class provides private implementation for DisassociateDeviceFromPlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DisassociateDeviceFromPlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
DisassociateDeviceFromPlacementRequestPrivate::DisassociateDeviceFromPlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, DisassociateDeviceFromPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDeviceFromPlacementRequest
 * class' copy constructor.
 */
DisassociateDeviceFromPlacementRequestPrivate::DisassociateDeviceFromPlacementRequestPrivate(
    const DisassociateDeviceFromPlacementRequestPrivate &other, DisassociateDeviceFromPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
