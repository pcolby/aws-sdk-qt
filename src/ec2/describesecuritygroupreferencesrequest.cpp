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

#include "describesecuritygroupreferencesrequest.h"
#include "describesecuritygroupreferencesrequest_p.h"
#include "describesecuritygroupreferencesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeSecurityGroupReferencesRequest
 *
 * @brief  Implements EC2 DescribeSecurityGroupReferences requests.
 *
 * @see    EC2Client::describeSecurityGroupReferences
 */

/**
 * @brief  Constructs a new DescribeSecurityGroupReferencesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSecurityGroupReferencesRequest::DescribeSecurityGroupReferencesRequest(const DescribeSecurityGroupReferencesRequest &other)
    : EC2Request(new DescribeSecurityGroupReferencesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSecurityGroupReferencesRequest object.
 */
DescribeSecurityGroupReferencesRequest::DescribeSecurityGroupReferencesRequest()
    : EC2Request(new DescribeSecurityGroupReferencesRequestPrivate(EC2Request::DescribeSecurityGroupReferencesAction, this))
{

}

bool DescribeSecurityGroupReferencesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSecurityGroupReferencesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSecurityGroupReferencesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSecurityGroupReferencesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSecurityGroupReferencesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSecurityGroupReferencesRequestPrivate
 *
 * @brief  Private implementation for DescribeSecurityGroupReferencesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecurityGroupReferencesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSecurityGroupReferencesRequest instance.
 */
DescribeSecurityGroupReferencesRequestPrivate::DescribeSecurityGroupReferencesRequestPrivate(
    const EC2Request::Action action, DescribeSecurityGroupReferencesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSecurityGroupReferencesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSecurityGroupReferencesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSecurityGroupReferencesRequest instance.
 */
DescribeSecurityGroupReferencesRequestPrivate::DescribeSecurityGroupReferencesRequestPrivate(
    const DescribeSecurityGroupReferencesRequestPrivate &other, DescribeSecurityGroupReferencesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
