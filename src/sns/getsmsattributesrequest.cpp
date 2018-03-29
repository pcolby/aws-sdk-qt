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

#include "getsmsattributesrequest.h"
#include "getsmsattributesrequest_p.h"
#include "getsmsattributesresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  GetSMSAttributesRequest
 *
 * @brief  Implements SNS GetSMSAttributes requests.
 *
 * @see    SNSClient::getSMSAttributes
 */

/**
 * @brief  Constructs a new GetSMSAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSMSAttributesRequest::GetSMSAttributesRequest(const GetSMSAttributesRequest &other)
    : SNSRequest(new GetSMSAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSMSAttributesRequest object.
 */
GetSMSAttributesRequest::GetSMSAttributesRequest()
    : SNSRequest(new GetSMSAttributesRequestPrivate(SNSRequest::GetSMSAttributesAction, this))
{

}

bool GetSMSAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSMSAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSMSAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * GetSMSAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetSMSAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSMSAttributesRequestPrivate
 *
 * @brief  Private implementation for GetSMSAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSMSAttributesRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public GetSMSAttributesRequest instance.
 */
GetSMSAttributesRequestPrivate::GetSMSAttributesRequestPrivate(
    const SNSRequest::Action action, GetSMSAttributesRequest * const q)
    : GetSMSAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSMSAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSMSAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSMSAttributesRequest instance.
 */
GetSMSAttributesRequestPrivate::GetSMSAttributesRequestPrivate(
    const GetSMSAttributesRequestPrivate &other, GetSMSAttributesRequest * const q)
    : GetSMSAttributesPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws
