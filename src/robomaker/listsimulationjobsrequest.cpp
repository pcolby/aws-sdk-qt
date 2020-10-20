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

#include "listsimulationjobsrequest.h"
#include "listsimulationjobsrequest_p.h"
#include "listsimulationjobsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationJobsRequest
 * \brief The ListSimulationJobsRequest class provides an interface for RoboMaker ListSimulationJobs requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListSimulationJobsRequest::ListSimulationJobsRequest(const ListSimulationJobsRequest &other)
    : RoboMakerRequest(new ListSimulationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSimulationJobsRequest object.
 */
ListSimulationJobsRequest::ListSimulationJobsRequest()
    : RoboMakerRequest(new ListSimulationJobsRequestPrivate(RoboMakerRequest::ListSimulationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSimulationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSimulationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSimulationJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListSimulationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListSimulationJobsRequestPrivate
 * \brief The ListSimulationJobsRequestPrivate class provides private implementation for ListSimulationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationJobsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListSimulationJobsRequestPrivate::ListSimulationJobsRequestPrivate(
    const RoboMakerRequest::Action action, ListSimulationJobsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSimulationJobsRequest
 * class' copy constructor.
 */
ListSimulationJobsRequestPrivate::ListSimulationJobsRequestPrivate(
    const ListSimulationJobsRequestPrivate &other, ListSimulationJobsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
