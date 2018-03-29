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

#include "updaterequestvalidatorrequest.h"
#include "updaterequestvalidatorrequest_p.h"
#include "updaterequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateRequestValidatorRequest
 *
 * @brief  Implements APIGateway UpdateRequestValidator requests.
 *
 * @see    APIGatewayClient::updateRequestValidator
 */

/**
 * @brief  Constructs a new UpdateRequestValidatorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRequestValidatorRequest::UpdateRequestValidatorRequest(const UpdateRequestValidatorRequest &other)
    : APIGatewayRequest(new UpdateRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRequestValidatorRequest object.
 */
UpdateRequestValidatorRequest::UpdateRequestValidatorRequest()
    : APIGatewayRequest(new UpdateRequestValidatorRequestPrivate(APIGatewayRequest::UpdateRequestValidatorAction, this))
{

}

bool UpdateRequestValidatorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRequestValidatorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRequestValidatorResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRequestValidatorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRequestValidatorRequestPrivate
 *
 * @brief  Private implementation for UpdateRequestValidatorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRequestValidatorRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateRequestValidatorRequest instance.
 */
UpdateRequestValidatorRequestPrivate::UpdateRequestValidatorRequestPrivate(
    const APIGatewayRequest::Action action, UpdateRequestValidatorRequest * const q)
    : UpdateRequestValidatorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRequestValidatorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRequestValidatorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRequestValidatorRequest instance.
 */
UpdateRequestValidatorRequestPrivate::UpdateRequestValidatorRequestPrivate(
    const UpdateRequestValidatorRequestPrivate &other, UpdateRequestValidatorRequest * const q)
    : UpdateRequestValidatorPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
