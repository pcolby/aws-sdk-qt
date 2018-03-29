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

#include "describeavailablepatchesrequest.h"
#include "describeavailablepatchesrequest_p.h"
#include "describeavailablepatchesresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeAvailablePatchesRequest
 *
 * @brief  Implements SSM DescribeAvailablePatches requests.
 *
 * @see    SSMClient::describeAvailablePatches
 */

/**
 * @brief  Constructs a new DescribeAvailablePatchesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAvailablePatchesRequest::DescribeAvailablePatchesRequest(const DescribeAvailablePatchesRequest &other)
    : SSMRequest(new DescribeAvailablePatchesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAvailablePatchesRequest object.
 */
DescribeAvailablePatchesRequest::DescribeAvailablePatchesRequest()
    : SSMRequest(new DescribeAvailablePatchesRequestPrivate(SSMRequest::DescribeAvailablePatchesAction, this))
{

}

bool DescribeAvailablePatchesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAvailablePatchesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAvailablePatchesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAvailablePatchesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAvailablePatchesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAvailablePatchesRequestPrivate
 *
 * @brief  Private implementation for DescribeAvailablePatchesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAvailablePatchesRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeAvailablePatchesRequest instance.
 */
DescribeAvailablePatchesRequestPrivate::DescribeAvailablePatchesRequestPrivate(
    const SSMRequest::Action action, DescribeAvailablePatchesRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAvailablePatchesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAvailablePatchesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAvailablePatchesRequest instance.
 */
DescribeAvailablePatchesRequestPrivate::DescribeAvailablePatchesRequestPrivate(
    const DescribeAvailablePatchesRequestPrivate &other, DescribeAvailablePatchesRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
