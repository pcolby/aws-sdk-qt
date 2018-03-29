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

#include "starttopicsdetectionjobrequest.h"
#include "starttopicsdetectionjobrequest_p.h"
#include "starttopicsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace AWS {
namespace Comprehend {

/**
 * @class  StartTopicsDetectionJobRequest
 *
 * @brief  Implements Comprehend StartTopicsDetectionJob requests.
 *
 * @see    ComprehendClient::startTopicsDetectionJob
 */

/**
 * @brief  Constructs a new StartTopicsDetectionJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartTopicsDetectionJobRequest::StartTopicsDetectionJobRequest(const StartTopicsDetectionJobRequest &other)
    : ComprehendRequest(new StartTopicsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartTopicsDetectionJobRequest object.
 */
StartTopicsDetectionJobRequest::StartTopicsDetectionJobRequest()
    : ComprehendRequest(new StartTopicsDetectionJobRequestPrivate(ComprehendRequest::StartTopicsDetectionJobAction, this))
{

}

bool StartTopicsDetectionJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartTopicsDetectionJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartTopicsDetectionJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
AwsAbstractResponse * StartTopicsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTopicsDetectionJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartTopicsDetectionJobRequestPrivate
 *
 * @brief  Private implementation for StartTopicsDetectionJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartTopicsDetectionJobRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public StartTopicsDetectionJobRequest instance.
 */
StartTopicsDetectionJobRequestPrivate::StartTopicsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartTopicsDetectionJobRequest * const q)
    : StartTopicsDetectionJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartTopicsDetectionJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartTopicsDetectionJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartTopicsDetectionJobRequest instance.
 */
StartTopicsDetectionJobRequestPrivate::StartTopicsDetectionJobRequestPrivate(
    const StartTopicsDetectionJobRequestPrivate &other, StartTopicsDetectionJobRequest * const q)
    : StartTopicsDetectionJobPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace AWS
