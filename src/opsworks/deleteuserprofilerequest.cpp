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

#include "deleteuserprofilerequest.h"
#include "deleteuserprofilerequest_p.h"
#include "deleteuserprofileresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeleteUserProfileRequest
 *
 * @brief  Implements OpsWorks DeleteUserProfile requests.
 *
 * @see    OpsWorksClient::deleteUserProfile
 */

/**
 * @brief  Constructs a new DeleteUserProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteUserProfileRequest::DeleteUserProfileRequest(const DeleteUserProfileRequest &other)
    : OpsWorksRequest(new DeleteUserProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteUserProfileRequest object.
 */
DeleteUserProfileRequest::DeleteUserProfileRequest()
    : OpsWorksRequest(new DeleteUserProfileRequestPrivate(OpsWorksRequest::DeleteUserProfileAction, this))
{

}

bool DeleteUserProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteUserProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteUserProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DeleteUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteUserProfileRequestPrivate
 *
 * @brief  Private implementation for DeleteUserProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserProfileRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DeleteUserProfileRequest instance.
 */
DeleteUserProfileRequestPrivate::DeleteUserProfileRequestPrivate(
    const OpsWorksRequest::Action action, DeleteUserProfileRequest * const q)
    : DeleteUserProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteUserProfileRequest instance.
 */
DeleteUserProfileRequestPrivate::DeleteUserProfileRequestPrivate(
    const DeleteUserProfileRequestPrivate &other, DeleteUserProfileRequest * const q)
    : DeleteUserProfilePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
