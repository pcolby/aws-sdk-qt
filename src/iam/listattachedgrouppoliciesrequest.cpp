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

#include "listattachedgrouppoliciesrequest.h"
#include "listattachedgrouppoliciesrequest_p.h"
#include "listattachedgrouppoliciesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListAttachedGroupPoliciesRequest
 *
 * @brief  Implements IAM ListAttachedGroupPolicies requests.
 *
 * @see    IAMClient::listAttachedGroupPolicies
 */

/**
 * @brief  Constructs a new ListAttachedGroupPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAttachedGroupPoliciesRequest::ListAttachedGroupPoliciesRequest(const ListAttachedGroupPoliciesRequest &other)
    : IAMRequest(new ListAttachedGroupPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAttachedGroupPoliciesRequest object.
 */
ListAttachedGroupPoliciesRequest::ListAttachedGroupPoliciesRequest()
    : IAMRequest(new ListAttachedGroupPoliciesRequestPrivate(IAMRequest::ListAttachedGroupPoliciesAction, this))
{

}

bool ListAttachedGroupPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAttachedGroupPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAttachedGroupPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListAttachedGroupPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachedGroupPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAttachedGroupPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListAttachedGroupPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedGroupPoliciesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListAttachedGroupPoliciesRequest instance.
 */
ListAttachedGroupPoliciesRequestPrivate::ListAttachedGroupPoliciesRequestPrivate(
    const IAMRequest::Action action, ListAttachedGroupPoliciesRequest * const q)
    : ListAttachedGroupPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedGroupPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAttachedGroupPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAttachedGroupPoliciesRequest instance.
 */
ListAttachedGroupPoliciesRequestPrivate::ListAttachedGroupPoliciesRequestPrivate(
    const ListAttachedGroupPoliciesRequestPrivate &other, ListAttachedGroupPoliciesRequest * const q)
    : ListAttachedGroupPoliciesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
