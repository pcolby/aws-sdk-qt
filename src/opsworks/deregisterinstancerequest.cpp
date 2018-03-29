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

#include "deregisterinstancerequest.h"
#include "deregisterinstancerequest_p.h"
#include "deregisterinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DeregisterInstanceRequest
 *
 * @brief  Implements OpsWorks DeregisterInstance requests.
 *
 * @see    OpsWorksClient::deregisterInstance
 */

/**
 * @brief  Constructs a new DeregisterInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterInstanceRequest::DeregisterInstanceRequest(const DeregisterInstanceRequest &other)
    : OpsWorksRequest(new DeregisterInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterInstanceRequest object.
 */
DeregisterInstanceRequest::DeregisterInstanceRequest()
    : OpsWorksRequest(new DeregisterInstanceRequestPrivate(OpsWorksRequest::DeregisterInstanceAction, this))
{

}

bool DeregisterInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterInstanceRequestPrivate
 *
 * @brief  Private implementation for DeregisterInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DeregisterInstanceRequest instance.
 */
DeregisterInstanceRequestPrivate::DeregisterInstanceRequestPrivate(
    const OpsWorksRequest::Action action, DeregisterInstanceRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterInstanceRequest instance.
 */
DeregisterInstanceRequestPrivate::DeregisterInstanceRequestPrivate(
    const DeregisterInstanceRequestPrivate &other, DeregisterInstanceRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
