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

#include "deregistertaskdefinitionrequest.h"
#include "deregistertaskdefinitionrequest_p.h"
#include "deregistertaskdefinitionresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  DeregisterTaskDefinitionRequest
 *
 * @brief  Implements ECS DeregisterTaskDefinition requests.
 *
 * @see    ECSClient::deregisterTaskDefinition
 */

/**
 * @brief  Constructs a new DeregisterTaskDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterTaskDefinitionRequest::DeregisterTaskDefinitionRequest(const DeregisterTaskDefinitionRequest &other)
    : ECSRequest(new DeregisterTaskDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterTaskDefinitionRequest object.
 */
DeregisterTaskDefinitionRequest::DeregisterTaskDefinitionRequest()
    : ECSRequest(new DeregisterTaskDefinitionRequestPrivate(ECSRequest::DeregisterTaskDefinitionAction, this))
{

}

bool DeregisterTaskDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterTaskDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterTaskDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * DeregisterTaskDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterTaskDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterTaskDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeregisterTaskDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTaskDefinitionRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public DeregisterTaskDefinitionRequest instance.
 */
DeregisterTaskDefinitionRequestPrivate::DeregisterTaskDefinitionRequestPrivate(
    const ECSRequest::Action action, DeregisterTaskDefinitionRequest * const q)
    : DeregisterTaskDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTaskDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterTaskDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterTaskDefinitionRequest instance.
 */
DeregisterTaskDefinitionRequestPrivate::DeregisterTaskDefinitionRequestPrivate(
    const DeregisterTaskDefinitionRequestPrivate &other, DeregisterTaskDefinitionRequest * const q)
    : DeregisterTaskDefinitionPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
