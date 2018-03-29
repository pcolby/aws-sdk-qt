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

#include "addroletoinstanceprofilerequest.h"
#include "addroletoinstanceprofilerequest_p.h"
#include "addroletoinstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  AddRoleToInstanceProfileRequest
 *
 * @brief  Implements IAM AddRoleToInstanceProfile requests.
 *
 * @see    IAMClient::addRoleToInstanceProfile
 */

/**
 * @brief  Constructs a new AddRoleToInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddRoleToInstanceProfileRequest::AddRoleToInstanceProfileRequest(const AddRoleToInstanceProfileRequest &other)
    : IAMRequest(new AddRoleToInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddRoleToInstanceProfileRequest object.
 */
AddRoleToInstanceProfileRequest::AddRoleToInstanceProfileRequest()
    : IAMRequest(new AddRoleToInstanceProfileRequestPrivate(IAMRequest::AddRoleToInstanceProfileAction, this))
{

}

bool AddRoleToInstanceProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddRoleToInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddRoleToInstanceProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * AddRoleToInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new AddRoleToInstanceProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddRoleToInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for AddRoleToInstanceProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddRoleToInstanceProfileRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public AddRoleToInstanceProfileRequest instance.
 */
AddRoleToInstanceProfileRequestPrivate::AddRoleToInstanceProfileRequestPrivate(
    const IAMRequest::Action action, AddRoleToInstanceProfileRequest * const q)
    : AddRoleToInstanceProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddRoleToInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddRoleToInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddRoleToInstanceProfileRequest instance.
 */
AddRoleToInstanceProfileRequestPrivate::AddRoleToInstanceProfileRequestPrivate(
    const AddRoleToInstanceProfileRequestPrivate &other, AddRoleToInstanceProfileRequest * const q)
    : AddRoleToInstanceProfilePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
