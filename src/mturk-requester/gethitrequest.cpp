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

#include "gethitrequest.h"
#include "gethitrequest_p.h"
#include "gethitresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  GetHITRequest
 *
 * @brief  Implements MTurk GetHIT requests.
 *
 * @see    MTurkClient::getHIT
 */

/**
 * @brief  Constructs a new GetHITResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHITResponse::GetHITResponse(

/**
 * @brief  Constructs a new GetHITRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetHITRequest::GetHITRequest(const GetHITRequest &other)
    : MTurkRequest(new GetHITRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetHITRequest object.
 */
GetHITRequest::GetHITRequest()
    : MTurkRequest(new GetHITRequestPrivate(MTurkRequest::GetHITAction, this))
{

}

bool GetHITRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetHITResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetHITResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * GetHITRequest::response(QNetworkReply * const reply) const
{
    return new GetHITResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetHITRequestPrivate
 *
 * @brief  Private implementation for GetHITRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHITRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public GetHITRequest instance.
 */
GetHITRequestPrivate::GetHITRequestPrivate(
    const MTurkRequest::Action action, GetHITRequest * const q)
    : GetHITPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetHITRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetHITRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetHITRequest instance.
 */
GetHITRequestPrivate::GetHITRequestPrivate(
    const GetHITRequestPrivate &other, GetHITRequest * const q)
    : GetHITPrivate(other, q)
{

}
