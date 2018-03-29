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

#include "updatestackinstancesrequest.h"
#include "updatestackinstancesrequest_p.h"
#include "updatestackinstancesresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  UpdateStackInstancesRequest
 *
 * @brief  Implements CloudFormation UpdateStackInstances requests.
 *
 * @see    CloudFormationClient::updateStackInstances
 */

/**
 * @brief  Constructs a new UpdateStackInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateStackInstancesRequest::UpdateStackInstancesRequest(const UpdateStackInstancesRequest &other)
    : CloudFormationRequest(new UpdateStackInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateStackInstancesRequest object.
 */
UpdateStackInstancesRequest::UpdateStackInstancesRequest()
    : CloudFormationRequest(new UpdateStackInstancesRequestPrivate(CloudFormationRequest::UpdateStackInstancesAction, this))
{

}

bool UpdateStackInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateStackInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateStackInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * UpdateStackInstancesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStackInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateStackInstancesRequestPrivate
 *
 * @brief  Private implementation for UpdateStackInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStackInstancesRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public UpdateStackInstancesRequest instance.
 */
UpdateStackInstancesRequestPrivate::UpdateStackInstancesRequestPrivate(
    const CloudFormationRequest::Action action, UpdateStackInstancesRequest * const q)
    : UpdateStackInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStackInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateStackInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateStackInstancesRequest instance.
 */
UpdateStackInstancesRequestPrivate::UpdateStackInstancesRequestPrivate(
    const UpdateStackInstancesRequestPrivate &other, UpdateStackInstancesRequest * const q)
    : UpdateStackInstancesPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS
