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

#include "describeinstanceassociationsstatusrequest.h"
#include "describeinstanceassociationsstatusrequest_p.h"
#include "describeinstanceassociationsstatusresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeInstanceAssociationsStatusRequest
 *
 * @brief  Implements SSM DescribeInstanceAssociationsStatus requests.
 *
 * @see    SSMClient::describeInstanceAssociationsStatus
 */

/**
 * @brief  Constructs a new DescribeInstanceAssociationsStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstanceAssociationsStatusRequest::DescribeInstanceAssociationsStatusRequest(const DescribeInstanceAssociationsStatusRequest &other)
    : SSMRequest(new DescribeInstanceAssociationsStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstanceAssociationsStatusRequest object.
 */
DescribeInstanceAssociationsStatusRequest::DescribeInstanceAssociationsStatusRequest()
    : SSMRequest(new DescribeInstanceAssociationsStatusRequestPrivate(SSMRequest::DescribeInstanceAssociationsStatusAction, this))
{

}

bool DescribeInstanceAssociationsStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstanceAssociationsStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstanceAssociationsStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceAssociationsStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceAssociationsStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstanceAssociationsStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeInstanceAssociationsStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceAssociationsStatusRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeInstanceAssociationsStatusRequest instance.
 */
DescribeInstanceAssociationsStatusRequestPrivate::DescribeInstanceAssociationsStatusRequestPrivate(
    const SSMRequest::Action action, DescribeInstanceAssociationsStatusRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceAssociationsStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceAssociationsStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstanceAssociationsStatusRequest instance.
 */
DescribeInstanceAssociationsStatusRequestPrivate::DescribeInstanceAssociationsStatusRequestPrivate(
    const DescribeInstanceAssociationsStatusRequestPrivate &other, DescribeInstanceAssociationsStatusRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
