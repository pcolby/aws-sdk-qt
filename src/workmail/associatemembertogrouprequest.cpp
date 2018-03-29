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

#include "associatemembertogrouprequest.h"
#include "associatemembertogrouprequest_p.h"
#include "associatemembertogroupresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  AssociateMemberToGroupRequest
 *
 * @brief  Implements WorkMail AssociateMemberToGroup requests.
 *
 * @see    WorkMailClient::associateMemberToGroup
 */

/**
 * @brief  Constructs a new AssociateMemberToGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateMemberToGroupRequest::AssociateMemberToGroupRequest(const AssociateMemberToGroupRequest &other)
    : WorkMailRequest(new AssociateMemberToGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateMemberToGroupRequest object.
 */
AssociateMemberToGroupRequest::AssociateMemberToGroupRequest()
    : WorkMailRequest(new AssociateMemberToGroupRequestPrivate(WorkMailRequest::AssociateMemberToGroupAction, this))
{

}

bool AssociateMemberToGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateMemberToGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateMemberToGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateMemberToGroupRequest::response(QNetworkReply * const reply) const
{
    return new AssociateMemberToGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateMemberToGroupRequestPrivate
 *
 * @brief  Private implementation for AssociateMemberToGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateMemberToGroupRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public AssociateMemberToGroupRequest instance.
 */
AssociateMemberToGroupRequestPrivate::AssociateMemberToGroupRequestPrivate(
    const WorkMailRequest::Action action, AssociateMemberToGroupRequest * const q)
    : AssociateMemberToGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateMemberToGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateMemberToGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateMemberToGroupRequest instance.
 */
AssociateMemberToGroupRequestPrivate::AssociateMemberToGroupRequestPrivate(
    const AssociateMemberToGroupRequestPrivate &other, AssociateMemberToGroupRequest * const q)
    : AssociateMemberToGroupPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
