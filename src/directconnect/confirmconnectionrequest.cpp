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

#include "confirmconnectionrequest.h"
#include "confirmconnectionrequest_p.h"
#include "confirmconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  ConfirmConnectionRequest
 *
 * @brief  Implements DirectConnect ConfirmConnection requests.
 *
 * @see    DirectConnectClient::confirmConnection
 */

/**
 * @brief  Constructs a new ConfirmConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfirmConnectionRequest::ConfirmConnectionRequest(const ConfirmConnectionRequest &other)
    : DirectConnectRequest(new ConfirmConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ConfirmConnectionRequest object.
 */
ConfirmConnectionRequest::ConfirmConnectionRequest()
    : DirectConnectRequest(new ConfirmConnectionRequestPrivate(DirectConnectRequest::ConfirmConnectionAction, this))
{

}

bool ConfirmConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ConfirmConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConfirmConnectionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmConnectionRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ConfirmConnectionRequestPrivate
 *
 * @brief  Private implementation for ConfirmConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmConnectionRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public ConfirmConnectionRequest instance.
 */
ConfirmConnectionRequestPrivate::ConfirmConnectionRequestPrivate(
    const DirectConnectRequest::Action action, ConfirmConnectionRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConfirmConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfirmConnectionRequest instance.
 */
ConfirmConnectionRequestPrivate::ConfirmConnectionRequestPrivate(
    const ConfirmConnectionRequestPrivate &other, ConfirmConnectionRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
