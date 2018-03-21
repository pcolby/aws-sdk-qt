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

#include "describeuserrequest.h"
#include "describeuserrequest_p.h"
#include "describeuserresponse.h"
#include "mqrequest_p.h"

namespace AWS {
namespace MQ {

/**
 * @class  DescribeUserRequest
 *
 * @brief  Implements MQ DescribeUser requests.
 *
 * @see    MQClient::describeUser
 */

/**
 * @brief  Constructs a new DescribeUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserResponse::DescribeUserResponse(

/**
 * @brief  Constructs a new DescribeUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUserRequest::DescribeUserRequest(const DescribeUserRequest &other)
    : MQRequest(new DescribeUserRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeUserRequest object.
 */
DescribeUserRequest::DescribeUserRequest()
    : MQRequest(new DescribeUserRequestPrivate(MQRequest::DescribeUserAction, this))
{

}

bool DescribeUserRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUserResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MQClient::send
 */
AwsAbstractResponse * DescribeUserRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeUserRequestPrivate
 *
 * @brief  Private implementation for DescribeUserRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public DescribeUserRequest instance.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const MQRequest::Action action, DescribeUserRequest * const q)
    : DescribeUserPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUserRequest instance.
 */
DescribeUserRequestPrivate::DescribeUserRequestPrivate(
    const DescribeUserRequestPrivate &other, DescribeUserRequest * const q)
    : DescribeUserPrivate(other, q)
{

}
