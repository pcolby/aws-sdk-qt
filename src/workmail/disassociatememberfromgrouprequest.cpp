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

#include "disassociatememberfromgrouprequest.h"
#include "disassociatememberfromgrouprequest_p.h"
#include "disassociatememberfromgroupresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  DisassociateMemberFromGroupRequest
 *
 * @brief  Implements WorkMail DisassociateMemberFromGroup requests.
 *
 * @see    WorkMailClient::disassociateMemberFromGroup
 */

/**
 * @brief  Constructs a new DisassociateMemberFromGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateMemberFromGroupRequest::DisassociateMemberFromGroupRequest(const DisassociateMemberFromGroupRequest &other)
    : WorkMailRequest(new DisassociateMemberFromGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateMemberFromGroupRequest object.
 */
DisassociateMemberFromGroupRequest::DisassociateMemberFromGroupRequest()
    : WorkMailRequest(new DisassociateMemberFromGroupRequestPrivate(WorkMailRequest::DisassociateMemberFromGroupAction, this))
{

}

bool DisassociateMemberFromGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateMemberFromGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateMemberFromGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * DisassociateMemberFromGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateMemberFromGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateMemberFromGroupRequestPrivate
 *
 * @brief  Private implementation for DisassociateMemberFromGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateMemberFromGroupRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DisassociateMemberFromGroupRequest instance.
 */
DisassociateMemberFromGroupRequestPrivate::DisassociateMemberFromGroupRequestPrivate(
    const WorkMailRequest::Action action, DisassociateMemberFromGroupRequest * const q)
    : DisassociateMemberFromGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateMemberFromGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateMemberFromGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateMemberFromGroupRequest instance.
 */
DisassociateMemberFromGroupRequestPrivate::DisassociateMemberFromGroupRequestPrivate(
    const DisassociateMemberFromGroupRequestPrivate &other, DisassociateMemberFromGroupRequest * const q)
    : DisassociateMemberFromGroupPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
