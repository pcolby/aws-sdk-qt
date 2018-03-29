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

#include "createdeploymentconfigrequest.h"
#include "createdeploymentconfigrequest_p.h"
#include "createdeploymentconfigresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  CreateDeploymentConfigRequest
 *
 * @brief  Implements CodeDeploy CreateDeploymentConfig requests.
 *
 * @see    CodeDeployClient::createDeploymentConfig
 */

/**
 * @brief  Constructs a new CreateDeploymentConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDeploymentConfigRequest::CreateDeploymentConfigRequest(const CreateDeploymentConfigRequest &other)
    : CodeDeployRequest(new CreateDeploymentConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDeploymentConfigRequest object.
 */
CreateDeploymentConfigRequest::CreateDeploymentConfigRequest()
    : CodeDeployRequest(new CreateDeploymentConfigRequestPrivate(CodeDeployRequest::CreateDeploymentConfigAction, this))
{

}

bool CreateDeploymentConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDeploymentConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDeploymentConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * CreateDeploymentConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateDeploymentConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDeploymentConfigRequestPrivate
 *
 * @brief  Private implementation for CreateDeploymentConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentConfigRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public CreateDeploymentConfigRequest instance.
 */
CreateDeploymentConfigRequestPrivate::CreateDeploymentConfigRequestPrivate(
    const CodeDeployRequest::Action action, CreateDeploymentConfigRequest * const q)
    : CreateDeploymentConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDeploymentConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDeploymentConfigRequest instance.
 */
CreateDeploymentConfigRequestPrivate::CreateDeploymentConfigRequestPrivate(
    const CreateDeploymentConfigRequestPrivate &other, CreateDeploymentConfigRequest * const q)
    : CreateDeploymentConfigPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS
