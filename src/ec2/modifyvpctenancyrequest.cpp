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

#include "modifyvpctenancyrequest.h"
#include "modifyvpctenancyrequest_p.h"
#include "modifyvpctenancyresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyVpcTenancyRequest
 *
 * @brief  Implements EC2 ModifyVpcTenancy requests.
 *
 * @see    EC2Client::modifyVpcTenancy
 */

/**
 * @brief  Constructs a new ModifyVpcTenancyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyVpcTenancyRequest::ModifyVpcTenancyRequest(const ModifyVpcTenancyRequest &other)
    : EC2Request(new ModifyVpcTenancyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyVpcTenancyRequest object.
 */
ModifyVpcTenancyRequest::ModifyVpcTenancyRequest()
    : EC2Request(new ModifyVpcTenancyRequestPrivate(EC2Request::ModifyVpcTenancyAction, this))
{

}

bool ModifyVpcTenancyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyVpcTenancyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyVpcTenancyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ModifyVpcTenancyRequest::response(QNetworkReply * const reply) const
{
    return new ModifyVpcTenancyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyVpcTenancyRequestPrivate
 *
 * @brief  Private implementation for ModifyVpcTenancyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcTenancyRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyVpcTenancyRequest instance.
 */
ModifyVpcTenancyRequestPrivate::ModifyVpcTenancyRequestPrivate(
    const EC2Request::Action action, ModifyVpcTenancyRequest * const q)
    : ModifyVpcTenancyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyVpcTenancyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyVpcTenancyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyVpcTenancyRequest instance.
 */
ModifyVpcTenancyRequestPrivate::ModifyVpcTenancyRequestPrivate(
    const ModifyVpcTenancyRequestPrivate &other, ModifyVpcTenancyRequest * const q)
    : ModifyVpcTenancyPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
