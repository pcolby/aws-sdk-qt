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

#include "createprogressupdatestreamrequest.h"
#include "createprogressupdatestreamrequest_p.h"
#include "createprogressupdatestreamresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/**
 * @class  CreateProgressUpdateStreamRequest
 *
 * @brief  Implements MigrationHub CreateProgressUpdateStream requests.
 *
 * @see    MigrationHubClient::createProgressUpdateStream
 */

/**
 * @brief  Constructs a new CreateProgressUpdateStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateProgressUpdateStreamRequest::CreateProgressUpdateStreamRequest(const CreateProgressUpdateStreamRequest &other)
    : MigrationHubRequest(new CreateProgressUpdateStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateProgressUpdateStreamRequest object.
 */
CreateProgressUpdateStreamRequest::CreateProgressUpdateStreamRequest()
    : MigrationHubRequest(new CreateProgressUpdateStreamRequestPrivate(MigrationHubRequest::CreateProgressUpdateStreamAction, this))
{

}

bool CreateProgressUpdateStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateProgressUpdateStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateProgressUpdateStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProgressUpdateStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateProgressUpdateStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateProgressUpdateStreamRequestPrivate
 *
 * @brief  Private implementation for CreateProgressUpdateStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProgressUpdateStreamRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public CreateProgressUpdateStreamRequest instance.
 */
CreateProgressUpdateStreamRequestPrivate::CreateProgressUpdateStreamRequestPrivate(
    const MigrationHubRequest::Action action, CreateProgressUpdateStreamRequest * const q)
    : CreateProgressUpdateStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateProgressUpdateStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateProgressUpdateStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateProgressUpdateStreamRequest instance.
 */
CreateProgressUpdateStreamRequestPrivate::CreateProgressUpdateStreamRequestPrivate(
    const CreateProgressUpdateStreamRequestPrivate &other, CreateProgressUpdateStreamRequest * const q)
    : CreateProgressUpdateStreamPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
