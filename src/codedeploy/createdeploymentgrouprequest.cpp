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

#include "createdeploymentgrouprequest.h"
#include "createdeploymentgrouprequest_p.h"
#include "createdeploymentgroupresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  CreateDeploymentGroupRequest
 *
 * @brief  Implements CodeDeploy CreateDeploymentGroup requests.
 *
 * @see    CodeDeployClient::createDeploymentGroup
 */

/**
 * @brief  Constructs a new CreateDeploymentGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDeploymentGroupRequest::CreateDeploymentGroupRequest(const CreateDeploymentGroupRequest &other)
    : CodeDeployRequest(new CreateDeploymentGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDeploymentGroupRequest object.
 */
CreateDeploymentGroupRequest::CreateDeploymentGroupRequest()
    : CodeDeployRequest(new CreateDeploymentGroupRequestPrivate(CodeDeployRequest::CreateDeploymentGroupAction, this))
{

}

bool CreateDeploymentGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDeploymentGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDeploymentGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDeploymentGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeploymentGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDeploymentGroupRequestPrivate
 *
 * @brief  Private implementation for CreateDeploymentGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentGroupRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public CreateDeploymentGroupRequest instance.
 */
CreateDeploymentGroupRequestPrivate::CreateDeploymentGroupRequestPrivate(
    const CodeDeployRequest::Action action, CreateDeploymentGroupRequest * const q)
    : CreateDeploymentGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDeploymentGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDeploymentGroupRequest instance.
 */
CreateDeploymentGroupRequestPrivate::CreateDeploymentGroupRequestPrivate(
    const CreateDeploymentGroupRequestPrivate &other, CreateDeploymentGroupRequest * const q)
    : CreateDeploymentGroupPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
