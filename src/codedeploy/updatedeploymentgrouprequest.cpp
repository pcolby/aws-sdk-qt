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

#include "updatedeploymentgrouprequest.h"
#include "updatedeploymentgrouprequest_p.h"
#include "updatedeploymentgroupresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  UpdateDeploymentGroupRequest
 *
 * @brief  Implements CodeDeploy UpdateDeploymentGroup requests.
 *
 * @see    CodeDeployClient::updateDeploymentGroup
 */

/**
 * @brief  Constructs a new UpdateDeploymentGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDeploymentGroupRequest::UpdateDeploymentGroupRequest(const UpdateDeploymentGroupRequest &other)
    : CodeDeployRequest(new UpdateDeploymentGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDeploymentGroupRequest object.
 */
UpdateDeploymentGroupRequest::UpdateDeploymentGroupRequest()
    : CodeDeployRequest(new UpdateDeploymentGroupRequestPrivate(CodeDeployRequest::UpdateDeploymentGroupAction, this))
{

}

bool UpdateDeploymentGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDeploymentGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDeploymentGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * UpdateDeploymentGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeploymentGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDeploymentGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateDeploymentGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeploymentGroupRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public UpdateDeploymentGroupRequest instance.
 */
UpdateDeploymentGroupRequestPrivate::UpdateDeploymentGroupRequestPrivate(
    const CodeDeployRequest::Action action, UpdateDeploymentGroupRequest * const q)
    : UpdateDeploymentGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeploymentGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeploymentGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDeploymentGroupRequest instance.
 */
UpdateDeploymentGroupRequestPrivate::UpdateDeploymentGroupRequestPrivate(
    const UpdateDeploymentGroupRequestPrivate &other, UpdateDeploymentGroupRequest * const q)
    : UpdateDeploymentGroupPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS
