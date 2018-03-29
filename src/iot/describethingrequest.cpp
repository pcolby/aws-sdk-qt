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

#include "describethingrequest.h"
#include "describethingrequest_p.h"
#include "describethingresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeThingRequest
 *
 * @brief  Implements IoT DescribeThing requests.
 *
 * @see    IoTClient::describeThing
 */

/**
 * @brief  Constructs a new DescribeThingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeThingRequest::DescribeThingRequest(const DescribeThingRequest &other)
    : IoTRequest(new DescribeThingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeThingRequest object.
 */
DescribeThingRequest::DescribeThingRequest()
    : IoTRequest(new DescribeThingRequestPrivate(IoTRequest::DescribeThingAction, this))
{

}

bool DescribeThingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeThingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeThingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DescribeThingRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeThingRequestPrivate
 *
 * @brief  Private implementation for DescribeThingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeThingRequest instance.
 */
DescribeThingRequestPrivate::DescribeThingRequestPrivate(
    const IoTRequest::Action action, DescribeThingRequest * const q)
    : DescribeThingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeThingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeThingRequest instance.
 */
DescribeThingRequestPrivate::DescribeThingRequestPrivate(
    const DescribeThingRequestPrivate &other, DescribeThingRequest * const q)
    : DescribeThingPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
