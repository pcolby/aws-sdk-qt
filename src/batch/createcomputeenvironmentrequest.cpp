/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createcomputeenvironmentrequest.h"
#include "createcomputeenvironmentrequest_p.h"
#include "createcomputeenvironmentresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::CreateComputeEnvironmentRequest
 * \brief The CreateComputeEnvironmentRequest class provides an interface for Batch CreateComputeEnvironment requests.
 *
 * \inmodule QtAwsBatch
 *
 *  AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 *  scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 *  lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 *  batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 *  eliminate capacity constraints, reduce compute costs, and deliver results
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 *  any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 *  quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 *  which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 *  time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 *  AWS
 *
 * \sa BatchClient::createComputeEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateComputeEnvironmentRequest::CreateComputeEnvironmentRequest(const CreateComputeEnvironmentRequest &other)
    : BatchRequest(new CreateComputeEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateComputeEnvironmentRequest object.
 */
CreateComputeEnvironmentRequest::CreateComputeEnvironmentRequest()
    : BatchRequest(new CreateComputeEnvironmentRequestPrivate(BatchRequest::CreateComputeEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateComputeEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateComputeEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateComputeEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateComputeEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::CreateComputeEnvironmentRequestPrivate
 * \brief The CreateComputeEnvironmentRequestPrivate class provides private implementation for CreateComputeEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a CreateComputeEnvironmentRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
CreateComputeEnvironmentRequestPrivate::CreateComputeEnvironmentRequestPrivate(
    const BatchRequest::Action action, CreateComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateComputeEnvironmentRequest
 * class' copy constructor.
 */
CreateComputeEnvironmentRequestPrivate::CreateComputeEnvironmentRequestPrivate(
    const CreateComputeEnvironmentRequestPrivate &other, CreateComputeEnvironmentRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
