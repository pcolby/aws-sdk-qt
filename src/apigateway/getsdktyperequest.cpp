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

#include "getsdktyperequest.h"
#include "getsdktyperequest_p.h"
#include "getsdktyperesponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetSdkTypeRequest
 *
 * @brief  Implements APIGateway GetSdkType requests.
 *
 * @see    APIGatewayClient::getSdkType
 */

/**
 * @brief  Constructs a new GetSdkTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSdkTypeRequest::GetSdkTypeRequest(const GetSdkTypeRequest &other)
    : APIGatewayRequest(new GetSdkTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSdkTypeRequest object.
 */
GetSdkTypeRequest::GetSdkTypeRequest()
    : APIGatewayRequest(new GetSdkTypeRequestPrivate(APIGatewayRequest::GetSdkTypeAction, this))
{

}

bool GetSdkTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSdkTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSdkTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetSdkTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetSdkTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSdkTypeRequestPrivate
 *
 * @brief  Private implementation for GetSdkTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSdkTypeRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetSdkTypeRequest instance.
 */
GetSdkTypeRequestPrivate::GetSdkTypeRequestPrivate(
    const APIGatewayRequest::Action action, GetSdkTypeRequest * const q)
    : GetSdkTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSdkTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSdkTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSdkTypeRequest instance.
 */
GetSdkTypeRequestPrivate::GetSdkTypeRequestPrivate(
    const GetSdkTypeRequestPrivate &other, GetSdkTypeRequest * const q)
    : GetSdkTypePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS
