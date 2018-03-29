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

#include "updateusageplanrequest.h"
#include "updateusageplanrequest_p.h"
#include "updateusageplanresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateUsagePlanRequest
 *
 * @brief  Implements APIGateway UpdateUsagePlan requests.
 *
 * @see    APIGatewayClient::updateUsagePlan
 */

/**
 * @brief  Constructs a new UpdateUsagePlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateUsagePlanRequest::UpdateUsagePlanRequest(const UpdateUsagePlanRequest &other)
    : APIGatewayRequest(new UpdateUsagePlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateUsagePlanRequest object.
 */
UpdateUsagePlanRequest::UpdateUsagePlanRequest()
    : APIGatewayRequest(new UpdateUsagePlanRequestPrivate(APIGatewayRequest::UpdateUsagePlanAction, this))
{

}

bool UpdateUsagePlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateUsagePlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateUsagePlanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateUsagePlanRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUsagePlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateUsagePlanRequestPrivate
 *
 * @brief  Private implementation for UpdateUsagePlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUsagePlanRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateUsagePlanRequest instance.
 */
UpdateUsagePlanRequestPrivate::UpdateUsagePlanRequestPrivate(
    const APIGatewayRequest::Action action, UpdateUsagePlanRequest * const q)
    : UpdateUsagePlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUsagePlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateUsagePlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateUsagePlanRequest instance.
 */
UpdateUsagePlanRequestPrivate::UpdateUsagePlanRequestPrivate(
    const UpdateUsagePlanRequestPrivate &other, UpdateUsagePlanRequest * const q)
    : UpdateUsagePlanPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
