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

#include "batchdeletepartitionrequest.h"
#include "batchdeletepartitionrequest_p.h"
#include "batchdeletepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  BatchDeletePartitionRequest
 *
 * @brief  Implements Glue BatchDeletePartition requests.
 *
 * @see    GlueClient::batchDeletePartition
 */

/**
 * @brief  Constructs a new BatchDeletePartitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDeletePartitionRequest::BatchDeletePartitionRequest(const BatchDeletePartitionRequest &other)
    : GlueRequest(new BatchDeletePartitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDeletePartitionRequest object.
 */
BatchDeletePartitionRequest::BatchDeletePartitionRequest()
    : GlueRequest(new BatchDeletePartitionRequestPrivate(GlueRequest::BatchDeletePartitionAction, this))
{

}

bool BatchDeletePartitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDeletePartitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDeletePartitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeletePartitionRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeletePartitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDeletePartitionRequestPrivate
 *
 * @brief  Private implementation for BatchDeletePartitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeletePartitionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public BatchDeletePartitionRequest instance.
 */
BatchDeletePartitionRequestPrivate::BatchDeletePartitionRequestPrivate(
    const GlueRequest::Action action, BatchDeletePartitionRequest * const q)
    : BatchDeletePartitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeletePartitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDeletePartitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDeletePartitionRequest instance.
 */
BatchDeletePartitionRequestPrivate::BatchDeletePartitionRequestPrivate(
    const BatchDeletePartitionRequestPrivate &other, BatchDeletePartitionRequest * const q)
    : BatchDeletePartitionPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
