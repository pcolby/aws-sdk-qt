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

#include "createusageplanrequest.h"
#include "createusageplanrequest_p.h"
#include "createusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateUsagePlanRequest
 *
 * @brief  Implements APIGateway CreateUsagePlan requests.
 *
 * @see    APIGatewayClient::createUsagePlan
 */

/**
 * @brief  Constructs a new CreateUsagePlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUsagePlanResponse::CreateUsagePlanResponse(

/**
 * @brief  Constructs a new CreateUsagePlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUsagePlanRequest::CreateUsagePlanRequest(const CreateUsagePlanRequest &other)
    : APIGatewayRequest(new CreateUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateUsagePlanRequest object.
 */
CreateUsagePlanRequest::CreateUsagePlanRequest()
    : APIGatewayRequest(new CreateUsagePlanRequestPrivate(APIGatewayRequest::CreateUsagePlanAction, this))
{

}

bool CreateUsagePlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateUsagePlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUsagePlanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * CreateUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateUsagePlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateUsagePlanRequestPrivate
 *
 * @brief  Private implementation for CreateUsagePlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUsagePlanRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateUsagePlanRequest instance.
 */
CreateUsagePlanRequestPrivate::CreateUsagePlanRequestPrivate(
    const APIGatewayRequest::Action action, CreateUsagePlanRequest * const q)
    : CreateUsagePlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateUsagePlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUsagePlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUsagePlanRequest instance.
 */
CreateUsagePlanRequestPrivate::CreateUsagePlanRequestPrivate(
    const CreateUsagePlanRequestPrivate &other, CreateUsagePlanRequest * const q)
    : CreateUsagePlanPrivate(other, q)
{

}
