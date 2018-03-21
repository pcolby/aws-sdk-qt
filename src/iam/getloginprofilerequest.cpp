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

#include "getloginprofilerequest.h"
#include "getloginprofilerequest_p.h"
#include "getloginprofileresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  GetLoginProfileRequest
 *
 * @brief  Implements IAM GetLoginProfile requests.
 *
 * @see    IAMClient::getLoginProfile
 */

/**
 * @brief  Constructs a new GetLoginProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLoginProfileRequest::GetLoginProfileRequest(const GetLoginProfileRequest &other)
    : IAMRequest(new GetLoginProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLoginProfileRequest object.
 */
GetLoginProfileRequest::GetLoginProfileRequest()
    : IAMRequest(new GetLoginProfileRequestPrivate(IAMRequest::GetLoginProfileAction, this))
{

}

bool GetLoginProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLoginProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLoginProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetLoginProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetLoginProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLoginProfileRequestPrivate
 *
 * @brief  Private implementation for GetLoginProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoginProfileRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetLoginProfileRequest instance.
 */
GetLoginProfileRequestPrivate::GetLoginProfileRequestPrivate(
    const IAMRequest::Action action, GetLoginProfileRequest * const q)
    : GetLoginProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLoginProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLoginProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLoginProfileRequest instance.
 */
GetLoginProfileRequestPrivate::GetLoginProfileRequestPrivate(
    const GetLoginProfileRequestPrivate &other, GetLoginProfileRequest * const q)
    : GetLoginProfilePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
