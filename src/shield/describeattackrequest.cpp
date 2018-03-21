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

#include "describeattackrequest.h"
#include "describeattackrequest_p.h"
#include "describeattackresponse.h"
#include "shieldrequest_p.h"

namespace AWS {
namespace Shield {

/**
 * @class  DescribeAttackRequest
 *
 * @brief  Implements Shield DescribeAttack requests.
 *
 * @see    ShieldClient::describeAttack
 */

/**
 * @brief  Constructs a new DescribeAttackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAttackRequest::DescribeAttackRequest(const DescribeAttackRequest &other)
    : ShieldRequest(new DescribeAttackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAttackRequest object.
 */
DescribeAttackRequest::DescribeAttackRequest()
    : ShieldRequest(new DescribeAttackRequestPrivate(ShieldRequest::DescribeAttackAction, this))
{

}

bool DescribeAttackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAttackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAttackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ShieldClient::send
 */
AwsAbstractResponse * DescribeAttackRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAttackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAttackRequestPrivate
 *
 * @brief  Private implementation for DescribeAttackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAttackRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public DescribeAttackRequest instance.
 */
DescribeAttackRequestPrivate::DescribeAttackRequestPrivate(
    const ShieldRequest::Action action, DescribeAttackRequest * const q)
    : DescribeAttackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAttackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAttackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAttackRequest instance.
 */
DescribeAttackRequestPrivate::DescribeAttackRequestPrivate(
    const DescribeAttackRequestPrivate &other, DescribeAttackRequest * const q)
    : DescribeAttackPrivate(other, q)
{

}

} // namespace Shield
} // namespace AWS
