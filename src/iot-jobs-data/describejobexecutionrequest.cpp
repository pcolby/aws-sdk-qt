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

#include "describejobexecutionrequest.h"
#include "describejobexecutionrequest_p.h"
#include "describejobexecutionresponse.h"
#include "iotjobsdataplanerequest_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

/**
 * @class  DescribeJobExecutionRequest
 *
 * @brief  Implements IoTJobsDataPlane DescribeJobExecution requests.
 *
 * @see    IoTJobsDataPlaneClient::describeJobExecution
 */

/**
 * @brief  Constructs a new DescribeJobExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobExecutionRequest::DescribeJobExecutionRequest(const DescribeJobExecutionRequest &other)
    : IoTJobsDataPlaneRequest(new DescribeJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeJobExecutionRequest object.
 */
DescribeJobExecutionRequest::DescribeJobExecutionRequest()
    : IoTJobsDataPlaneRequest(new DescribeJobExecutionRequestPrivate(IoTJobsDataPlaneRequest::DescribeJobExecutionAction, this))
{

}

bool DescribeJobExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeJobExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeJobExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTJobsDataPlaneClient::send
 */
AwsAbstractResponse * DescribeJobExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeJobExecutionRequestPrivate
 *
 * @brief  Private implementation for DescribeJobExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobExecutionRequestPrivate object.
 *
 * @param  action  IoTJobsDataPlane action being performed.
 * @param  q       Pointer to this object's public DescribeJobExecutionRequest instance.
 */
DescribeJobExecutionRequestPrivate::DescribeJobExecutionRequestPrivate(
    const IoTJobsDataPlaneRequest::Action action, DescribeJobExecutionRequest * const q)
    : DescribeJobExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeJobExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeJobExecutionRequest instance.
 */
DescribeJobExecutionRequestPrivate::DescribeJobExecutionRequestPrivate(
    const DescribeJobExecutionRequestPrivate &other, DescribeJobExecutionRequest * const q)
    : DescribeJobExecutionPrivate(other, q)
{

}

} // namespace IoTJobsDataPlane
} // namespace QtAws
