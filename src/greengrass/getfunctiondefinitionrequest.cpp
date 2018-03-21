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

#include "getfunctiondefinitionrequest.h"
#include "getfunctiondefinitionrequest_p.h"
#include "getfunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetFunctionDefinitionRequest
 *
 * @brief  Implements Greengrass GetFunctionDefinition requests.
 *
 * @see    GreengrassClient::getFunctionDefinition
 */

/**
 * @brief  Constructs a new GetFunctionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFunctionDefinitionResponse::GetFunctionDefinitionResponse(

/**
 * @brief  Constructs a new GetFunctionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFunctionDefinitionRequest::GetFunctionDefinitionRequest(const GetFunctionDefinitionRequest &other)
    : GreengrassRequest(new GetFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetFunctionDefinitionRequest object.
 */
GetFunctionDefinitionRequest::GetFunctionDefinitionRequest()
    : GreengrassRequest(new GetFunctionDefinitionRequestPrivate(GreengrassRequest::GetFunctionDefinitionAction, this))
{

}

bool GetFunctionDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetFunctionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFunctionDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetFunctionDefinitionRequestPrivate
 *
 * @brief  Private implementation for GetFunctionDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFunctionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetFunctionDefinitionRequest instance.
 */
GetFunctionDefinitionRequestPrivate::GetFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetFunctionDefinitionRequest * const q)
    : GetFunctionDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetFunctionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFunctionDefinitionRequest instance.
 */
GetFunctionDefinitionRequestPrivate::GetFunctionDefinitionRequestPrivate(
    const GetFunctionDefinitionRequestPrivate &other, GetFunctionDefinitionRequest * const q)
    : GetFunctionDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
