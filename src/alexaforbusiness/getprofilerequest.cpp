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

#include "getprofilerequest.h"
#include "getprofilerequest_p.h"
#include "getprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  GetProfileRequest
 *
 * @brief  Implements AlexaForBusiness GetProfile requests.
 *
 * @see    AlexaForBusinessClient::getProfile
 */

/**
 * @brief  Constructs a new GetProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetProfileResponse::GetProfileResponse(

/**
 * @brief  Constructs a new GetProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetProfileRequest::GetProfileRequest(const GetProfileRequest &other)
    : AlexaForBusinessRequest(new GetProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetProfileRequest object.
 */
GetProfileRequest::GetProfileRequest()
    : AlexaForBusinessRequest(new GetProfileRequestPrivate(AlexaForBusinessRequest::GetProfileAction, this))
{

}

bool GetProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * GetProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetProfileRequestPrivate
 *
 * @brief  Private implementation for GetProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetProfileRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public GetProfileRequest instance.
 */
GetProfileRequestPrivate::GetProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetProfileRequest * const q)
    : GetProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetProfileRequest instance.
 */
GetProfileRequestPrivate::GetProfileRequestPrivate(
    const GetProfileRequestPrivate &other, GetProfileRequest * const q)
    : GetProfilePrivate(other, q)
{

}
