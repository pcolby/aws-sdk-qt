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

#include "deletedashboardsrequest.h"
#include "deletedashboardsrequest_p.h"
#include "deletedashboardsresponse.h"
#include "cloudwatchrequest_p.h"

namespace AWS {
namespace CloudWatch {

/**
 * @class  DeleteDashboardsRequest
 *
 * @brief  Implements CloudWatch DeleteDashboards requests.
 *
 * @see    CloudWatchClient::deleteDashboards
 */

/**
 * @brief  Constructs a new DeleteDashboardsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDashboardsRequest::DeleteDashboardsRequest(const DeleteDashboardsRequest &other)
    : CloudWatchRequest(new DeleteDashboardsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDashboardsRequest object.
 */
DeleteDashboardsRequest::DeleteDashboardsRequest()
    : CloudWatchRequest(new DeleteDashboardsRequestPrivate(CloudWatchRequest::DeleteDashboardsAction, this))
{

}

bool DeleteDashboardsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDashboardsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDashboardsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * DeleteDashboardsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDashboardsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDashboardsRequestPrivate
 *
 * @brief  Private implementation for DeleteDashboardsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDashboardsRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public DeleteDashboardsRequest instance.
 */
DeleteDashboardsRequestPrivate::DeleteDashboardsRequestPrivate(
    const CloudWatchRequest::Action action, DeleteDashboardsRequest * const q)
    : DeleteDashboardsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDashboardsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDashboardsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDashboardsRequest instance.
 */
DeleteDashboardsRequestPrivate::DeleteDashboardsRequestPrivate(
    const DeleteDashboardsRequestPrivate &other, DeleteDashboardsRequest * const q)
    : DeleteDashboardsPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace AWS
