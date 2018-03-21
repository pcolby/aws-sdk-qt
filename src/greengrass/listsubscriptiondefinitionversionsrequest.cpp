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

#include "listsubscriptiondefinitionversionsrequest.h"
#include "listsubscriptiondefinitionversionsrequest_p.h"
#include "listsubscriptiondefinitionversionsresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  ListSubscriptionDefinitionVersionsRequest
 *
 * @brief  Implements Greengrass ListSubscriptionDefinitionVersions requests.
 *
 * @see    GreengrassClient::listSubscriptionDefinitionVersions
 */

/**
 * @brief  Constructs a new ListSubscriptionDefinitionVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSubscriptionDefinitionVersionsResponse::ListSubscriptionDefinitionVersionsResponse(

/**
 * @brief  Constructs a new ListSubscriptionDefinitionVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSubscriptionDefinitionVersionsRequest::ListSubscriptionDefinitionVersionsRequest(const ListSubscriptionDefinitionVersionsRequest &other)
    : GreengrassRequest(new ListSubscriptionDefinitionVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSubscriptionDefinitionVersionsRequest object.
 */
ListSubscriptionDefinitionVersionsRequest::ListSubscriptionDefinitionVersionsRequest()
    : GreengrassRequest(new ListSubscriptionDefinitionVersionsRequestPrivate(GreengrassRequest::ListSubscriptionDefinitionVersionsAction, this))
{

}

bool ListSubscriptionDefinitionVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSubscriptionDefinitionVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSubscriptionDefinitionVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * ListSubscriptionDefinitionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSubscriptionDefinitionVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSubscriptionDefinitionVersionsRequestPrivate
 *
 * @brief  Private implementation for ListSubscriptionDefinitionVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionDefinitionVersionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListSubscriptionDefinitionVersionsRequest instance.
 */
ListSubscriptionDefinitionVersionsRequestPrivate::ListSubscriptionDefinitionVersionsRequestPrivate(
    const GreengrassRequest::Action action, ListSubscriptionDefinitionVersionsRequest * const q)
    : ListSubscriptionDefinitionVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionDefinitionVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSubscriptionDefinitionVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSubscriptionDefinitionVersionsRequest instance.
 */
ListSubscriptionDefinitionVersionsRequestPrivate::ListSubscriptionDefinitionVersionsRequestPrivate(
    const ListSubscriptionDefinitionVersionsRequestPrivate &other, ListSubscriptionDefinitionVersionsRequest * const q)
    : ListSubscriptionDefinitionVersionsPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
