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

#include "createjobqueuerequest.h"
#include "createjobqueuerequest_p.h"
#include "createjobqueueresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::CreateJobQueueRequest
 * \brief The CreateJobQueueRequest class provides an interface for Batch CreateJobQueue requests.
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
 * \sa BatchClient::createJobQueue
 */

/*!
 * Constructs a copy of \a other.
 */
CreateJobQueueRequest::CreateJobQueueRequest(const CreateJobQueueRequest &other)
    : BatchRequest(new CreateJobQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateJobQueueRequest object.
 */
CreateJobQueueRequest::CreateJobQueueRequest()
    : BatchRequest(new CreateJobQueueRequestPrivate(BatchRequest::CreateJobQueueAction, this))
{

}

/*!
 * \reimp
 */
bool CreateJobQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateJobQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateJobQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateJobQueueResponse(*this, reply);
}

/*!
 * \class QtAws::Batch::CreateJobQueueRequestPrivate
 * \brief The CreateJobQueueRequestPrivate class provides private implementation for CreateJobQueueRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a CreateJobQueueRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
CreateJobQueueRequestPrivate::CreateJobQueueRequestPrivate(
    const BatchRequest::Action action, CreateJobQueueRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateJobQueueRequest
 * class' copy constructor.
 */
CreateJobQueueRequestPrivate::CreateJobQueueRequestPrivate(
    const CreateJobQueueRequestPrivate &other, CreateJobQueueRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
