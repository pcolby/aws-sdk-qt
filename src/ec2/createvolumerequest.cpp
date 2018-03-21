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

#include "createvolumerequest.h"
#include "createvolumerequest_p.h"
#include "createvolumeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateVolumeRequest
 *
 * @brief  Implements EC2 CreateVolume requests.
 *
 * @see    EC2Client::createVolume
 */

/**
 * @brief  Constructs a new CreateVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVolumeRequest::CreateVolumeRequest(const CreateVolumeRequest &other)
    : EC2Request(new CreateVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVolumeRequest object.
 */
CreateVolumeRequest::CreateVolumeRequest()
    : EC2Request(new CreateVolumeRequestPrivate(EC2Request::CreateVolumeAction, this))
{

}

bool CreateVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateVolumeRequest::response(QNetworkReply * const reply) const
{
    return new CreateVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVolumeRequestPrivate
 *
 * @brief  Private implementation for CreateVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVolumeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateVolumeRequest instance.
 */
CreateVolumeRequestPrivate::CreateVolumeRequestPrivate(
    const EC2Request::Action action, CreateVolumeRequest * const q)
    : CreateVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVolumeRequest instance.
 */
CreateVolumeRequestPrivate::CreateVolumeRequestPrivate(
    const CreateVolumeRequestPrivate &other, CreateVolumeRequest * const q)
    : CreateVolumePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
