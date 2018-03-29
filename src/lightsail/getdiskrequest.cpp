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

#include "getdiskrequest.h"
#include "getdiskrequest_p.h"
#include "getdiskresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetDiskRequest
 *
 * @brief  Implements Lightsail GetDisk requests.
 *
 * @see    LightsailClient::getDisk
 */

/**
 * @brief  Constructs a new GetDiskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDiskRequest::GetDiskRequest(const GetDiskRequest &other)
    : LightsailRequest(new GetDiskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDiskRequest object.
 */
GetDiskRequest::GetDiskRequest()
    : LightsailRequest(new GetDiskRequestPrivate(LightsailRequest::GetDiskAction, this))
{

}

bool GetDiskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDiskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDiskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetDiskRequest::response(QNetworkReply * const reply) const
{
    return new GetDiskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDiskRequestPrivate
 *
 * @brief  Private implementation for GetDiskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiskRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetDiskRequest instance.
 */
GetDiskRequestPrivate::GetDiskRequestPrivate(
    const LightsailRequest::Action action, GetDiskRequest * const q)
    : GetDiskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDiskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDiskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDiskRequest instance.
 */
GetDiskRequestPrivate::GetDiskRequestPrivate(
    const GetDiskRequestPrivate &other, GetDiskRequest * const q)
    : GetDiskPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
