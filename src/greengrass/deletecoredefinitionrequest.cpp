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

#include "deletecoredefinitionrequest.h"
#include "deletecoredefinitionrequest_p.h"
#include "deletecoredefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  DeleteCoreDefinitionRequest
 *
 * @brief  Implements Greengrass DeleteCoreDefinition requests.
 *
 * @see    GreengrassClient::deleteCoreDefinition
 */

/**
 * @brief  Constructs a new DeleteCoreDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCoreDefinitionResponse::DeleteCoreDefinitionResponse(

/**
 * @brief  Constructs a new DeleteCoreDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteCoreDefinitionRequest::DeleteCoreDefinitionRequest(const DeleteCoreDefinitionRequest &other)
    : GreengrassRequest(new DeleteCoreDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteCoreDefinitionRequest object.
 */
DeleteCoreDefinitionRequest::DeleteCoreDefinitionRequest()
    : GreengrassRequest(new DeleteCoreDefinitionRequestPrivate(GreengrassRequest::DeleteCoreDefinitionAction, this))
{

}

bool DeleteCoreDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteCoreDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteCoreDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * DeleteCoreDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCoreDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteCoreDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeleteCoreDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCoreDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DeleteCoreDefinitionRequest instance.
 */
DeleteCoreDefinitionRequestPrivate::DeleteCoreDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteCoreDefinitionRequest * const q)
    : DeleteCoreDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCoreDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteCoreDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteCoreDefinitionRequest instance.
 */
DeleteCoreDefinitionRequestPrivate::DeleteCoreDefinitionRequestPrivate(
    const DeleteCoreDefinitionRequestPrivate &other, DeleteCoreDefinitionRequest * const q)
    : DeleteCoreDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
