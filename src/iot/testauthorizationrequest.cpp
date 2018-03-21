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

#include "testauthorizationrequest.h"
#include "testauthorizationrequest_p.h"
#include "testauthorizationresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  TestAuthorizationRequest
 *
 * @brief  Implements IoT TestAuthorization requests.
 *
 * @see    IoTClient::testAuthorization
 */

/**
 * @brief  Constructs a new TestAuthorizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestAuthorizationResponse::TestAuthorizationResponse(

/**
 * @brief  Constructs a new TestAuthorizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestAuthorizationRequest::TestAuthorizationRequest(const TestAuthorizationRequest &other)
    : IoTRequest(new TestAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestAuthorizationRequest object.
 */
TestAuthorizationRequest::TestAuthorizationRequest()
    : IoTRequest(new TestAuthorizationRequestPrivate(IoTRequest::TestAuthorizationAction, this))
{

}

bool TestAuthorizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestAuthorizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestAuthorizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * TestAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new TestAuthorizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestAuthorizationRequestPrivate
 *
 * @brief  Private implementation for TestAuthorizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestAuthorizationRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public TestAuthorizationRequest instance.
 */
TestAuthorizationRequestPrivate::TestAuthorizationRequestPrivate(
    const IoTRequest::Action action, TestAuthorizationRequest * const q)
    : TestAuthorizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestAuthorizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestAuthorizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestAuthorizationRequest instance.
 */
TestAuthorizationRequestPrivate::TestAuthorizationRequestPrivate(
    const TestAuthorizationRequestPrivate &other, TestAuthorizationRequest * const q)
    : TestAuthorizationPrivate(other, q)
{

}
