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

#include "updatevolumerequest.h"
#include "updatevolumerequest_p.h"
#include "updatevolumeresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  UpdateVolumeRequest
 *
 * @brief  Implements OpsWorks UpdateVolume requests.
 *
 * @see    OpsWorksClient::updateVolume
 */

/**
 * @brief  Constructs a new UpdateVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateVolumeResponse::UpdateVolumeResponse(

/**
 * @brief  Constructs a new UpdateVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateVolumeRequest::UpdateVolumeRequest(const UpdateVolumeRequest &other)
    : OpsWorksRequest(new UpdateVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateVolumeRequest object.
 */
UpdateVolumeRequest::UpdateVolumeRequest()
    : OpsWorksRequest(new UpdateVolumeRequestPrivate(OpsWorksRequest::UpdateVolumeAction, this))
{

}

bool UpdateVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * UpdateVolumeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateVolumeRequestPrivate
 *
 * @brief  Private implementation for UpdateVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVolumeRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UpdateVolumeRequest instance.
 */
UpdateVolumeRequestPrivate::UpdateVolumeRequestPrivate(
    const OpsWorksRequest::Action action, UpdateVolumeRequest * const q)
    : UpdateVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateVolumeRequest instance.
 */
UpdateVolumeRequestPrivate::UpdateVolumeRequestPrivate(
    const UpdateVolumeRequestPrivate &other, UpdateVolumeRequest * const q)
    : UpdateVolumePrivate(other, q)
{

}
