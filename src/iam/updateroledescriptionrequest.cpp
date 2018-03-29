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

#include "updateroledescriptionrequest.h"
#include "updateroledescriptionrequest_p.h"
#include "updateroledescriptionresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateRoleDescriptionRequest
 *
 * @brief  Implements IAM UpdateRoleDescription requests.
 *
 * @see    IAMClient::updateRoleDescription
 */

/**
 * @brief  Constructs a new UpdateRoleDescriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRoleDescriptionRequest::UpdateRoleDescriptionRequest(const UpdateRoleDescriptionRequest &other)
    : IAMRequest(new UpdateRoleDescriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRoleDescriptionRequest object.
 */
UpdateRoleDescriptionRequest::UpdateRoleDescriptionRequest()
    : IAMRequest(new UpdateRoleDescriptionRequestPrivate(IAMRequest::UpdateRoleDescriptionAction, this))
{

}

bool UpdateRoleDescriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRoleDescriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRoleDescriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * UpdateRoleDescriptionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoleDescriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRoleDescriptionRequestPrivate
 *
 * @brief  Private implementation for UpdateRoleDescriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleDescriptionRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public UpdateRoleDescriptionRequest instance.
 */
UpdateRoleDescriptionRequestPrivate::UpdateRoleDescriptionRequestPrivate(
    const IAMRequest::Action action, UpdateRoleDescriptionRequest * const q)
    : UpdateRoleDescriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleDescriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoleDescriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRoleDescriptionRequest instance.
 */
UpdateRoleDescriptionRequestPrivate::UpdateRoleDescriptionRequestPrivate(
    const UpdateRoleDescriptionRequestPrivate &other, UpdateRoleDescriptionRequest * const q)
    : UpdateRoleDescriptionPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
