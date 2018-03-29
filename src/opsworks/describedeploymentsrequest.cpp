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

#include "describedeploymentsrequest.h"
#include "describedeploymentsrequest_p.h"
#include "describedeploymentsresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeDeploymentsRequest
 *
 * @brief  Implements OpsWorks DescribeDeployments requests.
 *
 * @see    OpsWorksClient::describeDeployments
 */

/**
 * @brief  Constructs a new DescribeDeploymentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDeploymentsRequest::DescribeDeploymentsRequest(const DescribeDeploymentsRequest &other)
    : OpsWorksRequest(new DescribeDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDeploymentsRequest object.
 */
DescribeDeploymentsRequest::DescribeDeploymentsRequest()
    : OpsWorksRequest(new DescribeDeploymentsRequestPrivate(OpsWorksRequest::DescribeDeploymentsAction, this))
{

}

bool DescribeDeploymentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDeploymentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDeploymentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDeploymentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDeploymentsRequestPrivate
 *
 * @brief  Private implementation for DescribeDeploymentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeploymentsRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeDeploymentsRequest instance.
 */
DescribeDeploymentsRequestPrivate::DescribeDeploymentsRequestPrivate(
    const OpsWorksRequest::Action action, DescribeDeploymentsRequest * const q)
    : DescribeDeploymentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeploymentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDeploymentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDeploymentsRequest instance.
 */
DescribeDeploymentsRequestPrivate::DescribeDeploymentsRequestPrivate(
    const DescribeDeploymentsRequestPrivate &other, DescribeDeploymentsRequest * const q)
    : DescribeDeploymentsPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws
