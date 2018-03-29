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

#include "testconnectionrequest.h"
#include "testconnectionrequest_p.h"
#include "testconnectionresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  TestConnectionRequest
 *
 * @brief  Implements DatabaseMigrationService TestConnection requests.
 *
 * @see    DatabaseMigrationServiceClient::testConnection
 */

/**
 * @brief  Constructs a new TestConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestConnectionRequest::TestConnectionRequest(const TestConnectionRequest &other)
    : DatabaseMigrationServiceRequest(new TestConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TestConnectionRequest object.
 */
TestConnectionRequest::TestConnectionRequest()
    : DatabaseMigrationServiceRequest(new TestConnectionRequestPrivate(DatabaseMigrationServiceRequest::TestConnectionAction, this))
{

}

bool TestConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TestConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
AwsAbstractResponse * TestConnectionRequest::response(QNetworkReply * const reply) const
{
    return new TestConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TestConnectionRequestPrivate
 *
 * @brief  Private implementation for TestConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TestConnectionRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public TestConnectionRequest instance.
 */
TestConnectionRequestPrivate::TestConnectionRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, TestConnectionRequest * const q)
    : TestConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TestConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestConnectionRequest instance.
 */
TestConnectionRequestPrivate::TestConnectionRequestPrivate(
    const TestConnectionRequestPrivate &other, TestConnectionRequest * const q)
    : TestConnectionPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
