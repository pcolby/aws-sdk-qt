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

#include "createrestapirequest.h"
#include "createrestapirequest_p.h"
#include "createrestapiresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateRestApiRequest
 *
 * @brief  Implements APIGateway CreateRestApi requests.
 *
 * @see    APIGatewayClient::createRestApi
 */

/**
 * @brief  Constructs a new CreateRestApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRestApiResponse::CreateRestApiResponse(

/**
 * @brief  Constructs a new CreateRestApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRestApiRequest::CreateRestApiRequest(const CreateRestApiRequest &other)
    : APIGatewayRequest(new CreateRestApiRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRestApiRequest object.
 */
CreateRestApiRequest::CreateRestApiRequest()
    : APIGatewayRequest(new CreateRestApiRequestPrivate(APIGatewayRequest::CreateRestApiAction, this))
{

}

bool CreateRestApiRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRestApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRestApiResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * CreateRestApiRequest::response(QNetworkReply * const reply) const
{
    return new CreateRestApiResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRestApiRequestPrivate
 *
 * @brief  Private implementation for CreateRestApiRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRestApiRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateRestApiRequest instance.
 */
CreateRestApiRequestPrivate::CreateRestApiRequestPrivate(
    const APIGatewayRequest::Action action, CreateRestApiRequest * const q)
    : CreateRestApiPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRestApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRestApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRestApiRequest instance.
 */
CreateRestApiRequestPrivate::CreateRestApiRequestPrivate(
    const CreateRestApiRequestPrivate &other, CreateRestApiRequest * const q)
    : CreateRestApiPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
