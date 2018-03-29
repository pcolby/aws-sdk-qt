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

#include "getcommandinvocationrequest.h"
#include "getcommandinvocationrequest_p.h"
#include "getcommandinvocationresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  GetCommandInvocationRequest
 *
 * @brief  Implements SSM GetCommandInvocation requests.
 *
 * @see    SSMClient::getCommandInvocation
 */

/**
 * @brief  Constructs a new GetCommandInvocationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCommandInvocationRequest::GetCommandInvocationRequest(const GetCommandInvocationRequest &other)
    : SSMRequest(new GetCommandInvocationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCommandInvocationRequest object.
 */
GetCommandInvocationRequest::GetCommandInvocationRequest()
    : SSMRequest(new GetCommandInvocationRequestPrivate(SSMRequest::GetCommandInvocationAction, this))
{

}

bool GetCommandInvocationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCommandInvocationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCommandInvocationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetCommandInvocationRequest::response(QNetworkReply * const reply) const
{
    return new GetCommandInvocationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCommandInvocationRequestPrivate
 *
 * @brief  Private implementation for GetCommandInvocationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommandInvocationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetCommandInvocationRequest instance.
 */
GetCommandInvocationRequestPrivate::GetCommandInvocationRequestPrivate(
    const SSMRequest::Action action, GetCommandInvocationRequest * const q)
    : GetCommandInvocationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCommandInvocationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCommandInvocationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCommandInvocationRequest instance.
 */
GetCommandInvocationRequestPrivate::GetCommandInvocationRequestPrivate(
    const GetCommandInvocationRequestPrivate &other, GetCommandInvocationRequest * const q)
    : GetCommandInvocationPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
