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

#include "getservicegraphrequest.h"
#include "getservicegraphrequest_p.h"
#include "getservicegraphresponse.h"
#include "xrayrequest_p.h"

namespace AWS {
namespace XRay {

/**
 * @class  GetServiceGraphRequest
 *
 * @brief  Implements XRay GetServiceGraph requests.
 *
 * @see    XRayClient::getServiceGraph
 */

/**
 * @brief  Constructs a new GetServiceGraphResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetServiceGraphResponse::GetServiceGraphResponse(

/**
 * @brief  Constructs a new GetServiceGraphRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetServiceGraphRequest::GetServiceGraphRequest(const GetServiceGraphRequest &other)
    : XRayRequest(new GetServiceGraphRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetServiceGraphRequest object.
 */
GetServiceGraphRequest::GetServiceGraphRequest()
    : XRayRequest(new GetServiceGraphRequestPrivate(XRayRequest::GetServiceGraphAction, this))
{

}

bool GetServiceGraphRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetServiceGraphResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetServiceGraphResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  XRayClient::send
 */
AwsAbstractResponse * GetServiceGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceGraphResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetServiceGraphRequestPrivate
 *
 * @brief  Private implementation for GetServiceGraphRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceGraphRequestPrivate object.
 *
 * @param  action  XRay action being performed.
 * @param  q       Pointer to this object's public GetServiceGraphRequest instance.
 */
GetServiceGraphRequestPrivate::GetServiceGraphRequestPrivate(
    const XRayRequest::Action action, GetServiceGraphRequest * const q)
    : GetServiceGraphPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceGraphRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetServiceGraphRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetServiceGraphRequest instance.
 */
GetServiceGraphRequestPrivate::GetServiceGraphRequestPrivate(
    const GetServiceGraphRequestPrivate &other, GetServiceGraphRequest * const q)
    : GetServiceGraphPrivate(other, q)
{

}

} // namespace XRay
} // namespace AWS
