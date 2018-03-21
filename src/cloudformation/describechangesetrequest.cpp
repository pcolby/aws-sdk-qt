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

#include "describechangesetrequest.h"
#include "describechangesetrequest_p.h"
#include "describechangesetresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeChangeSetRequest
 *
 * @brief  Implements CloudFormation DescribeChangeSet requests.
 *
 * @see    CloudFormationClient::describeChangeSet
 */

/**
 * @brief  Constructs a new DescribeChangeSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeChangeSetResponse::DescribeChangeSetResponse(

/**
 * @brief  Constructs a new DescribeChangeSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeChangeSetRequest::DescribeChangeSetRequest(const DescribeChangeSetRequest &other)
    : CloudFormationRequest(new DescribeChangeSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeChangeSetRequest object.
 */
DescribeChangeSetRequest::DescribeChangeSetRequest()
    : CloudFormationRequest(new DescribeChangeSetRequestPrivate(CloudFormationRequest::DescribeChangeSetAction, this))
{

}

bool DescribeChangeSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeChangeSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeChangeSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DescribeChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChangeSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeChangeSetRequestPrivate
 *
 * @brief  Private implementation for DescribeChangeSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChangeSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeChangeSetRequest instance.
 */
DescribeChangeSetRequestPrivate::DescribeChangeSetRequestPrivate(
    const CloudFormationRequest::Action action, DescribeChangeSetRequest * const q)
    : DescribeChangeSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChangeSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeChangeSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeChangeSetRequest instance.
 */
DescribeChangeSetRequestPrivate::DescribeChangeSetRequestPrivate(
    const DescribeChangeSetRequestPrivate &other, DescribeChangeSetRequest * const q)
    : DescribeChangeSetPrivate(other, q)
{

}
