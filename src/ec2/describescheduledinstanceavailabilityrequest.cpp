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

#include "describescheduledinstanceavailabilityrequest.h"
#include "describescheduledinstanceavailabilityrequest_p.h"
#include "describescheduledinstanceavailabilityresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeScheduledInstanceAvailabilityRequest
 *
 * @brief  Implements EC2 DescribeScheduledInstanceAvailability requests.
 *
 * @see    EC2Client::describeScheduledInstanceAvailability
 */

/**
 * @brief  Constructs a new DescribeScheduledInstanceAvailabilityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeScheduledInstanceAvailabilityRequest::DescribeScheduledInstanceAvailabilityRequest(const DescribeScheduledInstanceAvailabilityRequest &other)
    : EC2Request(new DescribeScheduledInstanceAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeScheduledInstanceAvailabilityRequest object.
 */
DescribeScheduledInstanceAvailabilityRequest::DescribeScheduledInstanceAvailabilityRequest()
    : EC2Request(new DescribeScheduledInstanceAvailabilityRequestPrivate(EC2Request::DescribeScheduledInstanceAvailabilityAction, this))
{

}

bool DescribeScheduledInstanceAvailabilityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeScheduledInstanceAvailabilityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeScheduledInstanceAvailabilityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScheduledInstanceAvailabilityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScheduledInstanceAvailabilityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeScheduledInstanceAvailabilityRequestPrivate
 *
 * @brief  Private implementation for DescribeScheduledInstanceAvailabilityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledInstanceAvailabilityRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeScheduledInstanceAvailabilityRequest instance.
 */
DescribeScheduledInstanceAvailabilityRequestPrivate::DescribeScheduledInstanceAvailabilityRequestPrivate(
    const EC2Request::Action action, DescribeScheduledInstanceAvailabilityRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeScheduledInstanceAvailabilityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeScheduledInstanceAvailabilityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeScheduledInstanceAvailabilityRequest instance.
 */
DescribeScheduledInstanceAvailabilityRequestPrivate::DescribeScheduledInstanceAvailabilityRequestPrivate(
    const DescribeScheduledInstanceAvailabilityRequestPrivate &other, DescribeScheduledInstanceAvailabilityRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
