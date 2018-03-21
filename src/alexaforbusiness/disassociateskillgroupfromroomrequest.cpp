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

#include "disassociateskillgroupfromroomrequest.h"
#include "disassociateskillgroupfromroomrequest_p.h"
#include "disassociateskillgroupfromroomresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  DisassociateSkillGroupFromRoomRequest
 *
 * @brief  Implements AlexaForBusiness DisassociateSkillGroupFromRoom requests.
 *
 * @see    AlexaForBusinessClient::disassociateSkillGroupFromRoom
 */

/**
 * @brief  Constructs a new DisassociateSkillGroupFromRoomResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateSkillGroupFromRoomResponse::DisassociateSkillGroupFromRoomResponse(

/**
 * @brief  Constructs a new DisassociateSkillGroupFromRoomRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateSkillGroupFromRoomRequest::DisassociateSkillGroupFromRoomRequest(const DisassociateSkillGroupFromRoomRequest &other)
    : AlexaForBusinessRequest(new DisassociateSkillGroupFromRoomRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateSkillGroupFromRoomRequest object.
 */
DisassociateSkillGroupFromRoomRequest::DisassociateSkillGroupFromRoomRequest()
    : AlexaForBusinessRequest(new DisassociateSkillGroupFromRoomRequestPrivate(AlexaForBusinessRequest::DisassociateSkillGroupFromRoomAction, this))
{

}

bool DisassociateSkillGroupFromRoomRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateSkillGroupFromRoomResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateSkillGroupFromRoomResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * DisassociateSkillGroupFromRoomRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateSkillGroupFromRoomResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateSkillGroupFromRoomRequestPrivate
 *
 * @brief  Private implementation for DisassociateSkillGroupFromRoomRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateSkillGroupFromRoomRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public DisassociateSkillGroupFromRoomRequest instance.
 */
DisassociateSkillGroupFromRoomRequestPrivate::DisassociateSkillGroupFromRoomRequestPrivate(
    const AlexaForBusinessRequest::Action action, DisassociateSkillGroupFromRoomRequest * const q)
    : DisassociateSkillGroupFromRoomPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateSkillGroupFromRoomRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateSkillGroupFromRoomRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateSkillGroupFromRoomRequest instance.
 */
DisassociateSkillGroupFromRoomRequestPrivate::DisassociateSkillGroupFromRoomRequestPrivate(
    const DisassociateSkillGroupFromRoomRequestPrivate &other, DisassociateSkillGroupFromRoomRequest * const q)
    : DisassociateSkillGroupFromRoomPrivate(other, q)
{

}
