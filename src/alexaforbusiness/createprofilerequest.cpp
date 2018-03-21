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

#include "createprofilerequest.h"
#include "createprofilerequest_p.h"
#include "createprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  CreateProfileRequest
 *
 * @brief  Implements AlexaForBusiness CreateProfile requests.
 *
 * @see    AlexaForBusinessClient::createProfile
 */

/**
 * @brief  Constructs a new CreateProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProfileResponse::CreateProfileResponse(

/**
 * @brief  Constructs a new CreateProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateProfileRequest::CreateProfileRequest(const CreateProfileRequest &other)
    : AlexaForBusinessRequest(new CreateProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateProfileRequest object.
 */
CreateProfileRequest::CreateProfileRequest()
    : AlexaForBusinessRequest(new CreateProfileRequestPrivate(AlexaForBusinessRequest::CreateProfileAction, this))
{

}

bool CreateProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * CreateProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateProfileRequestPrivate
 *
 * @brief  Private implementation for CreateProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProfileRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public CreateProfileRequest instance.
 */
CreateProfileRequestPrivate::CreateProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateProfileRequest * const q)
    : CreateProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateProfileRequest instance.
 */
CreateProfileRequestPrivate::CreateProfileRequestPrivate(
    const CreateProfileRequestPrivate &other, CreateProfileRequest * const q)
    : CreateProfilePrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
