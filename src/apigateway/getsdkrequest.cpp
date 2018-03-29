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

#include "getsdkrequest.h"
#include "getsdkrequest_p.h"
#include "getsdkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetSdkRequest
 *
 * @brief  Implements APIGateway GetSdk requests.
 *
 * @see    APIGatewayClient::getSdk
 */

/**
 * @brief  Constructs a new GetSdkRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSdkRequest::GetSdkRequest(const GetSdkRequest &other)
    : APIGatewayRequest(new GetSdkRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSdkRequest object.
 */
GetSdkRequest::GetSdkRequest()
    : APIGatewayRequest(new GetSdkRequestPrivate(APIGatewayRequest::GetSdkAction, this))
{

}

bool GetSdkRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSdkResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSdkResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSdkRequest::response(QNetworkReply * const reply) const
{
    return new GetSdkResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSdkRequestPrivate
 *
 * @brief  Private implementation for GetSdkRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSdkRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetSdkRequest instance.
 */
GetSdkRequestPrivate::GetSdkRequestPrivate(
    const APIGatewayRequest::Action action, GetSdkRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSdkRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSdkRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSdkRequest instance.
 */
GetSdkRequestPrivate::GetSdkRequestPrivate(
    const GetSdkRequestPrivate &other, GetSdkRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
