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

#include "describeinstanceinformationrequest.h"
#include "describeinstanceinformationrequest_p.h"
#include "describeinstanceinformationresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeInstanceInformationRequest
 *
 * @brief  Implements SSM DescribeInstanceInformation requests.
 *
 * @see    SSMClient::describeInstanceInformation
 */

/**
 * @brief  Constructs a new DescribeInstanceInformationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstanceInformationRequest::DescribeInstanceInformationRequest(const DescribeInstanceInformationRequest &other)
    : SSMRequest(new DescribeInstanceInformationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstanceInformationRequest object.
 */
DescribeInstanceInformationRequest::DescribeInstanceInformationRequest()
    : SSMRequest(new DescribeInstanceInformationRequestPrivate(SSMRequest::DescribeInstanceInformationAction, this))
{

}

bool DescribeInstanceInformationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstanceInformationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstanceInformationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeInstanceInformationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceInformationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstanceInformationRequestPrivate
 *
 * @brief  Private implementation for DescribeInstanceInformationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceInformationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeInstanceInformationRequest instance.
 */
DescribeInstanceInformationRequestPrivate::DescribeInstanceInformationRequestPrivate(
    const SSMRequest::Action action, DescribeInstanceInformationRequest * const q)
    : DescribeInstanceInformationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceInformationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceInformationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstanceInformationRequest instance.
 */
DescribeInstanceInformationRequestPrivate::DescribeInstanceInformationRequestPrivate(
    const DescribeInstanceInformationRequestPrivate &other, DescribeInstanceInformationRequest * const q)
    : DescribeInstanceInformationPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
