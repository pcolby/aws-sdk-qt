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

#include "updatepartitionrequest.h"
#include "updatepartitionrequest_p.h"
#include "updatepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  UpdatePartitionRequest
 *
 * @brief  Implements Glue UpdatePartition requests.
 *
 * @see    GlueClient::updatePartition
 */

/**
 * @brief  Constructs a new UpdatePartitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePartitionRequest::UpdatePartitionRequest(const UpdatePartitionRequest &other)
    : GlueRequest(new UpdatePartitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePartitionRequest object.
 */
UpdatePartitionRequest::UpdatePartitionRequest()
    : GlueRequest(new UpdatePartitionRequestPrivate(GlueRequest::UpdatePartitionAction, this))
{

}

bool UpdatePartitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePartitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePartitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * UpdatePartitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePartitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePartitionRequestPrivate
 *
 * @brief  Private implementation for UpdatePartitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePartitionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public UpdatePartitionRequest instance.
 */
UpdatePartitionRequestPrivate::UpdatePartitionRequestPrivate(
    const GlueRequest::Action action, UpdatePartitionRequest * const q)
    : UpdatePartitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePartitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePartitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePartitionRequest instance.
 */
UpdatePartitionRequestPrivate::UpdatePartitionRequestPrivate(
    const UpdatePartitionRequestPrivate &other, UpdatePartitionRequest * const q)
    : UpdatePartitionPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
