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

#include "listsimulationjobbatchesrequest.h"
#include "listsimulationjobbatchesrequest_p.h"
#include "listsimulationjobbatchesresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationJobBatchesRequest
 * \brief The ListSimulationJobBatchesRequest class provides an interface for RoboMaker ListSimulationJobBatches requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationJobBatches
 */

/*!
 * Constructs a copy of \a other.
 */
ListSimulationJobBatchesRequest::ListSimulationJobBatchesRequest(const ListSimulationJobBatchesRequest &other)
    : RoboMakerRequest(new ListSimulationJobBatchesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSimulationJobBatchesRequest object.
 */
ListSimulationJobBatchesRequest::ListSimulationJobBatchesRequest()
    : RoboMakerRequest(new ListSimulationJobBatchesRequestPrivate(RoboMakerRequest::ListSimulationJobBatchesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSimulationJobBatchesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSimulationJobBatchesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSimulationJobBatchesRequest::response(QNetworkReply * const reply) const
{
    return new ListSimulationJobBatchesResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListSimulationJobBatchesRequestPrivate
 * \brief The ListSimulationJobBatchesRequestPrivate class provides private implementation for ListSimulationJobBatchesRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationJobBatchesRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListSimulationJobBatchesRequestPrivate::ListSimulationJobBatchesRequestPrivate(
    const RoboMakerRequest::Action action, ListSimulationJobBatchesRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSimulationJobBatchesRequest
 * class' copy constructor.
 */
ListSimulationJobBatchesRequestPrivate::ListSimulationJobBatchesRequestPrivate(
    const ListSimulationJobBatchesRequestPrivate &other, ListSimulationJobBatchesRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
