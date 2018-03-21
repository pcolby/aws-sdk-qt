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

#include "invitemembersrequest.h"
#include "invitemembersrequest_p.h"
#include "invitemembersresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  InviteMembersRequest
 *
 * @brief  Implements GuardDuty InviteMembers requests.
 *
 * @see    GuardDutyClient::inviteMembers
 */

/**
 * @brief  Constructs a new InviteMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InviteMembersResponse::InviteMembersResponse(

/**
 * @brief  Constructs a new InviteMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InviteMembersRequest::InviteMembersRequest(const InviteMembersRequest &other)
    : GuardDutyRequest(new InviteMembersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InviteMembersRequest object.
 */
InviteMembersRequest::InviteMembersRequest()
    : GuardDutyRequest(new InviteMembersRequestPrivate(GuardDutyRequest::InviteMembersAction, this))
{

}

bool InviteMembersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InviteMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InviteMembersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * InviteMembersRequest::response(QNetworkReply * const reply) const
{
    return new InviteMembersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InviteMembersRequestPrivate
 *
 * @brief  Private implementation for InviteMembersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InviteMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public InviteMembersRequest instance.
 */
InviteMembersRequestPrivate::InviteMembersRequestPrivate(
    const GuardDutyRequest::Action action, InviteMembersRequest * const q)
    : InviteMembersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InviteMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InviteMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InviteMembersRequest instance.
 */
InviteMembersRequestPrivate::InviteMembersRequestPrivate(
    const InviteMembersRequestPrivate &other, InviteMembersRequest * const q)
    : InviteMembersPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS
