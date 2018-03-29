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

#include "describehsmrequest.h"
#include "describehsmrequest_p.h"
#include "describehsmresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/**
 * @class  DescribeHsmRequest
 *
 * @brief  Implements CloudHSM DescribeHsm requests.
 *
 * @see    CloudHSMClient::describeHsm
 */

/**
 * @brief  Constructs a new DescribeHsmRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHsmRequest::DescribeHsmRequest(const DescribeHsmRequest &other)
    : CloudHSMRequest(new DescribeHsmRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHsmRequest object.
 */
DescribeHsmRequest::DescribeHsmRequest()
    : CloudHSMRequest(new DescribeHsmRequestPrivate(CloudHSMRequest::DescribeHsmAction, this))
{

}

bool DescribeHsmRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHsmResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHsmResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
AwsAbstractResponse * DescribeHsmRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHsmResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHsmRequestPrivate
 *
 * @brief  Private implementation for DescribeHsmRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public DescribeHsmRequest instance.
 */
DescribeHsmRequestPrivate::DescribeHsmRequestPrivate(
    const CloudHSMRequest::Action action, DescribeHsmRequest * const q)
    : DescribeHsmPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHsmRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHsmRequest instance.
 */
DescribeHsmRequestPrivate::DescribeHsmRequestPrivate(
    const DescribeHsmRequestPrivate &other, DescribeHsmRequest * const q)
    : DescribeHsmPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
