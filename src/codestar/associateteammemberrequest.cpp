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

#include "associateteammemberrequest.h"
#include "associateteammemberrequest_p.h"
#include "associateteammemberresponse.h"
#include "codestarrequest_p.h"

namespace QtAws {
namespace CodeStar {

/**
 * @class  AssociateTeamMemberRequest
 *
 * @brief  Implements CodeStar AssociateTeamMember requests.
 *
 * @see    CodeStarClient::associateTeamMember
 */

/**
 * @brief  Constructs a new AssociateTeamMemberRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateTeamMemberRequest::AssociateTeamMemberRequest(const AssociateTeamMemberRequest &other)
    : CodeStarRequest(new AssociateTeamMemberRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateTeamMemberRequest object.
 */
AssociateTeamMemberRequest::AssociateTeamMemberRequest()
    : CodeStarRequest(new AssociateTeamMemberRequestPrivate(CodeStarRequest::AssociateTeamMemberAction, this))
{

}

bool AssociateTeamMemberRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateTeamMemberResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateTeamMemberResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateTeamMemberRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTeamMemberResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateTeamMemberRequestPrivate
 *
 * @brief  Private implementation for AssociateTeamMemberRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateTeamMemberRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public AssociateTeamMemberRequest instance.
 */
AssociateTeamMemberRequestPrivate::AssociateTeamMemberRequestPrivate(
    const CodeStarRequest::Action action, AssociateTeamMemberRequest * const q)
    : CodeStarRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateTeamMemberRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateTeamMemberRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateTeamMemberRequest instance.
 */
AssociateTeamMemberRequestPrivate::AssociateTeamMemberRequestPrivate(
    const AssociateTeamMemberRequestPrivate &other, AssociateTeamMemberRequest * const q)
    : CodeStarRequestPrivate(other, q)
{

}

} // namespace CodeStar
} // namespace QtAws
