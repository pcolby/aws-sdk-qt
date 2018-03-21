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

#include "createinstanceprofilerequest.h"
#include "createinstanceprofilerequest_p.h"
#include "createinstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  CreateInstanceProfileRequest
 *
 * @brief  Implements IAM CreateInstanceProfile requests.
 *
 * @see    IAMClient::createInstanceProfile
 */

/**
 * @brief  Constructs a new CreateInstanceProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInstanceProfileResponse::CreateInstanceProfileResponse(

/**
 * @brief  Constructs a new CreateInstanceProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInstanceProfileRequest::CreateInstanceProfileRequest(const CreateInstanceProfileRequest &other)
    : IAMRequest(new CreateInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateInstanceProfileRequest object.
 */
CreateInstanceProfileRequest::CreateInstanceProfileRequest()
    : IAMRequest(new CreateInstanceProfileRequestPrivate(IAMRequest::CreateInstanceProfileAction, this))
{

}

bool CreateInstanceProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateInstanceProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInstanceProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * CreateInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateInstanceProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateInstanceProfileRequestPrivate
 *
 * @brief  Private implementation for CreateInstanceProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstanceProfileRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public CreateInstanceProfileRequest instance.
 */
CreateInstanceProfileRequestPrivate::CreateInstanceProfileRequestPrivate(
    const IAMRequest::Action action, CreateInstanceProfileRequest * const q)
    : CreateInstanceProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateInstanceProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInstanceProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInstanceProfileRequest instance.
 */
CreateInstanceProfileRequestPrivate::CreateInstanceProfileRequestPrivate(
    const CreateInstanceProfileRequestPrivate &other, CreateInstanceProfileRequest * const q)
    : CreateInstanceProfilePrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
