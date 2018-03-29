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

#include "liststackinstancesrequest.h"
#include "liststackinstancesrequest_p.h"
#include "liststackinstancesresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStackInstancesRequest
 *
 * @brief  Implements CloudFormation ListStackInstances requests.
 *
 * @see    CloudFormationClient::listStackInstances
 */

/**
 * @brief  Constructs a new ListStackInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStackInstancesRequest::ListStackInstancesRequest(const ListStackInstancesRequest &other)
    : CloudFormationRequest(new ListStackInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStackInstancesRequest object.
 */
ListStackInstancesRequest::ListStackInstancesRequest()
    : CloudFormationRequest(new ListStackInstancesRequestPrivate(CloudFormationRequest::ListStackInstancesAction, this))
{

}

bool ListStackInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStackInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStackInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStackInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListStackInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStackInstancesRequestPrivate
 *
 * @brief  Private implementation for ListStackInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackInstancesRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListStackInstancesRequest instance.
 */
ListStackInstancesRequestPrivate::ListStackInstancesRequestPrivate(
    const CloudFormationRequest::Action action, ListStackInstancesRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStackInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStackInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStackInstancesRequest instance.
 */
ListStackInstancesRequestPrivate::ListStackInstancesRequestPrivate(
    const ListStackInstancesRequestPrivate &other, ListStackInstancesRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
