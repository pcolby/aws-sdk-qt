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

#include "gettelemetrymetadatarequest.h"
#include "gettelemetrymetadatarequest_p.h"
#include "gettelemetrymetadataresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  GetTelemetryMetadataRequest
 *
 * @brief  Implements Inspector GetTelemetryMetadata requests.
 *
 * @see    InspectorClient::getTelemetryMetadata
 */

/**
 * @brief  Constructs a new GetTelemetryMetadataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTelemetryMetadataRequest::GetTelemetryMetadataRequest(const GetTelemetryMetadataRequest &other)
    : InspectorRequest(new GetTelemetryMetadataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTelemetryMetadataRequest object.
 */
GetTelemetryMetadataRequest::GetTelemetryMetadataRequest()
    : InspectorRequest(new GetTelemetryMetadataRequestPrivate(InspectorRequest::GetTelemetryMetadataAction, this))
{

}

bool GetTelemetryMetadataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTelemetryMetadataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTelemetryMetadataResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * GetTelemetryMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetTelemetryMetadataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTelemetryMetadataRequestPrivate
 *
 * @brief  Private implementation for GetTelemetryMetadataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTelemetryMetadataRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public GetTelemetryMetadataRequest instance.
 */
GetTelemetryMetadataRequestPrivate::GetTelemetryMetadataRequestPrivate(
    const InspectorRequest::Action action, GetTelemetryMetadataRequest * const q)
    : GetTelemetryMetadataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTelemetryMetadataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTelemetryMetadataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTelemetryMetadataRequest instance.
 */
GetTelemetryMetadataRequestPrivate::GetTelemetryMetadataRequestPrivate(
    const GetTelemetryMetadataRequestPrivate &other, GetTelemetryMetadataRequest * const q)
    : GetTelemetryMetadataPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
