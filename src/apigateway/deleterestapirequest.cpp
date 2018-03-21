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

#include "deleterestapirequest.h"
#include "deleterestapirequest_p.h"
#include "deleterestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteRestApiRequest
 *
 * @brief  Implements APIGateway DeleteRestApi requests.
 *
 * @see    APIGatewayClient::deleteRestApi
 */

/**
 * @brief  Constructs a new DeleteRestApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRestApiResponse::DeleteRestApiResponse(

/**
 * @brief  Constructs a new DeleteRestApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRestApiRequest::DeleteRestApiRequest(const DeleteRestApiRequest &other)
    : APIGatewayRequest(new DeleteRestApiRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRestApiRequest object.
 */
DeleteRestApiRequest::DeleteRestApiRequest()
    : APIGatewayRequest(new DeleteRestApiRequestPrivate(APIGatewayRequest::DeleteRestApiAction, this))
{

}

bool DeleteRestApiRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRestApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRestApiResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteRestApiRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRestApiResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRestApiRequestPrivate
 *
 * @brief  Private implementation for DeleteRestApiRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRestApiRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteRestApiRequest instance.
 */
DeleteRestApiRequestPrivate::DeleteRestApiRequestPrivate(
    const APIGatewayRequest::Action action, DeleteRestApiRequest * const q)
    : DeleteRestApiPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRestApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRestApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRestApiRequest instance.
 */
DeleteRestApiRequestPrivate::DeleteRestApiRequestPrivate(
    const DeleteRestApiRequestPrivate &other, DeleteRestApiRequest * const q)
    : DeleteRestApiPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
