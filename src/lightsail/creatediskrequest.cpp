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

#include "creatediskrequest.h"
#include "creatediskrequest_p.h"
#include "creatediskresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateDiskRequest
 *
 * @brief  Implements Lightsail CreateDisk requests.
 *
 * @see    LightsailClient::createDisk
 */

/**
 * @brief  Constructs a new CreateDiskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDiskRequest::CreateDiskRequest(const CreateDiskRequest &other)
    : LightsailRequest(new CreateDiskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDiskRequest object.
 */
CreateDiskRequest::CreateDiskRequest()
    : LightsailRequest(new CreateDiskRequestPrivate(LightsailRequest::CreateDiskAction, this))
{

}

bool CreateDiskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDiskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDiskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * CreateDiskRequest::response(QNetworkReply * const reply) const
{
    return new CreateDiskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDiskRequestPrivate
 *
 * @brief  Private implementation for CreateDiskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CreateDiskRequest instance.
 */
CreateDiskRequestPrivate::CreateDiskRequestPrivate(
    const LightsailRequest::Action action, CreateDiskRequest * const q)
    : CreateDiskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDiskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDiskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDiskRequest instance.
 */
CreateDiskRequestPrivate::CreateDiskRequestPrivate(
    const CreateDiskRequestPrivate &other, CreateDiskRequest * const q)
    : CreateDiskPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace AWS
