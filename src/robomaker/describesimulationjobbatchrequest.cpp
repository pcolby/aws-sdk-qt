// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesimulationjobbatchrequest.h"
#include "describesimulationjobbatchrequest_p.h"
#include "describesimulationjobbatchresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobBatchRequest
 * \brief The DescribeSimulationJobBatchRequest class provides an interface for RoboMaker DescribeSimulationJobBatch requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationJobBatch
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSimulationJobBatchRequest::DescribeSimulationJobBatchRequest(const DescribeSimulationJobBatchRequest &other)
    : RoboMakerRequest(new DescribeSimulationJobBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSimulationJobBatchRequest object.
 */
DescribeSimulationJobBatchRequest::DescribeSimulationJobBatchRequest()
    : RoboMakerRequest(new DescribeSimulationJobBatchRequestPrivate(RoboMakerRequest::DescribeSimulationJobBatchAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSimulationJobBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSimulationJobBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSimulationJobBatchRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSimulationJobBatchResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobBatchRequestPrivate
 * \brief The DescribeSimulationJobBatchRequestPrivate class provides private implementation for DescribeSimulationJobBatchRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationJobBatchRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DescribeSimulationJobBatchRequestPrivate::DescribeSimulationJobBatchRequestPrivate(
    const RoboMakerRequest::Action action, DescribeSimulationJobBatchRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSimulationJobBatchRequest
 * class' copy constructor.
 */
DescribeSimulationJobBatchRequestPrivate::DescribeSimulationJobBatchRequestPrivate(
    const DescribeSimulationJobBatchRequestPrivate &other, DescribeSimulationJobBatchRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
