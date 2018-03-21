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

#include "listgroupmembersrequest.h"
#include "listgroupmembersrequest_p.h"
#include "listgroupmembersresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  ListGroupMembersRequest
 *
 * @brief  Implements WorkMail ListGroupMembers requests.
 *
 * @see    WorkMailClient::listGroupMembers
 */

/**
 * @brief  Constructs a new ListGroupMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGroupMembersRequest::ListGroupMembersRequest(const ListGroupMembersRequest &other)
    : WorkMailRequest(new ListGroupMembersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGroupMembersRequest object.
 */
ListGroupMembersRequest::ListGroupMembersRequest()
    : WorkMailRequest(new ListGroupMembersRequestPrivate(WorkMailRequest::ListGroupMembersAction, this))
{

}

bool ListGroupMembersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGroupMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGroupMembersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * ListGroupMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupMembersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGroupMembersRequestPrivate
 *
 * @brief  Private implementation for ListGroupMembersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupMembersRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public ListGroupMembersRequest instance.
 */
ListGroupMembersRequestPrivate::ListGroupMembersRequestPrivate(
    const WorkMailRequest::Action action, ListGroupMembersRequest * const q)
    : ListGroupMembersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGroupMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGroupMembersRequest instance.
 */
ListGroupMembersRequestPrivate::ListGroupMembersRequestPrivate(
    const ListGroupMembersRequestPrivate &other, ListGroupMembersRequest * const q)
    : ListGroupMembersPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace AWS
