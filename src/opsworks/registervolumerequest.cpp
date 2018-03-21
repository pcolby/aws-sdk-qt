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

#include "registervolumerequest.h"
#include "registervolumerequest_p.h"
#include "registervolumeresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  RegisterVolumeRequest
 *
 * @brief  Implements OpsWorks RegisterVolume requests.
 *
 * @see    OpsWorksClient::registerVolume
 */

/**
 * @brief  Constructs a new RegisterVolumeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterVolumeRequest::RegisterVolumeRequest(const RegisterVolumeRequest &other)
    : OpsWorksRequest(new RegisterVolumeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterVolumeRequest object.
 */
RegisterVolumeRequest::RegisterVolumeRequest()
    : OpsWorksRequest(new RegisterVolumeRequestPrivate(OpsWorksRequest::RegisterVolumeAction, this))
{

}

bool RegisterVolumeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterVolumeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterVolumeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * RegisterVolumeRequest::response(QNetworkReply * const reply) const
{
    return new RegisterVolumeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterVolumeRequestPrivate
 *
 * @brief  Private implementation for RegisterVolumeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterVolumeRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public RegisterVolumeRequest instance.
 */
RegisterVolumeRequestPrivate::RegisterVolumeRequestPrivate(
    const OpsWorksRequest::Action action, RegisterVolumeRequest * const q)
    : RegisterVolumePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterVolumeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterVolumeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterVolumeRequest instance.
 */
RegisterVolumeRequestPrivate::RegisterVolumeRequestPrivate(
    const RegisterVolumeRequestPrivate &other, RegisterVolumeRequest * const q)
    : RegisterVolumePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
