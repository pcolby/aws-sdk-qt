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

#include "createfunctiondefinitionrequest.h"
#include "createfunctiondefinitionrequest_p.h"
#include "createfunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateFunctionDefinitionRequest
 *
 * @brief  Implements Greengrass CreateFunctionDefinition requests.
 *
 * @see    GreengrassClient::createFunctionDefinition
 */

/**
 * @brief  Constructs a new CreateFunctionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateFunctionDefinitionRequest::CreateFunctionDefinitionRequest(const CreateFunctionDefinitionRequest &other)
    : GreengrassRequest(new CreateFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateFunctionDefinitionRequest object.
 */
CreateFunctionDefinitionRequest::CreateFunctionDefinitionRequest()
    : GreengrassRequest(new CreateFunctionDefinitionRequestPrivate(GreengrassRequest::CreateFunctionDefinitionAction, this))
{

}

bool CreateFunctionDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateFunctionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateFunctionDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFunctionDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateFunctionDefinitionRequestPrivate
 *
 * @brief  Private implementation for CreateFunctionDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFunctionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateFunctionDefinitionRequest instance.
 */
CreateFunctionDefinitionRequestPrivate::CreateFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateFunctionDefinitionRequest * const q)
    : CreateFunctionDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateFunctionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateFunctionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateFunctionDefinitionRequest instance.
 */
CreateFunctionDefinitionRequestPrivate::CreateFunctionDefinitionRequestPrivate(
    const CreateFunctionDefinitionRequestPrivate &other, CreateFunctionDefinitionRequest * const q)
    : CreateFunctionDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
