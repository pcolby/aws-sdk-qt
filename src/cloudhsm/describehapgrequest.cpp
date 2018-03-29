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

#include "describehapgrequest.h"
#include "describehapgrequest_p.h"
#include "describehapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace AWS {
namespace CloudHSM {

/**
 * @class  DescribeHapgRequest
 *
 * @brief  Implements CloudHSM DescribeHapg requests.
 *
 * @see    CloudHSMClient::describeHapg
 */

/**
 * @brief  Constructs a new DescribeHapgRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHapgRequest::DescribeHapgRequest(const DescribeHapgRequest &other)
    : CloudHSMRequest(new DescribeHapgRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHapgRequest object.
 */
DescribeHapgRequest::DescribeHapgRequest()
    : CloudHSMRequest(new DescribeHapgRequestPrivate(CloudHSMRequest::DescribeHapgAction, this))
{

}

bool DescribeHapgRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHapgResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHapgResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * DescribeHapgRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHapgResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHapgRequestPrivate
 *
 * @brief  Private implementation for DescribeHapgRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHapgRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public DescribeHapgRequest instance.
 */
DescribeHapgRequestPrivate::DescribeHapgRequestPrivate(
    const CloudHSMRequest::Action action, DescribeHapgRequest * const q)
    : DescribeHapgPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHapgRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHapgRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHapgRequest instance.
 */
DescribeHapgRequestPrivate::DescribeHapgRequestPrivate(
    const DescribeHapgRequestPrivate &other, DescribeHapgRequest * const q)
    : DescribeHapgPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace AWS
