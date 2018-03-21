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

#include "rebootdbinstancerequest.h"
#include "rebootdbinstancerequest_p.h"
#include "rebootdbinstanceresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  RebootDBInstanceRequest
 *
 * @brief  Implements RDS RebootDBInstance requests.
 *
 * @see    RDSClient::rebootDBInstance
 */

/**
 * @brief  Constructs a new RebootDBInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootDBInstanceResponse::RebootDBInstanceResponse(

/**
 * @brief  Constructs a new RebootDBInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootDBInstanceRequest::RebootDBInstanceRequest(const RebootDBInstanceRequest &other)
    : RDSRequest(new RebootDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RebootDBInstanceRequest object.
 */
RebootDBInstanceRequest::RebootDBInstanceRequest()
    : RDSRequest(new RebootDBInstanceRequestPrivate(RDSRequest::RebootDBInstanceAction, this))
{

}

bool RebootDBInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RebootDBInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootDBInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * RebootDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RebootDBInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RebootDBInstanceRequestPrivate
 *
 * @brief  Private implementation for RebootDBInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootDBInstanceRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RebootDBInstanceRequest instance.
 */
RebootDBInstanceRequestPrivate::RebootDBInstanceRequestPrivate(
    const RDSRequest::Action action, RebootDBInstanceRequest * const q)
    : RebootDBInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RebootDBInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootDBInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootDBInstanceRequest instance.
 */
RebootDBInstanceRequestPrivate::RebootDBInstanceRequestPrivate(
    const RebootDBInstanceRequestPrivate &other, RebootDBInstanceRequest * const q)
    : RebootDBInstancePrivate(other, q)
{

}
