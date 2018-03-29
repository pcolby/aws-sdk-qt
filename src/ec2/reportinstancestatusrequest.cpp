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

#include "reportinstancestatusrequest.h"
#include "reportinstancestatusrequest_p.h"
#include "reportinstancestatusresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ReportInstanceStatusRequest
 *
 * @brief  Implements EC2 ReportInstanceStatus requests.
 *
 * @see    EC2Client::reportInstanceStatus
 */

/**
 * @brief  Constructs a new ReportInstanceStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReportInstanceStatusRequest::ReportInstanceStatusRequest(const ReportInstanceStatusRequest &other)
    : EC2Request(new ReportInstanceStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReportInstanceStatusRequest object.
 */
ReportInstanceStatusRequest::ReportInstanceStatusRequest()
    : EC2Request(new ReportInstanceStatusRequestPrivate(EC2Request::ReportInstanceStatusAction, this))
{

}

bool ReportInstanceStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReportInstanceStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReportInstanceStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ReportInstanceStatusRequest::response(QNetworkReply * const reply) const
{
    return new ReportInstanceStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReportInstanceStatusRequestPrivate
 *
 * @brief  Private implementation for ReportInstanceStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReportInstanceStatusRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ReportInstanceStatusRequest instance.
 */
ReportInstanceStatusRequestPrivate::ReportInstanceStatusRequestPrivate(
    const EC2Request::Action action, ReportInstanceStatusRequest * const q)
    : ReportInstanceStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReportInstanceStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReportInstanceStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReportInstanceStatusRequest instance.
 */
ReportInstanceStatusRequestPrivate::ReportInstanceStatusRequestPrivate(
    const ReportInstanceStatusRequestPrivate &other, ReportInstanceStatusRequest * const q)
    : ReportInstanceStatusPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
