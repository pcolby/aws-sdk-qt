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

#include "deregistervolumerequest.h"
#include "deregistervolumerequest_p.h"
#include "deregistervolumeresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DeregisterVolumeRequest
 *
 * @brief  Implements OpsWorks DeregisterVolume requests.
 *
 * @see    OpsWorksClient::deregisterVolume
 */

/**
 * @brief  Constructs a new DeregisterVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterVolumeRequest::DeregisterVolumeRequest(const DeregisterVolumeRequest &other)
    : OpsWorksRequest(new DeregisterVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterVolumeRequest object.
 */
DeregisterVolumeRequest::DeregisterVolumeRequest()
    : OpsWorksRequest(new DeregisterVolumeRequestPrivate(OpsWorksRequest::DeregisterVolumeAction, this))
{

}

bool DeregisterVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterVolumeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterVolumeRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterVolumeRequestPrivate
 *
 * @brief  Private implementation for DeregisterVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterVolumeRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DeregisterVolumeRequest instance.
 */
DeregisterVolumeRequestPrivate::DeregisterVolumeRequestPrivate(
    const OpsWorksRequest::Action action, DeregisterVolumeRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterVolumeRequest instance.
 */
DeregisterVolumeRequestPrivate::DeregisterVolumeRequestPrivate(
    const DeregisterVolumeRequestPrivate &other, DeregisterVolumeRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
