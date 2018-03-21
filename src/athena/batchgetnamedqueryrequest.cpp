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

#include "batchgetnamedqueryrequest.h"
#include "batchgetnamedqueryrequest_p.h"
#include "batchgetnamedqueryresponse.h"
#include "athenarequest_p.h"

namespace AWS {
namespace Athena {

/**
 * @class  BatchGetNamedQueryRequest
 *
 * @brief  Implements Athena BatchGetNamedQuery requests.
 *
 * @see    AthenaClient::batchGetNamedQuery
 */

/**
 * @brief  Constructs a new BatchGetNamedQueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetNamedQueryResponse::BatchGetNamedQueryResponse(

/**
 * @brief  Constructs a new BatchGetNamedQueryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetNamedQueryRequest::BatchGetNamedQueryRequest(const BatchGetNamedQueryRequest &other)
    : AthenaRequest(new BatchGetNamedQueryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetNamedQueryRequest object.
 */
BatchGetNamedQueryRequest::BatchGetNamedQueryRequest()
    : AthenaRequest(new BatchGetNamedQueryRequestPrivate(AthenaRequest::BatchGetNamedQueryAction, this))
{

}

bool BatchGetNamedQueryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetNamedQueryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetNamedQueryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AthenaClient::send
 */
AwsAbstractResponse * BatchGetNamedQueryRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetNamedQueryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetNamedQueryRequestPrivate
 *
 * @brief  Private implementation for BatchGetNamedQueryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetNamedQueryRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public BatchGetNamedQueryRequest instance.
 */
BatchGetNamedQueryRequestPrivate::BatchGetNamedQueryRequestPrivate(
    const AthenaRequest::Action action, BatchGetNamedQueryRequest * const q)
    : BatchGetNamedQueryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetNamedQueryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetNamedQueryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetNamedQueryRequest instance.
 */
BatchGetNamedQueryRequestPrivate::BatchGetNamedQueryRequestPrivate(
    const BatchGetNamedQueryRequestPrivate &other, BatchGetNamedQueryRequest * const q)
    : BatchGetNamedQueryPrivate(other, q)
{

}

} // namespace Athena
} // namespace AWS
