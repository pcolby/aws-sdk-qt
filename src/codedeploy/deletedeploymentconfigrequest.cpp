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

#include "deletedeploymentconfigrequest.h"
#include "deletedeploymentconfigrequest_p.h"
#include "deletedeploymentconfigresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  DeleteDeploymentConfigRequest
 *
 * @brief  Implements CodeDeploy DeleteDeploymentConfig requests.
 *
 * @see    CodeDeployClient::deleteDeploymentConfig
 */

/**
 * @brief  Constructs a new DeleteDeploymentConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeploymentConfigResponse::DeleteDeploymentConfigResponse(

/**
 * @brief  Constructs a new DeleteDeploymentConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDeploymentConfigRequest::DeleteDeploymentConfigRequest(const DeleteDeploymentConfigRequest &other)
    : CodeDeployRequest(new DeleteDeploymentConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDeploymentConfigRequest object.
 */
DeleteDeploymentConfigRequest::DeleteDeploymentConfigRequest()
    : CodeDeployRequest(new DeleteDeploymentConfigRequestPrivate(CodeDeployRequest::DeleteDeploymentConfigAction, this))
{

}

bool DeleteDeploymentConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDeploymentConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDeploymentConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * DeleteDeploymentConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeploymentConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDeploymentConfigRequestPrivate
 *
 * @brief  Private implementation for DeleteDeploymentConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentConfigRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public DeleteDeploymentConfigRequest instance.
 */
DeleteDeploymentConfigRequestPrivate::DeleteDeploymentConfigRequestPrivate(
    const CodeDeployRequest::Action action, DeleteDeploymentConfigRequest * const q)
    : DeleteDeploymentConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeploymentConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDeploymentConfigRequest instance.
 */
DeleteDeploymentConfigRequestPrivate::DeleteDeploymentConfigRequestPrivate(
    const DeleteDeploymentConfigRequestPrivate &other, DeleteDeploymentConfigRequest * const q)
    : DeleteDeploymentConfigPrivate(other, q)
{

}
