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

#include "getcalleridentityrequest.h"
#include "getcalleridentityrequest_p.h"
#include "getcalleridentityresponse.h"
#include "stsrequest_p.h"

namespace AWS {
namespace STS {

/**
 * @class  GetCallerIdentityRequest
 *
 * @brief  Implements STS GetCallerIdentity requests.
 *
 * @see    STSClient::getCallerIdentity
 */

/**
 * @brief  Constructs a new GetCallerIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCallerIdentityResponse::GetCallerIdentityResponse(

/**
 * @brief  Constructs a new GetCallerIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCallerIdentityRequest::GetCallerIdentityRequest(const GetCallerIdentityRequest &other)
    : STSRequest(new GetCallerIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCallerIdentityRequest object.
 */
GetCallerIdentityRequest::GetCallerIdentityRequest()
    : STSRequest(new GetCallerIdentityRequestPrivate(STSRequest::GetCallerIdentityAction, this))
{

}

bool GetCallerIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCallerIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCallerIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  STSClient::send
 */
AwsAbstractResponse * GetCallerIdentityRequest::response(QNetworkReply * const reply) const
{
    return new GetCallerIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCallerIdentityRequestPrivate
 *
 * @brief  Private implementation for GetCallerIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCallerIdentityRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public GetCallerIdentityRequest instance.
 */
GetCallerIdentityRequestPrivate::GetCallerIdentityRequestPrivate(
    const STSRequest::Action action, GetCallerIdentityRequest * const q)
    : GetCallerIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCallerIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCallerIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCallerIdentityRequest instance.
 */
GetCallerIdentityRequestPrivate::GetCallerIdentityRequestPrivate(
    const GetCallerIdentityRequestPrivate &other, GetCallerIdentityRequest * const q)
    : GetCallerIdentityPrivate(other, q)
{

}
