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

#include "testmetricfilterrequest.h"
#include "testmetricfilterrequest_p.h"
#include "testmetricfilterresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  TestMetricFilterRequest
 *
 * @brief  Implements CloudWatchLogs TestMetricFilter requests.
 *
 * @see    CloudWatchLogsClient::testMetricFilter
 */

/**
 * @brief  Constructs a new TestMetricFilterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TestMetricFilterResponse::TestMetricFilterResponse(

/**
 * @brief  Constructs a new TestMetricFilterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestMetricFilterRequest::TestMetricFilterRequest(const TestMetricFilterRequest &other)
    : CloudWatchLogsRequest(new TestMetricFilterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestMetricFilterRequest object.
 */
TestMetricFilterRequest::TestMetricFilterRequest()
    : CloudWatchLogsRequest(new TestMetricFilterRequestPrivate(CloudWatchLogsRequest::TestMetricFilterAction, this))
{

}

bool TestMetricFilterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestMetricFilterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestMetricFilterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * TestMetricFilterRequest::response(QNetworkReply * const reply) const
{
    return new TestMetricFilterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestMetricFilterRequestPrivate
 *
 * @brief  Private implementation for TestMetricFilterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestMetricFilterRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public TestMetricFilterRequest instance.
 */
TestMetricFilterRequestPrivate::TestMetricFilterRequestPrivate(
    const CloudWatchLogsRequest::Action action, TestMetricFilterRequest * const q)
    : TestMetricFilterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestMetricFilterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestMetricFilterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestMetricFilterRequest instance.
 */
TestMetricFilterRequestPrivate::TestMetricFilterRequestPrivate(
    const TestMetricFilterRequestPrivate &other, TestMetricFilterRequest * const q)
    : TestMetricFilterPrivate(other, q)
{

}
