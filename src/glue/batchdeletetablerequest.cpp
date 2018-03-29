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

#include "batchdeletetablerequest.h"
#include "batchdeletetablerequest_p.h"
#include "batchdeletetableresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  BatchDeleteTableRequest
 *
 * @brief  Implements Glue BatchDeleteTable requests.
 *
 * @see    GlueClient::batchDeleteTable
 */

/**
 * @brief  Constructs a new BatchDeleteTableRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDeleteTableRequest::BatchDeleteTableRequest(const BatchDeleteTableRequest &other)
    : GlueRequest(new BatchDeleteTableRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDeleteTableRequest object.
 */
BatchDeleteTableRequest::BatchDeleteTableRequest()
    : GlueRequest(new BatchDeleteTableRequestPrivate(GlueRequest::BatchDeleteTableAction, this))
{

}

bool BatchDeleteTableRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDeleteTableResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDeleteTableResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * BatchDeleteTableRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteTableResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDeleteTableRequestPrivate
 *
 * @brief  Private implementation for BatchDeleteTableRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteTableRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public BatchDeleteTableRequest instance.
 */
BatchDeleteTableRequestPrivate::BatchDeleteTableRequestPrivate(
    const GlueRequest::Action action, BatchDeleteTableRequest * const q)
    : BatchDeleteTablePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteTableRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteTableRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDeleteTableRequest instance.
 */
BatchDeleteTableRequestPrivate::BatchDeleteTableRequestPrivate(
    const BatchDeleteTableRequestPrivate &other, BatchDeleteTableRequest * const q)
    : BatchDeleteTablePrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
