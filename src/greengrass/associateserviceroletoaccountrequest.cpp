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

#include "associateserviceroletoaccountrequest.h"
#include "associateserviceroletoaccountrequest_p.h"
#include "associateserviceroletoaccountresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  AssociateServiceRoleToAccountRequest
 *
 * @brief  Implements Greengrass AssociateServiceRoleToAccount requests.
 *
 * @see    GreengrassClient::associateServiceRoleToAccount
 */

/**
 * @brief  Constructs a new AssociateServiceRoleToAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateServiceRoleToAccountRequest::AssociateServiceRoleToAccountRequest(const AssociateServiceRoleToAccountRequest &other)
    : GreengrassRequest(new AssociateServiceRoleToAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateServiceRoleToAccountRequest object.
 */
AssociateServiceRoleToAccountRequest::AssociateServiceRoleToAccountRequest()
    : GreengrassRequest(new AssociateServiceRoleToAccountRequestPrivate(GreengrassRequest::AssociateServiceRoleToAccountAction, this))
{

}

bool AssociateServiceRoleToAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateServiceRoleToAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateServiceRoleToAccountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * AssociateServiceRoleToAccountRequest::response(QNetworkReply * const reply) const
{
    return new AssociateServiceRoleToAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateServiceRoleToAccountRequestPrivate
 *
 * @brief  Private implementation for AssociateServiceRoleToAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateServiceRoleToAccountRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public AssociateServiceRoleToAccountRequest instance.
 */
AssociateServiceRoleToAccountRequestPrivate::AssociateServiceRoleToAccountRequestPrivate(
    const GreengrassRequest::Action action, AssociateServiceRoleToAccountRequest * const q)
    : AssociateServiceRoleToAccountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateServiceRoleToAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateServiceRoleToAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateServiceRoleToAccountRequest instance.
 */
AssociateServiceRoleToAccountRequestPrivate::AssociateServiceRoleToAccountRequestPrivate(
    const AssociateServiceRoleToAccountRequestPrivate &other, AssociateServiceRoleToAccountRequest * const q)
    : AssociateServiceRoleToAccountPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace AWS
