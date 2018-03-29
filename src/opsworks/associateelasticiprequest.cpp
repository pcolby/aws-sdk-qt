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

#include "associateelasticiprequest.h"
#include "associateelasticiprequest_p.h"
#include "associateelasticipresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  AssociateElasticIpRequest
 *
 * @brief  Implements OpsWorks AssociateElasticIp requests.
 *
 * @see    OpsWorksClient::associateElasticIp
 */

/**
 * @brief  Constructs a new AssociateElasticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateElasticIpRequest::AssociateElasticIpRequest(const AssociateElasticIpRequest &other)
    : OpsWorksRequest(new AssociateElasticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateElasticIpRequest object.
 */
AssociateElasticIpRequest::AssociateElasticIpRequest()
    : OpsWorksRequest(new AssociateElasticIpRequestPrivate(OpsWorksRequest::AssociateElasticIpAction, this))
{

}

bool AssociateElasticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateElasticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateElasticIpResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * AssociateElasticIpRequest::response(QNetworkReply * const reply) const
{
    return new AssociateElasticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateElasticIpRequestPrivate
 *
 * @brief  Private implementation for AssociateElasticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateElasticIpRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public AssociateElasticIpRequest instance.
 */
AssociateElasticIpRequestPrivate::AssociateElasticIpRequestPrivate(
    const OpsWorksRequest::Action action, AssociateElasticIpRequest * const q)
    : AssociateElasticIpPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateElasticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateElasticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateElasticIpRequest instance.
 */
AssociateElasticIpRequestPrivate::AssociateElasticIpRequestPrivate(
    const AssociateElasticIpRequestPrivate &other, AssociateElasticIpRequest * const q)
    : AssociateElasticIpPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
