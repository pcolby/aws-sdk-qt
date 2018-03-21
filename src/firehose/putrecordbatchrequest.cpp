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

#include "putrecordbatchrequest.h"
#include "putrecordbatchrequest_p.h"
#include "putrecordbatchresponse.h"
#include "firehoserequest_p.h"

namespace AWS {
namespace Firehose {

/**
 * @class  PutRecordBatchRequest
 *
 * @brief  Implements Firehose PutRecordBatch requests.
 *
 * @see    FirehoseClient::putRecordBatch
 */

/**
 * @brief  Constructs a new PutRecordBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRecordBatchRequest::PutRecordBatchRequest(const PutRecordBatchRequest &other)
    : FirehoseRequest(new PutRecordBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRecordBatchRequest object.
 */
PutRecordBatchRequest::PutRecordBatchRequest()
    : FirehoseRequest(new PutRecordBatchRequestPrivate(FirehoseRequest::PutRecordBatchAction, this))
{

}

bool PutRecordBatchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRecordBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRecordBatchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  FirehoseClient::send
 */
AwsAbstractResponse * PutRecordBatchRequest::response(QNetworkReply * const reply) const
{
    return new PutRecordBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRecordBatchRequestPrivate
 *
 * @brief  Private implementation for PutRecordBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRecordBatchRequestPrivate object.
 *
 * @param  action  Firehose action being performed.
 * @param  q       Pointer to this object's public PutRecordBatchRequest instance.
 */
PutRecordBatchRequestPrivate::PutRecordBatchRequestPrivate(
    const FirehoseRequest::Action action, PutRecordBatchRequest * const q)
    : PutRecordBatchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRecordBatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRecordBatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRecordBatchRequest instance.
 */
PutRecordBatchRequestPrivate::PutRecordBatchRequestPrivate(
    const PutRecordBatchRequestPrivate &other, PutRecordBatchRequest * const q)
    : PutRecordBatchPrivate(other, q)
{

}

} // namespace Firehose
} // namespace AWS
