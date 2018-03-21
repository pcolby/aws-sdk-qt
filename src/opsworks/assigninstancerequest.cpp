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

#include "assigninstancerequest.h"
#include "assigninstancerequest_p.h"
#include "assigninstanceresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  AssignInstanceRequest
 *
 * @brief  Implements OpsWorks AssignInstance requests.
 *
 * @see    OpsWorksClient::assignInstance
 */

/**
 * @brief  Constructs a new AssignInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssignInstanceResponse::AssignInstanceResponse(

/**
 * @brief  Constructs a new AssignInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssignInstanceRequest::AssignInstanceRequest(const AssignInstanceRequest &other)
    : OpsWorksRequest(new AssignInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssignInstanceRequest object.
 */
AssignInstanceRequest::AssignInstanceRequest()
    : OpsWorksRequest(new AssignInstanceRequestPrivate(OpsWorksRequest::AssignInstanceAction, this))
{

}

bool AssignInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssignInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssignInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * AssignInstanceRequest::response(QNetworkReply * const reply) const
{
    return new AssignInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssignInstanceRequestPrivate
 *
 * @brief  Private implementation for AssignInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssignInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public AssignInstanceRequest instance.
 */
AssignInstanceRequestPrivate::AssignInstanceRequestPrivate(
    const OpsWorksRequest::Action action, AssignInstanceRequest * const q)
    : AssignInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssignInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssignInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssignInstanceRequest instance.
 */
AssignInstanceRequestPrivate::AssignInstanceRequestPrivate(
    const AssignInstanceRequestPrivate &other, AssignInstanceRequest * const q)
    : AssignInstancePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
