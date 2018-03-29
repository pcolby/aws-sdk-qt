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

#include "deletedeploymentgrouprequest.h"
#include "deletedeploymentgrouprequest_p.h"
#include "deletedeploymentgroupresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  DeleteDeploymentGroupRequest
 *
 * @brief  Implements CodeDeploy DeleteDeploymentGroup requests.
 *
 * @see    CodeDeployClient::deleteDeploymentGroup
 */

/**
 * @brief  Constructs a new DeleteDeploymentGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDeploymentGroupRequest::DeleteDeploymentGroupRequest(const DeleteDeploymentGroupRequest &other)
    : CodeDeployRequest(new DeleteDeploymentGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDeploymentGroupRequest object.
 */
DeleteDeploymentGroupRequest::DeleteDeploymentGroupRequest()
    : CodeDeployRequest(new DeleteDeploymentGroupRequestPrivate(CodeDeployRequest::DeleteDeploymentGroupAction, this))
{

}

bool DeleteDeploymentGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDeploymentGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDeploymentGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * DeleteDeploymentGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeploymentGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDeploymentGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteDeploymentGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentGroupRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public DeleteDeploymentGroupRequest instance.
 */
DeleteDeploymentGroupRequestPrivate::DeleteDeploymentGroupRequestPrivate(
    const CodeDeployRequest::Action action, DeleteDeploymentGroupRequest * const q)
    : DeleteDeploymentGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeploymentGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDeploymentGroupRequest instance.
 */
DeleteDeploymentGroupRequestPrivate::DeleteDeploymentGroupRequestPrivate(
    const DeleteDeploymentGroupRequestPrivate &other, DeleteDeploymentGroupRequest * const q)
    : DeleteDeploymentGroupPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
