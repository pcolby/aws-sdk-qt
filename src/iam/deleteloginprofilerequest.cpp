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

#include "deleteloginprofilerequest.h"
#include "deleteloginprofilerequest_p.h"
#include "deleteloginprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteLoginProfileRequest
 *
 * @brief  Implements IAM DeleteLoginProfile requests.
 *
 * @see    IAMClient::deleteLoginProfile
 */

/**
 * @brief  Constructs a new DeleteLoginProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLoginProfileRequest::DeleteLoginProfileRequest(const DeleteLoginProfileRequest &other)
    : IAMRequest(new DeleteLoginProfileRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLoginProfileRequest object.
 */
DeleteLoginProfileRequest::DeleteLoginProfileRequest()
    : IAMRequest(new DeleteLoginProfileRequestPrivate(IAMRequest::DeleteLoginProfileAction, this))
{

}

bool DeleteLoginProfileRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLoginProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLoginProfileResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * DeleteLoginProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoginProfileResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLoginProfileRequestPrivate
 *
 * @brief  Private implementation for DeleteLoginProfileRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoginProfileRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public DeleteLoginProfileRequest instance.
 */
DeleteLoginProfileRequestPrivate::DeleteLoginProfileRequestPrivate(
    const IAMRequest::Action action, DeleteLoginProfileRequest * const q)
    : DeleteLoginProfilePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoginProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoginProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLoginProfileRequest instance.
 */
DeleteLoginProfileRequestPrivate::DeleteLoginProfileRequestPrivate(
    const DeleteLoginProfileRequestPrivate &other, DeleteLoginProfileRequest * const q)
    : DeleteLoginProfilePrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
