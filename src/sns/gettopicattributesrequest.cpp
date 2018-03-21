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

#include "gettopicattributesrequest.h"
#include "gettopicattributesrequest_p.h"
#include "gettopicattributesresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  GetTopicAttributesRequest
 *
 * @brief  Implements SNS GetTopicAttributes requests.
 *
 * @see    SNSClient::getTopicAttributes
 */

/**
 * @brief  Constructs a new GetTopicAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTopicAttributesResponse::GetTopicAttributesResponse(

/**
 * @brief  Constructs a new GetTopicAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTopicAttributesRequest::GetTopicAttributesRequest(const GetTopicAttributesRequest &other)
    : SNSRequest(new GetTopicAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTopicAttributesRequest object.
 */
GetTopicAttributesRequest::GetTopicAttributesRequest()
    : SNSRequest(new GetTopicAttributesRequestPrivate(SNSRequest::GetTopicAttributesAction, this))
{

}

bool GetTopicAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTopicAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTopicAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * GetTopicAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetTopicAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTopicAttributesRequestPrivate
 *
 * @brief  Private implementation for GetTopicAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTopicAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public GetTopicAttributesRequest instance.
 */
GetTopicAttributesRequestPrivate::GetTopicAttributesRequestPrivate(
    const SNSRequest::Action action, GetTopicAttributesRequest * const q)
    : GetTopicAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTopicAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTopicAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTopicAttributesRequest instance.
 */
GetTopicAttributesRequestPrivate::GetTopicAttributesRequestPrivate(
    const GetTopicAttributesRequestPrivate &other, GetTopicAttributesRequest * const q)
    : GetTopicAttributesPrivate(other, q)
{

}
