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

#include "putintegrationresponserequest.h"
#include "putintegrationresponserequest_p.h"
#include "putintegrationresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  PutIntegrationResponseRequest
 *
 * @brief  Implements APIGateway PutIntegrationResponse requests.
 *
 * @see    APIGatewayClient::putIntegrationResponse
 */

/**
 * @brief  Constructs a new PutIntegrationResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutIntegrationResponseRequest::PutIntegrationResponseRequest(const PutIntegrationResponseRequest &other)
    : APIGatewayRequest(new PutIntegrationResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutIntegrationResponseRequest object.
 */
PutIntegrationResponseRequest::PutIntegrationResponseRequest()
    : APIGatewayRequest(new PutIntegrationResponseRequestPrivate(APIGatewayRequest::PutIntegrationResponseAction, this))
{

}

bool PutIntegrationResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutIntegrationResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutIntegrationResponseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * PutIntegrationResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutIntegrationResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutIntegrationResponseRequestPrivate
 *
 * @brief  Private implementation for PutIntegrationResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutIntegrationResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public PutIntegrationResponseRequest instance.
 */
PutIntegrationResponseRequestPrivate::PutIntegrationResponseRequestPrivate(
    const APIGatewayRequest::Action action, PutIntegrationResponseRequest * const q)
    : PutIntegrationResponsePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutIntegrationResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutIntegrationResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutIntegrationResponseRequest instance.
 */
PutIntegrationResponseRequestPrivate::PutIntegrationResponseRequestPrivate(
    const PutIntegrationResponseRequestPrivate &other, PutIntegrationResponseRequest * const q)
    : PutIntegrationResponsePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
