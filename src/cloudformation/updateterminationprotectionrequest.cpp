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

#include "updateterminationprotectionrequest.h"
#include "updateterminationprotectionrequest_p.h"
#include "updateterminationprotectionresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  UpdateTerminationProtectionRequest
 *
 * @brief  Implements CloudFormation UpdateTerminationProtection requests.
 *
 * @see    CloudFormationClient::updateTerminationProtection
 */

/**
 * @brief  Constructs a new UpdateTerminationProtectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTerminationProtectionRequest::UpdateTerminationProtectionRequest(const UpdateTerminationProtectionRequest &other)
    : CloudFormationRequest(new UpdateTerminationProtectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateTerminationProtectionRequest object.
 */
UpdateTerminationProtectionRequest::UpdateTerminationProtectionRequest()
    : CloudFormationRequest(new UpdateTerminationProtectionRequestPrivate(CloudFormationRequest::UpdateTerminationProtectionAction, this))
{

}

bool UpdateTerminationProtectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateTerminationProtectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTerminationProtectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * UpdateTerminationProtectionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTerminationProtectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateTerminationProtectionRequestPrivate
 *
 * @brief  Private implementation for UpdateTerminationProtectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTerminationProtectionRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public UpdateTerminationProtectionRequest instance.
 */
UpdateTerminationProtectionRequestPrivate::UpdateTerminationProtectionRequestPrivate(
    const CloudFormationRequest::Action action, UpdateTerminationProtectionRequest * const q)
    : UpdateTerminationProtectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTerminationProtectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTerminationProtectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTerminationProtectionRequest instance.
 */
UpdateTerminationProtectionRequestPrivate::UpdateTerminationProtectionRequestPrivate(
    const UpdateTerminationProtectionRequestPrivate &other, UpdateTerminationProtectionRequest * const q)
    : UpdateTerminationProtectionPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
