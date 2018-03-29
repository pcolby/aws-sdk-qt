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

#include "describecontainerinstancesrequest.h"
#include "describecontainerinstancesrequest_p.h"
#include "describecontainerinstancesresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  DescribeContainerInstancesRequest
 *
 * @brief  Implements ECS DescribeContainerInstances requests.
 *
 * @see    ECSClient::describeContainerInstances
 */

/**
 * @brief  Constructs a new DescribeContainerInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeContainerInstancesRequest::DescribeContainerInstancesRequest(const DescribeContainerInstancesRequest &other)
    : ECSRequest(new DescribeContainerInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeContainerInstancesRequest object.
 */
DescribeContainerInstancesRequest::DescribeContainerInstancesRequest()
    : ECSRequest(new DescribeContainerInstancesRequestPrivate(ECSRequest::DescribeContainerInstancesAction, this))
{

}

bool DescribeContainerInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeContainerInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeContainerInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContainerInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContainerInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeContainerInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeContainerInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContainerInstancesRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public DescribeContainerInstancesRequest instance.
 */
DescribeContainerInstancesRequestPrivate::DescribeContainerInstancesRequestPrivate(
    const ECSRequest::Action action, DescribeContainerInstancesRequest * const q)
    : ECSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContainerInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeContainerInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeContainerInstancesRequest instance.
 */
DescribeContainerInstancesRequestPrivate::DescribeContainerInstancesRequestPrivate(
    const DescribeContainerInstancesRequestPrivate &other, DescribeContainerInstancesRequest * const q)
    : ECSRequestPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
