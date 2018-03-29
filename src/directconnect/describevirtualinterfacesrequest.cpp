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

#include "describevirtualinterfacesrequest.h"
#include "describevirtualinterfacesrequest_p.h"
#include "describevirtualinterfacesresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeVirtualInterfacesRequest
 *
 * @brief  Implements DirectConnect DescribeVirtualInterfaces requests.
 *
 * @see    DirectConnectClient::describeVirtualInterfaces
 */

/**
 * @brief  Constructs a new DescribeVirtualInterfacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVirtualInterfacesRequest::DescribeVirtualInterfacesRequest(const DescribeVirtualInterfacesRequest &other)
    : DirectConnectRequest(new DescribeVirtualInterfacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVirtualInterfacesRequest object.
 */
DescribeVirtualInterfacesRequest::DescribeVirtualInterfacesRequest()
    : DirectConnectRequest(new DescribeVirtualInterfacesRequestPrivate(DirectConnectRequest::DescribeVirtualInterfacesAction, this))
{

}

bool DescribeVirtualInterfacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVirtualInterfacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVirtualInterfacesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVirtualInterfacesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVirtualInterfacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVirtualInterfacesRequestPrivate
 *
 * @brief  Private implementation for DescribeVirtualInterfacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVirtualInterfacesRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DescribeVirtualInterfacesRequest instance.
 */
DescribeVirtualInterfacesRequestPrivate::DescribeVirtualInterfacesRequestPrivate(
    const DirectConnectRequest::Action action, DescribeVirtualInterfacesRequest * const q)
    : DescribeVirtualInterfacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVirtualInterfacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVirtualInterfacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVirtualInterfacesRequest instance.
 */
DescribeVirtualInterfacesRequestPrivate::DescribeVirtualInterfacesRequestPrivate(
    const DescribeVirtualInterfacesRequestPrivate &other, DescribeVirtualInterfacesRequest * const q)
    : DescribeVirtualInterfacesPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
