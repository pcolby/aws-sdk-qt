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

#include "stopinstancesrequest.h"
#include "stopinstancesrequest_p.h"
#include "stopinstancesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  StopInstancesRequest
 *
 * @brief  Implements EC2 StopInstances requests.
 *
 * @see    EC2Client::stopInstances
 */

/**
 * @brief  Constructs a new StopInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopInstancesRequest::StopInstancesRequest(const StopInstancesRequest &other)
    : EC2Request(new StopInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopInstancesRequest object.
 */
StopInstancesRequest::StopInstancesRequest()
    : EC2Request(new StopInstancesRequestPrivate(EC2Request::StopInstancesAction, this))
{

}

bool StopInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * StopInstancesRequest::response(QNetworkReply * const reply) const
{
    return new StopInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopInstancesRequestPrivate
 *
 * @brief  Private implementation for StopInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopInstancesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public StopInstancesRequest instance.
 */
StopInstancesRequestPrivate::StopInstancesRequestPrivate(
    const EC2Request::Action action, StopInstancesRequest * const q)
    : StopInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopInstancesRequest instance.
 */
StopInstancesRequestPrivate::StopInstancesRequestPrivate(
    const StopInstancesRequestPrivate &other, StopInstancesRequest * const q)
    : StopInstancesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
