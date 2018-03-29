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

#include "executechangesetrequest.h"
#include "executechangesetrequest_p.h"
#include "executechangesetresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ExecuteChangeSetRequest
 *
 * @brief  Implements CloudFormation ExecuteChangeSet requests.
 *
 * @see    CloudFormationClient::executeChangeSet
 */

/**
 * @brief  Constructs a new ExecuteChangeSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ExecuteChangeSetRequest::ExecuteChangeSetRequest(const ExecuteChangeSetRequest &other)
    : CloudFormationRequest(new ExecuteChangeSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ExecuteChangeSetRequest object.
 */
ExecuteChangeSetRequest::ExecuteChangeSetRequest()
    : CloudFormationRequest(new ExecuteChangeSetRequestPrivate(CloudFormationRequest::ExecuteChangeSetAction, this))
{

}

bool ExecuteChangeSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ExecuteChangeSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ExecuteChangeSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * ExecuteChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteChangeSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ExecuteChangeSetRequestPrivate
 *
 * @brief  Private implementation for ExecuteChangeSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExecuteChangeSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ExecuteChangeSetRequest instance.
 */
ExecuteChangeSetRequestPrivate::ExecuteChangeSetRequestPrivate(
    const CloudFormationRequest::Action action, ExecuteChangeSetRequest * const q)
    : ExecuteChangeSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ExecuteChangeSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ExecuteChangeSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ExecuteChangeSetRequest instance.
 */
ExecuteChangeSetRequestPrivate::ExecuteChangeSetRequestPrivate(
    const ExecuteChangeSetRequestPrivate &other, ExecuteChangeSetRequest * const q)
    : ExecuteChangeSetPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
