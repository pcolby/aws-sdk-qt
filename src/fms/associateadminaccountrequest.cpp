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

#include "associateadminaccountrequest.h"
#include "associateadminaccountrequest_p.h"
#include "associateadminaccountresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/**
 * @class  AssociateAdminAccountRequest
 *
 * @brief  Implements FMS AssociateAdminAccount requests.
 *
 * @see    FMSClient::associateAdminAccount
 */

/**
 * @brief  Constructs a new AssociateAdminAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateAdminAccountRequest::AssociateAdminAccountRequest(const AssociateAdminAccountRequest &other)
    : FMSRequest(new AssociateAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateAdminAccountRequest object.
 */
AssociateAdminAccountRequest::AssociateAdminAccountRequest()
    : FMSRequest(new AssociateAdminAccountRequestPrivate(FMSRequest::AssociateAdminAccountAction, this))
{

}

bool AssociateAdminAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateAdminAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateAdminAccountResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new AssociateAdminAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateAdminAccountRequestPrivate
 *
 * @brief  Private implementation for AssociateAdminAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateAdminAccountRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public AssociateAdminAccountRequest instance.
 */
AssociateAdminAccountRequestPrivate::AssociateAdminAccountRequestPrivate(
    const FMSRequest::Action action, AssociateAdminAccountRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateAdminAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateAdminAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateAdminAccountRequest instance.
 */
AssociateAdminAccountRequestPrivate::AssociateAdminAccountRequestPrivate(
    const AssociateAdminAccountRequestPrivate &other, AssociateAdminAccountRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
