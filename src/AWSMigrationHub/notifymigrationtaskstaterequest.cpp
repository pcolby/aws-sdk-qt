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

#include "notifymigrationtaskstaterequest.h"
#include "notifymigrationtaskstaterequest_p.h"
#include "notifymigrationtaskstateresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::NotifyMigrationTaskStateRequest
 *
 * \brief The NotifyMigrationTaskStateRequest class provides an interface for MigrationHub NotifyMigrationTaskState requests.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::notifyMigrationTaskState
 */

/*!
 * @brief  Constructs a new NotifyMigrationTaskStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
NotifyMigrationTaskStateRequest::NotifyMigrationTaskStateRequest(const NotifyMigrationTaskStateRequest &other)
    : MigrationHubRequest(new NotifyMigrationTaskStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new NotifyMigrationTaskStateRequest object.
 */
NotifyMigrationTaskStateRequest::NotifyMigrationTaskStateRequest()
    : MigrationHubRequest(new NotifyMigrationTaskStateRequestPrivate(MigrationHubRequest::NotifyMigrationTaskStateAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyMigrationTaskStateRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an NotifyMigrationTaskStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An NotifyMigrationTaskStateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyMigrationTaskStateRequest::response(QNetworkReply * const reply) const
{
    return new NotifyMigrationTaskStateResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  NotifyMigrationTaskStateRequestPrivate
 *
 * @brief  Private implementation for NotifyMigrationTaskStateRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new NotifyMigrationTaskStateRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public NotifyMigrationTaskStateRequest instance.
 */
NotifyMigrationTaskStateRequestPrivate::NotifyMigrationTaskStateRequestPrivate(
    const MigrationHubRequest::Action action, NotifyMigrationTaskStateRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new NotifyMigrationTaskStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the NotifyMigrationTaskStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public NotifyMigrationTaskStateRequest instance.
 */
NotifyMigrationTaskStateRequestPrivate::NotifyMigrationTaskStateRequestPrivate(
    const NotifyMigrationTaskStateRequestPrivate &other, NotifyMigrationTaskStateRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
