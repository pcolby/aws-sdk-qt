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

#include "describedefaultclusterparametersrequest.h"
#include "describedefaultclusterparametersrequest_p.h"
#include "describedefaultclusterparametersresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeDefaultClusterParametersRequest
 *
 * @brief  Implements Redshift DescribeDefaultClusterParameters requests.
 *
 * @see    RedshiftClient::describeDefaultClusterParameters
 */

/**
 * @brief  Constructs a new DescribeDefaultClusterParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDefaultClusterParametersRequest::DescribeDefaultClusterParametersRequest(const DescribeDefaultClusterParametersRequest &other)
    : RedshiftRequest(new DescribeDefaultClusterParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDefaultClusterParametersRequest object.
 */
DescribeDefaultClusterParametersRequest::DescribeDefaultClusterParametersRequest()
    : RedshiftRequest(new DescribeDefaultClusterParametersRequestPrivate(RedshiftRequest::DescribeDefaultClusterParametersAction, this))
{

}

bool DescribeDefaultClusterParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDefaultClusterParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDefaultClusterParametersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDefaultClusterParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDefaultClusterParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDefaultClusterParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeDefaultClusterParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDefaultClusterParametersRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeDefaultClusterParametersRequest instance.
 */
DescribeDefaultClusterParametersRequestPrivate::DescribeDefaultClusterParametersRequestPrivate(
    const RedshiftRequest::Action action, DescribeDefaultClusterParametersRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDefaultClusterParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDefaultClusterParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDefaultClusterParametersRequest instance.
 */
DescribeDefaultClusterParametersRequestPrivate::DescribeDefaultClusterParametersRequestPrivate(
    const DescribeDefaultClusterParametersRequestPrivate &other, DescribeDefaultClusterParametersRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
