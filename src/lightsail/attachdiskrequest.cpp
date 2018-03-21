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

#include "attachdiskrequest.h"
#include "attachdiskrequest_p.h"
#include "attachdiskresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  AttachDiskRequest
 *
 * @brief  Implements Lightsail AttachDisk requests.
 *
 * @see    LightsailClient::attachDisk
 */

/**
 * @brief  Constructs a new AttachDiskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachDiskResponse::AttachDiskResponse(

/**
 * @brief  Constructs a new AttachDiskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachDiskRequest::AttachDiskRequest(const AttachDiskRequest &other)
    : LightsailRequest(new AttachDiskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachDiskRequest object.
 */
AttachDiskRequest::AttachDiskRequest()
    : LightsailRequest(new AttachDiskRequestPrivate(LightsailRequest::AttachDiskAction, this))
{

}

bool AttachDiskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachDiskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachDiskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * AttachDiskRequest::response(QNetworkReply * const reply) const
{
    return new AttachDiskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachDiskRequestPrivate
 *
 * @brief  Private implementation for AttachDiskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachDiskRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public AttachDiskRequest instance.
 */
AttachDiskRequestPrivate::AttachDiskRequestPrivate(
    const LightsailRequest::Action action, AttachDiskRequest * const q)
    : AttachDiskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachDiskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachDiskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachDiskRequest instance.
 */
AttachDiskRequestPrivate::AttachDiskRequestPrivate(
    const AttachDiskRequestPrivate &other, AttachDiskRequest * const q)
    : AttachDiskPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
