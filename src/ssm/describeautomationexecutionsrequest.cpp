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

#include "describeautomationexecutionsrequest.h"
#include "describeautomationexecutionsrequest_p.h"
#include "describeautomationexecutionsresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DescribeAutomationExecutionsRequest
 *
 * @brief  Implements SSM DescribeAutomationExecutions requests.
 *
 * @see    SSMClient::describeAutomationExecutions
 */

/**
 * @brief  Constructs a new DescribeAutomationExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAutomationExecutionsResponse::DescribeAutomationExecutionsResponse(

/**
 * @brief  Constructs a new DescribeAutomationExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAutomationExecutionsRequest::DescribeAutomationExecutionsRequest(const DescribeAutomationExecutionsRequest &other)
    : SSMRequest(new DescribeAutomationExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAutomationExecutionsRequest object.
 */
DescribeAutomationExecutionsRequest::DescribeAutomationExecutionsRequest()
    : SSMRequest(new DescribeAutomationExecutionsRequestPrivate(SSMRequest::DescribeAutomationExecutionsAction, this))
{

}

bool DescribeAutomationExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAutomationExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAutomationExecutionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeAutomationExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutomationExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAutomationExecutionsRequestPrivate
 *
 * @brief  Private implementation for DescribeAutomationExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutomationExecutionsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeAutomationExecutionsRequest instance.
 */
DescribeAutomationExecutionsRequestPrivate::DescribeAutomationExecutionsRequestPrivate(
    const SSMRequest::Action action, DescribeAutomationExecutionsRequest * const q)
    : DescribeAutomationExecutionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutomationExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutomationExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAutomationExecutionsRequest instance.
 */
DescribeAutomationExecutionsRequestPrivate::DescribeAutomationExecutionsRequestPrivate(
    const DescribeAutomationExecutionsRequestPrivate &other, DescribeAutomationExecutionsRequest * const q)
    : DescribeAutomationExecutionsPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
