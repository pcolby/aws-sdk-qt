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

#include "listsubscriptiondefinitionsrequest.h"
#include "listsubscriptiondefinitionsrequest_p.h"
#include "listsubscriptiondefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  ListSubscriptionDefinitionsRequest
 *
 * @brief  Implements Greengrass ListSubscriptionDefinitions requests.
 *
 * @see    GreengrassClient::listSubscriptionDefinitions
 */

/**
 * @brief  Constructs a new ListSubscriptionDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSubscriptionDefinitionsRequest::ListSubscriptionDefinitionsRequest(const ListSubscriptionDefinitionsRequest &other)
    : GreengrassRequest(new ListSubscriptionDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSubscriptionDefinitionsRequest object.
 */
ListSubscriptionDefinitionsRequest::ListSubscriptionDefinitionsRequest()
    : GreengrassRequest(new ListSubscriptionDefinitionsRequestPrivate(GreengrassRequest::ListSubscriptionDefinitionsAction, this))
{

}

bool ListSubscriptionDefinitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSubscriptionDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSubscriptionDefinitionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSubscriptionDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSubscriptionDefinitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSubscriptionDefinitionsRequestPrivate
 *
 * @brief  Private implementation for ListSubscriptionDefinitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionDefinitionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListSubscriptionDefinitionsRequest instance.
 */
ListSubscriptionDefinitionsRequestPrivate::ListSubscriptionDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListSubscriptionDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSubscriptionDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSubscriptionDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSubscriptionDefinitionsRequest instance.
 */
ListSubscriptionDefinitionsRequestPrivate::ListSubscriptionDefinitionsRequestPrivate(
    const ListSubscriptionDefinitionsRequestPrivate &other, ListSubscriptionDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
