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

#include "listrecoverypointsbyresourcerequest.h"
#include "listrecoverypointsbyresourcerequest_p.h"
#include "listrecoverypointsbyresourceresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRecoveryPointsByResourceRequest
 * \brief The ListRecoveryPointsByResourceRequest class provides an interface for Backup ListRecoveryPointsByResource requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRecoveryPointsByResource
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecoveryPointsByResourceRequest::ListRecoveryPointsByResourceRequest(const ListRecoveryPointsByResourceRequest &other)
    : BackupRequest(new ListRecoveryPointsByResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecoveryPointsByResourceRequest object.
 */
ListRecoveryPointsByResourceRequest::ListRecoveryPointsByResourceRequest()
    : BackupRequest(new ListRecoveryPointsByResourceRequestPrivate(BackupRequest::ListRecoveryPointsByResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecoveryPointsByResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecoveryPointsByResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecoveryPointsByResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListRecoveryPointsByResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListRecoveryPointsByResourceRequestPrivate
 * \brief The ListRecoveryPointsByResourceRequestPrivate class provides private implementation for ListRecoveryPointsByResourceRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRecoveryPointsByResourceRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListRecoveryPointsByResourceRequestPrivate::ListRecoveryPointsByResourceRequestPrivate(
    const BackupRequest::Action action, ListRecoveryPointsByResourceRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecoveryPointsByResourceRequest
 * class' copy constructor.
 */
ListRecoveryPointsByResourceRequestPrivate::ListRecoveryPointsByResourceRequestPrivate(
    const ListRecoveryPointsByResourceRequestPrivate &other, ListRecoveryPointsByResourceRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws
