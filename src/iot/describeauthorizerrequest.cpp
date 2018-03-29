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

#include "describeauthorizerrequest.h"
#include "describeauthorizerrequest_p.h"
#include "describeauthorizerresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  DescribeAuthorizerRequest
 *
 * @brief  Implements IoT DescribeAuthorizer requests.
 *
 * @see    IoTClient::describeAuthorizer
 */

/**
 * @brief  Constructs a new DescribeAuthorizerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAuthorizerRequest::DescribeAuthorizerRequest(const DescribeAuthorizerRequest &other)
    : IoTRequest(new DescribeAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAuthorizerRequest object.
 */
DescribeAuthorizerRequest::DescribeAuthorizerRequest()
    : IoTRequest(new DescribeAuthorizerRequestPrivate(IoTRequest::DescribeAuthorizerAction, this))
{

}

bool DescribeAuthorizerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAuthorizerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAuthorizerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * DescribeAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAuthorizerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAuthorizerRequestPrivate
 *
 * @brief  Private implementation for DescribeAuthorizerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAuthorizerRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeAuthorizerRequest instance.
 */
DescribeAuthorizerRequestPrivate::DescribeAuthorizerRequestPrivate(
    const IoTRequest::Action action, DescribeAuthorizerRequest * const q)
    : DescribeAuthorizerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAuthorizerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAuthorizerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAuthorizerRequest instance.
 */
DescribeAuthorizerRequestPrivate::DescribeAuthorizerRequestPrivate(
    const DescribeAuthorizerRequestPrivate &other, DescribeAuthorizerRequest * const q)
    : DescribeAuthorizerPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
