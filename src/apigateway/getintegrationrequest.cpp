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

#include "getintegrationrequest.h"
#include "getintegrationrequest_p.h"
#include "getintegrationresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetIntegrationRequest
 *
 * @brief  Implements APIGateway GetIntegration requests.
 *
 * @see    APIGatewayClient::getIntegration
 */

/**
 * @brief  Constructs a new GetIntegrationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIntegrationRequest::GetIntegrationRequest(const GetIntegrationRequest &other)
    : APIGatewayRequest(new GetIntegrationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIntegrationRequest object.
 */
GetIntegrationRequest::GetIntegrationRequest()
    : APIGatewayRequest(new GetIntegrationRequestPrivate(APIGatewayRequest::GetIntegrationAction, this))
{

}

bool GetIntegrationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIntegrationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIntegrationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIntegrationRequestPrivate
 *
 * @brief  Private implementation for GetIntegrationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntegrationRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetIntegrationRequest instance.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const APIGatewayRequest::Action action, GetIntegrationRequest * const q)
    : GetIntegrationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIntegrationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIntegrationRequest instance.
 */
GetIntegrationRequestPrivate::GetIntegrationRequestPrivate(
    const GetIntegrationRequestPrivate &other, GetIntegrationRequest * const q)
    : GetIntegrationPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
