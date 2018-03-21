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

#include "describeparametersrequest.h"
#include "describeparametersrequest_p.h"
#include "describeparametersresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DescribeParametersRequest
 *
 * @brief  Implements SSM DescribeParameters requests.
 *
 * @see    SSMClient::describeParameters
 */

/**
 * @brief  Constructs a new DescribeParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeParametersRequest::DescribeParametersRequest(const DescribeParametersRequest &other)
    : SSMRequest(new DescribeParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeParametersRequest object.
 */
DescribeParametersRequest::DescribeParametersRequest()
    : SSMRequest(new DescribeParametersRequestPrivate(SSMRequest::DescribeParametersAction, this))
{

}

bool DescribeParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DescribeParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeParametersRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeParametersRequest instance.
 */
DescribeParametersRequestPrivate::DescribeParametersRequestPrivate(
    const SSMRequest::Action action, DescribeParametersRequest * const q)
    : DescribeParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeParametersRequest instance.
 */
DescribeParametersRequestPrivate::DescribeParametersRequestPrivate(
    const DescribeParametersRequestPrivate &other, DescribeParametersRequest * const q)
    : DescribeParametersPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS
