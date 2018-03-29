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

#include "deletepartitionrequest.h"
#include "deletepartitionrequest_p.h"
#include "deletepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  DeletePartitionRequest
 *
 * @brief  Implements Glue DeletePartition requests.
 *
 * @see    GlueClient::deletePartition
 */

/**
 * @brief  Constructs a new DeletePartitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePartitionRequest::DeletePartitionRequest(const DeletePartitionRequest &other)
    : GlueRequest(new DeletePartitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePartitionRequest object.
 */
DeletePartitionRequest::DeletePartitionRequest()
    : GlueRequest(new DeletePartitionRequestPrivate(GlueRequest::DeletePartitionAction, this))
{

}

bool DeletePartitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePartitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePartitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeletePartitionRequest::response(QNetworkReply * const reply) const
{
    return new DeletePartitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePartitionRequestPrivate
 *
 * @brief  Private implementation for DeletePartitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePartitionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeletePartitionRequest instance.
 */
DeletePartitionRequestPrivate::DeletePartitionRequestPrivate(
    const GlueRequest::Action action, DeletePartitionRequest * const q)
    : DeletePartitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePartitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePartitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePartitionRequest instance.
 */
DeletePartitionRequestPrivate::DeletePartitionRequestPrivate(
    const DeletePartitionRequestPrivate &other, DeletePartitionRequest * const q)
    : DeletePartitionPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
