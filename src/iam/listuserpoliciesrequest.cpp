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

#include "listuserpoliciesrequest.h"
#include "listuserpoliciesrequest_p.h"
#include "listuserpoliciesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListUserPoliciesRequest
 *
 * @brief  Implements IAM ListUserPolicies requests.
 *
 * @see    IAMClient::listUserPolicies
 */

/**
 * @brief  Constructs a new ListUserPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUserPoliciesRequest::ListUserPoliciesRequest(const ListUserPoliciesRequest &other)
    : IAMRequest(new ListUserPoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUserPoliciesRequest object.
 */
ListUserPoliciesRequest::ListUserPoliciesRequest()
    : IAMRequest(new ListUserPoliciesRequestPrivate(IAMRequest::ListUserPoliciesAction, this))
{

}

bool ListUserPoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListUserPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUserPoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListUserPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListUserPoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListUserPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListUserPoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoliciesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListUserPoliciesRequest instance.
 */
ListUserPoliciesRequestPrivate::ListUserPoliciesRequestPrivate(
    const IAMRequest::Action action, ListUserPoliciesRequest * const q)
    : ListUserPoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUserPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUserPoliciesRequest instance.
 */
ListUserPoliciesRequestPrivate::ListUserPoliciesRequestPrivate(
    const ListUserPoliciesRequestPrivate &other, ListUserPoliciesRequest * const q)
    : ListUserPoliciesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
