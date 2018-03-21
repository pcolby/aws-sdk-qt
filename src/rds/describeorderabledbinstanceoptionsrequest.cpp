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

#include "describeorderabledbinstanceoptionsrequest.h"
#include "describeorderabledbinstanceoptionsrequest_p.h"
#include "describeorderabledbinstanceoptionsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeOrderableDBInstanceOptionsRequest
 *
 * @brief  Implements RDS DescribeOrderableDBInstanceOptions requests.
 *
 * @see    RDSClient::describeOrderableDBInstanceOptions
 */

/**
 * @brief  Constructs a new DescribeOrderableDBInstanceOptionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOrderableDBInstanceOptionsResponse::DescribeOrderableDBInstanceOptionsResponse(

/**
 * @brief  Constructs a new DescribeOrderableDBInstanceOptionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeOrderableDBInstanceOptionsRequest::DescribeOrderableDBInstanceOptionsRequest(const DescribeOrderableDBInstanceOptionsRequest &other)
    : RDSRequest(new DescribeOrderableDBInstanceOptionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeOrderableDBInstanceOptionsRequest object.
 */
DescribeOrderableDBInstanceOptionsRequest::DescribeOrderableDBInstanceOptionsRequest()
    : RDSRequest(new DescribeOrderableDBInstanceOptionsRequestPrivate(RDSRequest::DescribeOrderableDBInstanceOptionsAction, this))
{

}

bool DescribeOrderableDBInstanceOptionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeOrderableDBInstanceOptionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeOrderableDBInstanceOptionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeOrderableDBInstanceOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrderableDBInstanceOptionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeOrderableDBInstanceOptionsRequestPrivate
 *
 * @brief  Private implementation for DescribeOrderableDBInstanceOptionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableDBInstanceOptionsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeOrderableDBInstanceOptionsRequest instance.
 */
DescribeOrderableDBInstanceOptionsRequestPrivate::DescribeOrderableDBInstanceOptionsRequestPrivate(
    const RDSRequest::Action action, DescribeOrderableDBInstanceOptionsRequest * const q)
    : DescribeOrderableDBInstanceOptionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableDBInstanceOptionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrderableDBInstanceOptionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeOrderableDBInstanceOptionsRequest instance.
 */
DescribeOrderableDBInstanceOptionsRequestPrivate::DescribeOrderableDBInstanceOptionsRequestPrivate(
    const DescribeOrderableDBInstanceOptionsRequestPrivate &other, DescribeOrderableDBInstanceOptionsRequest * const q)
    : DescribeOrderableDBInstanceOptionsPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
