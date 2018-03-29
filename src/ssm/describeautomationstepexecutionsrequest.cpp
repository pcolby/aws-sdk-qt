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

#include "describeautomationstepexecutionsrequest.h"
#include "describeautomationstepexecutionsrequest_p.h"
#include "describeautomationstepexecutionsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeAutomationStepExecutionsRequest
 *
 * @brief  Implements SSM DescribeAutomationStepExecutions requests.
 *
 * @see    SSMClient::describeAutomationStepExecutions
 */

/**
 * @brief  Constructs a new DescribeAutomationStepExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAutomationStepExecutionsRequest::DescribeAutomationStepExecutionsRequest(const DescribeAutomationStepExecutionsRequest &other)
    : SSMRequest(new DescribeAutomationStepExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAutomationStepExecutionsRequest object.
 */
DescribeAutomationStepExecutionsRequest::DescribeAutomationStepExecutionsRequest()
    : SSMRequest(new DescribeAutomationStepExecutionsRequestPrivate(SSMRequest::DescribeAutomationStepExecutionsAction, this))
{

}

bool DescribeAutomationStepExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAutomationStepExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAutomationStepExecutionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutomationStepExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutomationStepExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAutomationStepExecutionsRequestPrivate
 *
 * @brief  Private implementation for DescribeAutomationStepExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutomationStepExecutionsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeAutomationStepExecutionsRequest instance.
 */
DescribeAutomationStepExecutionsRequestPrivate::DescribeAutomationStepExecutionsRequestPrivate(
    const SSMRequest::Action action, DescribeAutomationStepExecutionsRequest * const q)
    : DescribeAutomationStepExecutionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutomationStepExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutomationStepExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAutomationStepExecutionsRequest instance.
 */
DescribeAutomationStepExecutionsRequestPrivate::DescribeAutomationStepExecutionsRequestPrivate(
    const DescribeAutomationStepExecutionsRequestPrivate &other, DescribeAutomationStepExecutionsRequest * const q)
    : DescribeAutomationStepExecutionsPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
