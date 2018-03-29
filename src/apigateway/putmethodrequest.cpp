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

#include "putmethodrequest.h"
#include "putmethodrequest_p.h"
#include "putmethodresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  PutMethodRequest
 *
 * @brief  Implements APIGateway PutMethod requests.
 *
 * @see    APIGatewayClient::putMethod
 */

/**
 * @brief  Constructs a new PutMethodRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutMethodRequest::PutMethodRequest(const PutMethodRequest &other)
    : APIGatewayRequest(new PutMethodRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutMethodRequest object.
 */
PutMethodRequest::PutMethodRequest()
    : APIGatewayRequest(new PutMethodRequestPrivate(APIGatewayRequest::PutMethodAction, this))
{

}

bool PutMethodRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutMethodResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutMethodResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * PutMethodRequest::response(QNetworkReply * const reply) const
{
    return new PutMethodResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutMethodRequestPrivate
 *
 * @brief  Private implementation for PutMethodRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMethodRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public PutMethodRequest instance.
 */
PutMethodRequestPrivate::PutMethodRequestPrivate(
    const APIGatewayRequest::Action action, PutMethodRequest * const q)
    : PutMethodPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutMethodRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutMethodRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutMethodRequest instance.
 */
PutMethodRequestPrivate::PutMethodRequestPrivate(
    const PutMethodRequestPrivate &other, PutMethodRequest * const q)
    : PutMethodPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
