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

#include "describeinstancecreditspecificationsrequest.h"
#include "describeinstancecreditspecificationsrequest_p.h"
#include "describeinstancecreditspecificationsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeInstanceCreditSpecificationsRequest
 *
 * @brief  Implements EC2 DescribeInstanceCreditSpecifications requests.
 *
 * @see    EC2Client::describeInstanceCreditSpecifications
 */

/**
 * @brief  Constructs a new DescribeInstanceCreditSpecificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstanceCreditSpecificationsRequest::DescribeInstanceCreditSpecificationsRequest(const DescribeInstanceCreditSpecificationsRequest &other)
    : EC2Request(new DescribeInstanceCreditSpecificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstanceCreditSpecificationsRequest object.
 */
DescribeInstanceCreditSpecificationsRequest::DescribeInstanceCreditSpecificationsRequest()
    : EC2Request(new DescribeInstanceCreditSpecificationsRequestPrivate(EC2Request::DescribeInstanceCreditSpecificationsAction, this))
{

}

bool DescribeInstanceCreditSpecificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstanceCreditSpecificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstanceCreditSpecificationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceCreditSpecificationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceCreditSpecificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstanceCreditSpecificationsRequestPrivate
 *
 * @brief  Private implementation for DescribeInstanceCreditSpecificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceCreditSpecificationsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeInstanceCreditSpecificationsRequest instance.
 */
DescribeInstanceCreditSpecificationsRequestPrivate::DescribeInstanceCreditSpecificationsRequestPrivate(
    const EC2Request::Action action, DescribeInstanceCreditSpecificationsRequest * const q)
    : DescribeInstanceCreditSpecificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceCreditSpecificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceCreditSpecificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstanceCreditSpecificationsRequest instance.
 */
DescribeInstanceCreditSpecificationsRequestPrivate::DescribeInstanceCreditSpecificationsRequestPrivate(
    const DescribeInstanceCreditSpecificationsRequestPrivate &other, DescribeInstanceCreditSpecificationsRequest * const q)
    : DescribeInstanceCreditSpecificationsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
