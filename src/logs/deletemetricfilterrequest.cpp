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

#include "deletemetricfilterrequest.h"
#include "deletemetricfilterrequest_p.h"
#include "deletemetricfilterresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteMetricFilterRequest
 *
 * @brief  Implements CloudWatchLogs DeleteMetricFilter requests.
 *
 * @see    CloudWatchLogsClient::deleteMetricFilter
 */

/**
 * @brief  Constructs a new DeleteMetricFilterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMetricFilterRequest::DeleteMetricFilterRequest(const DeleteMetricFilterRequest &other)
    : CloudWatchLogsRequest(new DeleteMetricFilterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteMetricFilterRequest object.
 */
DeleteMetricFilterRequest::DeleteMetricFilterRequest()
    : CloudWatchLogsRequest(new DeleteMetricFilterRequestPrivate(CloudWatchLogsRequest::DeleteMetricFilterAction, this))
{

}

bool DeleteMetricFilterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteMetricFilterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMetricFilterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DeleteMetricFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMetricFilterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteMetricFilterRequestPrivate
 *
 * @brief  Private implementation for DeleteMetricFilterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMetricFilterRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DeleteMetricFilterRequest instance.
 */
DeleteMetricFilterRequestPrivate::DeleteMetricFilterRequestPrivate(
    const CloudWatchLogsRequest::Action action, DeleteMetricFilterRequest * const q)
    : DeleteMetricFilterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteMetricFilterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMetricFilterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMetricFilterRequest instance.
 */
DeleteMetricFilterRequestPrivate::DeleteMetricFilterRequestPrivate(
    const DeleteMetricFilterRequestPrivate &other, DeleteMetricFilterRequest * const q)
    : DeleteMetricFilterPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
