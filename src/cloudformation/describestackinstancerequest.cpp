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

#include "describestackinstancerequest.h"
#include "describestackinstancerequest_p.h"
#include "describestackinstanceresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  DescribeStackInstanceRequest
 *
 * @brief  Implements CloudFormation DescribeStackInstance requests.
 *
 * @see    CloudFormationClient::describeStackInstance
 */

/**
 * @brief  Constructs a new DescribeStackInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStackInstanceResponse::DescribeStackInstanceResponse(

/**
 * @brief  Constructs a new DescribeStackInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStackInstanceRequest::DescribeStackInstanceRequest(const DescribeStackInstanceRequest &other)
    : CloudFormationRequest(new DescribeStackInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStackInstanceRequest object.
 */
DescribeStackInstanceRequest::DescribeStackInstanceRequest()
    : CloudFormationRequest(new DescribeStackInstanceRequestPrivate(CloudFormationRequest::DescribeStackInstanceAction, this))
{

}

bool DescribeStackInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStackInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStackInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * DescribeStackInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStackInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStackInstanceRequestPrivate
 *
 * @brief  Private implementation for DescribeStackInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackInstanceRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public DescribeStackInstanceRequest instance.
 */
DescribeStackInstanceRequestPrivate::DescribeStackInstanceRequestPrivate(
    const CloudFormationRequest::Action action, DescribeStackInstanceRequest * const q)
    : DescribeStackInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStackInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStackInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStackInstanceRequest instance.
 */
DescribeStackInstanceRequestPrivate::DescribeStackInstanceRequestPrivate(
    const DescribeStackInstanceRequestPrivate &other, DescribeStackInstanceRequest * const q)
    : DescribeStackInstancePrivate(other, q)
{

}
