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

#include "deleteprofilerequest.h"
#include "deleteprofilerequest_p.h"
#include "deleteprofileresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  DeleteProfileRequest
 *
 * @brief  Implements AlexaForBusiness DeleteProfile requests.
 *
 * @see    AlexaForBusinessClient::deleteProfile
 */

/**
 * @brief  Constructs a new DeleteProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteProfileRequest::DeleteProfileRequest(const DeleteProfileRequest &other)
    : AlexaForBusinessRequest(new DeleteProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteProfileRequest object.
 */
DeleteProfileRequest::DeleteProfileRequest()
    : AlexaForBusinessRequest(new DeleteProfileRequestPrivate(AlexaForBusinessRequest::DeleteProfileAction, this))
{

}

bool DeleteProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
AwsAbstractResponse * DeleteProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteProfileRequestPrivate
 *
 * @brief  Private implementation for DeleteProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProfileRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public DeleteProfileRequest instance.
 */
DeleteProfileRequestPrivate::DeleteProfileRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteProfileRequest * const q)
    : DeleteProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteProfileRequest instance.
 */
DeleteProfileRequestPrivate::DeleteProfileRequestPrivate(
    const DeleteProfileRequestPrivate &other, DeleteProfileRequest * const q)
    : DeleteProfilePrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace AWS
