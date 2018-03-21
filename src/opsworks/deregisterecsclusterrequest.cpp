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

#include "deregisterecsclusterrequest.h"
#include "deregisterecsclusterrequest_p.h"
#include "deregisterecsclusterresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeregisterEcsClusterRequest
 *
 * @brief  Implements OpsWorks DeregisterEcsCluster requests.
 *
 * @see    OpsWorksClient::deregisterEcsCluster
 */

/**
 * @brief  Constructs a new DeregisterEcsClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterEcsClusterRequest::DeregisterEcsClusterRequest(const DeregisterEcsClusterRequest &other)
    : OpsWorksRequest(new DeregisterEcsClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterEcsClusterRequest object.
 */
DeregisterEcsClusterRequest::DeregisterEcsClusterRequest()
    : OpsWorksRequest(new DeregisterEcsClusterRequestPrivate(OpsWorksRequest::DeregisterEcsClusterAction, this))
{

}

bool DeregisterEcsClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterEcsClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterEcsClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DeregisterEcsClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterEcsClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterEcsClusterRequestPrivate
 *
 * @brief  Private implementation for DeregisterEcsClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterEcsClusterRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DeregisterEcsClusterRequest instance.
 */
DeregisterEcsClusterRequestPrivate::DeregisterEcsClusterRequestPrivate(
    const OpsWorksRequest::Action action, DeregisterEcsClusterRequest * const q)
    : DeregisterEcsClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterEcsClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterEcsClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterEcsClusterRequest instance.
 */
DeregisterEcsClusterRequestPrivate::DeregisterEcsClusterRequestPrivate(
    const DeregisterEcsClusterRequestPrivate &other, DeregisterEcsClusterRequest * const q)
    : DeregisterEcsClusterPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
