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

#include "describedefaultauthorizerrequest.h"
#include "describedefaultauthorizerrequest_p.h"
#include "describedefaultauthorizerresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeDefaultAuthorizerRequest
 *
 * @brief  Implements IoT DescribeDefaultAuthorizer requests.
 *
 * @see    IoTClient::describeDefaultAuthorizer
 */

/**
 * @brief  Constructs a new DescribeDefaultAuthorizerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDefaultAuthorizerRequest::DescribeDefaultAuthorizerRequest(const DescribeDefaultAuthorizerRequest &other)
    : IoTRequest(new DescribeDefaultAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDefaultAuthorizerRequest object.
 */
DescribeDefaultAuthorizerRequest::DescribeDefaultAuthorizerRequest()
    : IoTRequest(new DescribeDefaultAuthorizerRequestPrivate(IoTRequest::DescribeDefaultAuthorizerAction, this))
{

}

bool DescribeDefaultAuthorizerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDefaultAuthorizerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDefaultAuthorizerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DescribeDefaultAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDefaultAuthorizerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDefaultAuthorizerRequestPrivate
 *
 * @brief  Private implementation for DescribeDefaultAuthorizerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDefaultAuthorizerRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeDefaultAuthorizerRequest instance.
 */
DescribeDefaultAuthorizerRequestPrivate::DescribeDefaultAuthorizerRequestPrivate(
    const IoTRequest::Action action, DescribeDefaultAuthorizerRequest * const q)
    : DescribeDefaultAuthorizerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDefaultAuthorizerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDefaultAuthorizerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDefaultAuthorizerRequest instance.
 */
DescribeDefaultAuthorizerRequestPrivate::DescribeDefaultAuthorizerRequestPrivate(
    const DescribeDefaultAuthorizerRequestPrivate &other, DescribeDefaultAuthorizerRequest * const q)
    : DescribeDefaultAuthorizerPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
