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

#include "describethingregistrationtaskrequest.h"
#include "describethingregistrationtaskrequest_p.h"
#include "describethingregistrationtaskresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeThingRegistrationTaskRequest
 *
 * @brief  Implements IoT DescribeThingRegistrationTask requests.
 *
 * @see    IoTClient::describeThingRegistrationTask
 */

/**
 * @brief  Constructs a new DescribeThingRegistrationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeThingRegistrationTaskRequest::DescribeThingRegistrationTaskRequest(const DescribeThingRegistrationTaskRequest &other)
    : IoTRequest(new DescribeThingRegistrationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeThingRegistrationTaskRequest object.
 */
DescribeThingRegistrationTaskRequest::DescribeThingRegistrationTaskRequest()
    : IoTRequest(new DescribeThingRegistrationTaskRequestPrivate(IoTRequest::DescribeThingRegistrationTaskAction, this))
{

}

bool DescribeThingRegistrationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeThingRegistrationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeThingRegistrationTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeThingRegistrationTaskRequest::response(QNetworkReply * const reply) const
{
    return new DescribeThingRegistrationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeThingRegistrationTaskRequestPrivate
 *
 * @brief  Private implementation for DescribeThingRegistrationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingRegistrationTaskRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeThingRegistrationTaskRequest instance.
 */
DescribeThingRegistrationTaskRequestPrivate::DescribeThingRegistrationTaskRequestPrivate(
    const IoTRequest::Action action, DescribeThingRegistrationTaskRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingRegistrationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeThingRegistrationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeThingRegistrationTaskRequest instance.
 */
DescribeThingRegistrationTaskRequestPrivate::DescribeThingRegistrationTaskRequestPrivate(
    const DescribeThingRegistrationTaskRequestPrivate &other, DescribeThingRegistrationTaskRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
