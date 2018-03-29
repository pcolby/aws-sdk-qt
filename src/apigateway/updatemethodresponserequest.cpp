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

#include "updatemethodresponserequest.h"
#include "updatemethodresponserequest_p.h"
#include "updatemethodresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateMethodResponseRequest
 *
 * @brief  Implements APIGateway UpdateMethodResponse requests.
 *
 * @see    APIGatewayClient::updateMethodResponse
 */

/**
 * @brief  Constructs a new UpdateMethodResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMethodResponseRequest::UpdateMethodResponseRequest(const UpdateMethodResponseRequest &other)
    : APIGatewayRequest(new UpdateMethodResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMethodResponseRequest object.
 */
UpdateMethodResponseRequest::UpdateMethodResponseRequest()
    : APIGatewayRequest(new UpdateMethodResponseRequestPrivate(APIGatewayRequest::UpdateMethodResponseAction, this))
{

}

bool UpdateMethodResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMethodResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMethodResponseResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMethodResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMethodResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMethodResponseRequestPrivate
 *
 * @brief  Private implementation for UpdateMethodResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMethodResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateMethodResponseRequest instance.
 */
UpdateMethodResponseRequestPrivate::UpdateMethodResponseRequestPrivate(
    const APIGatewayRequest::Action action, UpdateMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMethodResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMethodResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMethodResponseRequest instance.
 */
UpdateMethodResponseRequestPrivate::UpdateMethodResponseRequestPrivate(
    const UpdateMethodResponseRequestPrivate &other, UpdateMethodResponseRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
