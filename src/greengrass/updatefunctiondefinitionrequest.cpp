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

#include "updatefunctiondefinitionrequest.h"
#include "updatefunctiondefinitionrequest_p.h"
#include "updatefunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateFunctionDefinitionRequest
 *
 * @brief  Implements Greengrass UpdateFunctionDefinition requests.
 *
 * @see    GreengrassClient::updateFunctionDefinition
 */

/**
 * @brief  Constructs a new UpdateFunctionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFunctionDefinitionResponse::UpdateFunctionDefinitionResponse(

/**
 * @brief  Constructs a new UpdateFunctionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFunctionDefinitionRequest::UpdateFunctionDefinitionRequest(const UpdateFunctionDefinitionRequest &other)
    : GreengrassRequest(new UpdateFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFunctionDefinitionRequest object.
 */
UpdateFunctionDefinitionRequest::UpdateFunctionDefinitionRequest()
    : GreengrassRequest(new UpdateFunctionDefinitionRequestPrivate(GreengrassRequest::UpdateFunctionDefinitionAction, this))
{

}

bool UpdateFunctionDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFunctionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFunctionDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * UpdateFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFunctionDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFunctionDefinitionRequestPrivate
 *
 * @brief  Private implementation for UpdateFunctionDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateFunctionDefinitionRequest instance.
 */
UpdateFunctionDefinitionRequestPrivate::UpdateFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateFunctionDefinitionRequest * const q)
    : UpdateFunctionDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFunctionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFunctionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFunctionDefinitionRequest instance.
 */
UpdateFunctionDefinitionRequestPrivate::UpdateFunctionDefinitionRequestPrivate(
    const UpdateFunctionDefinitionRequestPrivate &other, UpdateFunctionDefinitionRequest * const q)
    : UpdateFunctionDefinitionPrivate(other, q)
{

}
