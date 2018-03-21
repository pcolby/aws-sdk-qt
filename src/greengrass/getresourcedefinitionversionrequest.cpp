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

#include "getresourcedefinitionversionrequest.h"
#include "getresourcedefinitionversionrequest_p.h"
#include "getresourcedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetResourceDefinitionVersionRequest
 *
 * @brief  Implements Greengrass GetResourceDefinitionVersion requests.
 *
 * @see    GreengrassClient::getResourceDefinitionVersion
 */

/**
 * @brief  Constructs a new GetResourceDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetResourceDefinitionVersionRequest::GetResourceDefinitionVersionRequest(const GetResourceDefinitionVersionRequest &other)
    : GreengrassRequest(new GetResourceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetResourceDefinitionVersionRequest object.
 */
GetResourceDefinitionVersionRequest::GetResourceDefinitionVersionRequest()
    : GreengrassRequest(new GetResourceDefinitionVersionRequestPrivate(GreengrassRequest::GetResourceDefinitionVersionAction, this))
{

}

bool GetResourceDefinitionVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetResourceDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetResourceDefinitionVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetResourceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceDefinitionVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetResourceDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for GetResourceDefinitionVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetResourceDefinitionVersionRequest instance.
 */
GetResourceDefinitionVersionRequestPrivate::GetResourceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetResourceDefinitionVersionRequest * const q)
    : GetResourceDefinitionVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetResourceDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetResourceDefinitionVersionRequest instance.
 */
GetResourceDefinitionVersionRequestPrivate::GetResourceDefinitionVersionRequestPrivate(
    const GetResourceDefinitionVersionRequestPrivate &other, GetResourceDefinitionVersionRequest * const q)
    : GetResourceDefinitionVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
