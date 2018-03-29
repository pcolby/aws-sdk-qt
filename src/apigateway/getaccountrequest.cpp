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

#include "getaccountrequest.h"
#include "getaccountrequest_p.h"
#include "getaccountresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetAccountRequest
 *
 * @brief  Implements APIGateway GetAccount requests.
 *
 * @see    APIGatewayClient::getAccount
 */

/**
 * @brief  Constructs a new GetAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAccountRequest::GetAccountRequest(const GetAccountRequest &other)
    : APIGatewayRequest(new GetAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAccountRequest object.
 */
GetAccountRequest::GetAccountRequest()
    : APIGatewayRequest(new GetAccountRequestPrivate(APIGatewayRequest::GetAccountAction, this))
{

}

bool GetAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAccountResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAccountRequestPrivate
 *
 * @brief  Private implementation for GetAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetAccountRequest instance.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const APIGatewayRequest::Action action, GetAccountRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAccountRequest instance.
 */
GetAccountRequestPrivate::GetAccountRequestPrivate(
    const GetAccountRequestPrivate &other, GetAccountRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
