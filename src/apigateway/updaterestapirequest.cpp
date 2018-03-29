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

#include "updaterestapirequest.h"
#include "updaterestapirequest_p.h"
#include "updaterestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateRestApiRequest
 *
 * @brief  Implements APIGateway UpdateRestApi requests.
 *
 * @see    APIGatewayClient::updateRestApi
 */

/**
 * @brief  Constructs a new UpdateRestApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRestApiRequest::UpdateRestApiRequest(const UpdateRestApiRequest &other)
    : APIGatewayRequest(new UpdateRestApiRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRestApiRequest object.
 */
UpdateRestApiRequest::UpdateRestApiRequest()
    : APIGatewayRequest(new UpdateRestApiRequestPrivate(APIGatewayRequest::UpdateRestApiAction, this))
{

}

bool UpdateRestApiRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRestApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRestApiResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateRestApiRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRestApiResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRestApiRequestPrivate
 *
 * @brief  Private implementation for UpdateRestApiRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRestApiRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateRestApiRequest instance.
 */
UpdateRestApiRequestPrivate::UpdateRestApiRequestPrivate(
    const APIGatewayRequest::Action action, UpdateRestApiRequest * const q)
    : UpdateRestApiPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRestApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRestApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRestApiRequest instance.
 */
UpdateRestApiRequestPrivate::UpdateRestApiRequestPrivate(
    const UpdateRestApiRequestPrivate &other, UpdateRestApiRequest * const q)
    : UpdateRestApiPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
