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

#include "setsmsattributesrequest.h"
#include "setsmsattributesrequest_p.h"
#include "setsmsattributesresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  SetSMSAttributesRequest
 *
 * @brief  Implements SNS SetSMSAttributes requests.
 *
 * @see    SNSClient::setSMSAttributes
 */

/**
 * @brief  Constructs a new SetSMSAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetSMSAttributesResponse::SetSMSAttributesResponse(

/**
 * @brief  Constructs a new SetSMSAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetSMSAttributesRequest::SetSMSAttributesRequest(const SetSMSAttributesRequest &other)
    : SNSRequest(new SetSMSAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetSMSAttributesRequest object.
 */
SetSMSAttributesRequest::SetSMSAttributesRequest()
    : SNSRequest(new SetSMSAttributesRequestPrivate(SNSRequest::SetSMSAttributesAction, this))
{

}

bool SetSMSAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetSMSAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetSMSAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * SetSMSAttributesRequest::response(QNetworkReply * const reply) const
{
    return new SetSMSAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetSMSAttributesRequestPrivate
 *
 * @brief  Private implementation for SetSMSAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetSMSAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public SetSMSAttributesRequest instance.
 */
SetSMSAttributesRequestPrivate::SetSMSAttributesRequestPrivate(
    const SNSRequest::Action action, SetSMSAttributesRequest * const q)
    : SetSMSAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetSMSAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetSMSAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetSMSAttributesRequest instance.
 */
SetSMSAttributesRequestPrivate::SetSMSAttributesRequestPrivate(
    const SetSMSAttributesRequestPrivate &other, SetSMSAttributesRequest * const q)
    : SetSMSAttributesPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
