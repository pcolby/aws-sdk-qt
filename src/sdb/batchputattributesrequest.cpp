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

#include "batchputattributesrequest.h"
#include "batchputattributesrequest_p.h"
#include "batchputattributesresponse.h"
#include "simpledbrequest_p.h"

namespace AWS {
namespace SimpleDB {

/**
 * @class  BatchPutAttributesRequest
 *
 * @brief  Implements SimpleDB BatchPutAttributes requests.
 *
 * @see    SimpleDBClient::batchPutAttributes
 */

/**
 * @brief  Constructs a new BatchPutAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchPutAttributesResponse::BatchPutAttributesResponse(

/**
 * @brief  Constructs a new BatchPutAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchPutAttributesRequest::BatchPutAttributesRequest(const BatchPutAttributesRequest &other)
    : SimpleDBRequest(new BatchPutAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchPutAttributesRequest object.
 */
BatchPutAttributesRequest::BatchPutAttributesRequest()
    : SimpleDBRequest(new BatchPutAttributesRequestPrivate(SimpleDBRequest::BatchPutAttributesAction, this))
{

}

bool BatchPutAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchPutAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchPutAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
AwsAbstractResponse * BatchPutAttributesRequest::response(QNetworkReply * const reply) const
{
    return new BatchPutAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchPutAttributesRequestPrivate
 *
 * @brief  Private implementation for BatchPutAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchPutAttributesRequestPrivate object.
 *
 * @param  action  SimpleDB action being performed.
 * @param  q       Pointer to this object's public BatchPutAttributesRequest instance.
 */
BatchPutAttributesRequestPrivate::BatchPutAttributesRequestPrivate(
    const SimpleDBRequest::Action action, BatchPutAttributesRequest * const q)
    : BatchPutAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchPutAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchPutAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchPutAttributesRequest instance.
 */
BatchPutAttributesRequestPrivate::BatchPutAttributesRequestPrivate(
    const BatchPutAttributesRequestPrivate &other, BatchPutAttributesRequest * const q)
    : BatchPutAttributesPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace AWS
