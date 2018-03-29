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

#include "getintegrationresponserequest.h"
#include "getintegrationresponserequest_p.h"
#include "getintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetIntegrationResponseRequest
 *
 * @brief  Implements APIGateway GetIntegrationResponse requests.
 *
 * @see    APIGatewayClient::getIntegrationResponse
 */

/**
 * @brief  Constructs a new GetIntegrationResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIntegrationResponseRequest::GetIntegrationResponseRequest(const GetIntegrationResponseRequest &other)
    : APIGatewayRequest(new GetIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIntegrationResponseRequest object.
 */
GetIntegrationResponseRequest::GetIntegrationResponseRequest()
    : APIGatewayRequest(new GetIntegrationResponseRequestPrivate(APIGatewayRequest::GetIntegrationResponseAction, this))
{

}

bool GetIntegrationResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIntegrationResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIntegrationResponseResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new GetIntegrationResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIntegrationResponseRequestPrivate
 *
 * @brief  Private implementation for GetIntegrationResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntegrationResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetIntegrationResponseRequest instance.
 */
GetIntegrationResponseRequestPrivate::GetIntegrationResponseRequestPrivate(
    const APIGatewayRequest::Action action, GetIntegrationResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIntegrationResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIntegrationResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIntegrationResponseRequest instance.
 */
GetIntegrationResponseRequestPrivate::GetIntegrationResponseRequestPrivate(
    const GetIntegrationResponseRequestPrivate &other, GetIntegrationResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
