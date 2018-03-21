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

#include "gettablesrequest.h"
#include "gettablesrequest_p.h"
#include "gettablesresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetTablesRequest
 *
 * @brief  Implements Glue GetTables requests.
 *
 * @see    GlueClient::getTables
 */

/**
 * @brief  Constructs a new GetTablesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTablesResponse::GetTablesResponse(

/**
 * @brief  Constructs a new GetTablesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTablesRequest::GetTablesRequest(const GetTablesRequest &other)
    : GlueRequest(new GetTablesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTablesRequest object.
 */
GetTablesRequest::GetTablesRequest()
    : GlueRequest(new GetTablesRequestPrivate(GlueRequest::GetTablesAction, this))
{

}

bool GetTablesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTablesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTablesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetTablesRequest::response(QNetworkReply * const reply) const
{
    return new GetTablesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTablesRequestPrivate
 *
 * @brief  Private implementation for GetTablesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTablesRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetTablesRequest instance.
 */
GetTablesRequestPrivate::GetTablesRequestPrivate(
    const GlueRequest::Action action, GetTablesRequest * const q)
    : GetTablesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTablesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTablesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTablesRequest instance.
 */
GetTablesRequestPrivate::GetTablesRequestPrivate(
    const GetTablesRequestPrivate &other, GetTablesRequest * const q)
    : GetTablesPrivate(other, q)
{

}
