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

#include "attachvolumerequest.h"
#include "attachvolumerequest_p.h"
#include "attachvolumeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AttachVolumeRequest
 *
 * @brief  Implements EC2 AttachVolume requests.
 *
 * @see    EC2Client::attachVolume
 */

/**
 * @brief  Constructs a new AttachVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachVolumeResponse::AttachVolumeResponse(

/**
 * @brief  Constructs a new AttachVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachVolumeRequest::AttachVolumeRequest(const AttachVolumeRequest &other)
    : EC2Request(new AttachVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachVolumeRequest object.
 */
AttachVolumeRequest::AttachVolumeRequest()
    : EC2Request(new AttachVolumeRequestPrivate(EC2Request::AttachVolumeAction, this))
{

}

bool AttachVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AttachVolumeRequest::response(QNetworkReply * const reply) const
{
    return new AttachVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachVolumeRequestPrivate
 *
 * @brief  Private implementation for AttachVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachVolumeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AttachVolumeRequest instance.
 */
AttachVolumeRequestPrivate::AttachVolumeRequestPrivate(
    const EC2Request::Action action, AttachVolumeRequest * const q)
    : AttachVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachVolumeRequest instance.
 */
AttachVolumeRequestPrivate::AttachVolumeRequestPrivate(
    const AttachVolumeRequestPrivate &other, AttachVolumeRequest * const q)
    : AttachVolumePrivate(other, q)
{

}
