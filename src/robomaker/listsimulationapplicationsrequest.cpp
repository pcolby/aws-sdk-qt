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

#include "listsimulationapplicationsrequest.h"
#include "listsimulationapplicationsrequest_p.h"
#include "listsimulationapplicationsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationApplicationsRequest
 * \brief The ListSimulationApplicationsRequest class provides an interface for RoboMaker ListSimulationApplications requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationApplications
 */

/*!
 * Constructs a copy of \a other.
 */
ListSimulationApplicationsRequest::ListSimulationApplicationsRequest(const ListSimulationApplicationsRequest &other)
    : RoboMakerRequest(new ListSimulationApplicationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSimulationApplicationsRequest object.
 */
ListSimulationApplicationsRequest::ListSimulationApplicationsRequest()
    : RoboMakerRequest(new ListSimulationApplicationsRequestPrivate(RoboMakerRequest::ListSimulationApplicationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSimulationApplicationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSimulationApplicationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSimulationApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSimulationApplicationsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListSimulationApplicationsRequestPrivate
 * \brief The ListSimulationApplicationsRequestPrivate class provides private implementation for ListSimulationApplicationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationApplicationsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListSimulationApplicationsRequestPrivate::ListSimulationApplicationsRequestPrivate(
    const RoboMakerRequest::Action action, ListSimulationApplicationsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSimulationApplicationsRequest
 * class' copy constructor.
 */
ListSimulationApplicationsRequestPrivate::ListSimulationApplicationsRequestPrivate(
    const ListSimulationApplicationsRequestPrivate &other, ListSimulationApplicationsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
