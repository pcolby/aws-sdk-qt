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

#include "gettracesummariesrequest.h"
#include "gettracesummariesrequest_p.h"
#include "gettracesummariesresponse.h"
#include "xrayrequest_p.h"

namespace AWS {
namespace XRay {

/**
 * @class  GetTraceSummariesRequest
 *
 * @brief  Implements XRay GetTraceSummaries requests.
 *
 * @see    XRayClient::getTraceSummaries
 */

/**
 * @brief  Constructs a new GetTraceSummariesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTraceSummariesRequest::GetTraceSummariesRequest(const GetTraceSummariesRequest &other)
    : XRayRequest(new GetTraceSummariesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTraceSummariesRequest object.
 */
GetTraceSummariesRequest::GetTraceSummariesRequest()
    : XRayRequest(new GetTraceSummariesRequestPrivate(XRayRequest::GetTraceSummariesAction, this))
{

}

bool GetTraceSummariesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTraceSummariesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTraceSummariesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  XRayClient::send
 */
AwsAbstractResponse * GetTraceSummariesRequest::response(QNetworkReply * const reply) const
{
    return new GetTraceSummariesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTraceSummariesRequestPrivate
 *
 * @brief  Private implementation for GetTraceSummariesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTraceSummariesRequestPrivate object.
 *
 * @param  action  XRay action being performed.
 * @param  q       Pointer to this object's public GetTraceSummariesRequest instance.
 */
GetTraceSummariesRequestPrivate::GetTraceSummariesRequestPrivate(
    const XRayRequest::Action action, GetTraceSummariesRequest * const q)
    : GetTraceSummariesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTraceSummariesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTraceSummariesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTraceSummariesRequest instance.
 */
GetTraceSummariesRequestPrivate::GetTraceSummariesRequestPrivate(
    const GetTraceSummariesRequestPrivate &other, GetTraceSummariesRequest * const q)
    : GetTraceSummariesPrivate(other, q)
{

}

} // namespace XRay
} // namespace AWS
