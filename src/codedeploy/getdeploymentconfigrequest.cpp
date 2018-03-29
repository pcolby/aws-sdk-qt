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

#include "getdeploymentconfigrequest.h"
#include "getdeploymentconfigrequest_p.h"
#include "getdeploymentconfigresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  GetDeploymentConfigRequest
 *
 * @brief  Implements CodeDeploy GetDeploymentConfig requests.
 *
 * @see    CodeDeployClient::getDeploymentConfig
 */

/**
 * @brief  Constructs a new GetDeploymentConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeploymentConfigRequest::GetDeploymentConfigRequest(const GetDeploymentConfigRequest &other)
    : CodeDeployRequest(new GetDeploymentConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeploymentConfigRequest object.
 */
GetDeploymentConfigRequest::GetDeploymentConfigRequest()
    : CodeDeployRequest(new GetDeploymentConfigRequestPrivate(CodeDeployRequest::GetDeploymentConfigAction, this))
{

}

bool GetDeploymentConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeploymentConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeploymentConfigResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * GetDeploymentConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeploymentConfigRequestPrivate
 *
 * @brief  Private implementation for GetDeploymentConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentConfigRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public GetDeploymentConfigRequest instance.
 */
GetDeploymentConfigRequestPrivate::GetDeploymentConfigRequestPrivate(
    const CodeDeployRequest::Action action, GetDeploymentConfigRequest * const q)
    : GetDeploymentConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeploymentConfigRequest instance.
 */
GetDeploymentConfigRequestPrivate::GetDeploymentConfigRequestPrivate(
    const GetDeploymentConfigRequestPrivate &other, GetDeploymentConfigRequest * const q)
    : GetDeploymentConfigPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
