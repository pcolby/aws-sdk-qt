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

#include "listattachedrolepoliciesrequest.h"
#include "listattachedrolepoliciesrequest_p.h"
#include "listattachedrolepoliciesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListAttachedRolePoliciesRequest
 *
 * @brief  Implements IAM ListAttachedRolePolicies requests.
 *
 * @see    IAMClient::listAttachedRolePolicies
 */

/**
 * @brief  Constructs a new ListAttachedRolePoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAttachedRolePoliciesRequest::ListAttachedRolePoliciesRequest(const ListAttachedRolePoliciesRequest &other)
    : IAMRequest(new ListAttachedRolePoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAttachedRolePoliciesRequest object.
 */
ListAttachedRolePoliciesRequest::ListAttachedRolePoliciesRequest()
    : IAMRequest(new ListAttachedRolePoliciesRequestPrivate(IAMRequest::ListAttachedRolePoliciesAction, this))
{

}

bool ListAttachedRolePoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAttachedRolePoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAttachedRolePoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListAttachedRolePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachedRolePoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAttachedRolePoliciesRequestPrivate
 *
 * @brief  Private implementation for ListAttachedRolePoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedRolePoliciesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListAttachedRolePoliciesRequest instance.
 */
ListAttachedRolePoliciesRequestPrivate::ListAttachedRolePoliciesRequestPrivate(
    const IAMRequest::Action action, ListAttachedRolePoliciesRequest * const q)
    : ListAttachedRolePoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedRolePoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAttachedRolePoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAttachedRolePoliciesRequest instance.
 */
ListAttachedRolePoliciesRequestPrivate::ListAttachedRolePoliciesRequestPrivate(
    const ListAttachedRolePoliciesRequestPrivate &other, ListAttachedRolePoliciesRequest * const q)
    : ListAttachedRolePoliciesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
