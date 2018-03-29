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

#include "describeactivationsrequest.h"
#include "describeactivationsrequest_p.h"
#include "describeactivationsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeActivationsRequest
 *
 * @brief  Implements SSM DescribeActivations requests.
 *
 * @see    SSMClient::describeActivations
 */

/**
 * @brief  Constructs a new DescribeActivationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeActivationsRequest::DescribeActivationsRequest(const DescribeActivationsRequest &other)
    : SSMRequest(new DescribeActivationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeActivationsRequest object.
 */
DescribeActivationsRequest::DescribeActivationsRequest()
    : SSMRequest(new DescribeActivationsRequestPrivate(SSMRequest::DescribeActivationsAction, this))
{

}

bool DescribeActivationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeActivationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeActivationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeActivationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeActivationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeActivationsRequestPrivate
 *
 * @brief  Private implementation for DescribeActivationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivationsRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DescribeActivationsRequest instance.
 */
DescribeActivationsRequestPrivate::DescribeActivationsRequestPrivate(
    const SSMRequest::Action action, DescribeActivationsRequest * const q)
    : DescribeActivationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeActivationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeActivationsRequest instance.
 */
DescribeActivationsRequestPrivate::DescribeActivationsRequestPrivate(
    const DescribeActivationsRequestPrivate &other, DescribeActivationsRequest * const q)
    : DescribeActivationsPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
