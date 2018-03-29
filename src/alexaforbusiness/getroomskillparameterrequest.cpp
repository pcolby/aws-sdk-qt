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

#include "getroomskillparameterrequest.h"
#include "getroomskillparameterrequest_p.h"
#include "getroomskillparameterresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  GetRoomSkillParameterRequest
 *
 * @brief  Implements AlexaForBusiness GetRoomSkillParameter requests.
 *
 * @see    AlexaForBusinessClient::getRoomSkillParameter
 */

/**
 * @brief  Constructs a new GetRoomSkillParameterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRoomSkillParameterRequest::GetRoomSkillParameterRequest(const GetRoomSkillParameterRequest &other)
    : AlexaForBusinessRequest(new GetRoomSkillParameterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRoomSkillParameterRequest object.
 */
GetRoomSkillParameterRequest::GetRoomSkillParameterRequest()
    : AlexaForBusinessRequest(new GetRoomSkillParameterRequestPrivate(AlexaForBusinessRequest::GetRoomSkillParameterAction, this))
{

}

bool GetRoomSkillParameterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRoomSkillParameterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRoomSkillParameterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRoomSkillParameterRequest::response(QNetworkReply * const reply) const
{
    return new GetRoomSkillParameterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRoomSkillParameterRequestPrivate
 *
 * @brief  Private implementation for GetRoomSkillParameterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRoomSkillParameterRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public GetRoomSkillParameterRequest instance.
 */
GetRoomSkillParameterRequestPrivate::GetRoomSkillParameterRequestPrivate(
    const AlexaForBusinessRequest::Action action, GetRoomSkillParameterRequest * const q)
    : GetRoomSkillParameterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRoomSkillParameterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRoomSkillParameterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRoomSkillParameterRequest instance.
 */
GetRoomSkillParameterRequestPrivate::GetRoomSkillParameterRequestPrivate(
    const GetRoomSkillParameterRequestPrivate &other, GetRoomSkillParameterRequest * const q)
    : GetRoomSkillParameterPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
