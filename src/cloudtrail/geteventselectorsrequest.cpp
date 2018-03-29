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

#include "geteventselectorsrequest.h"
#include "geteventselectorsrequest_p.h"
#include "geteventselectorsresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/**
 * @class  GetEventSelectorsRequest
 *
 * @brief  Implements CloudTrail GetEventSelectors requests.
 *
 * @see    CloudTrailClient::getEventSelectors
 */

/**
 * @brief  Constructs a new GetEventSelectorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEventSelectorsRequest::GetEventSelectorsRequest(const GetEventSelectorsRequest &other)
    : CloudTrailRequest(new GetEventSelectorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetEventSelectorsRequest object.
 */
GetEventSelectorsRequest::GetEventSelectorsRequest()
    : CloudTrailRequest(new GetEventSelectorsRequestPrivate(CloudTrailRequest::GetEventSelectorsAction, this))
{

}

bool GetEventSelectorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetEventSelectorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEventSelectorsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEventSelectorsRequest::response(QNetworkReply * const reply) const
{
    return new GetEventSelectorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetEventSelectorsRequestPrivate
 *
 * @brief  Private implementation for GetEventSelectorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEventSelectorsRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public GetEventSelectorsRequest instance.
 */
GetEventSelectorsRequestPrivate::GetEventSelectorsRequestPrivate(
    const CloudTrailRequest::Action action, GetEventSelectorsRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetEventSelectorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEventSelectorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEventSelectorsRequest instance.
 */
GetEventSelectorsRequestPrivate::GetEventSelectorsRequestPrivate(
    const GetEventSelectorsRequestPrivate &other, GetEventSelectorsRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
