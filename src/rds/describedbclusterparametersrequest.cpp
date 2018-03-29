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

#include "describedbclusterparametersrequest.h"
#include "describedbclusterparametersrequest_p.h"
#include "describedbclusterparametersresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBClusterParametersRequest
 *
 * @brief  Implements RDS DescribeDBClusterParameters requests.
 *
 * @see    RDSClient::describeDBClusterParameters
 */

/**
 * @brief  Constructs a new DescribeDBClusterParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBClusterParametersRequest::DescribeDBClusterParametersRequest(const DescribeDBClusterParametersRequest &other)
    : RDSRequest(new DescribeDBClusterParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBClusterParametersRequest object.
 */
DescribeDBClusterParametersRequest::DescribeDBClusterParametersRequest()
    : RDSRequest(new DescribeDBClusterParametersRequestPrivate(RDSRequest::DescribeDBClusterParametersAction, this))
{

}

bool DescribeDBClusterParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBClusterParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBClusterParametersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClusterParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBClusterParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeDBClusterParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterParametersRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBClusterParametersRequest instance.
 */
DescribeDBClusterParametersRequestPrivate::DescribeDBClusterParametersRequestPrivate(
    const RDSRequest::Action action, DescribeDBClusterParametersRequest * const q)
    : DescribeDBClusterParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBClusterParametersRequest instance.
 */
DescribeDBClusterParametersRequestPrivate::DescribeDBClusterParametersRequestPrivate(
    const DescribeDBClusterParametersRequestPrivate &other, DescribeDBClusterParametersRequest * const q)
    : DescribeDBClusterParametersPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
