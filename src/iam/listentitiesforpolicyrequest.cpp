/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listentitiesforpolicyrequest.h"
#include "listentitiesforpolicyrequest_p.h"
#include "listentitiesforpolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListEntitiesForPolicyRequest
 *
 * @brief  Implements IAM ListEntitiesForPolicy requests.
 *
 * @see    IAMClient::listEntitiesForPolicy
 */

/**
 * @brief  Constructs a new ListEntitiesForPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEntitiesForPolicyResponse::ListEntitiesForPolicyResponse(

/**
 * @brief  Constructs a new ListEntitiesForPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListEntitiesForPolicyRequest::ListEntitiesForPolicyRequest(const ListEntitiesForPolicyRequest &other)
    : IAMRequest(new ListEntitiesForPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListEntitiesForPolicyRequest object.
 */
ListEntitiesForPolicyRequest::ListEntitiesForPolicyRequest()
    : IAMRequest(new ListEntitiesForPolicyRequestPrivate(IAMRequest::ListEntitiesForPolicyAction, this))
{

}

bool ListEntitiesForPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListEntitiesForPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListEntitiesForPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListEntitiesForPolicyRequest::response(QNetworkReply * const reply) const
{
    return new ListEntitiesForPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListEntitiesForPolicyRequestPrivate
 *
 * @brief  Private implementation for ListEntitiesForPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEntitiesForPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListEntitiesForPolicyRequest instance.
 */
ListEntitiesForPolicyRequestPrivate::ListEntitiesForPolicyRequestPrivate(
    const IAMRequest::Action action, ListEntitiesForPolicyRequest * const q)
    : ListEntitiesForPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListEntitiesForPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListEntitiesForPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListEntitiesForPolicyRequest instance.
 */
ListEntitiesForPolicyRequestPrivate::ListEntitiesForPolicyRequestPrivate(
    const ListEntitiesForPolicyRequestPrivate &other, ListEntitiesForPolicyRequest * const q)
    : ListEntitiesForPolicyPrivate(other, q)
{

}
