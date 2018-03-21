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

#include "testinvokeauthorizerrequest.h"
#include "testinvokeauthorizerrequest_p.h"
#include "testinvokeauthorizerresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  TestInvokeAuthorizerRequest
 *
 * @brief  Implements APIGateway TestInvokeAuthorizer requests.
 *
 * @see    APIGatewayClient::testInvokeAuthorizer
 */

/**
 * @brief  Constructs a new TestInvokeAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestInvokeAuthorizerResponse::TestInvokeAuthorizerResponse(

/**
 * @brief  Constructs a new TestInvokeAuthorizerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestInvokeAuthorizerRequest::TestInvokeAuthorizerRequest(const TestInvokeAuthorizerRequest &other)
    : APIGatewayRequest(new TestInvokeAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestInvokeAuthorizerRequest object.
 */
TestInvokeAuthorizerRequest::TestInvokeAuthorizerRequest()
    : APIGatewayRequest(new TestInvokeAuthorizerRequestPrivate(APIGatewayRequest::TestInvokeAuthorizerAction, this))
{

}

bool TestInvokeAuthorizerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestInvokeAuthorizerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestInvokeAuthorizerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * TestInvokeAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new TestInvokeAuthorizerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestInvokeAuthorizerRequestPrivate
 *
 * @brief  Private implementation for TestInvokeAuthorizerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestInvokeAuthorizerRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public TestInvokeAuthorizerRequest instance.
 */
TestInvokeAuthorizerRequestPrivate::TestInvokeAuthorizerRequestPrivate(
    const APIGatewayRequest::Action action, TestInvokeAuthorizerRequest * const q)
    : TestInvokeAuthorizerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestInvokeAuthorizerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestInvokeAuthorizerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestInvokeAuthorizerRequest instance.
 */
TestInvokeAuthorizerRequestPrivate::TestInvokeAuthorizerRequestPrivate(
    const TestInvokeAuthorizerRequestPrivate &other, TestInvokeAuthorizerRequest * const q)
    : TestInvokeAuthorizerPrivate(other, q)
{

}
