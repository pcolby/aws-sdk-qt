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

#include "allocatestaticiprequest.h"
#include "allocatestaticiprequest_p.h"
#include "allocatestaticipresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  AllocateStaticIpRequest
 *
 * @brief  Implements Lightsail AllocateStaticIp requests.
 *
 * @see    LightsailClient::allocateStaticIp
 */

/**
 * @brief  Constructs a new AllocateStaticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AllocateStaticIpRequest::AllocateStaticIpRequest(const AllocateStaticIpRequest &other)
    : LightsailRequest(new AllocateStaticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AllocateStaticIpRequest object.
 */
AllocateStaticIpRequest::AllocateStaticIpRequest()
    : LightsailRequest(new AllocateStaticIpRequestPrivate(LightsailRequest::AllocateStaticIpAction, this))
{

}

bool AllocateStaticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AllocateStaticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AllocateStaticIpResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * AllocateStaticIpRequest::response(QNetworkReply * const reply) const
{
    return new AllocateStaticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AllocateStaticIpRequestPrivate
 *
 * @brief  Private implementation for AllocateStaticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AllocateStaticIpRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public AllocateStaticIpRequest instance.
 */
AllocateStaticIpRequestPrivate::AllocateStaticIpRequestPrivate(
    const LightsailRequest::Action action, AllocateStaticIpRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AllocateStaticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AllocateStaticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AllocateStaticIpRequest instance.
 */
AllocateStaticIpRequestPrivate::AllocateStaticIpRequestPrivate(
    const AllocateStaticIpRequestPrivate &other, AllocateStaticIpRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
