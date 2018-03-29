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

#include "importmigrationtaskrequest.h"
#include "importmigrationtaskrequest_p.h"
#include "importmigrationtaskresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/**
 * @class  ImportMigrationTaskRequest
 *
 * @brief  Implements MigrationHub ImportMigrationTask requests.
 *
 * @see    MigrationHubClient::importMigrationTask
 */

/**
 * @brief  Constructs a new ImportMigrationTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ImportMigrationTaskRequest::ImportMigrationTaskRequest(const ImportMigrationTaskRequest &other)
    : MigrationHubRequest(new ImportMigrationTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ImportMigrationTaskRequest object.
 */
ImportMigrationTaskRequest::ImportMigrationTaskRequest()
    : MigrationHubRequest(new ImportMigrationTaskRequestPrivate(MigrationHubRequest::ImportMigrationTaskAction, this))
{

}

bool ImportMigrationTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ImportMigrationTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ImportMigrationTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
AwsAbstractResponse * ImportMigrationTaskRequest::response(QNetworkReply * const reply) const
{
    return new ImportMigrationTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ImportMigrationTaskRequestPrivate
 *
 * @brief  Private implementation for ImportMigrationTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportMigrationTaskRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public ImportMigrationTaskRequest instance.
 */
ImportMigrationTaskRequestPrivate::ImportMigrationTaskRequestPrivate(
    const MigrationHubRequest::Action action, ImportMigrationTaskRequest * const q)
    : ImportMigrationTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ImportMigrationTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ImportMigrationTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ImportMigrationTaskRequest instance.
 */
ImportMigrationTaskRequestPrivate::ImportMigrationTaskRequestPrivate(
    const ImportMigrationTaskRequestPrivate &other, ImportMigrationTaskRequest * const q)
    : ImportMigrationTaskPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
