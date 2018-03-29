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

#include "deletesubscriptiondefinitionrequest.h"
#include "deletesubscriptiondefinitionrequest_p.h"
#include "deletesubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  DeleteSubscriptionDefinitionRequest
 *
 * @brief  Implements Greengrass DeleteSubscriptionDefinition requests.
 *
 * @see    GreengrassClient::deleteSubscriptionDefinition
 */

/**
 * @brief  Constructs a new DeleteSubscriptionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSubscriptionDefinitionRequest::DeleteSubscriptionDefinitionRequest(const DeleteSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new DeleteSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSubscriptionDefinitionRequest object.
 */
DeleteSubscriptionDefinitionRequest::DeleteSubscriptionDefinitionRequest()
    : GreengrassRequest(new DeleteSubscriptionDefinitionRequestPrivate(GreengrassRequest::DeleteSubscriptionDefinitionAction, this))
{

}

bool DeleteSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSubscriptionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSubscriptionDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * DeleteSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubscriptionDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSubscriptionDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeleteSubscriptionDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DeleteSubscriptionDefinitionRequest instance.
 */
DeleteSubscriptionDefinitionRequestPrivate::DeleteSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, DeleteSubscriptionDefinitionRequest * const q)
    : DeleteSubscriptionDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriptionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubscriptionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSubscriptionDefinitionRequest instance.
 */
DeleteSubscriptionDefinitionRequestPrivate::DeleteSubscriptionDefinitionRequestPrivate(
    const DeleteSubscriptionDefinitionRequestPrivate &other, DeleteSubscriptionDefinitionRequest * const q)
    : DeleteSubscriptionDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
