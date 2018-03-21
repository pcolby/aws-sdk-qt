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

#include "createdbclusterparametergrouprequest.h"
#include "createdbclusterparametergrouprequest_p.h"
#include "createdbclusterparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  CreateDBClusterParameterGroupRequest
 *
 * @brief  Implements RDS CreateDBClusterParameterGroup requests.
 *
 * @see    RDSClient::createDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new CreateDBClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDBClusterParameterGroupResponse::CreateDBClusterParameterGroupResponse(

/**
 * @brief  Constructs a new CreateDBClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDBClusterParameterGroupRequest::CreateDBClusterParameterGroupRequest(const CreateDBClusterParameterGroupRequest &other)
    : RDSRequest(new CreateDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDBClusterParameterGroupRequest object.
 */
CreateDBClusterParameterGroupRequest::CreateDBClusterParameterGroupRequest()
    : RDSRequest(new CreateDBClusterParameterGroupRequestPrivate(RDSRequest::CreateDBClusterParameterGroupAction, this))
{

}

bool CreateDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDBClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDBClusterParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * CreateDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDBClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for CreateDBClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateDBClusterParameterGroupRequest instance.
 */
CreateDBClusterParameterGroupRequestPrivate::CreateDBClusterParameterGroupRequestPrivate(
    const RDSRequest::Action action, CreateDBClusterParameterGroupRequest * const q)
    : CreateDBClusterParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDBClusterParameterGroupRequest instance.
 */
CreateDBClusterParameterGroupRequestPrivate::CreateDBClusterParameterGroupRequestPrivate(
    const CreateDBClusterParameterGroupRequestPrivate &other, CreateDBClusterParameterGroupRequest * const q)
    : CreateDBClusterParameterGroupPrivate(other, q)
{

}
