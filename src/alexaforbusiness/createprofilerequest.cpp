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

#include "createprofilerequest.h"
#include "createprofilerequest_p.h"
#include "createprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  CreateProfileRequest
 *
 * @brief  Implements AlexaForBusiness CreateProfile requests.
 *
 * @see    AlexaForBusinessClient::createProfile
 */

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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProfileRequest::response(QNetworkReply * const reply) const
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
    : AlexaForBusinessRequestPrivate(action, q)
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
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
