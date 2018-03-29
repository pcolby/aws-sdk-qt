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

#include "deletefunctiondefinitionrequest.h"
#include "deletefunctiondefinitionrequest_p.h"
#include "deletefunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  DeleteFunctionDefinitionRequest
 *
 * @brief  Implements Greengrass DeleteFunctionDefinition requests.
 *
 * @see    GreengrassClient::deleteFunctionDefinition
 */

/**
 * @brief  Constructs a new DeleteFunctionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFunctionDefinitionRequest::DeleteFunctionDefinitionRequest(const DeleteFunctionDefinitionRequest &other)
    : GreengrassRequest(new DeleteFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFunctionDefinitionRequest object.
 */
DeleteFunctionDefinitionRequest::DeleteFunctionDefinitionRequest()
    : GreengrassRequest(new DeleteFunctionDefinitionRequestPrivate(GreengrassRequest::DeleteFunctionDefinitionAction, this))
{

}

bool DeleteFunctionDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFunctionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFunctionDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * DeleteFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFunctionDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFunctionDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeleteFunctionDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DeleteFunctionDefinitionRequest instance.
 */
DeleteFunctionDefinitionRequestPrivate::DeleteFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteFunctionDefinitionRequest * const q)
    : DeleteFunctionDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFunctionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFunctionDefinitionRequest instance.
 */
DeleteFunctionDefinitionRequestPrivate::DeleteFunctionDefinitionRequestPrivate(
    const DeleteFunctionDefinitionRequestPrivate &other, DeleteFunctionDefinitionRequest * const q)
    : DeleteFunctionDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
