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

#include "updatelagrequest.h"
#include "updatelagrequest_p.h"
#include "updatelagresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  UpdateLagRequest
 *
 * @brief  Implements DirectConnect UpdateLag requests.
 *
 * @see    DirectConnectClient::updateLag
 */

/**
 * @brief  Constructs a new UpdateLagRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateLagRequest::UpdateLagRequest(const UpdateLagRequest &other)
    : DirectConnectRequest(new UpdateLagRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateLagRequest object.
 */
UpdateLagRequest::UpdateLagRequest()
    : DirectConnectRequest(new UpdateLagRequestPrivate(DirectConnectRequest::UpdateLagAction, this))
{

}

bool UpdateLagRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateLagResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateLagResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * UpdateLagRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLagResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateLagRequestPrivate
 *
 * @brief  Private implementation for UpdateLagRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLagRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public UpdateLagRequest instance.
 */
UpdateLagRequestPrivate::UpdateLagRequestPrivate(
    const DirectConnectRequest::Action action, UpdateLagRequest * const q)
    : UpdateLagPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLagRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateLagRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateLagRequest instance.
 */
UpdateLagRequestPrivate::UpdateLagRequestPrivate(
    const UpdateLagRequestPrivate &other, UpdateLagRequest * const q)
    : UpdateLagPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
