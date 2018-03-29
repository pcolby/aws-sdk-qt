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

#include "getserviceroleforaccountrequest.h"
#include "getserviceroleforaccountrequest_p.h"
#include "getserviceroleforaccountresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetServiceRoleForAccountRequest
 *
 * @brief  Implements Greengrass GetServiceRoleForAccount requests.
 *
 * @see    GreengrassClient::getServiceRoleForAccount
 */

/**
 * @brief  Constructs a new GetServiceRoleForAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetServiceRoleForAccountRequest::GetServiceRoleForAccountRequest(const GetServiceRoleForAccountRequest &other)
    : GreengrassRequest(new GetServiceRoleForAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetServiceRoleForAccountRequest object.
 */
GetServiceRoleForAccountRequest::GetServiceRoleForAccountRequest()
    : GreengrassRequest(new GetServiceRoleForAccountRequestPrivate(GreengrassRequest::GetServiceRoleForAccountAction, this))
{

}

bool GetServiceRoleForAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetServiceRoleForAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetServiceRoleForAccountResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceRoleForAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceRoleForAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetServiceRoleForAccountRequestPrivate
 *
 * @brief  Private implementation for GetServiceRoleForAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceRoleForAccountRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetServiceRoleForAccountRequest instance.
 */
GetServiceRoleForAccountRequestPrivate::GetServiceRoleForAccountRequestPrivate(
    const GreengrassRequest::Action action, GetServiceRoleForAccountRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceRoleForAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetServiceRoleForAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetServiceRoleForAccountRequest instance.
 */
GetServiceRoleForAccountRequestPrivate::GetServiceRoleForAccountRequestPrivate(
    const GetServiceRoleForAccountRequestPrivate &other, GetServiceRoleForAccountRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
