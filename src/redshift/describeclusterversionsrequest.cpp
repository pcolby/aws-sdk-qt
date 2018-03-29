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

#include "describeclusterversionsrequest.h"
#include "describeclusterversionsrequest_p.h"
#include "describeclusterversionsresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeClusterVersionsRequest
 *
 * @brief  Implements Redshift DescribeClusterVersions requests.
 *
 * @see    RedshiftClient::describeClusterVersions
 */

/**
 * @brief  Constructs a new DescribeClusterVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClusterVersionsRequest::DescribeClusterVersionsRequest(const DescribeClusterVersionsRequest &other)
    : RedshiftRequest(new DescribeClusterVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClusterVersionsRequest object.
 */
DescribeClusterVersionsRequest::DescribeClusterVersionsRequest()
    : RedshiftRequest(new DescribeClusterVersionsRequestPrivate(RedshiftRequest::DescribeClusterVersionsAction, this))
{

}

bool DescribeClusterVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClusterVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClusterVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeClusterVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClusterVersionsRequestPrivate
 *
 * @brief  Private implementation for DescribeClusterVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterVersionsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeClusterVersionsRequest instance.
 */
DescribeClusterVersionsRequestPrivate::DescribeClusterVersionsRequestPrivate(
    const RedshiftRequest::Action action, DescribeClusterVersionsRequest * const q)
    : DescribeClusterVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClusterVersionsRequest instance.
 */
DescribeClusterVersionsRequestPrivate::DescribeClusterVersionsRequestPrivate(
    const DescribeClusterVersionsRequestPrivate &other, DescribeClusterVersionsRequest * const q)
    : DescribeClusterVersionsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
