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

#include "deletelagrequest.h"
#include "deletelagrequest_p.h"
#include "deletelagresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DeleteLagRequest
 *
 * @brief  Implements DirectConnect DeleteLag requests.
 *
 * @see    DirectConnectClient::deleteLag
 */

/**
 * @brief  Constructs a new DeleteLagRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLagRequest::DeleteLagRequest(const DeleteLagRequest &other)
    : DirectConnectRequest(new DeleteLagRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLagRequest object.
 */
DeleteLagRequest::DeleteLagRequest()
    : DirectConnectRequest(new DeleteLagRequestPrivate(DirectConnectRequest::DeleteLagAction, this))
{

}

bool DeleteLagRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLagResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLagResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DeleteLagRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLagResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLagRequestPrivate
 *
 * @brief  Private implementation for DeleteLagRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLagRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DeleteLagRequest instance.
 */
DeleteLagRequestPrivate::DeleteLagRequestPrivate(
    const DirectConnectRequest::Action action, DeleteLagRequest * const q)
    : DeleteLagPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLagRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLagRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLagRequest instance.
 */
DeleteLagRequestPrivate::DeleteLagRequestPrivate(
    const DeleteLagRequestPrivate &other, DeleteLagRequest * const q)
    : DeleteLagPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
