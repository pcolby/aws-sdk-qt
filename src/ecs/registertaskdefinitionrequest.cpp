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

#include "registertaskdefinitionrequest.h"
#include "registertaskdefinitionrequest_p.h"
#include "registertaskdefinitionresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  RegisterTaskDefinitionRequest
 *
 * @brief  Implements ECS RegisterTaskDefinition requests.
 *
 * @see    ECSClient::registerTaskDefinition
 */

/**
 * @brief  Constructs a new RegisterTaskDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterTaskDefinitionRequest::RegisterTaskDefinitionRequest(const RegisterTaskDefinitionRequest &other)
    : ECSRequest(new RegisterTaskDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterTaskDefinitionRequest object.
 */
RegisterTaskDefinitionRequest::RegisterTaskDefinitionRequest()
    : ECSRequest(new RegisterTaskDefinitionRequestPrivate(ECSRequest::RegisterTaskDefinitionAction, this))
{

}

bool RegisterTaskDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterTaskDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterTaskDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * RegisterTaskDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new RegisterTaskDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterTaskDefinitionRequestPrivate
 *
 * @brief  Private implementation for RegisterTaskDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTaskDefinitionRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public RegisterTaskDefinitionRequest instance.
 */
RegisterTaskDefinitionRequestPrivate::RegisterTaskDefinitionRequestPrivate(
    const ECSRequest::Action action, RegisterTaskDefinitionRequest * const q)
    : RegisterTaskDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTaskDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterTaskDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterTaskDefinitionRequest instance.
 */
RegisterTaskDefinitionRequestPrivate::RegisterTaskDefinitionRequestPrivate(
    const RegisterTaskDefinitionRequestPrivate &other, RegisterTaskDefinitionRequest * const q)
    : RegisterTaskDefinitionPrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
