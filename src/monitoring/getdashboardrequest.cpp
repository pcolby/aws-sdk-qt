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

#include "getdashboardrequest.h"
#include "getdashboardrequest_p.h"
#include "getdashboardresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/**
 * @class  GetDashboardRequest
 *
 * @brief  Implements CloudWatch GetDashboard requests.
 *
 * @see    CloudWatchClient::getDashboard
 */

/**
 * @brief  Constructs a new GetDashboardRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDashboardRequest::GetDashboardRequest(const GetDashboardRequest &other)
    : CloudWatchRequest(new GetDashboardRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDashboardRequest object.
 */
GetDashboardRequest::GetDashboardRequest()
    : CloudWatchRequest(new GetDashboardRequestPrivate(CloudWatchRequest::GetDashboardAction, this))
{

}

bool GetDashboardRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDashboardResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDashboardResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * GetDashboardRequest::response(QNetworkReply * const reply) const
{
    return new GetDashboardResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDashboardRequestPrivate
 *
 * @brief  Private implementation for GetDashboardRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDashboardRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public GetDashboardRequest instance.
 */
GetDashboardRequestPrivate::GetDashboardRequestPrivate(
    const CloudWatchRequest::Action action, GetDashboardRequest * const q)
    : GetDashboardPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDashboardRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDashboardRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDashboardRequest instance.
 */
GetDashboardRequestPrivate::GetDashboardRequestPrivate(
    const GetDashboardRequestPrivate &other, GetDashboardRequest * const q)
    : GetDashboardPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
