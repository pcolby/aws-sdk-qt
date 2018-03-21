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

#include "createstagerequest.h"
#include "createstagerequest_p.h"
#include "createstageresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateStageRequest
 *
 * @brief  Implements APIGateway CreateStage requests.
 *
 * @see    APIGatewayClient::createStage
 */

/**
 * @brief  Constructs a new CreateStageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStageResponse::CreateStageResponse(

/**
 * @brief  Constructs a new CreateStageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStageRequest::CreateStageRequest(const CreateStageRequest &other)
    : APIGatewayRequest(new CreateStageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStageRequest object.
 */
CreateStageRequest::CreateStageRequest()
    : APIGatewayRequest(new CreateStageRequestPrivate(APIGatewayRequest::CreateStageAction, this))
{

}

bool CreateStageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * CreateStageRequest::response(QNetworkReply * const reply) const
{
    return new CreateStageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStageRequestPrivate
 *
 * @brief  Private implementation for CreateStageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStageRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateStageRequest instance.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const APIGatewayRequest::Action action, CreateStageRequest * const q)
    : CreateStagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStageRequest instance.
 */
CreateStageRequestPrivate::CreateStageRequestPrivate(
    const CreateStageRequestPrivate &other, CreateStageRequest * const q)
    : CreateStagePrivate(other, q)
{

}
