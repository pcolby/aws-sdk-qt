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
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/**
 * @class  UpdateClusterRequest
 *
 * @brief  Implements DAX UpdateCluster requests.
 *
 * @see    DAXClient::updateCluster
 */

/**
 * @brief  Constructs a new UpdateClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateClusterRequest::UpdateClusterRequest(const UpdateClusterRequest &other)
    : DAXRequest(new UpdateClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateClusterRequest object.
 */
UpdateClusterRequest::UpdateClusterRequest()
    : DAXRequest(new UpdateClusterRequestPrivate(DAXRequest::UpdateClusterAction, this))
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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DAXClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterRequest::response(QNetworkReply * const reply) const
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
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public UpdateClusterRequest instance.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const DAXRequest::Action action, UpdateClusterRequest * const q)
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

} // namespace DAX
} // namespace QtAws
