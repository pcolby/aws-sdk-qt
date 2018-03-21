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

#include "getaccesskeylastusedrequest.h"
#include "getaccesskeylastusedrequest_p.h"
#include "getaccesskeylastusedresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  GetAccessKeyLastUsedRequest
 *
 * @brief  Implements IAM GetAccessKeyLastUsed requests.
 *
 * @see    IAMClient::getAccessKeyLastUsed
 */

/**
 * @brief  Constructs a new GetAccessKeyLastUsedResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccessKeyLastUsedResponse::GetAccessKeyLastUsedResponse(

/**
 * @brief  Constructs a new GetAccessKeyLastUsedRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAccessKeyLastUsedRequest::GetAccessKeyLastUsedRequest(const GetAccessKeyLastUsedRequest &other)
    : IAMRequest(new GetAccessKeyLastUsedRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAccessKeyLastUsedRequest object.
 */
GetAccessKeyLastUsedRequest::GetAccessKeyLastUsedRequest()
    : IAMRequest(new GetAccessKeyLastUsedRequestPrivate(IAMRequest::GetAccessKeyLastUsedAction, this))
{

}

bool GetAccessKeyLastUsedRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAccessKeyLastUsedResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAccessKeyLastUsedResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetAccessKeyLastUsedRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessKeyLastUsedResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAccessKeyLastUsedRequestPrivate
 *
 * @brief  Private implementation for GetAccessKeyLastUsedRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccessKeyLastUsedRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetAccessKeyLastUsedRequest instance.
 */
GetAccessKeyLastUsedRequestPrivate::GetAccessKeyLastUsedRequestPrivate(
    const IAMRequest::Action action, GetAccessKeyLastUsedRequest * const q)
    : GetAccessKeyLastUsedPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAccessKeyLastUsedRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAccessKeyLastUsedRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAccessKeyLastUsedRequest instance.
 */
GetAccessKeyLastUsedRequestPrivate::GetAccessKeyLastUsedRequestPrivate(
    const GetAccessKeyLastUsedRequestPrivate &other, GetAccessKeyLastUsedRequest * const q)
    : GetAccessKeyLastUsedPrivate(other, q)
{

}
