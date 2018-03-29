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

#include "updateclusterrequest.h"
#include "updateclusterrequest_p.h"
#include "updateclusterresponse.h"
#include "snowballrequest_p.h"

namespace AWS {
namespace Snowball {

/**
 * @class  UpdateClusterRequest
 *
 * @brief  Implements Snowball UpdateCluster requests.
 *
 * @see    SnowballClient::updateCluster
 */

/**
 * @brief  Constructs a new UpdateClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateClusterRequest::UpdateClusterRequest(const UpdateClusterRequest &other)
    : SnowballRequest(new UpdateClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateClusterRequest object.
 */
UpdateClusterRequest::UpdateClusterRequest()
    : SnowballRequest(new UpdateClusterRequestPrivate(SnowballRequest::UpdateClusterAction, this))
{

}

bool UpdateClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SnowballClient::send
 */
AwsAbstractResponse * UpdateClusterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateClusterRequestPrivate
 *
 * @brief  Private implementation for UpdateClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateClusterRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public UpdateClusterRequest instance.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const SnowballRequest::Action action, UpdateClusterRequest * const q)
    : UpdateClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateClusterRequest instance.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const UpdateClusterRequestPrivate &other, UpdateClusterRequest * const q)
    : UpdateClusterPrivate(other, q)
{

}

} // namespace Snowball
} // namespace AWS
