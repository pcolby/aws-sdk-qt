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

#include "getsubscriptiondefinitionversionrequest.h"
#include "getsubscriptiondefinitionversionrequest_p.h"
#include "getsubscriptiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  GetSubscriptionDefinitionVersionRequest
 *
 * @brief  Implements Greengrass GetSubscriptionDefinitionVersion requests.
 *
 * @see    GreengrassClient::getSubscriptionDefinitionVersion
 */

/**
 * @brief  Constructs a new GetSubscriptionDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSubscriptionDefinitionVersionResponse::GetSubscriptionDefinitionVersionResponse(

/**
 * @brief  Constructs a new GetSubscriptionDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSubscriptionDefinitionVersionRequest::GetSubscriptionDefinitionVersionRequest(const GetSubscriptionDefinitionVersionRequest &other)
    : GreengrassRequest(new GetSubscriptionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSubscriptionDefinitionVersionRequest object.
 */
GetSubscriptionDefinitionVersionRequest::GetSubscriptionDefinitionVersionRequest()
    : GreengrassRequest(new GetSubscriptionDefinitionVersionRequestPrivate(GreengrassRequest::GetSubscriptionDefinitionVersionAction, this))
{

}

bool GetSubscriptionDefinitionVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSubscriptionDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSubscriptionDefinitionVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * GetSubscriptionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionDefinitionVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSubscriptionDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for GetSubscriptionDefinitionVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetSubscriptionDefinitionVersionRequest instance.
 */
GetSubscriptionDefinitionVersionRequestPrivate::GetSubscriptionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetSubscriptionDefinitionVersionRequest * const q)
    : GetSubscriptionDefinitionVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSubscriptionDefinitionVersionRequest instance.
 */
GetSubscriptionDefinitionVersionRequestPrivate::GetSubscriptionDefinitionVersionRequestPrivate(
    const GetSubscriptionDefinitionVersionRequestPrivate &other, GetSubscriptionDefinitionVersionRequest * const q)
    : GetSubscriptionDefinitionVersionPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
