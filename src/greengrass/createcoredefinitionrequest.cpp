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

#include "createcoredefinitionrequest.h"
#include "createcoredefinitionrequest_p.h"
#include "createcoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateCoreDefinitionRequest
 *
 * @brief  Implements Greengrass CreateCoreDefinition requests.
 *
 * @see    GreengrassClient::createCoreDefinition
 */

/**
 * @brief  Constructs a new CreateCoreDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCoreDefinitionResponse::CreateCoreDefinitionResponse(

/**
 * @brief  Constructs a new CreateCoreDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCoreDefinitionRequest::CreateCoreDefinitionRequest(const CreateCoreDefinitionRequest &other)
    : GreengrassRequest(new CreateCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCoreDefinitionRequest object.
 */
CreateCoreDefinitionRequest::CreateCoreDefinitionRequest()
    : GreengrassRequest(new CreateCoreDefinitionRequestPrivate(GreengrassRequest::CreateCoreDefinitionAction, this))
{

}

bool CreateCoreDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCoreDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCoreDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCoreDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCoreDefinitionRequestPrivate
 *
 * @brief  Private implementation for CreateCoreDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCoreDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateCoreDefinitionRequest instance.
 */
CreateCoreDefinitionRequestPrivate::CreateCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, CreateCoreDefinitionRequest * const q)
    : CreateCoreDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCoreDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCoreDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCoreDefinitionRequest instance.
 */
CreateCoreDefinitionRequestPrivate::CreateCoreDefinitionRequestPrivate(
    const CreateCoreDefinitionRequestPrivate &other, CreateCoreDefinitionRequest * const q)
    : CreateCoreDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
