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

#include "deregisterelasticiprequest.h"
#include "deregisterelasticiprequest_p.h"
#include "deregisterelasticipresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeregisterElasticIpRequest
 *
 * @brief  Implements OpsWorks DeregisterElasticIp requests.
 *
 * @see    OpsWorksClient::deregisterElasticIp
 */

/**
 * @brief  Constructs a new DeregisterElasticIpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterElasticIpResponse::DeregisterElasticIpResponse(

/**
 * @brief  Constructs a new DeregisterElasticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterElasticIpRequest::DeregisterElasticIpRequest(const DeregisterElasticIpRequest &other)
    : OpsWorksRequest(new DeregisterElasticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterElasticIpRequest object.
 */
DeregisterElasticIpRequest::DeregisterElasticIpRequest()
    : OpsWorksRequest(new DeregisterElasticIpRequestPrivate(OpsWorksRequest::DeregisterElasticIpAction, this))
{

}

bool DeregisterElasticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterElasticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterElasticIpResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DeregisterElasticIpRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterElasticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterElasticIpRequestPrivate
 *
 * @brief  Private implementation for DeregisterElasticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterElasticIpRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DeregisterElasticIpRequest instance.
 */
DeregisterElasticIpRequestPrivate::DeregisterElasticIpRequestPrivate(
    const OpsWorksRequest::Action action, DeregisterElasticIpRequest * const q)
    : DeregisterElasticIpPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterElasticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterElasticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterElasticIpRequest instance.
 */
DeregisterElasticIpRequestPrivate::DeregisterElasticIpRequestPrivate(
    const DeregisterElasticIpRequestPrivate &other, DeregisterElasticIpRequest * const q)
    : DeregisterElasticIpPrivate(other, q)
{

}
