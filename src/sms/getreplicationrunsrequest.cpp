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

#include "getreplicationrunsrequest.h"
#include "getreplicationrunsrequest_p.h"
#include "getreplicationrunsresponse.h"
#include "smsrequest_p.h"

namespace AWS {
namespace SMS {

/**
 * @class  GetReplicationRunsRequest
 *
 * @brief  Implements SMS GetReplicationRuns requests.
 *
 * @see    SMSClient::getReplicationRuns
 */

/**
 * @brief  Constructs a new GetReplicationRunsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReplicationRunsResponse::GetReplicationRunsResponse(

/**
 * @brief  Constructs a new GetReplicationRunsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetReplicationRunsRequest::GetReplicationRunsRequest(const GetReplicationRunsRequest &other)
    : SMSRequest(new GetReplicationRunsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetReplicationRunsRequest object.
 */
GetReplicationRunsRequest::GetReplicationRunsRequest()
    : SMSRequest(new GetReplicationRunsRequestPrivate(SMSRequest::GetReplicationRunsAction, this))
{

}

bool GetReplicationRunsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetReplicationRunsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetReplicationRunsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SMSClient::send
 */
AwsAbstractResponse * GetReplicationRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetReplicationRunsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetReplicationRunsRequestPrivate
 *
 * @brief  Private implementation for GetReplicationRunsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReplicationRunsRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public GetReplicationRunsRequest instance.
 */
GetReplicationRunsRequestPrivate::GetReplicationRunsRequestPrivate(
    const SMSRequest::Action action, GetReplicationRunsRequest * const q)
    : GetReplicationRunsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetReplicationRunsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetReplicationRunsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetReplicationRunsRequest instance.
 */
GetReplicationRunsRequestPrivate::GetReplicationRunsRequestPrivate(
    const GetReplicationRunsRequestPrivate &other, GetReplicationRunsRequest * const q)
    : GetReplicationRunsPrivate(other, q)
{

}

} // namespace SMS
} // namespace AWS
