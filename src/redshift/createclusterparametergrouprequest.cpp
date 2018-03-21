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

#include "createclusterparametergrouprequest.h"
#include "createclusterparametergrouprequest_p.h"
#include "createclusterparametergroupresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  CreateClusterParameterGroupRequest
 *
 * @brief  Implements Redshift CreateClusterParameterGroup requests.
 *
 * @see    RedshiftClient::createClusterParameterGroup
 */

/**
 * @brief  Constructs a new CreateClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateClusterParameterGroupRequest::CreateClusterParameterGroupRequest(const CreateClusterParameterGroupRequest &other)
    : RedshiftRequest(new CreateClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateClusterParameterGroupRequest object.
 */
CreateClusterParameterGroupRequest::CreateClusterParameterGroupRequest()
    : RedshiftRequest(new CreateClusterParameterGroupRequestPrivate(RedshiftRequest::CreateClusterParameterGroupAction, this))
{

}

bool CreateClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateClusterParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * CreateClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for CreateClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterParameterGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateClusterParameterGroupRequest instance.
 */
CreateClusterParameterGroupRequestPrivate::CreateClusterParameterGroupRequestPrivate(
    const RedshiftRequest::Action action, CreateClusterParameterGroupRequest * const q)
    : CreateClusterParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateClusterParameterGroupRequest instance.
 */
CreateClusterParameterGroupRequestPrivate::CreateClusterParameterGroupRequestPrivate(
    const CreateClusterParameterGroupRequestPrivate &other, CreateClusterParameterGroupRequest * const q)
    : CreateClusterParameterGroupPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
