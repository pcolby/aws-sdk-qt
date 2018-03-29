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

#include "updatemyuserprofilerequest.h"
#include "updatemyuserprofilerequest_p.h"
#include "updatemyuserprofileresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  UpdateMyUserProfileRequest
 *
 * @brief  Implements OpsWorks UpdateMyUserProfile requests.
 *
 * @see    OpsWorksClient::updateMyUserProfile
 */

/**
 * @brief  Constructs a new UpdateMyUserProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMyUserProfileRequest::UpdateMyUserProfileRequest(const UpdateMyUserProfileRequest &other)
    : OpsWorksRequest(new UpdateMyUserProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMyUserProfileRequest object.
 */
UpdateMyUserProfileRequest::UpdateMyUserProfileRequest()
    : OpsWorksRequest(new UpdateMyUserProfileRequestPrivate(OpsWorksRequest::UpdateMyUserProfileAction, this))
{

}

bool UpdateMyUserProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMyUserProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMyUserProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * UpdateMyUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMyUserProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMyUserProfileRequestPrivate
 *
 * @brief  Private implementation for UpdateMyUserProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMyUserProfileRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UpdateMyUserProfileRequest instance.
 */
UpdateMyUserProfileRequestPrivate::UpdateMyUserProfileRequestPrivate(
    const OpsWorksRequest::Action action, UpdateMyUserProfileRequest * const q)
    : UpdateMyUserProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMyUserProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMyUserProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMyUserProfileRequest instance.
 */
UpdateMyUserProfileRequestPrivate::UpdateMyUserProfileRequestPrivate(
    const UpdateMyUserProfileRequestPrivate &other, UpdateMyUserProfileRequest * const q)
    : UpdateMyUserProfilePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
