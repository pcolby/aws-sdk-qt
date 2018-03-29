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

#include "failoverdbclusterrequest.h"
#include "failoverdbclusterrequest_p.h"
#include "failoverdbclusterresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  FailoverDBClusterRequest
 *
 * @brief  Implements RDS FailoverDBCluster requests.
 *
 * @see    RDSClient::failoverDBCluster
 */

/**
 * @brief  Constructs a new FailoverDBClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
FailoverDBClusterRequest::FailoverDBClusterRequest(const FailoverDBClusterRequest &other)
    : RDSRequest(new FailoverDBClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new FailoverDBClusterRequest object.
 */
FailoverDBClusterRequest::FailoverDBClusterRequest()
    : RDSRequest(new FailoverDBClusterRequestPrivate(RDSRequest::FailoverDBClusterAction, this))
{

}

bool FailoverDBClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an FailoverDBClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An FailoverDBClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * FailoverDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new FailoverDBClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  FailoverDBClusterRequestPrivate
 *
 * @brief  Private implementation for FailoverDBClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new FailoverDBClusterRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public FailoverDBClusterRequest instance.
 */
FailoverDBClusterRequestPrivate::FailoverDBClusterRequestPrivate(
    const RDSRequest::Action action, FailoverDBClusterRequest * const q)
    : FailoverDBClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new FailoverDBClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the FailoverDBClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public FailoverDBClusterRequest instance.
 */
FailoverDBClusterRequestPrivate::FailoverDBClusterRequestPrivate(
    const FailoverDBClusterRequestPrivate &other, FailoverDBClusterRequest * const q)
    : FailoverDBClusterPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
