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

#include "getcoredefinitionversionrequest.h"
#include "getcoredefinitionversionrequest_p.h"
#include "getcoredefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetCoreDefinitionVersionRequest
 *
 * @brief  Implements Greengrass GetCoreDefinitionVersion requests.
 *
 * @see    GreengrassClient::getCoreDefinitionVersion
 */

/**
 * @brief  Constructs a new GetCoreDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCoreDefinitionVersionResponse::GetCoreDefinitionVersionResponse(

/**
 * @brief  Constructs a new GetCoreDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCoreDefinitionVersionRequest::GetCoreDefinitionVersionRequest(const GetCoreDefinitionVersionRequest &other)
    : GreengrassRequest(new GetCoreDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCoreDefinitionVersionRequest object.
 */
GetCoreDefinitionVersionRequest::GetCoreDefinitionVersionRequest()
    : GreengrassRequest(new GetCoreDefinitionVersionRequestPrivate(GreengrassRequest::GetCoreDefinitionVersionAction, this))
{

}

bool GetCoreDefinitionVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCoreDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCoreDefinitionVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetCoreDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetCoreDefinitionVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCoreDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for GetCoreDefinitionVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCoreDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetCoreDefinitionVersionRequest instance.
 */
GetCoreDefinitionVersionRequestPrivate::GetCoreDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetCoreDefinitionVersionRequest * const q)
    : GetCoreDefinitionVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCoreDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCoreDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCoreDefinitionVersionRequest instance.
 */
GetCoreDefinitionVersionRequestPrivate::GetCoreDefinitionVersionRequestPrivate(
    const GetCoreDefinitionVersionRequestPrivate &other, GetCoreDefinitionVersionRequest * const q)
    : GetCoreDefinitionVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
