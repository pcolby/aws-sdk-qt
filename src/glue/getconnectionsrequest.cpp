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

#include "getconnectionsrequest.h"
#include "getconnectionsrequest_p.h"
#include "getconnectionsresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetConnectionsRequest
 *
 * @brief  Implements Glue GetConnections requests.
 *
 * @see    GlueClient::getConnections
 */

/**
 * @brief  Constructs a new GetConnectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetConnectionsRequest::GetConnectionsRequest(const GetConnectionsRequest &other)
    : GlueRequest(new GetConnectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetConnectionsRequest object.
 */
GetConnectionsRequest::GetConnectionsRequest()
    : GlueRequest(new GetConnectionsRequestPrivate(GlueRequest::GetConnectionsAction, this))
{

}

bool GetConnectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetConnectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetConnectionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetConnectionsRequestPrivate
 *
 * @brief  Private implementation for GetConnectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectionsRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetConnectionsRequest instance.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const GlueRequest::Action action, GetConnectionsRequest * const q)
    : GetConnectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetConnectionsRequest instance.
 */
GetConnectionsRequestPrivate::GetConnectionsRequestPrivate(
    const GetConnectionsRequestPrivate &other, GetConnectionsRequest * const q)
    : GetConnectionsPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
