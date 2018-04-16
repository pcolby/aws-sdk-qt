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

#include "describejobqueuesrequest.h"
#include "describejobqueuesrequest_p.h"
#include "describejobqueuesresponse.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeJobQueuesRequest
 *
 * \brief The DescribeJobQueuesRequest class encapsulates Batch DescribeJobQueues requests.
 *
 * \ingroup Batch
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
 * \sa BatchClient::describeJobQueues
 */

/*!
 * @brief  Constructs a new DescribeJobQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobQueuesRequest::DescribeJobQueuesRequest(const DescribeJobQueuesRequest &other)
    : BatchRequest(new DescribeJobQueuesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeJobQueuesRequest object.
 */
DescribeJobQueuesRequest::DescribeJobQueuesRequest()
    : BatchRequest(new DescribeJobQueuesRequestPrivate(BatchRequest::DescribeJobQueuesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobQueuesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeJobQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeJobQueuesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  BatchClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobQueuesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobQueuesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeJobQueuesRequestPrivate
 *
 * @brief  Private implementation for DescribeJobQueuesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeJobQueuesRequestPrivate object.
 *
 * @param  action  Batch action being performed.
 * @param  q       Pointer to this object's public DescribeJobQueuesRequest instance.
 */
DescribeJobQueuesRequestPrivate::DescribeJobQueuesRequestPrivate(
    const BatchRequest::Action action, DescribeJobQueuesRequest * const q)
    : BatchRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeJobQueuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobQueuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeJobQueuesRequest instance.
 */
DescribeJobQueuesRequestPrivate::DescribeJobQueuesRequestPrivate(
    const DescribeJobQueuesRequestPrivate &other, DescribeJobQueuesRequest * const q)
    : BatchRequestPrivate(other, q)
{

}

} // namespace Batch
} // namespace QtAws
