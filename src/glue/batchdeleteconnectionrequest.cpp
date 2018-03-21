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

#include "batchdeleteconnectionrequest.h"
#include "batchdeleteconnectionrequest_p.h"
#include "batchdeleteconnectionresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  BatchDeleteConnectionRequest
 *
 * @brief  Implements Glue BatchDeleteConnection requests.
 *
 * @see    GlueClient::batchDeleteConnection
 */

/**
 * @brief  Constructs a new BatchDeleteConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDeleteConnectionResponse::BatchDeleteConnectionResponse(

/**
 * @brief  Constructs a new BatchDeleteConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDeleteConnectionRequest::BatchDeleteConnectionRequest(const BatchDeleteConnectionRequest &other)
    : GlueRequest(new BatchDeleteConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDeleteConnectionRequest object.
 */
BatchDeleteConnectionRequest::BatchDeleteConnectionRequest()
    : GlueRequest(new BatchDeleteConnectionRequestPrivate(GlueRequest::BatchDeleteConnectionAction, this))
{

}

bool BatchDeleteConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDeleteConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDeleteConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * BatchDeleteConnectionRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDeleteConnectionRequestPrivate
 *
 * @brief  Private implementation for BatchDeleteConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteConnectionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public BatchDeleteConnectionRequest instance.
 */
BatchDeleteConnectionRequestPrivate::BatchDeleteConnectionRequestPrivate(
    const GlueRequest::Action action, BatchDeleteConnectionRequest * const q)
    : BatchDeleteConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDeleteConnectionRequest instance.
 */
BatchDeleteConnectionRequestPrivate::BatchDeleteConnectionRequestPrivate(
    const BatchDeleteConnectionRequestPrivate &other, BatchDeleteConnectionRequest * const q)
    : BatchDeleteConnectionPrivate(other, q)
{

}
