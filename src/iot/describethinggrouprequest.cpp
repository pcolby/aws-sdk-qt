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

#include "describethinggrouprequest.h"
#include "describethinggrouprequest_p.h"
#include "describethinggroupresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeThingGroupRequest
 *
 * @brief  Implements IoT DescribeThingGroup requests.
 *
 * @see    IoTClient::describeThingGroup
 */

/**
 * @brief  Constructs a new DescribeThingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeThingGroupRequest::DescribeThingGroupRequest(const DescribeThingGroupRequest &other)
    : IoTRequest(new DescribeThingGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeThingGroupRequest object.
 */
DescribeThingGroupRequest::DescribeThingGroupRequest()
    : IoTRequest(new DescribeThingGroupRequestPrivate(IoTRequest::DescribeThingGroupAction, this))
{

}

bool DescribeThingGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeThingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeThingGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DescribeThingGroupRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThingGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeThingGroupRequestPrivate
 *
 * @brief  Private implementation for DescribeThingGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingGroupRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeThingGroupRequest instance.
 */
DescribeThingGroupRequestPrivate::DescribeThingGroupRequestPrivate(
    const IoTRequest::Action action, DescribeThingGroupRequest * const q)
    : DescribeThingGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeThingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeThingGroupRequest instance.
 */
DescribeThingGroupRequestPrivate::DescribeThingGroupRequestPrivate(
    const DescribeThingGroupRequestPrivate &other, DescribeThingGroupRequest * const q)
    : DescribeThingGroupPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
