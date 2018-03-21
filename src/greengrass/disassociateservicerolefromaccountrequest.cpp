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

#include "disassociateservicerolefromaccountrequest.h"
#include "disassociateservicerolefromaccountrequest_p.h"
#include "disassociateservicerolefromaccountresponse.h"
#include "greengrassrequest_p.h"

namespace AWS {
namespace Greengrass {

/**
 * @class  DisassociateServiceRoleFromAccountRequest
 *
 * @brief  Implements Greengrass DisassociateServiceRoleFromAccount requests.
 *
 * @see    GreengrassClient::disassociateServiceRoleFromAccount
 */

/**
 * @brief  Constructs a new DisassociateServiceRoleFromAccountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateServiceRoleFromAccountResponse::DisassociateServiceRoleFromAccountResponse(

/**
 * @brief  Constructs a new DisassociateServiceRoleFromAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateServiceRoleFromAccountRequest::DisassociateServiceRoleFromAccountRequest(const DisassociateServiceRoleFromAccountRequest &other)
    : GreengrassRequest(new DisassociateServiceRoleFromAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateServiceRoleFromAccountRequest object.
 */
DisassociateServiceRoleFromAccountRequest::DisassociateServiceRoleFromAccountRequest()
    : GreengrassRequest(new DisassociateServiceRoleFromAccountRequestPrivate(GreengrassRequest::DisassociateServiceRoleFromAccountAction, this))
{

}

bool DisassociateServiceRoleFromAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateServiceRoleFromAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateServiceRoleFromAccountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
AwsAbstractResponse * DisassociateServiceRoleFromAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateServiceRoleFromAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateServiceRoleFromAccountRequestPrivate
 *
 * @brief  Private implementation for DisassociateServiceRoleFromAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateServiceRoleFromAccountRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DisassociateServiceRoleFromAccountRequest instance.
 */
DisassociateServiceRoleFromAccountRequestPrivate::DisassociateServiceRoleFromAccountRequestPrivate(
    const GreengrassRequest::Action action, DisassociateServiceRoleFromAccountRequest * const q)
    : DisassociateServiceRoleFromAccountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateServiceRoleFromAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateServiceRoleFromAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateServiceRoleFromAccountRequest instance.
 */
DisassociateServiceRoleFromAccountRequestPrivate::DisassociateServiceRoleFromAccountRequestPrivate(
    const DisassociateServiceRoleFromAccountRequestPrivate &other, DisassociateServiceRoleFromAccountRequest * const q)
    : DisassociateServiceRoleFromAccountPrivate(other, q)
{

}
