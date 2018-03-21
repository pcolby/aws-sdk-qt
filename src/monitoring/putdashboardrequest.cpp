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

#include "putdashboardrequest.h"
#include "putdashboardrequest_p.h"
#include "putdashboardresponse.h"
#include "cloudwatchrequest_p.h"

namespace AWS {
namespace CloudWatch {

/**
 * @class  PutDashboardRequest
 *
 * @brief  Implements CloudWatch PutDashboard requests.
 *
 * @see    CloudWatchClient::putDashboard
 */

/**
 * @brief  Constructs a new PutDashboardResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutDashboardResponse::PutDashboardResponse(

/**
 * @brief  Constructs a new PutDashboardRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutDashboardRequest::PutDashboardRequest(const PutDashboardRequest &other)
    : CloudWatchRequest(new PutDashboardRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutDashboardRequest object.
 */
PutDashboardRequest::PutDashboardRequest()
    : CloudWatchRequest(new PutDashboardRequestPrivate(CloudWatchRequest::PutDashboardAction, this))
{

}

bool PutDashboardRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutDashboardResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutDashboardResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchClient::send
 */
AwsAbstractResponse * PutDashboardRequest::response(QNetworkReply * const reply) const
{
    return new PutDashboardResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutDashboardRequestPrivate
 *
 * @brief  Private implementation for PutDashboardRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutDashboardRequestPrivate object.
 *
 * @param  action  CloudWatch action being performed.
 * @param  q       Pointer to this object's public PutDashboardRequest instance.
 */
PutDashboardRequestPrivate::PutDashboardRequestPrivate(
    const CloudWatchRequest::Action action, PutDashboardRequest * const q)
    : PutDashboardPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutDashboardRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutDashboardRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutDashboardRequest instance.
 */
PutDashboardRequestPrivate::PutDashboardRequestPrivate(
    const PutDashboardRequestPrivate &other, PutDashboardRequest * const q)
    : PutDashboardPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace AWS
