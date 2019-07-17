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

#include "createplacementrequest.h"
#include "createplacementrequest_p.h"
#include "createplacementresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::CreatePlacementRequest
 * \brief The CreatePlacementRequest class provides an interface for IoT1ClickProjects CreatePlacement requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::createPlacement
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePlacementRequest::CreatePlacementRequest(const CreatePlacementRequest &other)
    : IoT1ClickProjectsRequest(new CreatePlacementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePlacementRequest object.
 */
CreatePlacementRequest::CreatePlacementRequest()
    : IoT1ClickProjectsRequest(new CreatePlacementRequestPrivate(IoT1ClickProjectsRequest::CreatePlacementAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePlacementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePlacementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePlacementRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlacementResponse(*this, reply);
}

/*!
 * \class QtAws::IoT1ClickProjects::CreatePlacementRequestPrivate
 * \brief The CreatePlacementRequestPrivate class provides private implementation for CreatePlacementRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a CreatePlacementRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
CreatePlacementRequestPrivate::CreatePlacementRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, CreatePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePlacementRequest
 * class' copy constructor.
 */
CreatePlacementRequestPrivate::CreatePlacementRequestPrivate(
    const CreatePlacementRequestPrivate &other, CreatePlacementRequest * const q)
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
