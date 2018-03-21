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

#include "getinstanceaccessdetailsrequest.h"
#include "getinstanceaccessdetailsrequest_p.h"
#include "getinstanceaccessdetailsresponse.h"
#include "lightsailrequest_p.h"

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstanceAccessDetailsRequest
 *
 * @brief  Implements Lightsail GetInstanceAccessDetails requests.
 *
 * @see    LightsailClient::getInstanceAccessDetails
 */

/**
 * @brief  Constructs a new GetInstanceAccessDetailsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceAccessDetailsResponse::GetInstanceAccessDetailsResponse(

/**
 * @brief  Constructs a new GetInstanceAccessDetailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInstanceAccessDetailsRequest::GetInstanceAccessDetailsRequest(const GetInstanceAccessDetailsRequest &other)
    : LightsailRequest(new GetInstanceAccessDetailsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInstanceAccessDetailsRequest object.
 */
GetInstanceAccessDetailsRequest::GetInstanceAccessDetailsRequest()
    : LightsailRequest(new GetInstanceAccessDetailsRequestPrivate(LightsailRequest::GetInstanceAccessDetailsAction, this))
{

}

bool GetInstanceAccessDetailsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInstanceAccessDetailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInstanceAccessDetailsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LightsailClient::send
 */
AwsAbstractResponse * GetInstanceAccessDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceAccessDetailsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInstanceAccessDetailsRequestPrivate
 *
 * @brief  Private implementation for GetInstanceAccessDetailsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceAccessDetailsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetInstanceAccessDetailsRequest instance.
 */
GetInstanceAccessDetailsRequestPrivate::GetInstanceAccessDetailsRequestPrivate(
    const LightsailRequest::Action action, GetInstanceAccessDetailsRequest * const q)
    : GetInstanceAccessDetailsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceAccessDetailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceAccessDetailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInstanceAccessDetailsRequest instance.
 */
GetInstanceAccessDetailsRequestPrivate::GetInstanceAccessDetailsRequestPrivate(
    const GetInstanceAccessDetailsRequestPrivate &other, GetInstanceAccessDetailsRequest * const q)
    : GetInstanceAccessDetailsPrivate(other, q)
{

}
