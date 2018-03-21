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

#include "listrolepoliciesrequest.h"
#include "listrolepoliciesrequest_p.h"
#include "listrolepoliciesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListRolePoliciesRequest
 *
 * @brief  Implements IAM ListRolePolicies requests.
 *
 * @see    IAMClient::listRolePolicies
 */

/**
 * @brief  Constructs a new ListRolePoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRolePoliciesResponse::ListRolePoliciesResponse(

/**
 * @brief  Constructs a new ListRolePoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRolePoliciesRequest::ListRolePoliciesRequest(const ListRolePoliciesRequest &other)
    : IAMRequest(new ListRolePoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRolePoliciesRequest object.
 */
ListRolePoliciesRequest::ListRolePoliciesRequest()
    : IAMRequest(new ListRolePoliciesRequestPrivate(IAMRequest::ListRolePoliciesAction, this))
{

}

bool ListRolePoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRolePoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRolePoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListRolePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListRolePoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRolePoliciesRequestPrivate
 *
 * @brief  Private implementation for ListRolePoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRolePoliciesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListRolePoliciesRequest instance.
 */
ListRolePoliciesRequestPrivate::ListRolePoliciesRequestPrivate(
    const IAMRequest::Action action, ListRolePoliciesRequest * const q)
    : ListRolePoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRolePoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRolePoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRolePoliciesRequest instance.
 */
ListRolePoliciesRequestPrivate::ListRolePoliciesRequestPrivate(
    const ListRolePoliciesRequestPrivate &other, ListRolePoliciesRequest * const q)
    : ListRolePoliciesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
