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

#include "deleteclusterrequest.h"
#include "deleteclusterrequest_p.h"
#include "deleteclusterresponse.h"
#include "cloudhsmv2request_p.h"

namespace AWS {
namespace CloudHSMV2 {

/**
 * @class  DeleteClusterRequest
 *
 * @brief  Implements CloudHSMV2 DeleteCluster requests.
 *
 * @see    CloudHSMV2Client::deleteCluster
 */

/**
 * @brief  Constructs a new DeleteClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteClusterRequest::DeleteClusterRequest(const DeleteClusterRequest &other)
    : CloudHSMV2Request(new DeleteClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteClusterRequest object.
 */
DeleteClusterRequest::DeleteClusterRequest()
    : CloudHSMV2Request(new DeleteClusterRequestPrivate(CloudHSMV2Request::DeleteClusterAction, this))
{

}

bool DeleteClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMV2Client::send
 */
AwsAbstractResponse * DeleteClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteClusterRequestPrivate
 *
 * @brief  Private implementation for DeleteClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterRequestPrivate object.
 *
 * @param  action  CloudHSMV2 action being performed.
 * @param  q       Pointer to this object's public DeleteClusterRequest instance.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const CloudHSMV2Request::Action action, DeleteClusterRequest * const q)
    : DeleteClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteClusterRequest instance.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const DeleteClusterRequestPrivate &other, DeleteClusterRequest * const q)
    : DeleteClusterPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace AWS
