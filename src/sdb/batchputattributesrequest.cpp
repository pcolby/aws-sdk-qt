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

#include "batchputattributesrequest.h"
#include "batchputattributesrequest_p.h"
#include "batchputattributesresponse.h"
#include "simpledbrequest_p.h"

namespace QtAws {
namespace SimpleDB {

/**
 * @class  BatchPutAttributesRequest
 *
 * @brief  Implements SimpleDB BatchPutAttributes requests.
 *
 * @see    SimpleDBClient::batchPutAttributes
 */

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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchPutAttributesRequest::response(QNetworkReply * const reply) const
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
    : SimpleDBRequestPrivate(action, q)
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
    : SimpleDBRequestPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace QtAws
