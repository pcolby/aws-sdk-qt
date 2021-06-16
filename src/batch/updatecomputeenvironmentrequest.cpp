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

#include "updatecomputeenvironmentrequest.h"
#include "updatecomputeenvironmentrequest_p.h"
#include "updatecomputeenvironmentresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::UpdateComputeEnvironmentRequest
 * \brief The UpdateComputeEnvironmentRequest class provides an interface for Batch UpdateComputeEnvironment requests.
 *
 * \inmodule QtAwsBatch
 *
 *  Using AWS Batch, you can run batch computing workloads on the AWS Cloud. Batch computing is a common means for
 *  developers, scientists, and engineers to access large amounts of compute resources. AWS Batch uses the advantages of
 *  this computing workload to remove the undifferentiated heavy lifting of configuring and managing required
 *  infrastructure. At the same time, it also adopts a familiar batch computing software approach. Given these advantages,
 *  AWS Batch can help you to efficiently provision resources in response to jobs submitted, thus effectively helping you to
 *  eliminate capacity constraints, reduce compute costs, and deliver your results more
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch can run batch computing workloads of any scale. AWS Batch automatically provisions
 *  compute resources and optimizes workload distribution based on the quantity and scale of your specific workloads. With
 *  AWS Batch, there's no need to install or manage batch computing software. This means that you can focus your time and
 *  energy on analyzing results and solving your specific
 *
 * \sa BatchClient::updateComputeEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateComputeEnvironmentRequest::UpdateComputeEnvironmentRequest(const UpdateComputeEnvironmentRequest &other)
    : BatchRequest(new UpdateComputeEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateComputeEnvironmentRequest object.
 */
UpdateComputeEnvironmentRequest::UpdateComputeEnvironmentRequest()
    : BatchRequest(new UpdateComputeEnvironmentRequestPrivate(BatchRequest::UpdateComputeEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateComputeEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateComputeEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateComputeEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateComputeEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::UpdateComputeEnvironmentRequestPrivate
 * \brief The UpdateComputeEnvironmentRequestPrivate class provides private implementation for UpdateComputeEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a UpdateComputeEnvironmentRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
UpdateComputeEnvironmentRequestPrivate::UpdateComputeEnvironmentRequestPrivate(
    const BatchRequest::Action action, UpdateComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateComputeEnvironmentRequest
 * class' copy constructor.
 */
UpdateComputeEnvironmentRequestPrivate::UpdateComputeEnvironmentRequestPrivate(
    const UpdateComputeEnvironmentRequestPrivate &other, UpdateComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
