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

#include "importvolumerequest.h"
#include "importvolumerequest_p.h"
#include "importvolumeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ImportVolumeRequest
 *
 * @brief  Implements EC2 ImportVolume requests.
 *
 * @see    EC2Client::importVolume
 */

/**
 * @brief  Constructs a new ImportVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportVolumeResponse::ImportVolumeResponse(

/**
 * @brief  Constructs a new ImportVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportVolumeRequest::ImportVolumeRequest(const ImportVolumeRequest &other)
    : EC2Request(new ImportVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportVolumeRequest object.
 */
ImportVolumeRequest::ImportVolumeRequest()
    : EC2Request(new ImportVolumeRequestPrivate(EC2Request::ImportVolumeAction, this))
{

}

bool ImportVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ImportVolumeRequest::response(QNetworkReply * const reply) const
{
    return new ImportVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportVolumeRequestPrivate
 *
 * @brief  Private implementation for ImportVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportVolumeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ImportVolumeRequest instance.
 */
ImportVolumeRequestPrivate::ImportVolumeRequestPrivate(
    const EC2Request::Action action, ImportVolumeRequest * const q)
    : ImportVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportVolumeRequest instance.
 */
ImportVolumeRequestPrivate::ImportVolumeRequestPrivate(
    const ImportVolumeRequestPrivate &other, ImportVolumeRequest * const q)
    : ImportVolumePrivate(other, q)
{

}
