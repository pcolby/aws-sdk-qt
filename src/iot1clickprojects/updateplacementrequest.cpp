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

#include "updateplacementrequest.h"
#include "updateplacementrequest_p.h"
#include "updateplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::UpdatePlacementRequest
 * \brief The UpdatePlacementRequest class provides an interface for IoT1ClickProjects UpdatePlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::updatePlacement
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePlacementRequest::UpdatePlacementRequest(const UpdatePlacementRequest &other)
    : IoT1ClickProjectsRequest(new UpdatePlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePlacementRequest object.
 */
UpdatePlacementRequest::UpdatePlacementRequest()
    : IoT1ClickProjectsRequest(new UpdatePlacementRequestPrivate(IoT1ClickProjectsRequest::UpdatePlacementAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePlacementRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::UpdatePlacementRequestPrivate
 * \brief The UpdatePlacementRequestPrivate class provides private implementation for UpdatePlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a UpdatePlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
UpdatePlacementRequestPrivate::UpdatePlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, UpdatePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePlacementRequest
 * class' copy constructor.
 */
UpdatePlacementRequestPrivate::UpdatePlacementRequestPrivate(
    const UpdatePlacementRequestPrivate &other, UpdatePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
