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

#include "deleteinterconnectrequest.h"
#include "deleteinterconnectrequest_p.h"
#include "deleteinterconnectresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DeleteInterconnectRequest
 *
 * @brief  Implements DirectConnect DeleteInterconnect requests.
 *
 * @see    DirectConnectClient::deleteInterconnect
 */

/**
 * @brief  Constructs a new DeleteInterconnectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteInterconnectRequest::DeleteInterconnectRequest(const DeleteInterconnectRequest &other)
    : DirectConnectRequest(new DeleteInterconnectRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteInterconnectRequest object.
 */
DeleteInterconnectRequest::DeleteInterconnectRequest()
    : DirectConnectRequest(new DeleteInterconnectRequestPrivate(DirectConnectRequest::DeleteInterconnectAction, this))
{

}

bool DeleteInterconnectRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteInterconnectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteInterconnectResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DeleteInterconnectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInterconnectResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteInterconnectRequestPrivate
 *
 * @brief  Private implementation for DeleteInterconnectRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInterconnectRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DeleteInterconnectRequest instance.
 */
DeleteInterconnectRequestPrivate::DeleteInterconnectRequestPrivate(
    const DirectConnectRequest::Action action, DeleteInterconnectRequest * const q)
    : DeleteInterconnectPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInterconnectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteInterconnectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteInterconnectRequest instance.
 */
DeleteInterconnectRequestPrivate::DeleteInterconnectRequestPrivate(
    const DeleteInterconnectRequestPrivate &other, DeleteInterconnectRequest * const q)
    : DeleteInterconnectPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
