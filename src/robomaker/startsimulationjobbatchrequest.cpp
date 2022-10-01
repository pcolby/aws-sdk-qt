// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
