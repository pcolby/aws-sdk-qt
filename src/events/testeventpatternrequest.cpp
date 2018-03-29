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

#include "testeventpatternrequest.h"
#include "testeventpatternrequest_p.h"
#include "testeventpatternresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  TestEventPatternRequest
 *
 * @brief  Implements CloudWatchEvents TestEventPattern requests.
 *
 * @see    CloudWatchEventsClient::testEventPattern
 */

/**
 * @brief  Constructs a new TestEventPatternRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestEventPatternRequest::TestEventPatternRequest(const TestEventPatternRequest &other)
    : CloudWatchEventsRequest(new TestEventPatternRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestEventPatternRequest object.
 */
TestEventPatternRequest::TestEventPatternRequest()
    : CloudWatchEventsRequest(new TestEventPatternRequestPrivate(CloudWatchEventsRequest::TestEventPatternAction, this))
{

}

bool TestEventPatternRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestEventPatternResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestEventPatternResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * TestEventPatternRequest::response(QNetworkReply * const reply) const
{
    return new TestEventPatternResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestEventPatternRequestPrivate
 *
 * @brief  Private implementation for TestEventPatternRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestEventPatternRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public TestEventPatternRequest instance.
 */
TestEventPatternRequestPrivate::TestEventPatternRequestPrivate(
    const CloudWatchEventsRequest::Action action, TestEventPatternRequest * const q)
    : TestEventPatternPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestEventPatternRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestEventPatternRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestEventPatternRequest instance.
 */
TestEventPatternRequestPrivate::TestEventPatternRequestPrivate(
    const TestEventPatternRequestPrivate &other, TestEventPatternRequest * const q)
    : TestEventPatternPrivate(other, q)
{

}

} // namespace CloudWatchEvents
} // namespace QtAws
