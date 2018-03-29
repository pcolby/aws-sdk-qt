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

#include "createclustersecuritygrouprequest.h"
#include "createclustersecuritygrouprequest_p.h"
#include "createclustersecuritygroupresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  CreateClusterSecurityGroupRequest
 *
 * @brief  Implements Redshift CreateClusterSecurityGroup requests.
 *
 * @see    RedshiftClient::createClusterSecurityGroup
 */

/**
 * @brief  Constructs a new CreateClusterSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateClusterSecurityGroupRequest::CreateClusterSecurityGroupRequest(const CreateClusterSecurityGroupRequest &other)
    : RedshiftRequest(new CreateClusterSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateClusterSecurityGroupRequest object.
 */
CreateClusterSecurityGroupRequest::CreateClusterSecurityGroupRequest()
    : RedshiftRequest(new CreateClusterSecurityGroupRequestPrivate(RedshiftRequest::CreateClusterSecurityGroupAction, this))
{

}

bool CreateClusterSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateClusterSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateClusterSecurityGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClusterSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateClusterSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for CreateClusterSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSecurityGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateClusterSecurityGroupRequest instance.
 */
CreateClusterSecurityGroupRequestPrivate::CreateClusterSecurityGroupRequestPrivate(
    const RedshiftRequest::Action action, CreateClusterSecurityGroupRequest * const q)
    : CreateClusterSecurityGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateClusterSecurityGroupRequest instance.
 */
CreateClusterSecurityGroupRequestPrivate::CreateClusterSecurityGroupRequestPrivate(
    const CreateClusterSecurityGroupRequestPrivate &other, CreateClusterSecurityGroupRequest * const q)
    : CreateClusterSecurityGroupPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
