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

#include "describedbparametersrequest.h"
#include "describedbparametersrequest_p.h"
#include "describedbparametersresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBParametersRequest
 *
 * @brief  Implements RDS DescribeDBParameters requests.
 *
 * @see    RDSClient::describeDBParameters
 */

/**
 * @brief  Constructs a new DescribeDBParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBParametersRequest::DescribeDBParametersRequest(const DescribeDBParametersRequest &other)
    : RDSRequest(new DescribeDBParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBParametersRequest object.
 */
DescribeDBParametersRequest::DescribeDBParametersRequest()
    : RDSRequest(new DescribeDBParametersRequestPrivate(RDSRequest::DescribeDBParametersAction, this))
{

}

bool DescribeDBParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeDBParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeDBParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBParametersRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBParametersRequest instance.
 */
DescribeDBParametersRequestPrivate::DescribeDBParametersRequestPrivate(
    const RDSRequest::Action action, DescribeDBParametersRequest * const q)
    : DescribeDBParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBParametersRequest instance.
 */
DescribeDBParametersRequestPrivate::DescribeDBParametersRequestPrivate(
    const DescribeDBParametersRequestPrivate &other, DescribeDBParametersRequest * const q)
    : DescribeDBParametersPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
