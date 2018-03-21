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

#include "updateteammemberrequest.h"
#include "updateteammemberrequest_p.h"
#include "updateteammemberresponse.h"
#include "codestarrequest_p.h"

namespace AWS {
namespace CodeStar {

/**
 * @class  UpdateTeamMemberRequest
 *
 * @brief  Implements CodeStar UpdateTeamMember requests.
 *
 * @see    CodeStarClient::updateTeamMember
 */

/**
 * @brief  Constructs a new UpdateTeamMemberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTeamMemberResponse::UpdateTeamMemberResponse(

/**
 * @brief  Constructs a new UpdateTeamMemberRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTeamMemberRequest::UpdateTeamMemberRequest(const UpdateTeamMemberRequest &other)
    : CodeStarRequest(new UpdateTeamMemberRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTeamMemberRequest object.
 */
UpdateTeamMemberRequest::UpdateTeamMemberRequest()
    : CodeStarRequest(new UpdateTeamMemberRequestPrivate(CodeStarRequest::UpdateTeamMemberAction, this))
{

}

bool UpdateTeamMemberRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTeamMemberResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTeamMemberResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * UpdateTeamMemberRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTeamMemberResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTeamMemberRequestPrivate
 *
 * @brief  Private implementation for UpdateTeamMemberRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTeamMemberRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public UpdateTeamMemberRequest instance.
 */
UpdateTeamMemberRequestPrivate::UpdateTeamMemberRequestPrivate(
    const CodeStarRequest::Action action, UpdateTeamMemberRequest * const q)
    : UpdateTeamMemberPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTeamMemberRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTeamMemberRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTeamMemberRequest instance.
 */
UpdateTeamMemberRequestPrivate::UpdateTeamMemberRequestPrivate(
    const UpdateTeamMemberRequestPrivate &other, UpdateTeamMemberRequest * const q)
    : UpdateTeamMemberPrivate(other, q)
{

}
