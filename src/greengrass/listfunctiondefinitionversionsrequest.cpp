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

#include "listfunctiondefinitionversionsrequest.h"
#include "listfunctiondefinitionversionsrequest_p.h"
#include "listfunctiondefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListFunctionDefinitionVersionsRequest
 *
 * @brief  Implements Greengrass ListFunctionDefinitionVersions requests.
 *
 * @see    GreengrassClient::listFunctionDefinitionVersions
 */

/**
 * @brief  Constructs a new ListFunctionDefinitionVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFunctionDefinitionVersionsRequest::ListFunctionDefinitionVersionsRequest(const ListFunctionDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListFunctionDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFunctionDefinitionVersionsRequest object.
 */
ListFunctionDefinitionVersionsRequest::ListFunctionDefinitionVersionsRequest()
    : GreengrassRequest(new ListFunctionDefinitionVersionsRequestPrivate(GreengrassRequest::ListFunctionDefinitionVersionsAction, this))
{

}

bool ListFunctionDefinitionVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFunctionDefinitionVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFunctionDefinitionVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * ListFunctionDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFunctionDefinitionVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFunctionDefinitionVersionsRequestPrivate
 *
 * @brief  Private implementation for ListFunctionDefinitionVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionDefinitionVersionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListFunctionDefinitionVersionsRequest instance.
 */
ListFunctionDefinitionVersionsRequestPrivate::ListFunctionDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListFunctionDefinitionVersionsRequest * const q)
    : ListFunctionDefinitionVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionDefinitionVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFunctionDefinitionVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFunctionDefinitionVersionsRequest instance.
 */
ListFunctionDefinitionVersionsRequestPrivate::ListFunctionDefinitionVersionsRequestPrivate(
    const ListFunctionDefinitionVersionsRequestPrivate &other, ListFunctionDefinitionVersionsRequest * const q)
    : ListFunctionDefinitionVersionsPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
