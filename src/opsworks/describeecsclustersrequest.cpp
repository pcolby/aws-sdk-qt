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

#include "describeecsclustersrequest.h"
#include "describeecsclustersrequest_p.h"
#include "describeecsclustersresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeEcsClustersRequest
 *
 * @brief  Implements OpsWorks DescribeEcsClusters requests.
 *
 * @see    OpsWorksClient::describeEcsClusters
 */

/**
 * @brief  Constructs a new DescribeEcsClustersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEcsClustersRequest::DescribeEcsClustersRequest(const DescribeEcsClustersRequest &other)
    : OpsWorksRequest(new DescribeEcsClustersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeEcsClustersRequest object.
 */
DescribeEcsClustersRequest::DescribeEcsClustersRequest()
    : OpsWorksRequest(new DescribeEcsClustersRequestPrivate(OpsWorksRequest::DescribeEcsClustersAction, this))
{

}

bool DescribeEcsClustersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeEcsClustersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEcsClustersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeEcsClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEcsClustersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeEcsClustersRequestPrivate
 *
 * @brief  Private implementation for DescribeEcsClustersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEcsClustersRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeEcsClustersRequest instance.
 */
DescribeEcsClustersRequestPrivate::DescribeEcsClustersRequestPrivate(
    const OpsWorksRequest::Action action, DescribeEcsClustersRequest * const q)
    : DescribeEcsClustersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEcsClustersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEcsClustersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEcsClustersRequest instance.
 */
DescribeEcsClustersRequestPrivate::DescribeEcsClustersRequestPrivate(
    const DescribeEcsClustersRequestPrivate &other, DescribeEcsClustersRequest * const q)
    : DescribeEcsClustersPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
