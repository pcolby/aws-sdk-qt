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

#include "restoredbclusterfroms3request.h"
#include "restoredbclusterfroms3request_p.h"
#include "restoredbclusterfroms3response.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  RestoreDBClusterFromS3Request
 *
 * @brief  Implements RDS RestoreDBClusterFromS3 requests.
 *
 * @see    RDSClient::restoreDBClusterFromS3
 */

/**
 * @brief  Constructs a new RestoreDBClusterFromS3Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
RestoreDBClusterFromS3Request::RestoreDBClusterFromS3Request(const RestoreDBClusterFromS3Request &other)
    : RDSRequest(new RestoreDBClusterFromS3RequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RestoreDBClusterFromS3Request object.
 */
RestoreDBClusterFromS3Request::RestoreDBClusterFromS3Request()
    : RDSRequest(new RestoreDBClusterFromS3RequestPrivate(RDSRequest::RestoreDBClusterFromS3Action, this))
{

}

bool RestoreDBClusterFromS3Request::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RestoreDBClusterFromS3Response object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RestoreDBClusterFromS3Response instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * RestoreDBClusterFromS3Request::response(QNetworkReply * const reply) const
{
    return new RestoreDBClusterFromS3Response(*this, reply);
}

/**
 * @internal
 *
 * @class  RestoreDBClusterFromS3RequestPrivate
 *
 * @brief  Private implementation for RestoreDBClusterFromS3Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterFromS3RequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public RestoreDBClusterFromS3Request instance.
 */
RestoreDBClusterFromS3RequestPrivate::RestoreDBClusterFromS3RequestPrivate(
    const RDSRequest::Action action, RestoreDBClusterFromS3Request * const q)
    : RestoreDBClusterFromS3Private(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterFromS3RequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RestoreDBClusterFromS3Request
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RestoreDBClusterFromS3Request instance.
 */
RestoreDBClusterFromS3RequestPrivate::RestoreDBClusterFromS3RequestPrivate(
    const RestoreDBClusterFromS3RequestPrivate &other, RestoreDBClusterFromS3Request * const q)
    : RestoreDBClusterFromS3Private(other, q)
{

}

} // namespace RDS
} // namespace AWS
