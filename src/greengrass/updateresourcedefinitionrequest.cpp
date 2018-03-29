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

#include "updateresourcedefinitionrequest.h"
#include "updateresourcedefinitionrequest_p.h"
#include "updateresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateResourceDefinitionRequest
 *
 * @brief  Implements Greengrass UpdateResourceDefinition requests.
 *
 * @see    GreengrassClient::updateResourceDefinition
 */

/**
 * @brief  Constructs a new UpdateResourceDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateResourceDefinitionRequest::UpdateResourceDefinitionRequest(const UpdateResourceDefinitionRequest &other)
    : GreengrassRequest(new UpdateResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateResourceDefinitionRequest object.
 */
UpdateResourceDefinitionRequest::UpdateResourceDefinitionRequest()
    : GreengrassRequest(new UpdateResourceDefinitionRequestPrivate(GreengrassRequest::UpdateResourceDefinitionAction, this))
{

}

bool UpdateResourceDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateResourceDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateResourceDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * UpdateResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateResourceDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateResourceDefinitionRequestPrivate
 *
 * @brief  Private implementation for UpdateResourceDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateResourceDefinitionRequest instance.
 */
UpdateResourceDefinitionRequestPrivate::UpdateResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateResourceDefinitionRequest * const q)
    : UpdateResourceDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateResourceDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateResourceDefinitionRequest instance.
 */
UpdateResourceDefinitionRequestPrivate::UpdateResourceDefinitionRequestPrivate(
    const UpdateResourceDefinitionRequestPrivate &other, UpdateResourceDefinitionRequest * const q)
    : UpdateResourceDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
