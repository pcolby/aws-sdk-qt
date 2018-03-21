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

#include "describeconversiontasksrequest.h"
#include "describeconversiontasksrequest_p.h"
#include "describeconversiontasksresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeConversionTasksRequest
 *
 * @brief  Implements EC2 DescribeConversionTasks requests.
 *
 * @see    EC2Client::describeConversionTasks
 */

/**
 * @brief  Constructs a new DescribeConversionTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConversionTasksRequest::DescribeConversionTasksRequest(const DescribeConversionTasksRequest &other)
    : EC2Request(new DescribeConversionTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConversionTasksRequest object.
 */
DescribeConversionTasksRequest::DescribeConversionTasksRequest()
    : EC2Request(new DescribeConversionTasksRequestPrivate(EC2Request::DescribeConversionTasksAction, this))
{

}

bool DescribeConversionTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConversionTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConversionTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeConversionTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConversionTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConversionTasksRequestPrivate
 *
 * @brief  Private implementation for DescribeConversionTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConversionTasksRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeConversionTasksRequest instance.
 */
DescribeConversionTasksRequestPrivate::DescribeConversionTasksRequestPrivate(
    const EC2Request::Action action, DescribeConversionTasksRequest * const q)
    : DescribeConversionTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConversionTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConversionTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConversionTasksRequest instance.
 */
DescribeConversionTasksRequestPrivate::DescribeConversionTasksRequestPrivate(
    const DescribeConversionTasksRequestPrivate &other, DescribeConversionTasksRequest * const q)
    : DescribeConversionTasksPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
