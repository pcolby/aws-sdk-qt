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

#include "describeagentsrequest.h"
#include "describeagentsrequest_p.h"
#include "describeagentsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  DescribeAgentsRequest
 *
 * @brief  Implements ApplicationDiscoveryService DescribeAgents requests.
 *
 * @see    ApplicationDiscoveryServiceClient::describeAgents
 */

/**
 * @brief  Constructs a new DescribeAgentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAgentsRequest::DescribeAgentsRequest(const DescribeAgentsRequest &other)
    : ApplicationDiscoveryServiceRequest(new DescribeAgentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAgentsRequest object.
 */
DescribeAgentsRequest::DescribeAgentsRequest()
    : ApplicationDiscoveryServiceRequest(new DescribeAgentsRequestPrivate(ApplicationDiscoveryServiceRequest::DescribeAgentsAction, this))
{

}

bool DescribeAgentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAgentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAgentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * DescribeAgentsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAgentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAgentsRequestPrivate
 *
 * @brief  Private implementation for DescribeAgentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAgentsRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public DescribeAgentsRequest instance.
 */
DescribeAgentsRequestPrivate::DescribeAgentsRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, DescribeAgentsRequest * const q)
    : DescribeAgentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAgentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAgentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAgentsRequest instance.
 */
DescribeAgentsRequestPrivate::DescribeAgentsRequestPrivate(
    const DescribeAgentsRequestPrivate &other, DescribeAgentsRequest * const q)
    : DescribeAgentsPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
