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

#include "describevaliddbinstancemodificationsrequest.h"
#include "describevaliddbinstancemodificationsrequest_p.h"
#include "describevaliddbinstancemodificationsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeValidDBInstanceModificationsRequest
 *
 * @brief  Implements RDS DescribeValidDBInstanceModifications requests.
 *
 * @see    RDSClient::describeValidDBInstanceModifications
 */

/**
 * @brief  Constructs a new DescribeValidDBInstanceModificationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeValidDBInstanceModificationsResponse::DescribeValidDBInstanceModificationsResponse(

/**
 * @brief  Constructs a new DescribeValidDBInstanceModificationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeValidDBInstanceModificationsRequest::DescribeValidDBInstanceModificationsRequest(const DescribeValidDBInstanceModificationsRequest &other)
    : RDSRequest(new DescribeValidDBInstanceModificationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeValidDBInstanceModificationsRequest object.
 */
DescribeValidDBInstanceModificationsRequest::DescribeValidDBInstanceModificationsRequest()
    : RDSRequest(new DescribeValidDBInstanceModificationsRequestPrivate(RDSRequest::DescribeValidDBInstanceModificationsAction, this))
{

}

bool DescribeValidDBInstanceModificationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeValidDBInstanceModificationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeValidDBInstanceModificationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeValidDBInstanceModificationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeValidDBInstanceModificationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeValidDBInstanceModificationsRequestPrivate
 *
 * @brief  Private implementation for DescribeValidDBInstanceModificationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeValidDBInstanceModificationsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeValidDBInstanceModificationsRequest instance.
 */
DescribeValidDBInstanceModificationsRequestPrivate::DescribeValidDBInstanceModificationsRequestPrivate(
    const RDSRequest::Action action, DescribeValidDBInstanceModificationsRequest * const q)
    : DescribeValidDBInstanceModificationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeValidDBInstanceModificationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeValidDBInstanceModificationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeValidDBInstanceModificationsRequest instance.
 */
DescribeValidDBInstanceModificationsRequestPrivate::DescribeValidDBInstanceModificationsRequestPrivate(
    const DescribeValidDBInstanceModificationsRequestPrivate &other, DescribeValidDBInstanceModificationsRequest * const q)
    : DescribeValidDBInstanceModificationsPrivate(other, q)
{

}
