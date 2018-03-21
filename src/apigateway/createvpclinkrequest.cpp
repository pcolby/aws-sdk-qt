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

#include "createvpclinkrequest.h"
#include "createvpclinkrequest_p.h"
#include "createvpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateVpcLinkRequest
 *
 * @brief  Implements APIGateway CreateVpcLink requests.
 *
 * @see    APIGatewayClient::createVpcLink
 */

/**
 * @brief  Constructs a new CreateVpcLinkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcLinkResponse::CreateVpcLinkResponse(

/**
 * @brief  Constructs a new CreateVpcLinkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpcLinkRequest::CreateVpcLinkRequest(const CreateVpcLinkRequest &other)
    : APIGatewayRequest(new CreateVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpcLinkRequest object.
 */
CreateVpcLinkRequest::CreateVpcLinkRequest()
    : APIGatewayRequest(new CreateVpcLinkRequestPrivate(APIGatewayRequest::CreateVpcLinkAction, this))
{

}

bool CreateVpcLinkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpcLinkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpcLinkResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * CreateVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcLinkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpcLinkRequestPrivate
 *
 * @brief  Private implementation for CreateVpcLinkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcLinkRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateVpcLinkRequest instance.
 */
CreateVpcLinkRequestPrivate::CreateVpcLinkRequestPrivate(
    const APIGatewayRequest::Action action, CreateVpcLinkRequest * const q)
    : CreateVpcLinkPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcLinkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcLinkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpcLinkRequest instance.
 */
CreateVpcLinkRequestPrivate::CreateVpcLinkRequestPrivate(
    const CreateVpcLinkRequestPrivate &other, CreateVpcLinkRequest * const q)
    : CreateVpcLinkPrivate(other, q)
{

}
