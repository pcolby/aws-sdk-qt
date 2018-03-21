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

#include "putgatewayresponserequest.h"
#include "putgatewayresponserequest_p.h"
#include "putgatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  PutGatewayResponseRequest
 *
 * @brief  Implements APIGateway PutGatewayResponse requests.
 *
 * @see    APIGatewayClient::putGatewayResponse
 */

/**
 * @brief  Constructs a new PutGatewayResponseResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutGatewayResponseResponse::PutGatewayResponseResponse(

/**
 * @brief  Constructs a new PutGatewayResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutGatewayResponseRequest::PutGatewayResponseRequest(const PutGatewayResponseRequest &other)
    : APIGatewayRequest(new PutGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutGatewayResponseRequest object.
 */
PutGatewayResponseRequest::PutGatewayResponseRequest()
    : APIGatewayRequest(new PutGatewayResponseRequestPrivate(APIGatewayRequest::PutGatewayResponseAction, this))
{

}

bool PutGatewayResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutGatewayResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutGatewayResponseResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * PutGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new PutGatewayResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutGatewayResponseRequestPrivate
 *
 * @brief  Private implementation for PutGatewayResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutGatewayResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public PutGatewayResponseRequest instance.
 */
PutGatewayResponseRequestPrivate::PutGatewayResponseRequestPrivate(
    const APIGatewayRequest::Action action, PutGatewayResponseRequest * const q)
    : PutGatewayResponsePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutGatewayResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutGatewayResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutGatewayResponseRequest instance.
 */
PutGatewayResponseRequestPrivate::PutGatewayResponseRequestPrivate(
    const PutGatewayResponseRequestPrivate &other, PutGatewayResponseRequest * const q)
    : PutGatewayResponsePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
