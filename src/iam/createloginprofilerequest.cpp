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

#include "createloginprofilerequest.h"
#include "createloginprofilerequest_p.h"
#include "createloginprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  CreateLoginProfileRequest
 *
 * @brief  Implements IAM CreateLoginProfile requests.
 *
 * @see    IAMClient::createLoginProfile
 */

/**
 * @brief  Constructs a new CreateLoginProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLoginProfileRequest::CreateLoginProfileRequest(const CreateLoginProfileRequest &other)
    : IAMRequest(new CreateLoginProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLoginProfileRequest object.
 */
CreateLoginProfileRequest::CreateLoginProfileRequest()
    : IAMRequest(new CreateLoginProfileRequestPrivate(IAMRequest::CreateLoginProfileAction, this))
{

}

bool CreateLoginProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLoginProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLoginProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoginProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoginProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLoginProfileRequestPrivate
 *
 * @brief  Private implementation for CreateLoginProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoginProfileRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateLoginProfileRequest instance.
 */
CreateLoginProfileRequestPrivate::CreateLoginProfileRequestPrivate(
    const IAMRequest::Action action, CreateLoginProfileRequest * const q)
    : CreateLoginProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoginProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLoginProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLoginProfileRequest instance.
 */
CreateLoginProfileRequestPrivate::CreateLoginProfileRequestPrivate(
    const CreateLoginProfileRequestPrivate &other, CreateLoginProfileRequest * const q)
    : CreateLoginProfilePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
