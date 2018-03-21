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

#include "updatesubscriptiondefinitionrequest.h"
#include "updatesubscriptiondefinitionrequest_p.h"
#include "updatesubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateSubscriptionDefinitionRequest
 *
 * @brief  Implements Greengrass UpdateSubscriptionDefinition requests.
 *
 * @see    GreengrassClient::updateSubscriptionDefinition
 */

/**
 * @brief  Constructs a new UpdateSubscriptionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSubscriptionDefinitionResponse::UpdateSubscriptionDefinitionResponse(

/**
 * @brief  Constructs a new UpdateSubscriptionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSubscriptionDefinitionRequest::UpdateSubscriptionDefinitionRequest(const UpdateSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new UpdateSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSubscriptionDefinitionRequest object.
 */
UpdateSubscriptionDefinitionRequest::UpdateSubscriptionDefinitionRequest()
    : GreengrassRequest(new UpdateSubscriptionDefinitionRequestPrivate(GreengrassRequest::UpdateSubscriptionDefinitionAction, this))
{

}

bool UpdateSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSubscriptionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSubscriptionDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * UpdateSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubscriptionDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSubscriptionDefinitionRequestPrivate
 *
 * @brief  Private implementation for UpdateSubscriptionDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriptionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateSubscriptionDefinitionRequest instance.
 */
UpdateSubscriptionDefinitionRequestPrivate::UpdateSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateSubscriptionDefinitionRequest * const q)
    : UpdateSubscriptionDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubscriptionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubscriptionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSubscriptionDefinitionRequest instance.
 */
UpdateSubscriptionDefinitionRequestPrivate::UpdateSubscriptionDefinitionRequestPrivate(
    const UpdateSubscriptionDefinitionRequestPrivate &other, UpdateSubscriptionDefinitionRequest * const q)
    : UpdateSubscriptionDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
