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

#include "listfunctiondefinitionsrequest.h"
#include "listfunctiondefinitionsrequest_p.h"
#include "listfunctiondefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  ListFunctionDefinitionsRequest
 *
 * @brief  Implements Greengrass ListFunctionDefinitions requests.
 *
 * @see    GreengrassClient::listFunctionDefinitions
 */

/**
 * @brief  Constructs a new ListFunctionDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFunctionDefinitionsRequest::ListFunctionDefinitionsRequest(const ListFunctionDefinitionsRequest &other)
    : GreengrassRequest(new ListFunctionDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFunctionDefinitionsRequest object.
 */
ListFunctionDefinitionsRequest::ListFunctionDefinitionsRequest()
    : GreengrassRequest(new ListFunctionDefinitionsRequestPrivate(GreengrassRequest::ListFunctionDefinitionsAction, this))
{

}

bool ListFunctionDefinitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFunctionDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFunctionDefinitionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * ListFunctionDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListFunctionDefinitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFunctionDefinitionsRequestPrivate
 *
 * @brief  Private implementation for ListFunctionDefinitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionDefinitionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListFunctionDefinitionsRequest instance.
 */
ListFunctionDefinitionsRequestPrivate::ListFunctionDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListFunctionDefinitionsRequest * const q)
    : ListFunctionDefinitionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFunctionDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFunctionDefinitionsRequest instance.
 */
ListFunctionDefinitionsRequestPrivate::ListFunctionDefinitionsRequestPrivate(
    const ListFunctionDefinitionsRequestPrivate &other, ListFunctionDefinitionsRequest * const q)
    : ListFunctionDefinitionsPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
