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

#include "deregisterrdsdbinstancerequest.h"
#include "deregisterrdsdbinstancerequest_p.h"
#include "deregisterrdsdbinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DeregisterRdsDbInstanceRequest
 *
 * @brief  Implements OpsWorks DeregisterRdsDbInstance requests.
 *
 * @see    OpsWorksClient::deregisterRdsDbInstance
 */

/**
 * @brief  Constructs a new DeregisterRdsDbInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterRdsDbInstanceRequest::DeregisterRdsDbInstanceRequest(const DeregisterRdsDbInstanceRequest &other)
    : OpsWorksRequest(new DeregisterRdsDbInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterRdsDbInstanceRequest object.
 */
DeregisterRdsDbInstanceRequest::DeregisterRdsDbInstanceRequest()
    : OpsWorksRequest(new DeregisterRdsDbInstanceRequestPrivate(OpsWorksRequest::DeregisterRdsDbInstanceAction, this))
{

}

bool DeregisterRdsDbInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterRdsDbInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterRdsDbInstanceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterRdsDbInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterRdsDbInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterRdsDbInstanceRequestPrivate
 *
 * @brief  Private implementation for DeregisterRdsDbInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterRdsDbInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DeregisterRdsDbInstanceRequest instance.
 */
DeregisterRdsDbInstanceRequestPrivate::DeregisterRdsDbInstanceRequestPrivate(
    const OpsWorksRequest::Action action, DeregisterRdsDbInstanceRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterRdsDbInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterRdsDbInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterRdsDbInstanceRequest instance.
 */
DeregisterRdsDbInstanceRequestPrivate::DeregisterRdsDbInstanceRequestPrivate(
    const DeregisterRdsDbInstanceRequestPrivate &other, DeregisterRdsDbInstanceRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
