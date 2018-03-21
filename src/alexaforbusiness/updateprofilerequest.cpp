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

#include "updateprofilerequest.h"
#include "updateprofilerequest_p.h"
#include "updateprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  UpdateProfileRequest
 *
 * @brief  Implements AlexaForBusiness UpdateProfile requests.
 *
 * @see    AlexaForBusinessClient::updateProfile
 */

/**
 * @brief  Constructs a new UpdateProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateProfileResponse::UpdateProfileResponse(

/**
 * @brief  Constructs a new UpdateProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateProfileRequest::UpdateProfileRequest(const UpdateProfileRequest &other)
    : AlexaForBusinessRequest(new UpdateProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateProfileRequest object.
 */
UpdateProfileRequest::UpdateProfileRequest()
    : AlexaForBusinessRequest(new UpdateProfileRequestPrivate(AlexaForBusinessRequest::UpdateProfileAction, this))
{

}

bool UpdateProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * UpdateProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateProfileRequestPrivate
 *
 * @brief  Private implementation for UpdateProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProfileRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public UpdateProfileRequest instance.
 */
UpdateProfileRequestPrivate::UpdateProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateProfileRequest * const q)
    : UpdateProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateProfileRequest instance.
 */
UpdateProfileRequestPrivate::UpdateProfileRequestPrivate(
    const UpdateProfileRequestPrivate &other, UpdateProfileRequest * const q)
    : UpdateProfilePrivate(other, q)
{

}
