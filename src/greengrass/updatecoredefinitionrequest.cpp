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

#include "updatecoredefinitionrequest.h"
#include "updatecoredefinitionrequest_p.h"
#include "updatecoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateCoreDefinitionRequest
 *
 * @brief  Implements Greengrass UpdateCoreDefinition requests.
 *
 * @see    GreengrassClient::updateCoreDefinition
 */

/**
 * @brief  Constructs a new UpdateCoreDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateCoreDefinitionRequest::UpdateCoreDefinitionRequest(const UpdateCoreDefinitionRequest &other)
    : GreengrassRequest(new UpdateCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateCoreDefinitionRequest object.
 */
UpdateCoreDefinitionRequest::UpdateCoreDefinitionRequest()
    : GreengrassRequest(new UpdateCoreDefinitionRequestPrivate(GreengrassRequest::UpdateCoreDefinitionAction, this))
{

}

bool UpdateCoreDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateCoreDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateCoreDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * UpdateCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCoreDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateCoreDefinitionRequestPrivate
 *
 * @brief  Private implementation for UpdateCoreDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCoreDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateCoreDefinitionRequest instance.
 */
UpdateCoreDefinitionRequestPrivate::UpdateCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateCoreDefinitionRequest * const q)
    : UpdateCoreDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCoreDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateCoreDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateCoreDefinitionRequest instance.
 */
UpdateCoreDefinitionRequestPrivate::UpdateCoreDefinitionRequestPrivate(
    const UpdateCoreDefinitionRequestPrivate &other, UpdateCoreDefinitionRequest * const q)
    : UpdateCoreDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
