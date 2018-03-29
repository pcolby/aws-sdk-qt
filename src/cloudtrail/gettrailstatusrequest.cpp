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

#include "gettrailstatusrequest.h"
#include "gettrailstatusrequest_p.h"
#include "gettrailstatusresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/**
 * @class  GetTrailStatusRequest
 *
 * @brief  Implements CloudTrail GetTrailStatus requests.
 *
 * @see    CloudTrailClient::getTrailStatus
 */

/**
 * @brief  Constructs a new GetTrailStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTrailStatusRequest::GetTrailStatusRequest(const GetTrailStatusRequest &other)
    : CloudTrailRequest(new GetTrailStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTrailStatusRequest object.
 */
GetTrailStatusRequest::GetTrailStatusRequest()
    : CloudTrailRequest(new GetTrailStatusRequestPrivate(CloudTrailRequest::GetTrailStatusAction, this))
{

}

bool GetTrailStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTrailStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTrailStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
AwsAbstractResponse * GetTrailStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetTrailStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTrailStatusRequestPrivate
 *
 * @brief  Private implementation for GetTrailStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTrailStatusRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public GetTrailStatusRequest instance.
 */
GetTrailStatusRequestPrivate::GetTrailStatusRequestPrivate(
    const CloudTrailRequest::Action action, GetTrailStatusRequest * const q)
    : GetTrailStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTrailStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTrailStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTrailStatusRequest instance.
 */
GetTrailStatusRequestPrivate::GetTrailStatusRequestPrivate(
    const GetTrailStatusRequestPrivate &other, GetTrailStatusRequest * const q)
    : GetTrailStatusPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
