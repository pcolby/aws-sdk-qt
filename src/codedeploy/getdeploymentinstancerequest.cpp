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

#include "getdeploymentinstancerequest.h"
#include "getdeploymentinstancerequest_p.h"
#include "getdeploymentinstanceresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  GetDeploymentInstanceRequest
 *
 * @brief  Implements CodeDeploy GetDeploymentInstance requests.
 *
 * @see    CodeDeployClient::getDeploymentInstance
 */

/**
 * @brief  Constructs a new GetDeploymentInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeploymentInstanceRequest::GetDeploymentInstanceRequest(const GetDeploymentInstanceRequest &other)
    : CodeDeployRequest(new GetDeploymentInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeploymentInstanceRequest object.
 */
GetDeploymentInstanceRequest::GetDeploymentInstanceRequest()
    : CodeDeployRequest(new GetDeploymentInstanceRequestPrivate(CodeDeployRequest::GetDeploymentInstanceAction, this))
{

}

bool GetDeploymentInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeploymentInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeploymentInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * GetDeploymentInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeploymentInstanceRequestPrivate
 *
 * @brief  Private implementation for GetDeploymentInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentInstanceRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public GetDeploymentInstanceRequest instance.
 */
GetDeploymentInstanceRequestPrivate::GetDeploymentInstanceRequestPrivate(
    const CodeDeployRequest::Action action, GetDeploymentInstanceRequest * const q)
    : GetDeploymentInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeploymentInstanceRequest instance.
 */
GetDeploymentInstanceRequestPrivate::GetDeploymentInstanceRequestPrivate(
    const GetDeploymentInstanceRequestPrivate &other, GetDeploymentInstanceRequest * const q)
    : GetDeploymentInstancePrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS
