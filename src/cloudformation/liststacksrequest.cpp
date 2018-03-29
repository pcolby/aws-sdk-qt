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

#include "liststacksrequest.h"
#include "liststacksrequest_p.h"
#include "liststacksresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStacksRequest
 *
 * @brief  Implements CloudFormation ListStacks requests.
 *
 * @see    CloudFormationClient::listStacks
 */

/**
 * @brief  Constructs a new ListStacksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStacksRequest::ListStacksRequest(const ListStacksRequest &other)
    : CloudFormationRequest(new ListStacksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListStacksRequest object.
 */
ListStacksRequest::ListStacksRequest()
    : CloudFormationRequest(new ListStacksRequestPrivate(CloudFormationRequest::ListStacksAction, this))
{

}

bool ListStacksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListStacksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStacksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * ListStacksRequest::response(QNetworkReply * const reply) const
{
    return new ListStacksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListStacksRequestPrivate
 *
 * @brief  Private implementation for ListStacksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStacksRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListStacksRequest instance.
 */
ListStacksRequestPrivate::ListStacksRequestPrivate(
    const CloudFormationRequest::Action action, ListStacksRequest * const q)
    : ListStacksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListStacksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStacksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStacksRequest instance.
 */
ListStacksRequestPrivate::ListStacksRequestPrivate(
    const ListStacksRequestPrivate &other, ListStacksRequest * const q)
    : ListStacksPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
