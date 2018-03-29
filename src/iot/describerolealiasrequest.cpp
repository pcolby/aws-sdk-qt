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

#include "describerolealiasrequest.h"
#include "describerolealiasrequest_p.h"
#include "describerolealiasresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeRoleAliasRequest
 *
 * @brief  Implements IoT DescribeRoleAlias requests.
 *
 * @see    IoTClient::describeRoleAlias
 */

/**
 * @brief  Constructs a new DescribeRoleAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRoleAliasRequest::DescribeRoleAliasRequest(const DescribeRoleAliasRequest &other)
    : IoTRequest(new DescribeRoleAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRoleAliasRequest object.
 */
DescribeRoleAliasRequest::DescribeRoleAliasRequest()
    : IoTRequest(new DescribeRoleAliasRequestPrivate(IoTRequest::DescribeRoleAliasAction, this))
{

}

bool DescribeRoleAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRoleAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRoleAliasResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRoleAliasRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRoleAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRoleAliasRequestPrivate
 *
 * @brief  Private implementation for DescribeRoleAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRoleAliasRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public DescribeRoleAliasRequest instance.
 */
DescribeRoleAliasRequestPrivate::DescribeRoleAliasRequestPrivate(
    const IoTRequest::Action action, DescribeRoleAliasRequest * const q)
    : DescribeRoleAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRoleAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRoleAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRoleAliasRequest instance.
 */
DescribeRoleAliasRequestPrivate::DescribeRoleAliasRequestPrivate(
    const DescribeRoleAliasRequestPrivate &other, DescribeRoleAliasRequest * const q)
    : DescribeRoleAliasPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
