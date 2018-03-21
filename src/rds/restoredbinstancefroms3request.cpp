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

#include "restoredbinstancefroms3request.h"
#include "restoredbinstancefroms3request_p.h"
#include "restoredbinstancefroms3response.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  RestoreDBInstanceFromS3Request
 *
 * @brief  Implements RDS RestoreDBInstanceFromS3 requests.
 *
 * @see    RDSClient::restoreDBInstanceFromS3
 */

/**
 * @brief  Constructs a new RestoreDBInstanceFromS3Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreDBInstanceFromS3Response::RestoreDBInstanceFromS3Response(

/**
 * @brief  Constructs a new RestoreDBInstanceFromS3Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreDBInstanceFromS3Request::RestoreDBInstanceFromS3Request(const RestoreDBInstanceFromS3Request &other)
    : RDSRequest(new RestoreDBInstanceFromS3RequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreDBInstanceFromS3Request object.
 */
RestoreDBInstanceFromS3Request::RestoreDBInstanceFromS3Request()
    : RDSRequest(new RestoreDBInstanceFromS3RequestPrivate(RDSRequest::RestoreDBInstanceFromS3Action, this))
{

}

bool RestoreDBInstanceFromS3Request::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreDBInstanceFromS3Response object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreDBInstanceFromS3Response instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * RestoreDBInstanceFromS3Request::response(QNetworkReply * const reply) const
{
    return new RestoreDBInstanceFromS3Response(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreDBInstanceFromS3RequestPrivate
 *
 * @brief  Private implementation for RestoreDBInstanceFromS3Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceFromS3RequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RestoreDBInstanceFromS3Request instance.
 */
RestoreDBInstanceFromS3RequestPrivate::RestoreDBInstanceFromS3RequestPrivate(
    const RDSRequest::Action action, RestoreDBInstanceFromS3Request * const q)
    : RestoreDBInstanceFromS3Private(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceFromS3RequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBInstanceFromS3Request
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreDBInstanceFromS3Request instance.
 */
RestoreDBInstanceFromS3RequestPrivate::RestoreDBInstanceFromS3RequestPrivate(
    const RestoreDBInstanceFromS3RequestPrivate &other, RestoreDBInstanceFromS3Request * const q)
    : RestoreDBInstanceFromS3Private(other, q)
{

}

} // namespace RDS
} // namespace AWS
