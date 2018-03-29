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

#include "listtopicsdetectionjobsrequest.h"
#include "listtopicsdetectionjobsrequest_p.h"
#include "listtopicsdetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/**
 * @class  ListTopicsDetectionJobsRequest
 *
 * @brief  Implements Comprehend ListTopicsDetectionJobs requests.
 *
 * @see    ComprehendClient::listTopicsDetectionJobs
 */

/**
 * @brief  Constructs a new ListTopicsDetectionJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTopicsDetectionJobsRequest::ListTopicsDetectionJobsRequest(const ListTopicsDetectionJobsRequest &other)
    : ComprehendRequest(new ListTopicsDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTopicsDetectionJobsRequest object.
 */
ListTopicsDetectionJobsRequest::ListTopicsDetectionJobsRequest()
    : ComprehendRequest(new ListTopicsDetectionJobsRequestPrivate(ComprehendRequest::ListTopicsDetectionJobsAction, this))
{

}

bool ListTopicsDetectionJobsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTopicsDetectionJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTopicsDetectionJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ComprehendClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTopicsDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTopicsDetectionJobsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTopicsDetectionJobsRequestPrivate
 *
 * @brief  Private implementation for ListTopicsDetectionJobsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicsDetectionJobsRequestPrivate object.
 *
 * @param  action  Comprehend action being performed.
 * @param  q       Pointer to this object's public ListTopicsDetectionJobsRequest instance.
 */
ListTopicsDetectionJobsRequestPrivate::ListTopicsDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListTopicsDetectionJobsRequest * const q)
    : ListTopicsDetectionJobsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicsDetectionJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTopicsDetectionJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTopicsDetectionJobsRequest instance.
 */
ListTopicsDetectionJobsRequestPrivate::ListTopicsDetectionJobsRequestPrivate(
    const ListTopicsDetectionJobsRequestPrivate &other, ListTopicsDetectionJobsRequest * const q)
    : ListTopicsDetectionJobsPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
