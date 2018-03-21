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

#include "setplatformapplicationattributesrequest.h"
#include "setplatformapplicationattributesrequest_p.h"
#include "setplatformapplicationattributesresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  SetPlatformApplicationAttributesRequest
 *
 * @brief  Implements SNS SetPlatformApplicationAttributes requests.
 *
 * @see    SNSClient::setPlatformApplicationAttributes
 */

/**
 * @brief  Constructs a new SetPlatformApplicationAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetPlatformApplicationAttributesResponse::SetPlatformApplicationAttributesResponse(

/**
 * @brief  Constructs a new SetPlatformApplicationAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetPlatformApplicationAttributesRequest::SetPlatformApplicationAttributesRequest(const SetPlatformApplicationAttributesRequest &other)
    : SNSRequest(new SetPlatformApplicationAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetPlatformApplicationAttributesRequest object.
 */
SetPlatformApplicationAttributesRequest::SetPlatformApplicationAttributesRequest()
    : SNSRequest(new SetPlatformApplicationAttributesRequestPrivate(SNSRequest::SetPlatformApplicationAttributesAction, this))
{

}

bool SetPlatformApplicationAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetPlatformApplicationAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetPlatformApplicationAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * SetPlatformApplicationAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SetPlatformApplicationAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetPlatformApplicationAttributesRequestPrivate
 *
 * @brief  Private implementation for SetPlatformApplicationAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetPlatformApplicationAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public SetPlatformApplicationAttributesRequest instance.
 */
SetPlatformApplicationAttributesRequestPrivate::SetPlatformApplicationAttributesRequestPrivate(
    const SNSRequest::Action action, SetPlatformApplicationAttributesRequest * const q)
    : SetPlatformApplicationAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetPlatformApplicationAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetPlatformApplicationAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetPlatformApplicationAttributesRequest instance.
 */
SetPlatformApplicationAttributesRequestPrivate::SetPlatformApplicationAttributesRequestPrivate(
    const SetPlatformApplicationAttributesRequestPrivate &other, SetPlatformApplicationAttributesRequest * const q)
    : SetPlatformApplicationAttributesPrivate(other, q)
{

}
