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

#include "detachstaticiprequest.h"
#include "detachstaticiprequest_p.h"
#include "detachstaticipresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DetachStaticIpRequest
 *
 * @brief  Implements Lightsail DetachStaticIp requests.
 *
 * @see    LightsailClient::detachStaticIp
 */

/**
 * @brief  Constructs a new DetachStaticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachStaticIpRequest::DetachStaticIpRequest(const DetachStaticIpRequest &other)
    : LightsailRequest(new DetachStaticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachStaticIpRequest object.
 */
DetachStaticIpRequest::DetachStaticIpRequest()
    : LightsailRequest(new DetachStaticIpRequestPrivate(LightsailRequest::DetachStaticIpAction, this))
{

}

bool DetachStaticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachStaticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachStaticIpResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DetachStaticIpRequest::response(QNetworkReply * const reply) const
{
    return new DetachStaticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachStaticIpRequestPrivate
 *
 * @brief  Private implementation for DetachStaticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachStaticIpRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DetachStaticIpRequest instance.
 */
DetachStaticIpRequestPrivate::DetachStaticIpRequestPrivate(
    const LightsailRequest::Action action, DetachStaticIpRequest * const q)
    : DetachStaticIpPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachStaticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachStaticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachStaticIpRequest instance.
 */
DetachStaticIpRequestPrivate::DetachStaticIpRequestPrivate(
    const DetachStaticIpRequestPrivate &other, DetachStaticIpRequest * const q)
    : DetachStaticIpPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
