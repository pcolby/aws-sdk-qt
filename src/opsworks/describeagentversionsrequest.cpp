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

#include "describeagentversionsrequest.h"
#include "describeagentversionsrequest_p.h"
#include "describeagentversionsresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeAgentVersionsRequest
 *
 * @brief  Implements OpsWorks DescribeAgentVersions requests.
 *
 * @see    OpsWorksClient::describeAgentVersions
 */

/**
 * @brief  Constructs a new DescribeAgentVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAgentVersionsRequest::DescribeAgentVersionsRequest(const DescribeAgentVersionsRequest &other)
    : OpsWorksRequest(new DescribeAgentVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAgentVersionsRequest object.
 */
DescribeAgentVersionsRequest::DescribeAgentVersionsRequest()
    : OpsWorksRequest(new DescribeAgentVersionsRequestPrivate(OpsWorksRequest::DescribeAgentVersionsAction, this))
{

}

bool DescribeAgentVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAgentVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAgentVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * DescribeAgentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAgentVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAgentVersionsRequestPrivate
 *
 * @brief  Private implementation for DescribeAgentVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAgentVersionsRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeAgentVersionsRequest instance.
 */
DescribeAgentVersionsRequestPrivate::DescribeAgentVersionsRequestPrivate(
    const OpsWorksRequest::Action action, DescribeAgentVersionsRequest * const q)
    : DescribeAgentVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAgentVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAgentVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAgentVersionsRequest instance.
 */
DescribeAgentVersionsRequestPrivate::DescribeAgentVersionsRequestPrivate(
    const DescribeAgentVersionsRequestPrivate &other, DescribeAgentVersionsRequest * const q)
    : DescribeAgentVersionsPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
