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

#include "putdestinationrequest.h"
#include "putdestinationrequest_p.h"
#include "putdestinationresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutDestinationRequest
 *
 * @brief  Implements CloudWatchLogs PutDestination requests.
 *
 * @see    CloudWatchLogsClient::putDestination
 */

/**
 * @brief  Constructs a new PutDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutDestinationResponse::PutDestinationResponse(

/**
 * @brief  Constructs a new PutDestinationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutDestinationRequest::PutDestinationRequest(const PutDestinationRequest &other)
    : CloudWatchLogsRequest(new PutDestinationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutDestinationRequest object.
 */
PutDestinationRequest::PutDestinationRequest()
    : CloudWatchLogsRequest(new PutDestinationRequestPrivate(CloudWatchLogsRequest::PutDestinationAction, this))
{

}

bool PutDestinationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutDestinationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutDestinationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * PutDestinationRequest::response(QNetworkReply * const reply) const
{
    return new PutDestinationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutDestinationRequestPrivate
 *
 * @brief  Private implementation for PutDestinationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutDestinationRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public PutDestinationRequest instance.
 */
PutDestinationRequestPrivate::PutDestinationRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutDestinationRequest * const q)
    : PutDestinationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutDestinationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutDestinationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutDestinationRequest instance.
 */
PutDestinationRequestPrivate::PutDestinationRequestPrivate(
    const PutDestinationRequestPrivate &other, PutDestinationRequest * const q)
    : PutDestinationPrivate(other, q)
{

}
