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

#include "getdataflowgraphrequest.h"
#include "getdataflowgraphrequest_p.h"
#include "getdataflowgraphresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetDataflowGraphRequest
 *
 * @brief  Implements Glue GetDataflowGraph requests.
 *
 * @see    GlueClient::getDataflowGraph
 */

/**
 * @brief  Constructs a new GetDataflowGraphResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDataflowGraphResponse::GetDataflowGraphResponse(

/**
 * @brief  Constructs a new GetDataflowGraphRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDataflowGraphRequest::GetDataflowGraphRequest(const GetDataflowGraphRequest &other)
    : GlueRequest(new GetDataflowGraphRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDataflowGraphRequest object.
 */
GetDataflowGraphRequest::GetDataflowGraphRequest()
    : GlueRequest(new GetDataflowGraphRequestPrivate(GlueRequest::GetDataflowGraphAction, this))
{

}

bool GetDataflowGraphRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDataflowGraphResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDataflowGraphResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetDataflowGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetDataflowGraphResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDataflowGraphRequestPrivate
 *
 * @brief  Private implementation for GetDataflowGraphRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDataflowGraphRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetDataflowGraphRequest instance.
 */
GetDataflowGraphRequestPrivate::GetDataflowGraphRequestPrivate(
    const GlueRequest::Action action, GetDataflowGraphRequest * const q)
    : GetDataflowGraphPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDataflowGraphRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDataflowGraphRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDataflowGraphRequest instance.
 */
GetDataflowGraphRequestPrivate::GetDataflowGraphRequestPrivate(
    const GetDataflowGraphRequestPrivate &other, GetDataflowGraphRequest * const q)
    : GetDataflowGraphPrivate(other, q)
{

}
