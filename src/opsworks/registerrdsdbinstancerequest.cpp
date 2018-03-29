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

#include "registerrdsdbinstancerequest.h"
#include "registerrdsdbinstancerequest_p.h"
#include "registerrdsdbinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  RegisterRdsDbInstanceRequest
 *
 * @brief  Implements OpsWorks RegisterRdsDbInstance requests.
 *
 * @see    OpsWorksClient::registerRdsDbInstance
 */

/**
 * @brief  Constructs a new RegisterRdsDbInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterRdsDbInstanceRequest::RegisterRdsDbInstanceRequest(const RegisterRdsDbInstanceRequest &other)
    : OpsWorksRequest(new RegisterRdsDbInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterRdsDbInstanceRequest object.
 */
RegisterRdsDbInstanceRequest::RegisterRdsDbInstanceRequest()
    : OpsWorksRequest(new RegisterRdsDbInstanceRequestPrivate(OpsWorksRequest::RegisterRdsDbInstanceAction, this))
{

}

bool RegisterRdsDbInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterRdsDbInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterRdsDbInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * RegisterRdsDbInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RegisterRdsDbInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterRdsDbInstanceRequestPrivate
 *
 * @brief  Private implementation for RegisterRdsDbInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterRdsDbInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public RegisterRdsDbInstanceRequest instance.
 */
RegisterRdsDbInstanceRequestPrivate::RegisterRdsDbInstanceRequestPrivate(
    const OpsWorksRequest::Action action, RegisterRdsDbInstanceRequest * const q)
    : RegisterRdsDbInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterRdsDbInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterRdsDbInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterRdsDbInstanceRequest instance.
 */
RegisterRdsDbInstanceRequestPrivate::RegisterRdsDbInstanceRequestPrivate(
    const RegisterRdsDbInstanceRequestPrivate &other, RegisterRdsDbInstanceRequest * const q)
    : RegisterRdsDbInstancePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
