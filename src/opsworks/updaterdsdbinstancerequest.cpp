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

#include "updaterdsdbinstancerequest.h"
#include "updaterdsdbinstancerequest_p.h"
#include "updaterdsdbinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  UpdateRdsDbInstanceRequest
 *
 * @brief  Implements OpsWorks UpdateRdsDbInstance requests.
 *
 * @see    OpsWorksClient::updateRdsDbInstance
 */

/**
 * @brief  Constructs a new UpdateRdsDbInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRdsDbInstanceResponse::UpdateRdsDbInstanceResponse(

/**
 * @brief  Constructs a new UpdateRdsDbInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRdsDbInstanceRequest::UpdateRdsDbInstanceRequest(const UpdateRdsDbInstanceRequest &other)
    : OpsWorksRequest(new UpdateRdsDbInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRdsDbInstanceRequest object.
 */
UpdateRdsDbInstanceRequest::UpdateRdsDbInstanceRequest()
    : OpsWorksRequest(new UpdateRdsDbInstanceRequestPrivate(OpsWorksRequest::UpdateRdsDbInstanceAction, this))
{

}

bool UpdateRdsDbInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRdsDbInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRdsDbInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * UpdateRdsDbInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRdsDbInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRdsDbInstanceRequestPrivate
 *
 * @brief  Private implementation for UpdateRdsDbInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRdsDbInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public UpdateRdsDbInstanceRequest instance.
 */
UpdateRdsDbInstanceRequestPrivate::UpdateRdsDbInstanceRequestPrivate(
    const OpsWorksRequest::Action action, UpdateRdsDbInstanceRequest * const q)
    : UpdateRdsDbInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRdsDbInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRdsDbInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRdsDbInstanceRequest instance.
 */
UpdateRdsDbInstanceRequestPrivate::UpdateRdsDbInstanceRequestPrivate(
    const UpdateRdsDbInstanceRequestPrivate &other, UpdateRdsDbInstanceRequest * const q)
    : UpdateRdsDbInstancePrivate(other, q)
{

}
