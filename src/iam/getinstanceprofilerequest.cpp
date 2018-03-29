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

#include "getinstanceprofilerequest.h"
#include "getinstanceprofilerequest_p.h"
#include "getinstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetInstanceProfileRequest
 *
 * @brief  Implements IAM GetInstanceProfile requests.
 *
 * @see    IAMClient::getInstanceProfile
 */

/**
 * @brief  Constructs a new GetInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstanceProfileRequest::GetInstanceProfileRequest(const GetInstanceProfileRequest &other)
    : IAMRequest(new GetInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstanceProfileRequest object.
 */
GetInstanceProfileRequest::GetInstanceProfileRequest()
    : IAMRequest(new GetInstanceProfileRequestPrivate(IAMRequest::GetInstanceProfileAction, this))
{

}

bool GetInstanceProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstanceProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for GetInstanceProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceProfileRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetInstanceProfileRequest instance.
 */
GetInstanceProfileRequestPrivate::GetInstanceProfileRequestPrivate(
    const IAMRequest::Action action, GetInstanceProfileRequest * const q)
    : GetInstanceProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstanceProfileRequest instance.
 */
GetInstanceProfileRequestPrivate::GetInstanceProfileRequestPrivate(
    const GetInstanceProfileRequestPrivate &other, GetInstanceProfileRequest * const q)
    : GetInstanceProfilePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
