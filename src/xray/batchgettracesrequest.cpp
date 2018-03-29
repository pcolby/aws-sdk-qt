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

#include "batchgettracesrequest.h"
#include "batchgettracesrequest_p.h"
#include "batchgettracesresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/**
 * @class  BatchGetTracesRequest
 *
 * @brief  Implements XRay BatchGetTraces requests.
 *
 * @see    XRayClient::batchGetTraces
 */

/**
 * @brief  Constructs a new BatchGetTracesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetTracesRequest::BatchGetTracesRequest(const BatchGetTracesRequest &other)
    : XRayRequest(new BatchGetTracesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetTracesRequest object.
 */
BatchGetTracesRequest::BatchGetTracesRequest()
    : XRayRequest(new BatchGetTracesRequestPrivate(XRayRequest::BatchGetTracesAction, this))
{

}

bool BatchGetTracesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetTracesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetTracesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  XRayClient::send
 */
AwsAbstractResponse * BatchGetTracesRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetTracesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetTracesRequestPrivate
 *
 * @brief  Private implementation for BatchGetTracesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetTracesRequestPrivate object.
 *
 * @param  action  XRay action being performed.
 * @param  q       Pointer to this object's public BatchGetTracesRequest instance.
 */
BatchGetTracesRequestPrivate::BatchGetTracesRequestPrivate(
    const XRayRequest::Action action, BatchGetTracesRequest * const q)
    : BatchGetTracesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetTracesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetTracesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetTracesRequest instance.
 */
BatchGetTracesRequestPrivate::BatchGetTracesRequestPrivate(
    const BatchGetTracesRequestPrivate &other, BatchGetTracesRequest * const q)
    : BatchGetTracesPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
