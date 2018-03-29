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

#include "describeinstancepatchesrequest.h"
#include "describeinstancepatchesrequest_p.h"
#include "describeinstancepatchesresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeInstancePatchesRequest
 *
 * @brief  Implements SSM DescribeInstancePatches requests.
 *
 * @see    SSMClient::describeInstancePatches
 */

/**
 * @brief  Constructs a new DescribeInstancePatchesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstancePatchesRequest::DescribeInstancePatchesRequest(const DescribeInstancePatchesRequest &other)
    : SSMRequest(new DescribeInstancePatchesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstancePatchesRequest object.
 */
DescribeInstancePatchesRequest::DescribeInstancePatchesRequest()
    : SSMRequest(new DescribeInstancePatchesRequestPrivate(SSMRequest::DescribeInstancePatchesAction, this))
{

}

bool DescribeInstancePatchesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstancePatchesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstancePatchesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeInstancePatchesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstancePatchesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstancePatchesRequestPrivate
 *
 * @brief  Private implementation for DescribeInstancePatchesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancePatchesRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeInstancePatchesRequest instance.
 */
DescribeInstancePatchesRequestPrivate::DescribeInstancePatchesRequestPrivate(
    const SSMRequest::Action action, DescribeInstancePatchesRequest * const q)
    : DescribeInstancePatchesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancePatchesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstancePatchesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstancePatchesRequest instance.
 */
DescribeInstancePatchesRequestPrivate::DescribeInstancePatchesRequestPrivate(
    const DescribeInstancePatchesRequestPrivate &other, DescribeInstancePatchesRequest * const q)
    : DescribeInstancePatchesPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
