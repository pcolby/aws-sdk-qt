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

#include "createuserprofilerequest.h"
#include "createuserprofilerequest_p.h"
#include "createuserprofileresponse.h"
#include "codestarrequest_p.h"

namespace AWS {
namespace CodeStar {

/**
 * @class  CreateUserProfileRequest
 *
 * @brief  Implements CodeStar CreateUserProfile requests.
 *
 * @see    CodeStarClient::createUserProfile
 */

/**
 * @brief  Constructs a new CreateUserProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateUserProfileResponse::CreateUserProfileResponse(

/**
 * @brief  Constructs a new CreateUserProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUserProfileRequest::CreateUserProfileRequest(const CreateUserProfileRequest &other)
    : CodeStarRequest(new CreateUserProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateUserProfileRequest object.
 */
CreateUserProfileRequest::CreateUserProfileRequest()
    : CodeStarRequest(new CreateUserProfileRequestPrivate(CodeStarRequest::CreateUserProfileAction, this))
{

}

bool CreateUserProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateUserProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUserProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeStarClient::send
 */
AwsAbstractResponse * CreateUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateUserProfileRequestPrivate
 *
 * @brief  Private implementation for CreateUserProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserProfileRequestPrivate object.
 *
 * @param  action  CodeStar action being performed.
 * @param  q       Pointer to this object's public CreateUserProfileRequest instance.
 */
CreateUserProfileRequestPrivate::CreateUserProfileRequestPrivate(
    const CodeStarRequest::Action action, CreateUserProfileRequest * const q)
    : CreateUserProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateUserProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUserProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUserProfileRequest instance.
 */
CreateUserProfileRequestPrivate::CreateUserProfileRequestPrivate(
    const CreateUserProfileRequestPrivate &other, CreateUserProfileRequest * const q)
    : CreateUserProfilePrivate(other, q)
{

}
