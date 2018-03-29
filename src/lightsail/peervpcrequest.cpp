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

#include "peervpcrequest.h"
#include "peervpcrequest_p.h"
#include "peervpcresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  PeerVpcRequest
 *
 * @brief  Implements Lightsail PeerVpc requests.
 *
 * @see    LightsailClient::peerVpc
 */

/**
 * @brief  Constructs a new PeerVpcRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PeerVpcRequest::PeerVpcRequest(const PeerVpcRequest &other)
    : LightsailRequest(new PeerVpcRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PeerVpcRequest object.
 */
PeerVpcRequest::PeerVpcRequest()
    : LightsailRequest(new PeerVpcRequestPrivate(LightsailRequest::PeerVpcAction, this))
{

}

bool PeerVpcRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PeerVpcResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PeerVpcResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * PeerVpcRequest::response(QNetworkReply * const reply) const
{
    return new PeerVpcResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PeerVpcRequestPrivate
 *
 * @brief  Private implementation for PeerVpcRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PeerVpcRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public PeerVpcRequest instance.
 */
PeerVpcRequestPrivate::PeerVpcRequestPrivate(
    const LightsailRequest::Action action, PeerVpcRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PeerVpcRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PeerVpcRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PeerVpcRequest instance.
 */
PeerVpcRequestPrivate::PeerVpcRequestPrivate(
    const PeerVpcRequestPrivate &other, PeerVpcRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
