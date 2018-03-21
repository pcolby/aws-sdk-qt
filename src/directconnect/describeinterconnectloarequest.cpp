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

#include "describeinterconnectloarequest.h"
#include "describeinterconnectloarequest_p.h"
#include "describeinterconnectloaresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeInterconnectLoaRequest
 *
 * @brief  Implements DirectConnect DescribeInterconnectLoa requests.
 *
 * @see    DirectConnectClient::describeInterconnectLoa
 */

/**
 * @brief  Constructs a new DescribeInterconnectLoaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInterconnectLoaResponse::DescribeInterconnectLoaResponse(

/**
 * @brief  Constructs a new DescribeInterconnectLoaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInterconnectLoaRequest::DescribeInterconnectLoaRequest(const DescribeInterconnectLoaRequest &other)
    : DirectConnectRequest(new DescribeInterconnectLoaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInterconnectLoaRequest object.
 */
DescribeInterconnectLoaRequest::DescribeInterconnectLoaRequest()
    : DirectConnectRequest(new DescribeInterconnectLoaRequestPrivate(DirectConnectRequest::DescribeInterconnectLoaAction, this))
{

}

bool DescribeInterconnectLoaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInterconnectLoaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInterconnectLoaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeInterconnectLoaRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInterconnectLoaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInterconnectLoaRequestPrivate
 *
 * @brief  Private implementation for DescribeInterconnectLoaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInterconnectLoaRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeInterconnectLoaRequest instance.
 */
DescribeInterconnectLoaRequestPrivate::DescribeInterconnectLoaRequestPrivate(
    const DirectConnectRequest::Action action, DescribeInterconnectLoaRequest * const q)
    : DescribeInterconnectLoaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInterconnectLoaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInterconnectLoaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInterconnectLoaRequest instance.
 */
DescribeInterconnectLoaRequestPrivate::DescribeInterconnectLoaRequestPrivate(
    const DescribeInterconnectLoaRequestPrivate &other, DescribeInterconnectLoaRequest * const q)
    : DescribeInterconnectLoaPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
