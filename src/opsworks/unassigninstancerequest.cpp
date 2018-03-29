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

#include "unassigninstancerequest.h"
#include "unassigninstancerequest_p.h"
#include "unassigninstanceresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  UnassignInstanceRequest
 *
 * @brief  Implements OpsWorks UnassignInstance requests.
 *
 * @see    OpsWorksClient::unassignInstance
 */

/**
 * @brief  Constructs a new UnassignInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnassignInstanceRequest::UnassignInstanceRequest(const UnassignInstanceRequest &other)
    : OpsWorksRequest(new UnassignInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnassignInstanceRequest object.
 */
UnassignInstanceRequest::UnassignInstanceRequest()
    : OpsWorksRequest(new UnassignInstanceRequestPrivate(OpsWorksRequest::UnassignInstanceAction, this))
{

}

bool UnassignInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnassignInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnassignInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * UnassignInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UnassignInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnassignInstanceRequestPrivate
 *
 * @brief  Private implementation for UnassignInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnassignInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UnassignInstanceRequest instance.
 */
UnassignInstanceRequestPrivate::UnassignInstanceRequestPrivate(
    const OpsWorksRequest::Action action, UnassignInstanceRequest * const q)
    : UnassignInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnassignInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnassignInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnassignInstanceRequest instance.
 */
UnassignInstanceRequestPrivate::UnassignInstanceRequestPrivate(
    const UnassignInstanceRequestPrivate &other, UnassignInstanceRequest * const q)
    : UnassignInstancePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
