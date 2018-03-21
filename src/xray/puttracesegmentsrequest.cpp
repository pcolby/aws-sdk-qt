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

#include "puttracesegmentsrequest.h"
#include "puttracesegmentsrequest_p.h"
#include "puttracesegmentsresponse.h"
#include "xrayrequest_p.h"

namespace AWS {
namespace XRay {

/**
 * @class  PutTraceSegmentsRequest
 *
 * @brief  Implements XRay PutTraceSegments requests.
 *
 * @see    XRayClient::putTraceSegments
 */

/**
 * @brief  Constructs a new PutTraceSegmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutTraceSegmentsResponse::PutTraceSegmentsResponse(

/**
 * @brief  Constructs a new PutTraceSegmentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutTraceSegmentsRequest::PutTraceSegmentsRequest(const PutTraceSegmentsRequest &other)
    : XRayRequest(new PutTraceSegmentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutTraceSegmentsRequest object.
 */
PutTraceSegmentsRequest::PutTraceSegmentsRequest()
    : XRayRequest(new PutTraceSegmentsRequestPrivate(XRayRequest::PutTraceSegmentsAction, this))
{

}

bool PutTraceSegmentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutTraceSegmentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutTraceSegmentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  XRayClient::send
 */
AwsAbstractResponse * PutTraceSegmentsRequest::response(QNetworkReply * const reply) const
{
    return new PutTraceSegmentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutTraceSegmentsRequestPrivate
 *
 * @brief  Private implementation for PutTraceSegmentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutTraceSegmentsRequestPrivate object.
 *
 * @param  action  XRay action being performed.
 * @param  q       Pointer to this object's public PutTraceSegmentsRequest instance.
 */
PutTraceSegmentsRequestPrivate::PutTraceSegmentsRequestPrivate(
    const XRayRequest::Action action, PutTraceSegmentsRequest * const q)
    : PutTraceSegmentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutTraceSegmentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutTraceSegmentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutTraceSegmentsRequest instance.
 */
PutTraceSegmentsRequestPrivate::PutTraceSegmentsRequestPrivate(
    const PutTraceSegmentsRequestPrivate &other, PutTraceSegmentsRequest * const q)
    : PutTraceSegmentsPrivate(other, q)
{

}
