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

#include "updateinstancerequest.h"
#include "updateinstancerequest_p.h"
#include "updateinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  UpdateInstanceRequest
 *
 * @brief  Implements OpsWorks UpdateInstance requests.
 *
 * @see    OpsWorksClient::updateInstance
 */

/**
 * @brief  Constructs a new UpdateInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateInstanceRequest::UpdateInstanceRequest(const UpdateInstanceRequest &other)
    : OpsWorksRequest(new UpdateInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateInstanceRequest object.
 */
UpdateInstanceRequest::UpdateInstanceRequest()
    : OpsWorksRequest(new UpdateInstanceRequestPrivate(OpsWorksRequest::UpdateInstanceAction, this))
{

}

bool UpdateInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * UpdateInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateInstanceRequestPrivate
 *
 * @brief  Private implementation for UpdateInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UpdateInstanceRequest instance.
 */
UpdateInstanceRequestPrivate::UpdateInstanceRequestPrivate(
    const OpsWorksRequest::Action action, UpdateInstanceRequest * const q)
    : UpdateInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateInstanceRequest instance.
 */
UpdateInstanceRequestPrivate::UpdateInstanceRequestPrivate(
    const UpdateInstanceRequestPrivate &other, UpdateInstanceRequest * const q)
    : UpdateInstancePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
