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

#include "testrepositorytriggersrequest.h"
#include "testrepositorytriggersrequest_p.h"
#include "testrepositorytriggersresponse.h"
#include "codecommitrequest_p.h"

namespace AWS {
namespace CodeCommit {

/**
 * @class  TestRepositoryTriggersRequest
 *
 * @brief  Implements CodeCommit TestRepositoryTriggers requests.
 *
 * @see    CodeCommitClient::testRepositoryTriggers
 */

/**
 * @brief  Constructs a new TestRepositoryTriggersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestRepositoryTriggersRequest::TestRepositoryTriggersRequest(const TestRepositoryTriggersRequest &other)
    : CodeCommitRequest(new TestRepositoryTriggersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestRepositoryTriggersRequest object.
 */
TestRepositoryTriggersRequest::TestRepositoryTriggersRequest()
    : CodeCommitRequest(new TestRepositoryTriggersRequestPrivate(CodeCommitRequest::TestRepositoryTriggersAction, this))
{

}

bool TestRepositoryTriggersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestRepositoryTriggersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestRepositoryTriggersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeCommitClient::send
 */
AwsAbstractResponse * TestRepositoryTriggersRequest::response(QNetworkReply * const reply) const
{
    return new TestRepositoryTriggersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestRepositoryTriggersRequestPrivate
 *
 * @brief  Private implementation for TestRepositoryTriggersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestRepositoryTriggersRequestPrivate object.
 *
 * @param  action  CodeCommit action being performed.
 * @param  q       Pointer to this object's public TestRepositoryTriggersRequest instance.
 */
TestRepositoryTriggersRequestPrivate::TestRepositoryTriggersRequestPrivate(
    const CodeCommitRequest::Action action, TestRepositoryTriggersRequest * const q)
    : TestRepositoryTriggersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestRepositoryTriggersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestRepositoryTriggersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestRepositoryTriggersRequest instance.
 */
TestRepositoryTriggersRequestPrivate::TestRepositoryTriggersRequestPrivate(
    const TestRepositoryTriggersRequestPrivate &other, TestRepositoryTriggersRequest * const q)
    : TestRepositoryTriggersPrivate(other, q)
{

}

} // namespace CodeCommit
} // namespace AWS
