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

#include "getapikeysrequest.h"
#include "getapikeysrequest_p.h"
#include "getapikeysresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetApiKeysRequest
 *
 * @brief  Implements APIGateway GetApiKeys requests.
 *
 * @see    APIGatewayClient::getApiKeys
 */

/**
 * @brief  Constructs a new GetApiKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApiKeysRequest::GetApiKeysRequest(const GetApiKeysRequest &other)
    : APIGatewayRequest(new GetApiKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetApiKeysRequest object.
 */
GetApiKeysRequest::GetApiKeysRequest()
    : APIGatewayRequest(new GetApiKeysRequestPrivate(APIGatewayRequest::GetApiKeysAction, this))
{

}

bool GetApiKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetApiKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApiKeysResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApiKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetApiKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetApiKeysRequestPrivate
 *
 * @brief  Private implementation for GetApiKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApiKeysRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetApiKeysRequest instance.
 */
GetApiKeysRequestPrivate::GetApiKeysRequestPrivate(
    const APIGatewayRequest::Action action, GetApiKeysRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetApiKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApiKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApiKeysRequest instance.
 */
GetApiKeysRequestPrivate::GetApiKeysRequestPrivate(
    const GetApiKeysRequestPrivate &other, GetApiKeysRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
