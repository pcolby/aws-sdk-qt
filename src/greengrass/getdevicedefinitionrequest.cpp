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

#include "getdevicedefinitionrequest.h"
#include "getdevicedefinitionrequest_p.h"
#include "getdevicedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetDeviceDefinitionRequest
 *
 * @brief  Implements Greengrass GetDeviceDefinition requests.
 *
 * @see    GreengrassClient::getDeviceDefinition
 */

/**
 * @brief  Constructs a new GetDeviceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeviceDefinitionResponse::GetDeviceDefinitionResponse(

/**
 * @brief  Constructs a new GetDeviceDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeviceDefinitionRequest::GetDeviceDefinitionRequest(const GetDeviceDefinitionRequest &other)
    : GreengrassRequest(new GetDeviceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDeviceDefinitionRequest object.
 */
GetDeviceDefinitionRequest::GetDeviceDefinitionRequest()
    : GreengrassRequest(new GetDeviceDefinitionRequestPrivate(GreengrassRequest::GetDeviceDefinitionAction, this))
{

}

bool GetDeviceDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDeviceDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeviceDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetDeviceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDeviceDefinitionRequestPrivate
 *
 * @brief  Private implementation for GetDeviceDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetDeviceDefinitionRequest instance.
 */
GetDeviceDefinitionRequestPrivate::GetDeviceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetDeviceDefinitionRequest * const q)
    : GetDeviceDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDeviceDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeviceDefinitionRequest instance.
 */
GetDeviceDefinitionRequestPrivate::GetDeviceDefinitionRequestPrivate(
    const GetDeviceDefinitionRequestPrivate &other, GetDeviceDefinitionRequest * const q)
    : GetDeviceDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
