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

#include "getdevendpointsrequest.h"
#include "getdevendpointsrequest_p.h"
#include "getdevendpointsresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetDevEndpointsRequest
 *
 * @brief  Implements Glue GetDevEndpoints requests.
 *
 * @see    GlueClient::getDevEndpoints
 */

/**
 * @brief  Constructs a new GetDevEndpointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDevEndpointsRequest::GetDevEndpointsRequest(const GetDevEndpointsRequest &other)
    : GlueRequest(new GetDevEndpointsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDevEndpointsRequest object.
 */
GetDevEndpointsRequest::GetDevEndpointsRequest()
    : GlueRequest(new GetDevEndpointsRequestPrivate(GlueRequest::GetDevEndpointsAction, this))
{

}

bool GetDevEndpointsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDevEndpointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDevEndpointsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetDevEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new GetDevEndpointsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDevEndpointsRequestPrivate
 *
 * @brief  Private implementation for GetDevEndpointsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDevEndpointsRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetDevEndpointsRequest instance.
 */
GetDevEndpointsRequestPrivate::GetDevEndpointsRequestPrivate(
    const GlueRequest::Action action, GetDevEndpointsRequest * const q)
    : GetDevEndpointsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDevEndpointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDevEndpointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDevEndpointsRequest instance.
 */
GetDevEndpointsRequestPrivate::GetDevEndpointsRequestPrivate(
    const GetDevEndpointsRequestPrivate &other, GetDevEndpointsRequest * const q)
    : GetDevEndpointsPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
