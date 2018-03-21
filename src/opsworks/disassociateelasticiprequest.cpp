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

#include "disassociateelasticiprequest.h"
#include "disassociateelasticiprequest_p.h"
#include "disassociateelasticipresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DisassociateElasticIpRequest
 *
 * @brief  Implements OpsWorks DisassociateElasticIp requests.
 *
 * @see    OpsWorksClient::disassociateElasticIp
 */

/**
 * @brief  Constructs a new DisassociateElasticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateElasticIpRequest::DisassociateElasticIpRequest(const DisassociateElasticIpRequest &other)
    : OpsWorksRequest(new DisassociateElasticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateElasticIpRequest object.
 */
DisassociateElasticIpRequest::DisassociateElasticIpRequest()
    : OpsWorksRequest(new DisassociateElasticIpRequestPrivate(OpsWorksRequest::DisassociateElasticIpAction, this))
{

}

bool DisassociateElasticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateElasticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateElasticIpResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DisassociateElasticIpRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateElasticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateElasticIpRequestPrivate
 *
 * @brief  Private implementation for DisassociateElasticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateElasticIpRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DisassociateElasticIpRequest instance.
 */
DisassociateElasticIpRequestPrivate::DisassociateElasticIpRequestPrivate(
    const OpsWorksRequest::Action action, DisassociateElasticIpRequest * const q)
    : DisassociateElasticIpPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateElasticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateElasticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateElasticIpRequest instance.
 */
DisassociateElasticIpRequestPrivate::DisassociateElasticIpRequestPrivate(
    const DisassociateElasticIpRequestPrivate &other, DisassociateElasticIpRequest * const q)
    : DisassociateElasticIpPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
