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

#include "settopicattributesrequest.h"
#include "settopicattributesrequest_p.h"
#include "settopicattributesresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  SetTopicAttributesRequest
 *
 * @brief  Implements SNS SetTopicAttributes requests.
 *
 * @see    SNSClient::setTopicAttributes
 */

/**
 * @brief  Constructs a new SetTopicAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetTopicAttributesRequest::SetTopicAttributesRequest(const SetTopicAttributesRequest &other)
    : SNSRequest(new SetTopicAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetTopicAttributesRequest object.
 */
SetTopicAttributesRequest::SetTopicAttributesRequest()
    : SNSRequest(new SetTopicAttributesRequestPrivate(SNSRequest::SetTopicAttributesAction, this))
{

}

bool SetTopicAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetTopicAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetTopicAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * SetTopicAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SetTopicAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetTopicAttributesRequestPrivate
 *
 * @brief  Private implementation for SetTopicAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetTopicAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public SetTopicAttributesRequest instance.
 */
SetTopicAttributesRequestPrivate::SetTopicAttributesRequestPrivate(
    const SNSRequest::Action action, SetTopicAttributesRequest * const q)
    : SetTopicAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetTopicAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetTopicAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetTopicAttributesRequest instance.
 */
SetTopicAttributesRequestPrivate::SetTopicAttributesRequestPrivate(
    const SetTopicAttributesRequestPrivate &other, SetTopicAttributesRequest * const q)
    : SetTopicAttributesPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
