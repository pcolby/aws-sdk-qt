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

#include "describestatemachinerequest.h"
#include "describestatemachinerequest_p.h"
#include "describestatemachineresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/**
 * @class  DescribeStateMachineRequest
 *
 * @brief  Implements SFN DescribeStateMachine requests.
 *
 * @see    SFNClient::describeStateMachine
 */

/**
 * @brief  Constructs a new DescribeStateMachineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStateMachineRequest::DescribeStateMachineRequest(const DescribeStateMachineRequest &other)
    : SFNRequest(new DescribeStateMachineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStateMachineRequest object.
 */
DescribeStateMachineRequest::DescribeStateMachineRequest()
    : SFNRequest(new DescribeStateMachineRequestPrivate(SFNRequest::DescribeStateMachineAction, this))
{

}

bool DescribeStateMachineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStateMachineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStateMachineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SFNClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStateMachineRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStateMachineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStateMachineRequestPrivate
 *
 * @brief  Private implementation for DescribeStateMachineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStateMachineRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public DescribeStateMachineRequest instance.
 */
DescribeStateMachineRequestPrivate::DescribeStateMachineRequestPrivate(
    const SFNRequest::Action action, DescribeStateMachineRequest * const q)
    : DescribeStateMachinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStateMachineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStateMachineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStateMachineRequest instance.
 */
DescribeStateMachineRequestPrivate::DescribeStateMachineRequestPrivate(
    const DescribeStateMachineRequestPrivate &other, DescribeStateMachineRequest * const q)
    : DescribeStateMachinePrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
