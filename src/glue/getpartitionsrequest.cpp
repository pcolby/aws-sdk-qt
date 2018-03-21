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

#include "getpartitionsrequest.h"
#include "getpartitionsrequest_p.h"
#include "getpartitionsresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetPartitionsRequest
 *
 * @brief  Implements Glue GetPartitions requests.
 *
 * @see    GlueClient::getPartitions
 */

/**
 * @brief  Constructs a new GetPartitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPartitionsResponse::GetPartitionsResponse(

/**
 * @brief  Constructs a new GetPartitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPartitionsRequest::GetPartitionsRequest(const GetPartitionsRequest &other)
    : GlueRequest(new GetPartitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPartitionsRequest object.
 */
GetPartitionsRequest::GetPartitionsRequest()
    : GlueRequest(new GetPartitionsRequestPrivate(GlueRequest::GetPartitionsAction, this))
{

}

bool GetPartitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPartitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPartitionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetPartitionsRequest::response(QNetworkReply * const reply) const
{
    return new GetPartitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPartitionsRequestPrivate
 *
 * @brief  Private implementation for GetPartitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPartitionsRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetPartitionsRequest instance.
 */
GetPartitionsRequestPrivate::GetPartitionsRequestPrivate(
    const GlueRequest::Action action, GetPartitionsRequest * const q)
    : GetPartitionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPartitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPartitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPartitionsRequest instance.
 */
GetPartitionsRequestPrivate::GetPartitionsRequestPrivate(
    const GetPartitionsRequestPrivate &other, GetPartitionsRequest * const q)
    : GetPartitionsPrivate(other, q)
{

}
