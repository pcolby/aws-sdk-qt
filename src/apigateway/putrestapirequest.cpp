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

#include "putrestapirequest.h"
#include "putrestapirequest_p.h"
#include "putrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  PutRestApiRequest
 *
 * @brief  Implements APIGateway PutRestApi requests.
 *
 * @see    APIGatewayClient::putRestApi
 */

/**
 * @brief  Constructs a new PutRestApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRestApiResponse::PutRestApiResponse(

/**
 * @brief  Constructs a new PutRestApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRestApiRequest::PutRestApiRequest(const PutRestApiRequest &other)
    : APIGatewayRequest(new PutRestApiRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRestApiRequest object.
 */
PutRestApiRequest::PutRestApiRequest()
    : APIGatewayRequest(new PutRestApiRequestPrivate(APIGatewayRequest::PutRestApiAction, this))
{

}

bool PutRestApiRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRestApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRestApiResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * PutRestApiRequest::response(QNetworkReply * const reply) const
{
    return new PutRestApiResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRestApiRequestPrivate
 *
 * @brief  Private implementation for PutRestApiRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRestApiRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public PutRestApiRequest instance.
 */
PutRestApiRequestPrivate::PutRestApiRequestPrivate(
    const APIGatewayRequest::Action action, PutRestApiRequest * const q)
    : PutRestApiPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRestApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRestApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRestApiRequest instance.
 */
PutRestApiRequestPrivate::PutRestApiRequestPrivate(
    const PutRestApiRequestPrivate &other, PutRestApiRequest * const q)
    : PutRestApiPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
