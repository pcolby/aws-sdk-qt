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

#include "updatestagerequest.h"
#include "updatestagerequest_p.h"
#include "updatestageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateStageRequest
 *
 * @brief  Implements APIGateway UpdateStage requests.
 *
 * @see    APIGatewayClient::updateStage
 */

/**
 * @brief  Constructs a new UpdateStageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateStageRequest::UpdateStageRequest(const UpdateStageRequest &other)
    : APIGatewayRequest(new UpdateStageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateStageRequest object.
 */
UpdateStageRequest::UpdateStageRequest()
    : APIGatewayRequest(new UpdateStageRequestPrivate(APIGatewayRequest::UpdateStageAction, this))
{

}

bool UpdateStageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateStageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateStageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateStageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateStageRequestPrivate
 *
 * @brief  Private implementation for UpdateStageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStageRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateStageRequest instance.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const APIGatewayRequest::Action action, UpdateStageRequest * const q)
    : UpdateStagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateStageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateStageRequest instance.
 */
UpdateStageRequestPrivate::UpdateStageRequestPrivate(
    const UpdateStageRequestPrivate &other, UpdateStageRequest * const q)
    : UpdateStagePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
