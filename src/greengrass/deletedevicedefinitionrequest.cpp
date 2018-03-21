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

#include "deletedevicedefinitionrequest.h"
#include "deletedevicedefinitionrequest_p.h"
#include "deletedevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  DeleteDeviceDefinitionRequest
 *
 * @brief  Implements Greengrass DeleteDeviceDefinition requests.
 *
 * @see    GreengrassClient::deleteDeviceDefinition
 */

/**
 * @brief  Constructs a new DeleteDeviceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeviceDefinitionResponse::DeleteDeviceDefinitionResponse(

/**
 * @brief  Constructs a new DeleteDeviceDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDeviceDefinitionRequest::DeleteDeviceDefinitionRequest(const DeleteDeviceDefinitionRequest &other)
    : GreengrassRequest(new DeleteDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDeviceDefinitionRequest object.
 */
DeleteDeviceDefinitionRequest::DeleteDeviceDefinitionRequest()
    : GreengrassRequest(new DeleteDeviceDefinitionRequestPrivate(GreengrassRequest::DeleteDeviceDefinitionAction, this))
{

}

bool DeleteDeviceDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDeviceDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDeviceDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * DeleteDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeviceDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDeviceDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeleteDeviceDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeviceDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DeleteDeviceDefinitionRequest instance.
 */
DeleteDeviceDefinitionRequestPrivate::DeleteDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteDeviceDefinitionRequest * const q)
    : DeleteDeviceDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeviceDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeviceDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDeviceDefinitionRequest instance.
 */
DeleteDeviceDefinitionRequestPrivate::DeleteDeviceDefinitionRequestPrivate(
    const DeleteDeviceDefinitionRequestPrivate &other, DeleteDeviceDefinitionRequest * const q)
    : DeleteDeviceDefinitionPrivate(other, q)
{

}
