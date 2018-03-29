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

#include "getpolicyversionrequest.h"
#include "getpolicyversionrequest_p.h"
#include "getpolicyversionresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetPolicyVersionRequest
 *
 * @brief  Implements IAM GetPolicyVersion requests.
 *
 * @see    IAMClient::getPolicyVersion
 */

/**
 * @brief  Constructs a new GetPolicyVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPolicyVersionRequest::GetPolicyVersionRequest(const GetPolicyVersionRequest &other)
    : IAMRequest(new GetPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPolicyVersionRequest object.
 */
GetPolicyVersionRequest::GetPolicyVersionRequest()
    : IAMRequest(new GetPolicyVersionRequestPrivate(IAMRequest::GetPolicyVersionAction, this))
{

}

bool GetPolicyVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPolicyVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPolicyVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetPolicyVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPolicyVersionRequestPrivate
 *
 * @brief  Private implementation for GetPolicyVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPolicyVersionRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetPolicyVersionRequest instance.
 */
GetPolicyVersionRequestPrivate::GetPolicyVersionRequestPrivate(
    const IAMRequest::Action action, GetPolicyVersionRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPolicyVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPolicyVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPolicyVersionRequest instance.
 */
GetPolicyVersionRequestPrivate::GetPolicyVersionRequestPrivate(
    const GetPolicyVersionRequestPrivate &other, GetPolicyVersionRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
