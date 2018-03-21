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

#include "disassociateteammemberrequest.h"
#include "disassociateteammemberrequest_p.h"
#include "disassociateteammemberresponse.h"
#include "codestarrequest_p.h"

namespace AWS {
namespace CodeStar {

/**
 * @class  DisassociateTeamMemberRequest
 *
 * @brief  Implements CodeStar DisassociateTeamMember requests.
 *
 * @see    CodeStarClient::disassociateTeamMember
 */

/**
 * @brief  Constructs a new DisassociateTeamMemberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateTeamMemberResponse::DisassociateTeamMemberResponse(

/**
 * @brief  Constructs a new DisassociateTeamMemberRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateTeamMemberRequest::DisassociateTeamMemberRequest(const DisassociateTeamMemberRequest &other)
    : CodeStarRequest(new DisassociateTeamMemberRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateTeamMemberRequest object.
 */
DisassociateTeamMemberRequest::DisassociateTeamMemberRequest()
    : CodeStarRequest(new DisassociateTeamMemberRequestPrivate(CodeStarRequest::DisassociateTeamMemberAction, this))
{

}

bool DisassociateTeamMemberRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateTeamMemberResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateTeamMemberResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * DisassociateTeamMemberRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateTeamMemberResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateTeamMemberRequestPrivate
 *
 * @brief  Private implementation for DisassociateTeamMemberRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateTeamMemberRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public DisassociateTeamMemberRequest instance.
 */
DisassociateTeamMemberRequestPrivate::DisassociateTeamMemberRequestPrivate(
    const CodeStarRequest::Action action, DisassociateTeamMemberRequest * const q)
    : DisassociateTeamMemberPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateTeamMemberRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateTeamMemberRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateTeamMemberRequest instance.
 */
DisassociateTeamMemberRequestPrivate::DisassociateTeamMemberRequestPrivate(
    const DisassociateTeamMemberRequestPrivate &other, DisassociateTeamMemberRequest * const q)
    : DisassociateTeamMemberPrivate(other, q)
{

}
