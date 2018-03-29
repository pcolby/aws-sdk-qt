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

#include "listmigrationtasksrequest.h"
#include "listmigrationtasksrequest_p.h"
#include "listmigrationtasksresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/**
 * @class  ListMigrationTasksRequest
 *
 * @brief  Implements MigrationHub ListMigrationTasks requests.
 *
 * @see    MigrationHubClient::listMigrationTasks
 */

/**
 * @brief  Constructs a new ListMigrationTasksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListMigrationTasksRequest::ListMigrationTasksRequest(const ListMigrationTasksRequest &other)
    : MigrationHubRequest(new ListMigrationTasksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListMigrationTasksRequest object.
 */
ListMigrationTasksRequest::ListMigrationTasksRequest()
    : MigrationHubRequest(new ListMigrationTasksRequestPrivate(MigrationHubRequest::ListMigrationTasksAction, this))
{

}

bool ListMigrationTasksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListMigrationTasksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListMigrationTasksResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMigrationTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListMigrationTasksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListMigrationTasksRequestPrivate
 *
 * @brief  Private implementation for ListMigrationTasksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMigrationTasksRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public ListMigrationTasksRequest instance.
 */
ListMigrationTasksRequestPrivate::ListMigrationTasksRequestPrivate(
    const MigrationHubRequest::Action action, ListMigrationTasksRequest * const q)
    : ListMigrationTasksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListMigrationTasksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListMigrationTasksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListMigrationTasksRequest instance.
 */
ListMigrationTasksRequestPrivate::ListMigrationTasksRequestPrivate(
    const ListMigrationTasksRequestPrivate &other, ListMigrationTasksRequest * const q)
    : ListMigrationTasksPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
