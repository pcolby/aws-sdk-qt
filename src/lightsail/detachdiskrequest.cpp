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

#include "detachdiskrequest.h"
#include "detachdiskrequest_p.h"
#include "detachdiskresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  DetachDiskRequest
 *
 * @brief  Implements Lightsail DetachDisk requests.
 *
 * @see    LightsailClient::detachDisk
 */

/**
 * @brief  Constructs a new DetachDiskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachDiskRequest::DetachDiskRequest(const DetachDiskRequest &other)
    : LightsailRequest(new DetachDiskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachDiskRequest object.
 */
DetachDiskRequest::DetachDiskRequest()
    : LightsailRequest(new DetachDiskRequestPrivate(LightsailRequest::DetachDiskAction, this))
{

}

bool DetachDiskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachDiskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachDiskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * DetachDiskRequest::response(QNetworkReply * const reply) const
{
    return new DetachDiskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachDiskRequestPrivate
 *
 * @brief  Private implementation for DetachDiskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachDiskRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public DetachDiskRequest instance.
 */
DetachDiskRequestPrivate::DetachDiskRequestPrivate(
    const LightsailRequest::Action action, DetachDiskRequest * const q)
    : DetachDiskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachDiskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachDiskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachDiskRequest instance.
 */
DetachDiskRequestPrivate::DetachDiskRequestPrivate(
    const DetachDiskRequestPrivate &other, DetachDiskRequest * const q)
    : DetachDiskPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
