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

#include "listcoredefinitionversionsrequest.h"
#include "listcoredefinitionversionsrequest_p.h"
#include "listcoredefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListCoreDefinitionVersionsRequest
 *
 * @brief  Implements Greengrass ListCoreDefinitionVersions requests.
 *
 * @see    GreengrassClient::listCoreDefinitionVersions
 */

/**
 * @brief  Constructs a new ListCoreDefinitionVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCoreDefinitionVersionsRequest::ListCoreDefinitionVersionsRequest(const ListCoreDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListCoreDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListCoreDefinitionVersionsRequest object.
 */
ListCoreDefinitionVersionsRequest::ListCoreDefinitionVersionsRequest()
    : GreengrassRequest(new ListCoreDefinitionVersionsRequestPrivate(GreengrassRequest::ListCoreDefinitionVersionsAction, this))
{

}

bool ListCoreDefinitionVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListCoreDefinitionVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCoreDefinitionVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoreDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCoreDefinitionVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListCoreDefinitionVersionsRequestPrivate
 *
 * @brief  Private implementation for ListCoreDefinitionVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListCoreDefinitionVersionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListCoreDefinitionVersionsRequest instance.
 */
ListCoreDefinitionVersionsRequestPrivate::ListCoreDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListCoreDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListCoreDefinitionVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCoreDefinitionVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCoreDefinitionVersionsRequest instance.
 */
ListCoreDefinitionVersionsRequestPrivate::ListCoreDefinitionVersionsRequestPrivate(
    const ListCoreDefinitionVersionsRequestPrivate &other, ListCoreDefinitionVersionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
