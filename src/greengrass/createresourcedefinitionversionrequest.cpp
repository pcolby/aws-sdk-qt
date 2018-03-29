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

#include "createresourcedefinitionversionrequest.h"
#include "createresourcedefinitionversionrequest_p.h"
#include "createresourcedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateResourceDefinitionVersionRequest
 *
 * @brief  Implements Greengrass CreateResourceDefinitionVersion requests.
 *
 * @see    GreengrassClient::createResourceDefinitionVersion
 */

/**
 * @brief  Constructs a new CreateResourceDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateResourceDefinitionVersionRequest::CreateResourceDefinitionVersionRequest(const CreateResourceDefinitionVersionRequest &other)
    : GreengrassRequest(new CreateResourceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateResourceDefinitionVersionRequest object.
 */
CreateResourceDefinitionVersionRequest::CreateResourceDefinitionVersionRequest()
    : GreengrassRequest(new CreateResourceDefinitionVersionRequestPrivate(GreengrassRequest::CreateResourceDefinitionVersionAction, this))
{

}

bool CreateResourceDefinitionVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateResourceDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateResourceDefinitionVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * CreateResourceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceDefinitionVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateResourceDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for CreateResourceDefinitionVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public CreateResourceDefinitionVersionRequest instance.
 */
CreateResourceDefinitionVersionRequestPrivate::CreateResourceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateResourceDefinitionVersionRequest * const q)
    : CreateResourceDefinitionVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateResourceDefinitionVersionRequest instance.
 */
CreateResourceDefinitionVersionRequestPrivate::CreateResourceDefinitionVersionRequestPrivate(
    const CreateResourceDefinitionVersionRequestPrivate &other, CreateResourceDefinitionVersionRequest * const q)
    : CreateResourceDefinitionVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
