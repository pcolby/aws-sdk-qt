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

#include "batchdeleteattributesrequest.h"
#include "batchdeleteattributesrequest_p.h"
#include "batchdeleteattributesresponse.h"
#include "simpledbrequest_p.h"

namespace AWS {
namespace SimpleDB {

/**
 * @class  BatchDeleteAttributesRequest
 *
 * @brief  Implements SimpleDB BatchDeleteAttributes requests.
 *
 * @see    SimpleDBClient::batchDeleteAttributes
 */

/**
 * @brief  Constructs a new BatchDeleteAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDeleteAttributesRequest::BatchDeleteAttributesRequest(const BatchDeleteAttributesRequest &other)
    : SimpleDBRequest(new BatchDeleteAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDeleteAttributesRequest object.
 */
BatchDeleteAttributesRequest::BatchDeleteAttributesRequest()
    : SimpleDBRequest(new BatchDeleteAttributesRequestPrivate(SimpleDBRequest::BatchDeleteAttributesAction, this))
{

}

bool BatchDeleteAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDeleteAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDeleteAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
AwsAbstractResponse * BatchDeleteAttributesRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDeleteAttributesRequestPrivate
 *
 * @brief  Private implementation for BatchDeleteAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteAttributesRequestPrivate object.
 *
 * @param  action  SimpleDB action being performed.
 * @param  q       Pointer to this object's public BatchDeleteAttributesRequest instance.
 */
BatchDeleteAttributesRequestPrivate::BatchDeleteAttributesRequestPrivate(
    const SimpleDBRequest::Action action, BatchDeleteAttributesRequest * const q)
    : BatchDeleteAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDeleteAttributesRequest instance.
 */
BatchDeleteAttributesRequestPrivate::BatchDeleteAttributesRequestPrivate(
    const BatchDeleteAttributesRequestPrivate &other, BatchDeleteAttributesRequest * const q)
    : BatchDeleteAttributesPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace AWS
