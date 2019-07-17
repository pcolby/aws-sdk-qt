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

#include "getdevicesinplacementrequest.h"
#include "getdevicesinplacementrequest_p.h"
#include "getdevicesinplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::GetDevicesInPlacementRequest
 * \brief The GetDevicesInPlacementRequest class provides an interface for IoT1ClickProjects GetDevicesInPlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Project API
 *
 * \sa IoT1ClickProjectsClient::getDevicesInPlacement
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicesInPlacementRequest::GetDevicesInPlacementRequest(const GetDevicesInPlacementRequest &other)
    : IoT1ClickProjectsRequest(new GetDevicesInPlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicesInPlacementRequest object.
 */
GetDevicesInPlacementRequest::GetDevicesInPlacementRequest()
    : IoT1ClickProjectsRequest(new GetDevicesInPlacementRequestPrivate(IoT1ClickProjectsRequest::GetDevicesInPlacementAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicesInPlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicesInPlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicesInPlacementRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicesInPlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::GetDevicesInPlacementRequestPrivate
 * \brief The GetDevicesInPlacementRequestPrivate class provides private implementation for GetDevicesInPlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a GetDevicesInPlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
GetDevicesInPlacementRequestPrivate::GetDevicesInPlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, GetDevicesInPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicesInPlacementRequest
 * class' copy constructor.
 */
GetDevicesInPlacementRequestPrivate::GetDevicesInPlacementRequestPrivate(
    const GetDevicesInPlacementRequestPrivate &other, GetDevicesInPlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
