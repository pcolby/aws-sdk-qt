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

#include "describethingtyperequest.h"
#include "describethingtyperequest_p.h"
#include "describethingtyperesponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeThingTypeRequest
 *
 * @brief  Implements IoT DescribeThingType requests.
 *
 * @see    IoTClient::describeThingType
 */

/**
 * @brief  Constructs a new DescribeThingTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeThingTypeRequest::DescribeThingTypeRequest(const DescribeThingTypeRequest &other)
    : IoTRequest(new DescribeThingTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeThingTypeRequest object.
 */
DescribeThingTypeRequest::DescribeThingTypeRequest()
    : IoTRequest(new DescribeThingTypeRequestPrivate(IoTRequest::DescribeThingTypeAction, this))
{

}

bool DescribeThingTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeThingTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeThingTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeThingTypeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThingTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeThingTypeRequestPrivate
 *
 * @brief  Private implementation for DescribeThingTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingTypeRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeThingTypeRequest instance.
 */
DescribeThingTypeRequestPrivate::DescribeThingTypeRequestPrivate(
    const IoTRequest::Action action, DescribeThingTypeRequest * const q)
    : DescribeThingTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeThingTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeThingTypeRequest instance.
 */
DescribeThingTypeRequestPrivate::DescribeThingTypeRequestPrivate(
    const DescribeThingTypeRequestPrivate &other, DescribeThingTypeRequest * const q)
    : DescribeThingTypePrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
