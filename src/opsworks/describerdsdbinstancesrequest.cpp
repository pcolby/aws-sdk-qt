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

#include "describerdsdbinstancesrequest.h"
#include "describerdsdbinstancesrequest_p.h"
#include "describerdsdbinstancesresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeRdsDbInstancesRequest
 *
 * @brief  Implements OpsWorks DescribeRdsDbInstances requests.
 *
 * @see    OpsWorksClient::describeRdsDbInstances
 */

/**
 * @brief  Constructs a new DescribeRdsDbInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRdsDbInstancesRequest::DescribeRdsDbInstancesRequest(const DescribeRdsDbInstancesRequest &other)
    : OpsWorksRequest(new DescribeRdsDbInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRdsDbInstancesRequest object.
 */
DescribeRdsDbInstancesRequest::DescribeRdsDbInstancesRequest()
    : OpsWorksRequest(new DescribeRdsDbInstancesRequestPrivate(OpsWorksRequest::DescribeRdsDbInstancesAction, this))
{

}

bool DescribeRdsDbInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRdsDbInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRdsDbInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeRdsDbInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRdsDbInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRdsDbInstancesRequestPrivate
 *
 * @brief  Private implementation for DescribeRdsDbInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRdsDbInstancesRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeRdsDbInstancesRequest instance.
 */
DescribeRdsDbInstancesRequestPrivate::DescribeRdsDbInstancesRequestPrivate(
    const OpsWorksRequest::Action action, DescribeRdsDbInstancesRequest * const q)
    : DescribeRdsDbInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRdsDbInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRdsDbInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRdsDbInstancesRequest instance.
 */
DescribeRdsDbInstancesRequestPrivate::DescribeRdsDbInstancesRequestPrivate(
    const DescribeRdsDbInstancesRequestPrivate &other, DescribeRdsDbInstancesRequest * const q)
    : DescribeRdsDbInstancesPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
