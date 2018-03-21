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

#include "initializeclusterrequest.h"
#include "initializeclusterrequest_p.h"
#include "initializeclusterresponse.h"
#include "cloudhsmv2request_p.h"

namespace AWS {
namespace CloudHSMV2 {

/**
 * @class  InitializeClusterRequest
 *
 * @brief  Implements CloudHSMV2 InitializeCluster requests.
 *
 * @see    CloudHSMV2Client::initializeCluster
 */

/**
 * @brief  Constructs a new InitializeClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InitializeClusterRequest::InitializeClusterRequest(const InitializeClusterRequest &other)
    : CloudHSMV2Request(new InitializeClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InitializeClusterRequest object.
 */
InitializeClusterRequest::InitializeClusterRequest()
    : CloudHSMV2Request(new InitializeClusterRequestPrivate(CloudHSMV2Request::InitializeClusterAction, this))
{

}

bool InitializeClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InitializeClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InitializeClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMV2Client::send
 */
AwsAbstractResponse * InitializeClusterRequest::response(QNetworkReply * const reply) const
{
    return new InitializeClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InitializeClusterRequestPrivate
 *
 * @brief  Private implementation for InitializeClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitializeClusterRequestPrivate object.
 *
 * @param  action  CloudHSMV2 action being performed.
 * @param  q       Pointer to this object's public InitializeClusterRequest instance.
 */
InitializeClusterRequestPrivate::InitializeClusterRequestPrivate(
    const CloudHSMV2Request::Action action, InitializeClusterRequest * const q)
    : InitializeClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InitializeClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InitializeClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InitializeClusterRequest instance.
 */
InitializeClusterRequestPrivate::InitializeClusterRequestPrivate(
    const InitializeClusterRequestPrivate &other, InitializeClusterRequest * const q)
    : InitializeClusterPrivate(other, q)
{

}

} // namespace CloudHSMV2
} // namespace AWS
