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

#include "getmodelrequest.h"
#include "getmodelrequest_p.h"
#include "getmodelresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetModelRequest
 *
 * @brief  Implements APIGateway GetModel requests.
 *
 * @see    APIGatewayClient::getModel
 */

/**
 * @brief  Constructs a new GetModelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetModelRequest::GetModelRequest(const GetModelRequest &other)
    : APIGatewayRequest(new GetModelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetModelRequest object.
 */
GetModelRequest::GetModelRequest()
    : APIGatewayRequest(new GetModelRequestPrivate(APIGatewayRequest::GetModelAction, this))
{

}

bool GetModelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetModelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetModelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelRequest::response(QNetworkReply * const reply) const
{
    return new GetModelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetModelRequestPrivate
 *
 * @brief  Private implementation for GetModelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetModelRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetModelRequest instance.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const APIGatewayRequest::Action action, GetModelRequest * const q)
    : GetModelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetModelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetModelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetModelRequest instance.
 */
GetModelRequestPrivate::GetModelRequestPrivate(
    const GetModelRequestPrivate &other, GetModelRequest * const q)
    : GetModelPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
