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

#include "setlocalconsolepasswordrequest.h"
#include "setlocalconsolepasswordrequest_p.h"
#include "setlocalconsolepasswordresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  SetLocalConsolePasswordRequest
 *
 * @brief  Implements StorageGateway SetLocalConsolePassword requests.
 *
 * @see    StorageGatewayClient::setLocalConsolePassword
 */

/**
 * @brief  Constructs a new SetLocalConsolePasswordRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetLocalConsolePasswordRequest::SetLocalConsolePasswordRequest(const SetLocalConsolePasswordRequest &other)
    : StorageGatewayRequest(new SetLocalConsolePasswordRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetLocalConsolePasswordRequest object.
 */
SetLocalConsolePasswordRequest::SetLocalConsolePasswordRequest()
    : StorageGatewayRequest(new SetLocalConsolePasswordRequestPrivate(StorageGatewayRequest::SetLocalConsolePasswordAction, this))
{

}

bool SetLocalConsolePasswordRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetLocalConsolePasswordResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetLocalConsolePasswordResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * SetLocalConsolePasswordRequest::response(QNetworkReply * const reply) const
{
    return new SetLocalConsolePasswordResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetLocalConsolePasswordRequestPrivate
 *
 * @brief  Private implementation for SetLocalConsolePasswordRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLocalConsolePasswordRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public SetLocalConsolePasswordRequest instance.
 */
SetLocalConsolePasswordRequestPrivate::SetLocalConsolePasswordRequestPrivate(
    const StorageGatewayRequest::Action action, SetLocalConsolePasswordRequest * const q)
    : StorageGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetLocalConsolePasswordRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetLocalConsolePasswordRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetLocalConsolePasswordRequest instance.
 */
SetLocalConsolePasswordRequestPrivate::SetLocalConsolePasswordRequestPrivate(
    const SetLocalConsolePasswordRequestPrivate &other, SetLocalConsolePasswordRequest * const q)
    : StorageGatewayRequestPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
