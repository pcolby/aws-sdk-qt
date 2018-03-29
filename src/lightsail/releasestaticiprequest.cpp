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

#include "releasestaticiprequest.h"
#include "releasestaticiprequest_p.h"
#include "releasestaticipresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  ReleaseStaticIpRequest
 *
 * @brief  Implements Lightsail ReleaseStaticIp requests.
 *
 * @see    LightsailClient::releaseStaticIp
 */

/**
 * @brief  Constructs a new ReleaseStaticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReleaseStaticIpRequest::ReleaseStaticIpRequest(const ReleaseStaticIpRequest &other)
    : LightsailRequest(new ReleaseStaticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReleaseStaticIpRequest object.
 */
ReleaseStaticIpRequest::ReleaseStaticIpRequest()
    : LightsailRequest(new ReleaseStaticIpRequestPrivate(LightsailRequest::ReleaseStaticIpAction, this))
{

}

bool ReleaseStaticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReleaseStaticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReleaseStaticIpResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * ReleaseStaticIpRequest::response(QNetworkReply * const reply) const
{
    return new ReleaseStaticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReleaseStaticIpRequestPrivate
 *
 * @brief  Private implementation for ReleaseStaticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseStaticIpRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public ReleaseStaticIpRequest instance.
 */
ReleaseStaticIpRequestPrivate::ReleaseStaticIpRequestPrivate(
    const LightsailRequest::Action action, ReleaseStaticIpRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReleaseStaticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReleaseStaticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReleaseStaticIpRequest instance.
 */
ReleaseStaticIpRequestPrivate::ReleaseStaticIpRequestPrivate(
    const ReleaseStaticIpRequestPrivate &other, ReleaseStaticIpRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
