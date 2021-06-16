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

#include "cancelsimulationjobbatchrequest.h"
#include "cancelsimulationjobbatchrequest_p.h"
#include "cancelsimulationjobbatchresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobBatchRequest
 * \brief The CancelSimulationJobBatchRequest class provides an interface for RoboMaker CancelSimulationJobBatch requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelSimulationJobBatch
 */

/*!
 * Constructs a copy of \a other.
 */
CancelSimulationJobBatchRequest::CancelSimulationJobBatchRequest(const CancelSimulationJobBatchRequest &other)
    : RoboMakerRequest(new CancelSimulationJobBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelSimulationJobBatchRequest object.
 */
CancelSimulationJobBatchRequest::CancelSimulationJobBatchRequest()
    : RoboMakerRequest(new CancelSimulationJobBatchRequestPrivate(RoboMakerRequest::CancelSimulationJobBatchAction, this))
{

}

/*!
 * \reimp
 */
bool CancelSimulationJobBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelSimulationJobBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelSimulationJobBatchRequest::response(QNetworkReply * const reply) const
{
    return new CancelSimulationJobBatchResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobBatchRequestPrivate
 * \brief The CancelSimulationJobBatchRequestPrivate class provides private implementation for CancelSimulationJobBatchRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelSimulationJobBatchRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
CancelSimulationJobBatchRequestPrivate::CancelSimulationJobBatchRequestPrivate(
    const RoboMakerRequest::Action action, CancelSimulationJobBatchRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelSimulationJobBatchRequest
 * class' copy constructor.
 */
CancelSimulationJobBatchRequestPrivate::CancelSimulationJobBatchRequestPrivate(
    const CancelSimulationJobBatchRequestPrivate &other, CancelSimulationJobBatchRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
