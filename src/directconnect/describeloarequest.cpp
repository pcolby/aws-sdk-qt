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

#include "describeloarequest.h"
#include "describeloarequest_p.h"
#include "describeloaresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeLoaRequest
 *
 * @brief  Implements DirectConnect DescribeLoa requests.
 *
 * @see    DirectConnectClient::describeLoa
 */

/**
 * @brief  Constructs a new DescribeLoaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLoaRequest::DescribeLoaRequest(const DescribeLoaRequest &other)
    : DirectConnectRequest(new DescribeLoaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLoaRequest object.
 */
DescribeLoaRequest::DescribeLoaRequest()
    : DirectConnectRequest(new DescribeLoaRequestPrivate(DirectConnectRequest::DescribeLoaAction, this))
{

}

bool DescribeLoaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLoaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLoaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeLoaRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLoaRequestPrivate
 *
 * @brief  Private implementation for DescribeLoaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoaRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeLoaRequest instance.
 */
DescribeLoaRequestPrivate::DescribeLoaRequestPrivate(
    const DirectConnectRequest::Action action, DescribeLoaRequest * const q)
    : DescribeLoaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLoaRequest instance.
 */
DescribeLoaRequestPrivate::DescribeLoaRequestPrivate(
    const DescribeLoaRequestPrivate &other, DescribeLoaRequest * const q)
    : DescribeLoaPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
