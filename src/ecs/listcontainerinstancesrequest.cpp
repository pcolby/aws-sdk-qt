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

#include "listcontainerinstancesrequest.h"
#include "listcontainerinstancesrequest_p.h"
#include "listcontainerinstancesresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  ListContainerInstancesRequest
 *
 * @brief  Implements ECS ListContainerInstances requests.
 *
 * @see    ECSClient::listContainerInstances
 */

/**
 * @brief  Constructs a new ListContainerInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListContainerInstancesRequest::ListContainerInstancesRequest(const ListContainerInstancesRequest &other)
    : ECSRequest(new ListContainerInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListContainerInstancesRequest object.
 */
ListContainerInstancesRequest::ListContainerInstancesRequest()
    : ECSRequest(new ListContainerInstancesRequestPrivate(ECSRequest::ListContainerInstancesAction, this))
{

}

bool ListContainerInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListContainerInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListContainerInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContainerInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListContainerInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListContainerInstancesRequestPrivate
 *
 * @brief  Private implementation for ListContainerInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListContainerInstancesRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public ListContainerInstancesRequest instance.
 */
ListContainerInstancesRequestPrivate::ListContainerInstancesRequestPrivate(
    const ECSRequest::Action action, ListContainerInstancesRequest * const q)
    : ECSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListContainerInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListContainerInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListContainerInstancesRequest instance.
 */
ListContainerInstancesRequestPrivate::ListContainerInstancesRequestPrivate(
    const ListContainerInstancesRequestPrivate &other, ListContainerInstancesRequest * const q)
    : ECSRequestPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
