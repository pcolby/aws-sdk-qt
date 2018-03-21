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

#include "attachstaticiprequest.h"
#include "attachstaticiprequest_p.h"
#include "attachstaticipresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  AttachStaticIpRequest
 *
 * @brief  Implements Lightsail AttachStaticIp requests.
 *
 * @see    LightsailClient::attachStaticIp
 */

/**
 * @brief  Constructs a new AttachStaticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachStaticIpRequest::AttachStaticIpRequest(const AttachStaticIpRequest &other)
    : LightsailRequest(new AttachStaticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachStaticIpRequest object.
 */
AttachStaticIpRequest::AttachStaticIpRequest()
    : LightsailRequest(new AttachStaticIpRequestPrivate(LightsailRequest::AttachStaticIpAction, this))
{

}

bool AttachStaticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachStaticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachStaticIpResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * AttachStaticIpRequest::response(QNetworkReply * const reply) const
{
    return new AttachStaticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachStaticIpRequestPrivate
 *
 * @brief  Private implementation for AttachStaticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachStaticIpRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public AttachStaticIpRequest instance.
 */
AttachStaticIpRequestPrivate::AttachStaticIpRequestPrivate(
    const LightsailRequest::Action action, AttachStaticIpRequest * const q)
    : AttachStaticIpPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachStaticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachStaticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachStaticIpRequest instance.
 */
AttachStaticIpRequestPrivate::AttachStaticIpRequestPrivate(
    const AttachStaticIpRequestPrivate &other, AttachStaticIpRequest * const q)
    : AttachStaticIpPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
