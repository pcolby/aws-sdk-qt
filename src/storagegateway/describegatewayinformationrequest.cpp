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

#include "describegatewayinformationrequest.h"
#include "describegatewayinformationrequest_p.h"
#include "describegatewayinformationresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DescribeGatewayInformationRequest
 *
 * @brief  Implements StorageGateway DescribeGatewayInformation requests.
 *
 * @see    StorageGatewayClient::describeGatewayInformation
 */

/**
 * @brief  Constructs a new DescribeGatewayInformationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeGatewayInformationResponse::DescribeGatewayInformationResponse(

/**
 * @brief  Constructs a new DescribeGatewayInformationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeGatewayInformationRequest::DescribeGatewayInformationRequest(const DescribeGatewayInformationRequest &other)
    : StorageGatewayRequest(new DescribeGatewayInformationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeGatewayInformationRequest object.
 */
DescribeGatewayInformationRequest::DescribeGatewayInformationRequest()
    : StorageGatewayRequest(new DescribeGatewayInformationRequestPrivate(StorageGatewayRequest::DescribeGatewayInformationAction, this))
{

}

bool DescribeGatewayInformationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeGatewayInformationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeGatewayInformationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DescribeGatewayInformationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGatewayInformationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeGatewayInformationRequestPrivate
 *
 * @brief  Private implementation for DescribeGatewayInformationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGatewayInformationRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DescribeGatewayInformationRequest instance.
 */
DescribeGatewayInformationRequestPrivate::DescribeGatewayInformationRequestPrivate(
    const StorageGatewayRequest::Action action, DescribeGatewayInformationRequest * const q)
    : DescribeGatewayInformationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGatewayInformationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeGatewayInformationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeGatewayInformationRequest instance.
 */
DescribeGatewayInformationRequestPrivate::DescribeGatewayInformationRequestPrivate(
    const DescribeGatewayInformationRequestPrivate &other, DescribeGatewayInformationRequest * const q)
    : DescribeGatewayInformationPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
