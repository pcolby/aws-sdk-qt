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

#include "describeconnectionloarequest.h"
#include "describeconnectionloarequest_p.h"
#include "describeconnectionloaresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeConnectionLoaRequest
 *
 * @brief  Implements DirectConnect DescribeConnectionLoa requests.
 *
 * @see    DirectConnectClient::describeConnectionLoa
 */

/**
 * @brief  Constructs a new DescribeConnectionLoaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConnectionLoaRequest::DescribeConnectionLoaRequest(const DescribeConnectionLoaRequest &other)
    : DirectConnectRequest(new DescribeConnectionLoaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConnectionLoaRequest object.
 */
DescribeConnectionLoaRequest::DescribeConnectionLoaRequest()
    : DirectConnectRequest(new DescribeConnectionLoaRequestPrivate(DirectConnectRequest::DescribeConnectionLoaAction, this))
{

}

bool DescribeConnectionLoaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConnectionLoaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConnectionLoaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DescribeConnectionLoaRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectionLoaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConnectionLoaRequestPrivate
 *
 * @brief  Private implementation for DescribeConnectionLoaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionLoaRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeConnectionLoaRequest instance.
 */
DescribeConnectionLoaRequestPrivate::DescribeConnectionLoaRequestPrivate(
    const DirectConnectRequest::Action action, DescribeConnectionLoaRequest * const q)
    : DescribeConnectionLoaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionLoaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectionLoaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConnectionLoaRequest instance.
 */
DescribeConnectionLoaRequestPrivate::DescribeConnectionLoaRequestPrivate(
    const DescribeConnectionLoaRequestPrivate &other, DescribeConnectionLoaRequest * const q)
    : DescribeConnectionLoaPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
