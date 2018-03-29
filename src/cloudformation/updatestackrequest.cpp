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

#include "updatestackrequest.h"
#include "updatestackrequest_p.h"
#include "updatestackresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  UpdateStackRequest
 *
 * @brief  Implements CloudFormation UpdateStack requests.
 *
 * @see    CloudFormationClient::updateStack
 */

/**
 * @brief  Constructs a new UpdateStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateStackRequest::UpdateStackRequest(const UpdateStackRequest &other)
    : CloudFormationRequest(new UpdateStackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateStackRequest object.
 */
UpdateStackRequest::UpdateStackRequest()
    : CloudFormationRequest(new UpdateStackRequestPrivate(CloudFormationRequest::UpdateStackAction, this))
{

}

bool UpdateStackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateStackResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStackRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateStackRequestPrivate
 *
 * @brief  Private implementation for UpdateStackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStackRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public UpdateStackRequest instance.
 */
UpdateStackRequestPrivate::UpdateStackRequestPrivate(
    const CloudFormationRequest::Action action, UpdateStackRequest * const q)
    : CloudFormationRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateStackRequest instance.
 */
UpdateStackRequestPrivate::UpdateStackRequestPrivate(
    const UpdateStackRequestPrivate &other, UpdateStackRequest * const q)
    : CloudFormationRequestPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
