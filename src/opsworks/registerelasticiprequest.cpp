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

#include "registerelasticiprequest.h"
#include "registerelasticiprequest_p.h"
#include "registerelasticipresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  RegisterElasticIpRequest
 *
 * @brief  Implements OpsWorks RegisterElasticIp requests.
 *
 * @see    OpsWorksClient::registerElasticIp
 */

/**
 * @brief  Constructs a new RegisterElasticIpRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterElasticIpRequest::RegisterElasticIpRequest(const RegisterElasticIpRequest &other)
    : OpsWorksRequest(new RegisterElasticIpRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterElasticIpRequest object.
 */
RegisterElasticIpRequest::RegisterElasticIpRequest()
    : OpsWorksRequest(new RegisterElasticIpRequestPrivate(OpsWorksRequest::RegisterElasticIpAction, this))
{

}

bool RegisterElasticIpRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterElasticIpResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterElasticIpResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * RegisterElasticIpRequest::response(QNetworkReply * const reply) const
{
    return new RegisterElasticIpResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterElasticIpRequestPrivate
 *
 * @brief  Private implementation for RegisterElasticIpRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterElasticIpRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public RegisterElasticIpRequest instance.
 */
RegisterElasticIpRequestPrivate::RegisterElasticIpRequestPrivate(
    const OpsWorksRequest::Action action, RegisterElasticIpRequest * const q)
    : RegisterElasticIpPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterElasticIpRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterElasticIpRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterElasticIpRequest instance.
 */
RegisterElasticIpRequestPrivate::RegisterElasticIpRequestPrivate(
    const RegisterElasticIpRequestPrivate &other, RegisterElasticIpRequest * const q)
    : RegisterElasticIpPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
