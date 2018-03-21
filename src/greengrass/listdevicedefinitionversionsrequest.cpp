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

#include "listdevicedefinitionversionsrequest.h"
#include "listdevicedefinitionversionsrequest_p.h"
#include "listdevicedefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  ListDeviceDefinitionVersionsRequest
 *
 * @brief  Implements Greengrass ListDeviceDefinitionVersions requests.
 *
 * @see    GreengrassClient::listDeviceDefinitionVersions
 */

/**
 * @brief  Constructs a new ListDeviceDefinitionVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDeviceDefinitionVersionsResponse::ListDeviceDefinitionVersionsResponse(

/**
 * @brief  Constructs a new ListDeviceDefinitionVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDeviceDefinitionVersionsRequest::ListDeviceDefinitionVersionsRequest(const ListDeviceDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListDeviceDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDeviceDefinitionVersionsRequest object.
 */
ListDeviceDefinitionVersionsRequest::ListDeviceDefinitionVersionsRequest()
    : GreengrassRequest(new ListDeviceDefinitionVersionsRequestPrivate(GreengrassRequest::ListDeviceDefinitionVersionsAction, this))
{

}

bool ListDeviceDefinitionVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDeviceDefinitionVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDeviceDefinitionVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * ListDeviceDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceDefinitionVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDeviceDefinitionVersionsRequestPrivate
 *
 * @brief  Private implementation for ListDeviceDefinitionVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDeviceDefinitionVersionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListDeviceDefinitionVersionsRequest instance.
 */
ListDeviceDefinitionVersionsRequestPrivate::ListDeviceDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListDeviceDefinitionVersionsRequest * const q)
    : ListDeviceDefinitionVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDeviceDefinitionVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceDefinitionVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDeviceDefinitionVersionsRequest instance.
 */
ListDeviceDefinitionVersionsRequestPrivate::ListDeviceDefinitionVersionsRequestPrivate(
    const ListDeviceDefinitionVersionsRequestPrivate &other, ListDeviceDefinitionVersionsRequest * const q)
    : ListDeviceDefinitionVersionsPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
