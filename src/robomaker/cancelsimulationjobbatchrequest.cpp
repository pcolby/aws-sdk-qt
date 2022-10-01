// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
