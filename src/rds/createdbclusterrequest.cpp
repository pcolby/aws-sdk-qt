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

#include "createdbclusterrequest.h"
#include "createdbclusterrequest_p.h"
#include "createdbclusterresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBClusterRequest
 *
 * @brief  Implements RDS CreateDBCluster requests.
 *
 * @see    RDSClient::createDBCluster
 */

/**
 * @brief  Constructs a new CreateDBClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDBClusterRequest::CreateDBClusterRequest(const CreateDBClusterRequest &other)
    : RDSRequest(new CreateDBClusterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDBClusterRequest object.
 */
CreateDBClusterRequest::CreateDBClusterRequest()
    : RDSRequest(new CreateDBClusterRequestPrivate(RDSRequest::CreateDBClusterAction, this))
{

}

bool CreateDBClusterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDBClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDBClusterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * CreateDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDBClusterRequestPrivate
 *
 * @brief  Private implementation for CreateDBClusterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateDBClusterRequest instance.
 */
CreateDBClusterRequestPrivate::CreateDBClusterRequestPrivate(
    const RDSRequest::Action action, CreateDBClusterRequest * const q)
    : CreateDBClusterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDBClusterRequest instance.
 */
CreateDBClusterRequestPrivate::CreateDBClusterRequestPrivate(
    const CreateDBClusterRequestPrivate &other, CreateDBClusterRequest * const q)
    : CreateDBClusterPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
