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

#include "testfailoverrequest.h"
#include "testfailoverrequest_p.h"
#include "testfailoverresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/**
 * @class  TestFailoverRequest
 *
 * @brief  Implements ElastiCache TestFailover requests.
 *
 * @see    ElastiCacheClient::testFailover
 */

/**
 * @brief  Constructs a new TestFailoverRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestFailoverRequest::TestFailoverRequest(const TestFailoverRequest &other)
    : ElastiCacheRequest(new TestFailoverRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestFailoverRequest object.
 */
TestFailoverRequest::TestFailoverRequest()
    : ElastiCacheRequest(new TestFailoverRequestPrivate(ElastiCacheRequest::TestFailoverAction, this))
{

}

bool TestFailoverRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestFailoverResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestFailoverResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
QtAws::Core::AwsAbstractResponse * TestFailoverRequest::response(QNetworkReply * const reply) const
{
    return new TestFailoverResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestFailoverRequestPrivate
 *
 * @brief  Private implementation for TestFailoverRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestFailoverRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public TestFailoverRequest instance.
 */
TestFailoverRequestPrivate::TestFailoverRequestPrivate(
    const ElastiCacheRequest::Action action, TestFailoverRequest * const q)
    : TestFailoverPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestFailoverRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestFailoverRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestFailoverRequest instance.
 */
TestFailoverRequestPrivate::TestFailoverRequestPrivate(
    const TestFailoverRequestPrivate &other, TestFailoverRequest * const q)
    : TestFailoverPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
