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

#include "describechapcredentialsrequest.h"
#include "describechapcredentialsrequest_p.h"
#include "describechapcredentialsresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeChapCredentialsRequest
 *
 * @brief  Implements StorageGateway DescribeChapCredentials requests.
 *
 * @see    StorageGatewayClient::describeChapCredentials
 */

/**
 * @brief  Constructs a new DescribeChapCredentialsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeChapCredentialsRequest::DescribeChapCredentialsRequest(const DescribeChapCredentialsRequest &other)
    : StorageGatewayRequest(new DescribeChapCredentialsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeChapCredentialsRequest object.
 */
DescribeChapCredentialsRequest::DescribeChapCredentialsRequest()
    : StorageGatewayRequest(new DescribeChapCredentialsRequestPrivate(StorageGatewayRequest::DescribeChapCredentialsAction, this))
{

}

bool DescribeChapCredentialsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeChapCredentialsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeChapCredentialsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeChapCredentialsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChapCredentialsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeChapCredentialsRequestPrivate
 *
 * @brief  Private implementation for DescribeChapCredentialsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChapCredentialsRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeChapCredentialsRequest instance.
 */
DescribeChapCredentialsRequestPrivate::DescribeChapCredentialsRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeChapCredentialsRequest * const q)
    : DescribeChapCredentialsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeChapCredentialsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeChapCredentialsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeChapCredentialsRequest instance.
 */
DescribeChapCredentialsRequestPrivate::DescribeChapCredentialsRequestPrivate(
    const DescribeChapCredentialsRequestPrivate &other, DescribeChapCredentialsRequest * const q)
    : DescribeChapCredentialsPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
