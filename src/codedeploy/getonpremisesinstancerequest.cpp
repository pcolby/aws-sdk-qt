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

#include "getonpremisesinstancerequest.h"
#include "getonpremisesinstancerequest_p.h"
#include "getonpremisesinstanceresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  GetOnPremisesInstanceRequest
 *
 * @brief  Implements CodeDeploy GetOnPremisesInstance requests.
 *
 * @see    CodeDeployClient::getOnPremisesInstance
 */

/**
 * @brief  Constructs a new GetOnPremisesInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOnPremisesInstanceResponse::GetOnPremisesInstanceResponse(

/**
 * @brief  Constructs a new GetOnPremisesInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOnPremisesInstanceRequest::GetOnPremisesInstanceRequest(const GetOnPremisesInstanceRequest &other)
    : CodeDeployRequest(new GetOnPremisesInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOnPremisesInstanceRequest object.
 */
GetOnPremisesInstanceRequest::GetOnPremisesInstanceRequest()
    : CodeDeployRequest(new GetOnPremisesInstanceRequestPrivate(CodeDeployRequest::GetOnPremisesInstanceAction, this))
{

}

bool GetOnPremisesInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOnPremisesInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOnPremisesInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * GetOnPremisesInstanceRequest::response(QNetworkReply * const reply) const
{
    return new GetOnPremisesInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOnPremisesInstanceRequestPrivate
 *
 * @brief  Private implementation for GetOnPremisesInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOnPremisesInstanceRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public GetOnPremisesInstanceRequest instance.
 */
GetOnPremisesInstanceRequestPrivate::GetOnPremisesInstanceRequestPrivate(
    const CodeDeployRequest::Action action, GetOnPremisesInstanceRequest * const q)
    : GetOnPremisesInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOnPremisesInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOnPremisesInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOnPremisesInstanceRequest instance.
 */
GetOnPremisesInstanceRequestPrivate::GetOnPremisesInstanceRequestPrivate(
    const GetOnPremisesInstanceRequestPrivate &other, GetOnPremisesInstanceRequest * const q)
    : GetOnPremisesInstancePrivate(other, q)
{

}
