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

#include "describeinterconnectsrequest.h"
#include "describeinterconnectsrequest_p.h"
#include "describeinterconnectsresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeInterconnectsRequest
 *
 * @brief  Implements DirectConnect DescribeInterconnects requests.
 *
 * @see    DirectConnectClient::describeInterconnects
 */

/**
 * @brief  Constructs a new DescribeInterconnectsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInterconnectsRequest::DescribeInterconnectsRequest(const DescribeInterconnectsRequest &other)
    : DirectConnectRequest(new DescribeInterconnectsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInterconnectsRequest object.
 */
DescribeInterconnectsRequest::DescribeInterconnectsRequest()
    : DirectConnectRequest(new DescribeInterconnectsRequestPrivate(DirectConnectRequest::DescribeInterconnectsAction, this))
{

}

bool DescribeInterconnectsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInterconnectsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInterconnectsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeInterconnectsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInterconnectsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInterconnectsRequestPrivate
 *
 * @brief  Private implementation for DescribeInterconnectsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInterconnectsRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeInterconnectsRequest instance.
 */
DescribeInterconnectsRequestPrivate::DescribeInterconnectsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeInterconnectsRequest * const q)
    : DescribeInterconnectsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInterconnectsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInterconnectsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInterconnectsRequest instance.
 */
DescribeInterconnectsRequestPrivate::DescribeInterconnectsRequestPrivate(
    const DescribeInterconnectsRequestPrivate &other, DescribeInterconnectsRequest * const q)
    : DescribeInterconnectsPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
