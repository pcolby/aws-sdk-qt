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

#include "deleteplacementrequest.h"
#include "deleteplacementrequest_p.h"
#include "deleteplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DeletePlacementRequest
 * \brief The DeletePlacementRequest class provides an interface for IoT1ClickProjects DeletePlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::deletePlacement
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePlacementRequest::DeletePlacementRequest(const DeletePlacementRequest &other)
    : IoT1ClickProjectsRequest(new DeletePlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePlacementRequest object.
 */
DeletePlacementRequest::DeletePlacementRequest()
    : IoT1ClickProjectsRequest(new DeletePlacementRequestPrivate(IoT1ClickProjectsRequest::DeletePlacementAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePlacementRequest::response(QNetworkReply * const reply) const
{
    return new DeletePlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::DeletePlacementRequestPrivate
 * \brief The DeletePlacementRequestPrivate class provides private implementation for DeletePlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DeletePlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
DeletePlacementRequestPrivate::DeletePlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, DeletePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePlacementRequest
 * class' copy constructor.
 */
DeletePlacementRequestPrivate::DeletePlacementRequestPrivate(
    const DeletePlacementRequestPrivate &other, DeletePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
