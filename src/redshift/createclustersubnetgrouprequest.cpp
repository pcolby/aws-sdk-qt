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

#include "createclustersubnetgrouprequest.h"
#include "createclustersubnetgrouprequest_p.h"
#include "createclustersubnetgroupresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  CreateClusterSubnetGroupRequest
 *
 * @brief  Implements Redshift CreateClusterSubnetGroup requests.
 *
 * @see    RedshiftClient::createClusterSubnetGroup
 */

/**
 * @brief  Constructs a new CreateClusterSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClusterSubnetGroupResponse::CreateClusterSubnetGroupResponse(

/**
 * @brief  Constructs a new CreateClusterSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateClusterSubnetGroupRequest::CreateClusterSubnetGroupRequest(const CreateClusterSubnetGroupRequest &other)
    : RedshiftRequest(new CreateClusterSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateClusterSubnetGroupRequest object.
 */
CreateClusterSubnetGroupRequest::CreateClusterSubnetGroupRequest()
    : RedshiftRequest(new CreateClusterSubnetGroupRequestPrivate(RedshiftRequest::CreateClusterSubnetGroupAction, this))
{

}

bool CreateClusterSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateClusterSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateClusterSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * CreateClusterSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateClusterSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for CreateClusterSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSubnetGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateClusterSubnetGroupRequest instance.
 */
CreateClusterSubnetGroupRequestPrivate::CreateClusterSubnetGroupRequestPrivate(
    const RedshiftRequest::Action action, CreateClusterSubnetGroupRequest * const q)
    : CreateClusterSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateClusterSubnetGroupRequest instance.
 */
CreateClusterSubnetGroupRequestPrivate::CreateClusterSubnetGroupRequestPrivate(
    const CreateClusterSubnetGroupRequestPrivate &other, CreateClusterSubnetGroupRequest * const q)
    : CreateClusterSubnetGroupPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
