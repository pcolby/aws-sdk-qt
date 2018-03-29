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

#include "getdeploymentgrouprequest.h"
#include "getdeploymentgrouprequest_p.h"
#include "getdeploymentgroupresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  GetDeploymentGroupRequest
 *
 * @brief  Implements CodeDeploy GetDeploymentGroup requests.
 *
 * @see    CodeDeployClient::getDeploymentGroup
 */

/**
 * @brief  Constructs a new GetDeploymentGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeploymentGroupRequest::GetDeploymentGroupRequest(const GetDeploymentGroupRequest &other)
    : CodeDeployRequest(new GetDeploymentGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeploymentGroupRequest object.
 */
GetDeploymentGroupRequest::GetDeploymentGroupRequest()
    : CodeDeployRequest(new GetDeploymentGroupRequestPrivate(CodeDeployRequest::GetDeploymentGroupAction, this))
{

}

bool GetDeploymentGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeploymentGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeploymentGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeploymentGroupRequestPrivate
 *
 * @brief  Private implementation for GetDeploymentGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentGroupRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public GetDeploymentGroupRequest instance.
 */
GetDeploymentGroupRequestPrivate::GetDeploymentGroupRequestPrivate(
    const CodeDeployRequest::Action action, GetDeploymentGroupRequest * const q)
    : GetDeploymentGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeploymentGroupRequest instance.
 */
GetDeploymentGroupRequestPrivate::GetDeploymentGroupRequestPrivate(
    const GetDeploymentGroupRequestPrivate &other, GetDeploymentGroupRequest * const q)
    : GetDeploymentGroupPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
