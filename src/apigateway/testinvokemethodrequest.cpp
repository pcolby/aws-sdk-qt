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

#include "testinvokemethodrequest.h"
#include "testinvokemethodrequest_p.h"
#include "testinvokemethodresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  TestInvokeMethodRequest
 *
 * @brief  Implements APIGateway TestInvokeMethod requests.
 *
 * @see    APIGatewayClient::testInvokeMethod
 */

/**
 * @brief  Constructs a new TestInvokeMethodRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestInvokeMethodRequest::TestInvokeMethodRequest(const TestInvokeMethodRequest &other)
    : APIGatewayRequest(new TestInvokeMethodRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestInvokeMethodRequest object.
 */
TestInvokeMethodRequest::TestInvokeMethodRequest()
    : APIGatewayRequest(new TestInvokeMethodRequestPrivate(APIGatewayRequest::TestInvokeMethodAction, this))
{

}

bool TestInvokeMethodRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestInvokeMethodResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestInvokeMethodResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * TestInvokeMethodRequest::response(QNetworkReply * const reply) const
{
    return new TestInvokeMethodResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestInvokeMethodRequestPrivate
 *
 * @brief  Private implementation for TestInvokeMethodRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestInvokeMethodRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public TestInvokeMethodRequest instance.
 */
TestInvokeMethodRequestPrivate::TestInvokeMethodRequestPrivate(
    const APIGatewayRequest::Action action, TestInvokeMethodRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestInvokeMethodRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestInvokeMethodRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestInvokeMethodRequest instance.
 */
TestInvokeMethodRequestPrivate::TestInvokeMethodRequestPrivate(
    const TestInvokeMethodRequestPrivate &other, TestInvokeMethodRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
