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

#include "listinstanceprofilesforrolerequest.h"
#include "listinstanceprofilesforrolerequest_p.h"
#include "listinstanceprofilesforroleresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListInstanceProfilesForRoleRequest
 *
 * @brief  Implements IAM ListInstanceProfilesForRole requests.
 *
 * @see    IAMClient::listInstanceProfilesForRole
 */

/**
 * @brief  Constructs a new ListInstanceProfilesForRoleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInstanceProfilesForRoleRequest::ListInstanceProfilesForRoleRequest(const ListInstanceProfilesForRoleRequest &other)
    : IAMRequest(new ListInstanceProfilesForRoleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInstanceProfilesForRoleRequest object.
 */
ListInstanceProfilesForRoleRequest::ListInstanceProfilesForRoleRequest()
    : IAMRequest(new ListInstanceProfilesForRoleRequestPrivate(IAMRequest::ListInstanceProfilesForRoleAction, this))
{

}

bool ListInstanceProfilesForRoleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInstanceProfilesForRoleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInstanceProfilesForRoleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListInstanceProfilesForRoleRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceProfilesForRoleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInstanceProfilesForRoleRequestPrivate
 *
 * @brief  Private implementation for ListInstanceProfilesForRoleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceProfilesForRoleRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListInstanceProfilesForRoleRequest instance.
 */
ListInstanceProfilesForRoleRequestPrivate::ListInstanceProfilesForRoleRequestPrivate(
    const IAMRequest::Action action, ListInstanceProfilesForRoleRequest * const q)
    : ListInstanceProfilesForRolePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInstanceProfilesForRoleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceProfilesForRoleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInstanceProfilesForRoleRequest instance.
 */
ListInstanceProfilesForRoleRequestPrivate::ListInstanceProfilesForRoleRequestPrivate(
    const ListInstanceProfilesForRoleRequestPrivate &other, ListInstanceProfilesForRoleRequest * const q)
    : ListInstanceProfilesForRolePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
