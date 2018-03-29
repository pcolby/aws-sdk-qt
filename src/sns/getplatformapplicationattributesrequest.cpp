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

#include "getplatformapplicationattributesrequest.h"
#include "getplatformapplicationattributesrequest_p.h"
#include "getplatformapplicationattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  GetPlatformApplicationAttributesRequest
 *
 * @brief  Implements SNS GetPlatformApplicationAttributes requests.
 *
 * @see    SNSClient::getPlatformApplicationAttributes
 */

/**
 * @brief  Constructs a new GetPlatformApplicationAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPlatformApplicationAttributesRequest::GetPlatformApplicationAttributesRequest(const GetPlatformApplicationAttributesRequest &other)
    : SNSRequest(new GetPlatformApplicationAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPlatformApplicationAttributesRequest object.
 */
GetPlatformApplicationAttributesRequest::GetPlatformApplicationAttributesRequest()
    : SNSRequest(new GetPlatformApplicationAttributesRequestPrivate(SNSRequest::GetPlatformApplicationAttributesAction, this))
{

}

bool GetPlatformApplicationAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPlatformApplicationAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPlatformApplicationAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPlatformApplicationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetPlatformApplicationAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPlatformApplicationAttributesRequestPrivate
 *
 * @brief  Private implementation for GetPlatformApplicationAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPlatformApplicationAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public GetPlatformApplicationAttributesRequest instance.
 */
GetPlatformApplicationAttributesRequestPrivate::GetPlatformApplicationAttributesRequestPrivate(
    const SNSRequest::Action action, GetPlatformApplicationAttributesRequest * const q)
    : SNSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPlatformApplicationAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPlatformApplicationAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPlatformApplicationAttributesRequest instance.
 */
GetPlatformApplicationAttributesRequestPrivate::GetPlatformApplicationAttributesRequestPrivate(
    const GetPlatformApplicationAttributesRequestPrivate &other, GetPlatformApplicationAttributesRequest * const q)
    : SNSRequestPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
