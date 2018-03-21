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

#include "getchangetokenstatusrequest.h"
#include "getchangetokenstatusrequest_p.h"
#include "getchangetokenstatusresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  GetChangeTokenStatusRequest
 *
 * @brief  Implements WAF GetChangeTokenStatus requests.
 *
 * @see    WAFClient::getChangeTokenStatus
 */

/**
 * @brief  Constructs a new GetChangeTokenStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetChangeTokenStatusResponse::GetChangeTokenStatusResponse(

/**
 * @brief  Constructs a new GetChangeTokenStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetChangeTokenStatusRequest::GetChangeTokenStatusRequest(const GetChangeTokenStatusRequest &other)
    : WAFRequest(new GetChangeTokenStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetChangeTokenStatusRequest object.
 */
GetChangeTokenStatusRequest::GetChangeTokenStatusRequest()
    : WAFRequest(new GetChangeTokenStatusRequestPrivate(WAFRequest::GetChangeTokenStatusAction, this))
{

}

bool GetChangeTokenStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetChangeTokenStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetChangeTokenStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * GetChangeTokenStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetChangeTokenStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetChangeTokenStatusRequestPrivate
 *
 * @brief  Private implementation for GetChangeTokenStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeTokenStatusRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public GetChangeTokenStatusRequest instance.
 */
GetChangeTokenStatusRequestPrivate::GetChangeTokenStatusRequestPrivate(
    const WAFRequest::Action action, GetChangeTokenStatusRequest * const q)
    : GetChangeTokenStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeTokenStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetChangeTokenStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetChangeTokenStatusRequest instance.
 */
GetChangeTokenStatusRequestPrivate::GetChangeTokenStatusRequestPrivate(
    const GetChangeTokenStatusRequestPrivate &other, GetChangeTokenStatusRequest * const q)
    : GetChangeTokenStatusPrivate(other, q)
{

}
