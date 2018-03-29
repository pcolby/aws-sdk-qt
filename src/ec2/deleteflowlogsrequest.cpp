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

#include "deleteflowlogsrequest.h"
#include "deleteflowlogsrequest_p.h"
#include "deleteflowlogsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteFlowLogsRequest
 *
 * @brief  Implements EC2 DeleteFlowLogs requests.
 *
 * @see    EC2Client::deleteFlowLogs
 */

/**
 * @brief  Constructs a new DeleteFlowLogsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFlowLogsRequest::DeleteFlowLogsRequest(const DeleteFlowLogsRequest &other)
    : EC2Request(new DeleteFlowLogsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFlowLogsRequest object.
 */
DeleteFlowLogsRequest::DeleteFlowLogsRequest()
    : EC2Request(new DeleteFlowLogsRequestPrivate(EC2Request::DeleteFlowLogsAction, this))
{

}

bool DeleteFlowLogsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFlowLogsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFlowLogsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteFlowLogsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFlowLogsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFlowLogsRequestPrivate
 *
 * @brief  Private implementation for DeleteFlowLogsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFlowLogsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteFlowLogsRequest instance.
 */
DeleteFlowLogsRequestPrivate::DeleteFlowLogsRequestPrivate(
    const EC2Request::Action action, DeleteFlowLogsRequest * const q)
    : DeleteFlowLogsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFlowLogsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFlowLogsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFlowLogsRequest instance.
 */
DeleteFlowLogsRequestPrivate::DeleteFlowLogsRequestPrivate(
    const DeleteFlowLogsRequestPrivate &other, DeleteFlowLogsRequest * const q)
    : DeleteFlowLogsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
