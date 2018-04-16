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

#include "deleteprogressupdatestreamrequest.h"
#include "deleteprogressupdatestreamrequest_p.h"
#include "deleteprogressupdatestreamresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DeleteProgressUpdateStreamRequest
 *
 * \brief The DeleteProgressUpdateStreamRequest class encapsulates MigrationHub DeleteProgressUpdateStream requests.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::deleteProgressUpdateStream
 */

/*!
 * @brief  Constructs a new DeleteProgressUpdateStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteProgressUpdateStreamRequest::DeleteProgressUpdateStreamRequest(const DeleteProgressUpdateStreamRequest &other)
    : MigrationHubRequest(new DeleteProgressUpdateStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteProgressUpdateStreamRequest object.
 */
DeleteProgressUpdateStreamRequest::DeleteProgressUpdateStreamRequest()
    : MigrationHubRequest(new DeleteProgressUpdateStreamRequestPrivate(MigrationHubRequest::DeleteProgressUpdateStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProgressUpdateStreamRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteProgressUpdateStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteProgressUpdateStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProgressUpdateStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProgressUpdateStreamResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteProgressUpdateStreamRequestPrivate
 *
 * @brief  Private implementation for DeleteProgressUpdateStreamRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteProgressUpdateStreamRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public DeleteProgressUpdateStreamRequest instance.
 */
DeleteProgressUpdateStreamRequestPrivate::DeleteProgressUpdateStreamRequestPrivate(
    const MigrationHubRequest::Action action, DeleteProgressUpdateStreamRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteProgressUpdateStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteProgressUpdateStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteProgressUpdateStreamRequest instance.
 */
DeleteProgressUpdateStreamRequestPrivate::DeleteProgressUpdateStreamRequestPrivate(
    const DeleteProgressUpdateStreamRequestPrivate &other, DeleteProgressUpdateStreamRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
