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

#include "startsimulationjobbatchrequest.h"
#include "startsimulationjobbatchrequest_p.h"
#include "startsimulationjobbatchresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::StartSimulationJobBatchRequest
 * \brief The StartSimulationJobBatchRequest class provides an interface for RoboMaker StartSimulationJobBatch requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::startSimulationJobBatch
 */

/*!
 * Constructs a copy of \a other.
 */
StartSimulationJobBatchRequest::StartSimulationJobBatchRequest(const StartSimulationJobBatchRequest &other)
    : RoboMakerRequest(new StartSimulationJobBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSimulationJobBatchRequest object.
 */
StartSimulationJobBatchRequest::StartSimulationJobBatchRequest()
    : RoboMakerRequest(new StartSimulationJobBatchRequestPrivate(RoboMakerRequest::StartSimulationJobBatchAction, this))
{

}

/*!
 * \reimp
 */
bool StartSimulationJobBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSimulationJobBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSimulationJobBatchRequest::response(QNetworkReply * const reply) const
{
    return new StartSimulationJobBatchResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::StartSimulationJobBatchRequestPrivate
 * \brief The StartSimulationJobBatchRequestPrivate class provides private implementation for StartSimulationJobBatchRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a StartSimulationJobBatchRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
StartSimulationJobBatchRequestPrivate::StartSimulationJobBatchRequestPrivate(
    const RoboMakerRequest::Action action, StartSimulationJobBatchRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSimulationJobBatchRequest
 * class' copy constructor.
 */
StartSimulationJobBatchRequestPrivate::StartSimulationJobBatchRequestPrivate(
    const StartSimulationJobBatchRequestPrivate &other, StartSimulationJobBatchRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
