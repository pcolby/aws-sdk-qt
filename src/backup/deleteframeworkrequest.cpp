/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteframeworkrequest.h"
#include "deleteframeworkrequest_p.h"
#include "deleteframeworkresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteFrameworkRequest
 * \brief The DeleteFrameworkRequest class provides an interface for Backup DeleteFramework requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteFramework
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFrameworkRequest::DeleteFrameworkRequest(const DeleteFrameworkRequest &other)
    : BackupRequest(new DeleteFrameworkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFrameworkRequest object.
 */
DeleteFrameworkRequest::DeleteFrameworkRequest()
    : BackupRequest(new DeleteFrameworkRequestPrivate(BackupRequest::DeleteFrameworkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFrameworkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFrameworkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFrameworkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFrameworkResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteFrameworkRequestPrivate
 * \brief The DeleteFrameworkRequestPrivate class provides private implementation for DeleteFrameworkRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteFrameworkRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteFrameworkRequestPrivate::DeleteFrameworkRequestPrivate(
    const BackupRequest::Action action, DeleteFrameworkRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFrameworkRequest
 * class' copy constructor.
 */
DeleteFrameworkRequestPrivate::DeleteFrameworkRequestPrivate(
    const DeleteFrameworkRequestPrivate &other, DeleteFrameworkRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
