/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describejobexecutionrequest.h"
#include "describejobexecutionrequest_p.h"
#include "describejobexecutionresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DescribeJobExecutionRequest
 *
 * @brief  Implements IoT DescribeJobExecution requests.
 *
 * @see    IoTClient::describeJobExecution
 */

/**
 * @brief  Constructs a new DescribeJobExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeJobExecutionResponse::DescribeJobExecutionResponse(

/**
 * @brief  Constructs a new DescribeJobExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeJobExecutionRequest::DescribeJobExecutionRequest(const DescribeJobExecutionRequest &other)
    : IoTRequest(new DescribeJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeJobExecutionRequest object.
 */
DescribeJobExecutionRequest::DescribeJobExecutionRequest()
    : IoTRequest(new DescribeJobExecutionRequestPrivate(IoTRequest::DescribeJobExecutionAction, this))
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
 * @see  IoTClient::send
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
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeJobExecutionRequest instance.
 */
DescribeJobExecutionRequestPrivate::DescribeJobExecutionRequestPrivate(
    const IoTRequest::Action action, DescribeJobExecutionRequest * const q)
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

} // namespace IoT
} // namespace AWS
