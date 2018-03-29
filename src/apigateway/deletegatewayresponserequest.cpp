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

#include "deletegatewayresponserequest.h"
#include "deletegatewayresponserequest_p.h"
#include "deletegatewayresponseresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  DeleteGatewayResponseRequest
 *
 * @brief  Implements APIGateway DeleteGatewayResponse requests.
 *
 * @see    APIGatewayClient::deleteGatewayResponse
 */

/**
 * @brief  Constructs a new DeleteGatewayResponseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGatewayResponseRequest::DeleteGatewayResponseRequest(const DeleteGatewayResponseRequest &other)
    : APIGatewayRequest(new DeleteGatewayResponseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGatewayResponseRequest object.
 */
DeleteGatewayResponseRequest::DeleteGatewayResponseRequest()
    : APIGatewayRequest(new DeleteGatewayResponseRequestPrivate(APIGatewayRequest::DeleteGatewayResponseAction, this))
{

}

bool DeleteGatewayResponseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGatewayResponseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGatewayResponseResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGatewayResponseRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGatewayResponseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGatewayResponseRequestPrivate
 *
 * @brief  Private implementation for DeleteGatewayResponseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGatewayResponseRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteGatewayResponseRequest instance.
 */
DeleteGatewayResponseRequestPrivate::DeleteGatewayResponseRequestPrivate(
    const APIGatewayRequest::Action action, DeleteGatewayResponseRequest * const q)
    : DeleteGatewayResponsePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGatewayResponseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGatewayResponseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGatewayResponseRequest instance.
 */
DeleteGatewayResponseRequestPrivate::DeleteGatewayResponseRequestPrivate(
    const DeleteGatewayResponseRequestPrivate &other, DeleteGatewayResponseRequest * const q)
    : DeleteGatewayResponsePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
