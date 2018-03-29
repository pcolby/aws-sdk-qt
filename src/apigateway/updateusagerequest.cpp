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

#include "updateusagerequest.h"
#include "updateusagerequest_p.h"
#include "updateusageresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateUsageRequest
 *
 * @brief  Implements APIGateway UpdateUsage requests.
 *
 * @see    APIGatewayClient::updateUsage
 */

/**
 * @brief  Constructs a new UpdateUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateUsageRequest::UpdateUsageRequest(const UpdateUsageRequest &other)
    : APIGatewayRequest(new UpdateUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateUsageRequest object.
 */
UpdateUsageRequest::UpdateUsageRequest()
    : APIGatewayRequest(new UpdateUsageRequestPrivate(APIGatewayRequest::UpdateUsageAction, this))
{

}

bool UpdateUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateUsageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUsageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateUsageRequestPrivate
 *
 * @brief  Private implementation for UpdateUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUsageRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateUsageRequest instance.
 */
UpdateUsageRequestPrivate::UpdateUsageRequestPrivate(
    const APIGatewayRequest::Action action, UpdateUsageRequest * const q)
    : UpdateUsagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateUsageRequest instance.
 */
UpdateUsageRequestPrivate::UpdateUsageRequestPrivate(
    const UpdateUsageRequestPrivate &other, UpdateUsageRequest * const q)
    : UpdateUsagePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
