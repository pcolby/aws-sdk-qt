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

#include "deleteskillgrouprequest.h"
#include "deleteskillgrouprequest_p.h"
#include "deleteskillgroupresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  DeleteSkillGroupRequest
 *
 * @brief  Implements AlexaForBusiness DeleteSkillGroup requests.
 *
 * @see    AlexaForBusinessClient::deleteSkillGroup
 */

/**
 * @brief  Constructs a new DeleteSkillGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSkillGroupResponse::DeleteSkillGroupResponse(

/**
 * @brief  Constructs a new DeleteSkillGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSkillGroupRequest::DeleteSkillGroupRequest(const DeleteSkillGroupRequest &other)
    : AlexaForBusinessRequest(new DeleteSkillGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSkillGroupRequest object.
 */
DeleteSkillGroupRequest::DeleteSkillGroupRequest()
    : AlexaForBusinessRequest(new DeleteSkillGroupRequestPrivate(AlexaForBusinessRequest::DeleteSkillGroupAction, this))
{

}

bool DeleteSkillGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSkillGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSkillGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * DeleteSkillGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSkillGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSkillGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteSkillGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSkillGroupRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public DeleteSkillGroupRequest instance.
 */
DeleteSkillGroupRequestPrivate::DeleteSkillGroupRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteSkillGroupRequest * const q)
    : DeleteSkillGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSkillGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSkillGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSkillGroupRequest instance.
 */
DeleteSkillGroupRequestPrivate::DeleteSkillGroupRequestPrivate(
    const DeleteSkillGroupRequestPrivate &other, DeleteSkillGroupRequest * const q)
    : DeleteSkillGroupPrivate(other, q)
{

}
