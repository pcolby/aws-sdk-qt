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

#include "describeidentityidformatrequest.h"
#include "describeidentityidformatrequest_p.h"
#include "describeidentityidformatresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeIdentityIdFormatRequest
 *
 * @brief  Implements EC2 DescribeIdentityIdFormat requests.
 *
 * @see    EC2Client::describeIdentityIdFormat
 */

/**
 * @brief  Constructs a new DescribeIdentityIdFormatRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeIdentityIdFormatRequest::DescribeIdentityIdFormatRequest(const DescribeIdentityIdFormatRequest &other)
    : EC2Request(new DescribeIdentityIdFormatRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeIdentityIdFormatRequest object.
 */
DescribeIdentityIdFormatRequest::DescribeIdentityIdFormatRequest()
    : EC2Request(new DescribeIdentityIdFormatRequestPrivate(EC2Request::DescribeIdentityIdFormatAction, this))
{

}

bool DescribeIdentityIdFormatRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeIdentityIdFormatResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeIdentityIdFormatResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIdentityIdFormatRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityIdFormatResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeIdentityIdFormatRequestPrivate
 *
 * @brief  Private implementation for DescribeIdentityIdFormatRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityIdFormatRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeIdentityIdFormatRequest instance.
 */
DescribeIdentityIdFormatRequestPrivate::DescribeIdentityIdFormatRequestPrivate(
    const EC2Request::Action action, DescribeIdentityIdFormatRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityIdFormatRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityIdFormatRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeIdentityIdFormatRequest instance.
 */
DescribeIdentityIdFormatRequestPrivate::DescribeIdentityIdFormatRequestPrivate(
    const DescribeIdentityIdFormatRequestPrivate &other, DescribeIdentityIdFormatRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
