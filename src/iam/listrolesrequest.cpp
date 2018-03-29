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

#include "listrolesrequest.h"
#include "listrolesrequest_p.h"
#include "listrolesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListRolesRequest
 *
 * @brief  Implements IAM ListRoles requests.
 *
 * @see    IAMClient::listRoles
 */

/**
 * @brief  Constructs a new ListRolesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListRolesRequest::ListRolesRequest(const ListRolesRequest &other)
    : IAMRequest(new ListRolesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListRolesRequest object.
 */
ListRolesRequest::ListRolesRequest()
    : IAMRequest(new ListRolesRequestPrivate(IAMRequest::ListRolesAction, this))
{

}

bool ListRolesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListRolesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListRolesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListRolesRequest::response(QNetworkReply * const reply) const
{
    return new ListRolesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListRolesRequestPrivate
 *
 * @brief  Private implementation for ListRolesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRolesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListRolesRequest instance.
 */
ListRolesRequestPrivate::ListRolesRequestPrivate(
    const IAMRequest::Action action, ListRolesRequest * const q)
    : ListRolesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListRolesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListRolesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListRolesRequest instance.
 */
ListRolesRequestPrivate::ListRolesRequestPrivate(
    const ListRolesRequestPrivate &other, ListRolesRequest * const q)
    : ListRolesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
