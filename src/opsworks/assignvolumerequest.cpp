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

#include "assignvolumerequest.h"
#include "assignvolumerequest_p.h"
#include "assignvolumeresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  AssignVolumeRequest
 *
 * @brief  Implements OpsWorks AssignVolume requests.
 *
 * @see    OpsWorksClient::assignVolume
 */

/**
 * @brief  Constructs a new AssignVolumeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssignVolumeResponse::AssignVolumeResponse(

/**
 * @brief  Constructs a new AssignVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssignVolumeRequest::AssignVolumeRequest(const AssignVolumeRequest &other)
    : OpsWorksRequest(new AssignVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssignVolumeRequest object.
 */
AssignVolumeRequest::AssignVolumeRequest()
    : OpsWorksRequest(new AssignVolumeRequestPrivate(OpsWorksRequest::AssignVolumeAction, this))
{

}

bool AssignVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssignVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssignVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * AssignVolumeRequest::response(QNetworkReply * const reply) const
{
    return new AssignVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssignVolumeRequestPrivate
 *
 * @brief  Private implementation for AssignVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssignVolumeRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public AssignVolumeRequest instance.
 */
AssignVolumeRequestPrivate::AssignVolumeRequestPrivate(
    const OpsWorksRequest::Action action, AssignVolumeRequest * const q)
    : AssignVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssignVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssignVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssignVolumeRequest instance.
 */
AssignVolumeRequestPrivate::AssignVolumeRequestPrivate(
    const AssignVolumeRequestPrivate &other, AssignVolumeRequest * const q)
    : AssignVolumePrivate(other, q)
{

}
