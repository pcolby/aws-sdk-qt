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

#include "createskillgrouprequest.h"
#include "createskillgrouprequest_p.h"
#include "createskillgroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  CreateSkillGroupRequest
 *
 * @brief  Implements AlexaForBusiness CreateSkillGroup requests.
 *
 * @see    AlexaForBusinessClient::createSkillGroup
 */

/**
 * @brief  Constructs a new CreateSkillGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSkillGroupRequest::CreateSkillGroupRequest(const CreateSkillGroupRequest &other)
    : AlexaForBusinessRequest(new CreateSkillGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSkillGroupRequest object.
 */
CreateSkillGroupRequest::CreateSkillGroupRequest()
    : AlexaForBusinessRequest(new CreateSkillGroupRequestPrivate(AlexaForBusinessRequest::CreateSkillGroupAction, this))
{

}

bool CreateSkillGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSkillGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSkillGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSkillGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateSkillGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSkillGroupRequestPrivate
 *
 * @brief  Private implementation for CreateSkillGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSkillGroupRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public CreateSkillGroupRequest instance.
 */
CreateSkillGroupRequestPrivate::CreateSkillGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSkillGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSkillGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSkillGroupRequest instance.
 */
CreateSkillGroupRequestPrivate::CreateSkillGroupRequestPrivate(
    const CreateSkillGroupRequestPrivate &other, CreateSkillGroupRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
