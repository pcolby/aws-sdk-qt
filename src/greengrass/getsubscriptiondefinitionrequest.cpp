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

#include "getsubscriptiondefinitionrequest.h"
#include "getsubscriptiondefinitionrequest_p.h"
#include "getsubscriptiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetSubscriptionDefinitionRequest
 *
 * @brief  Implements Greengrass GetSubscriptionDefinition requests.
 *
 * @see    GreengrassClient::getSubscriptionDefinition
 */

/**
 * @brief  Constructs a new GetSubscriptionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSubscriptionDefinitionResponse::GetSubscriptionDefinitionResponse(

/**
 * @brief  Constructs a new GetSubscriptionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSubscriptionDefinitionRequest::GetSubscriptionDefinitionRequest(const GetSubscriptionDefinitionRequest &other)
    : GreengrassRequest(new GetSubscriptionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSubscriptionDefinitionRequest object.
 */
GetSubscriptionDefinitionRequest::GetSubscriptionDefinitionRequest()
    : GreengrassRequest(new GetSubscriptionDefinitionRequestPrivate(GreengrassRequest::GetSubscriptionDefinitionAction, this))
{

}

bool GetSubscriptionDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSubscriptionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSubscriptionDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetSubscriptionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSubscriptionDefinitionRequestPrivate
 *
 * @brief  Private implementation for GetSubscriptionDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetSubscriptionDefinitionRequest instance.
 */
GetSubscriptionDefinitionRequestPrivate::GetSubscriptionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetSubscriptionDefinitionRequest * const q)
    : GetSubscriptionDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSubscriptionDefinitionRequest instance.
 */
GetSubscriptionDefinitionRequestPrivate::GetSubscriptionDefinitionRequestPrivate(
    const GetSubscriptionDefinitionRequestPrivate &other, GetSubscriptionDefinitionRequest * const q)
    : GetSubscriptionDefinitionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
