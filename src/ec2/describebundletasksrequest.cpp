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

#include "describebundletasksrequest.h"
#include "describebundletasksrequest_p.h"
#include "describebundletasksresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeBundleTasksRequest
 *
 * @brief  Implements EC2 DescribeBundleTasks requests.
 *
 * @see    EC2Client::describeBundleTasks
 */

/**
 * @brief  Constructs a new DescribeBundleTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBundleTasksRequest::DescribeBundleTasksRequest(const DescribeBundleTasksRequest &other)
    : EC2Request(new DescribeBundleTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeBundleTasksRequest object.
 */
DescribeBundleTasksRequest::DescribeBundleTasksRequest()
    : EC2Request(new DescribeBundleTasksRequestPrivate(EC2Request::DescribeBundleTasksAction, this))
{

}

bool DescribeBundleTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeBundleTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBundleTasksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeBundleTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBundleTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeBundleTasksRequestPrivate
 *
 * @brief  Private implementation for DescribeBundleTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBundleTasksRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeBundleTasksRequest instance.
 */
DescribeBundleTasksRequestPrivate::DescribeBundleTasksRequestPrivate(
    const EC2Request::Action action, DescribeBundleTasksRequest * const q)
    : DescribeBundleTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBundleTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBundleTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBundleTasksRequest instance.
 */
DescribeBundleTasksRequestPrivate::DescribeBundleTasksRequestPrivate(
    const DescribeBundleTasksRequestPrivate &other, DescribeBundleTasksRequest * const q)
    : DescribeBundleTasksPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
