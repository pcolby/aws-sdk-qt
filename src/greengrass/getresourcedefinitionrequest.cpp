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

#include "getresourcedefinitionrequest.h"
#include "getresourcedefinitionrequest_p.h"
#include "getresourcedefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetResourceDefinitionRequest
 *
 * @brief  Implements Greengrass GetResourceDefinition requests.
 *
 * @see    GreengrassClient::getResourceDefinition
 */

/**
 * @brief  Constructs a new GetResourceDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetResourceDefinitionRequest::GetResourceDefinitionRequest(const GetResourceDefinitionRequest &other)
    : GreengrassRequest(new GetResourceDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetResourceDefinitionRequest object.
 */
GetResourceDefinitionRequest::GetResourceDefinitionRequest()
    : GreengrassRequest(new GetResourceDefinitionRequestPrivate(GreengrassRequest::GetResourceDefinitionAction, this))
{

}

bool GetResourceDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetResourceDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetResourceDefinitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetResourceDefinitionRequestPrivate
 *
 * @brief  Private implementation for GetResourceDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetResourceDefinitionRequest instance.
 */
GetResourceDefinitionRequestPrivate::GetResourceDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetResourceDefinitionRequest * const q)
    : GetResourceDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetResourceDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetResourceDefinitionRequest instance.
 */
GetResourceDefinitionRequestPrivate::GetResourceDefinitionRequestPrivate(
    const GetResourceDefinitionRequestPrivate &other, GetResourceDefinitionRequest * const q)
    : GetResourceDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
