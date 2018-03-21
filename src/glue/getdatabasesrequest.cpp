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

#include "getdatabasesrequest.h"
#include "getdatabasesrequest_p.h"
#include "getdatabasesresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetDatabasesRequest
 *
 * @brief  Implements Glue GetDatabases requests.
 *
 * @see    GlueClient::getDatabases
 */

/**
 * @brief  Constructs a new GetDatabasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDatabasesResponse::GetDatabasesResponse(

/**
 * @brief  Constructs a new GetDatabasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDatabasesRequest::GetDatabasesRequest(const GetDatabasesRequest &other)
    : GlueRequest(new GetDatabasesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDatabasesRequest object.
 */
GetDatabasesRequest::GetDatabasesRequest()
    : GlueRequest(new GetDatabasesRequestPrivate(GlueRequest::GetDatabasesAction, this))
{

}

bool GetDatabasesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDatabasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDatabasesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetDatabasesRequest::response(QNetworkReply * const reply) const
{
    return new GetDatabasesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDatabasesRequestPrivate
 *
 * @brief  Private implementation for GetDatabasesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDatabasesRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetDatabasesRequest instance.
 */
GetDatabasesRequestPrivate::GetDatabasesRequestPrivate(
    const GlueRequest::Action action, GetDatabasesRequest * const q)
    : GetDatabasesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDatabasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDatabasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDatabasesRequest instance.
 */
GetDatabasesRequestPrivate::GetDatabasesRequestPrivate(
    const GetDatabasesRequestPrivate &other, GetDatabasesRequest * const q)
    : GetDatabasesPrivate(other, q)
{

}
