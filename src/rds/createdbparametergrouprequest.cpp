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

#include "createdbparametergrouprequest.h"
#include "createdbparametergrouprequest_p.h"
#include "createdbparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBParameterGroupRequest
 *
 * @brief  Implements RDS CreateDBParameterGroup requests.
 *
 * @see    RDSClient::createDBParameterGroup
 */

/**
 * @brief  Constructs a new CreateDBParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDBParameterGroupRequest::CreateDBParameterGroupRequest(const CreateDBParameterGroupRequest &other)
    : RDSRequest(new CreateDBParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDBParameterGroupRequest object.
 */
CreateDBParameterGroupRequest::CreateDBParameterGroupRequest()
    : RDSRequest(new CreateDBParameterGroupRequestPrivate(RDSRequest::CreateDBParameterGroupAction, this))
{

}

bool CreateDBParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDBParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDBParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDBParameterGroupRequestPrivate
 *
 * @brief  Private implementation for CreateDBParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateDBParameterGroupRequest instance.
 */
CreateDBParameterGroupRequestPrivate::CreateDBParameterGroupRequestPrivate(
    const RDSRequest::Action action, CreateDBParameterGroupRequest * const q)
    : CreateDBParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDBParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDBParameterGroupRequest instance.
 */
CreateDBParameterGroupRequestPrivate::CreateDBParameterGroupRequestPrivate(
    const CreateDBParameterGroupRequestPrivate &other, CreateDBParameterGroupRequest * const q)
    : CreateDBParameterGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
