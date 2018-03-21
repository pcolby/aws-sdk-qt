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

#include "getinvalidationrequest.h"
#include "getinvalidationrequest_p.h"
#include "getinvalidationresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  GetInvalidationRequest
 *
 * @brief  Implements CloudFront GetInvalidation requests.
 *
 * @see    CloudFrontClient::getInvalidation
 */

/**
 * @brief  Constructs a new GetInvalidationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInvalidationResponse::GetInvalidationResponse(

/**
 * @brief  Constructs a new GetInvalidationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInvalidationRequest::GetInvalidationRequest(const GetInvalidationRequest &other)
    : CloudFrontRequest(new GetInvalidationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInvalidationRequest object.
 */
GetInvalidationRequest::GetInvalidationRequest()
    : CloudFrontRequest(new GetInvalidationRequestPrivate(CloudFrontRequest::GetInvalidationAction, this))
{

}

bool GetInvalidationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInvalidationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInvalidationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * GetInvalidationRequest::response(QNetworkReply * const reply) const
{
    return new GetInvalidationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInvalidationRequestPrivate
 *
 * @brief  Private implementation for GetInvalidationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInvalidationRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public GetInvalidationRequest instance.
 */
GetInvalidationRequestPrivate::GetInvalidationRequestPrivate(
    const CloudFrontRequest::Action action, GetInvalidationRequest * const q)
    : GetInvalidationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInvalidationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInvalidationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInvalidationRequest instance.
 */
GetInvalidationRequestPrivate::GetInvalidationRequestPrivate(
    const GetInvalidationRequestPrivate &other, GetInvalidationRequest * const q)
    : GetInvalidationPrivate(other, q)
{

}
