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

#include "testdnsanswerrequest.h"
#include "testdnsanswerrequest_p.h"
#include "testdnsanswerresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  TestDNSAnswerRequest
 *
 * @brief  Implements Route53 TestDNSAnswer requests.
 *
 * @see    Route53Client::testDNSAnswer
 */

/**
 * @brief  Constructs a new TestDNSAnswerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestDNSAnswerResponse::TestDNSAnswerResponse(

/**
 * @brief  Constructs a new TestDNSAnswerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestDNSAnswerRequest::TestDNSAnswerRequest(const TestDNSAnswerRequest &other)
    : Route53Request(new TestDNSAnswerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestDNSAnswerRequest object.
 */
TestDNSAnswerRequest::TestDNSAnswerRequest()
    : Route53Request(new TestDNSAnswerRequestPrivate(Route53Request::TestDNSAnswerAction, this))
{

}

bool TestDNSAnswerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestDNSAnswerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestDNSAnswerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * TestDNSAnswerRequest::response(QNetworkReply * const reply) const
{
    return new TestDNSAnswerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestDNSAnswerRequestPrivate
 *
 * @brief  Private implementation for TestDNSAnswerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestDNSAnswerRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public TestDNSAnswerRequest instance.
 */
TestDNSAnswerRequestPrivate::TestDNSAnswerRequestPrivate(
    const Route53Request::Action action, TestDNSAnswerRequest * const q)
    : TestDNSAnswerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestDNSAnswerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestDNSAnswerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestDNSAnswerRequest instance.
 */
TestDNSAnswerRequestPrivate::TestDNSAnswerRequestPrivate(
    const TestDNSAnswerRequestPrivate &other, TestDNSAnswerRequest * const q)
    : TestDNSAnswerPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
