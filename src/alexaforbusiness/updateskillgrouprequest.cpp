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

#include "updateskillgrouprequest.h"
#include "updateskillgrouprequest_p.h"
#include "updateskillgroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  UpdateSkillGroupRequest
 *
 * @brief  Implements AlexaForBusiness UpdateSkillGroup requests.
 *
 * @see    AlexaForBusinessClient::updateSkillGroup
 */

/**
 * @brief  Constructs a new UpdateSkillGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSkillGroupRequest::UpdateSkillGroupRequest(const UpdateSkillGroupRequest &other)
    : AlexaForBusinessRequest(new UpdateSkillGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSkillGroupRequest object.
 */
UpdateSkillGroupRequest::UpdateSkillGroupRequest()
    : AlexaForBusinessRequest(new UpdateSkillGroupRequestPrivate(AlexaForBusinessRequest::UpdateSkillGroupAction, this))
{

}

bool UpdateSkillGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSkillGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSkillGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * UpdateSkillGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSkillGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSkillGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateSkillGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSkillGroupRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public UpdateSkillGroupRequest instance.
 */
UpdateSkillGroupRequestPrivate::UpdateSkillGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateSkillGroupRequest * const q)
    : UpdateSkillGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSkillGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSkillGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSkillGroupRequest instance.
 */
UpdateSkillGroupRequestPrivate::UpdateSkillGroupRequestPrivate(
    const UpdateSkillGroupRequestPrivate &other, UpdateSkillGroupRequest * const q)
    : UpdateSkillGroupPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
