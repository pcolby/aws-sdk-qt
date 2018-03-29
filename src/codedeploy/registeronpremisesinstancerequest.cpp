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

#include "registeronpremisesinstancerequest.h"
#include "registeronpremisesinstancerequest_p.h"
#include "registeronpremisesinstanceresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  RegisterOnPremisesInstanceRequest
 *
 * @brief  Implements CodeDeploy RegisterOnPremisesInstance requests.
 *
 * @see    CodeDeployClient::registerOnPremisesInstance
 */

/**
 * @brief  Constructs a new RegisterOnPremisesInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterOnPremisesInstanceRequest::RegisterOnPremisesInstanceRequest(const RegisterOnPremisesInstanceRequest &other)
    : CodeDeployRequest(new RegisterOnPremisesInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterOnPremisesInstanceRequest object.
 */
RegisterOnPremisesInstanceRequest::RegisterOnPremisesInstanceRequest()
    : CodeDeployRequest(new RegisterOnPremisesInstanceRequestPrivate(CodeDeployRequest::RegisterOnPremisesInstanceAction, this))
{

}

bool RegisterOnPremisesInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterOnPremisesInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterOnPremisesInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * RegisterOnPremisesInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterOnPremisesInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterOnPremisesInstanceRequestPrivate
 *
 * @brief  Private implementation for RegisterOnPremisesInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterOnPremisesInstanceRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public RegisterOnPremisesInstanceRequest instance.
 */
RegisterOnPremisesInstanceRequestPrivate::RegisterOnPremisesInstanceRequestPrivate(
    const CodeDeployRequest::Action action, RegisterOnPremisesInstanceRequest * const q)
    : RegisterOnPremisesInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterOnPremisesInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterOnPremisesInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterOnPremisesInstanceRequest instance.
 */
RegisterOnPremisesInstanceRequestPrivate::RegisterOnPremisesInstanceRequestPrivate(
    const RegisterOnPremisesInstanceRequestPrivate &other, RegisterOnPremisesInstanceRequest * const q)
    : RegisterOnPremisesInstancePrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
